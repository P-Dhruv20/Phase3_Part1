    /* cs152-miniL phase2 */
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "milFunc.h"

    extern int yylex();
    extern int yylineno;
    extern int yyparse();
    extern FILE* yyin;

    void yyerror(const char *msg);
%}

%union{
        int ival;
}
%union{
        char *stval;
        struct Node* assign_node;
}

%error-verbose
%locations

%token <stval> NUMBER
%token <stval> IDENT
%token FUNCTION
%token BEGIN_PARAMS
%token END_PARAMS
%token BEGIN_LOCALS
%token END_LOCALS
%token BEGIN_BODY
%token END_BODY
%token INTEGER
%token ARRAY
%token OF
%token IF
%token THEN
%token ENDIF
%token ELSE
%token WHILE
%token DO
%token BEGINLOOP
%token ENDLOOP
%token CONTINUE
%token BREAK
%token READ
%token WRITE
%token NOT
%token TRUE
%token FALSE
%token RETURN
%token MINUS
%token ADD
%token MULT
%token DIV
%token MOD
%token EQ
%token NEQ
%token LT
%token GT
%token LTE
%token GTE
%token SEMICOLON
%token COLON
%token COMMA
%token <stval> L_PAREN
%token <stval> R_PAREN
%left L_SQUARE_BRACKET
%left R_SQUARE_BRACKET
%token ASSIGN
%expect 1

%type <stval> Var
%type <stval> Term
%type <stval> Multi_Exp
%type <stval> Expression
%type <stval> Array
%type <stval> Var_arr

%start Program

%% 
Program:    Function Program
        | 
;
Function:   FUNCTION IDENT {
  std::string func_name = $2;
                if(symbol_table.size() > 0 && findFunction(func_name)) {
                        std::string msg = "Function already exists";
                        char a[msg.size()];
                        strcpy(a, msg.c_str());
                        yyerror(a);
                }
  std::cout << "func " + func_name << endl;
  add_function_to_symbol_table(func_name);
}
SEMICOLON BEGIN_PARAMS Dec_colon {org_params();} END_PARAMS BEGIN_LOCALS Dec_colon {params.clear();} END_LOCALS BEGIN_BODY Statement END_BODY
{
  std::cout << "endfunc" << endl << endl;
}
;
Dec_colon:  Declaration SEMICOLON Dec_colon
            | 
;
Declaration:    IDENT COLON Array INTEGER {
        std::string value = $1;
        std::string num = $3;
        Type t;
        if(find(value)) {std::string msg = "identifier exists";
	char a[msg.size()];
	strcpy(a, msg.c_str());
        yyerror(a);
        }
        else{
        std:: cout << ".";

        if (num != "") {
                std::cout << "[] ";
               t = Array; 
        }
        else {
                std::cout << " ";
                t = Integer;
        }
        std::cout << value;
        if (num != "") {
                std::cout << ", " << num; 
        }
        std::cout << endl;
        add_variable_to_symbol_table(value, t);
        params.push_back(value);
        }
}
;
Array:  ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF
        {$$ = $3;}
        | {
                char a[1];
                strcpy(a, "");
                $$ = a;
                }
;
Statement:  Var {operands.push_back($1); args.push_back($1); arr.push_back($1);
                }
                ASSIGN Expression SEMICOLON {if (operands.size() > 0) {organize_into_nodes();} } Statement1
                     | IDENT L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET ASSIGN Var ADD Var {
                        std::string temp = "temp_" + to_string(k);
                        k++;
                        std::cout << ". " << temp << endl;
                        std::cout << "+ " << temp << ", " << $6 << ", " << $8 << endl;
                        std::cout << "[]= " << $1 << ", "<< $3 << ", " << temp;
                        }
                        SEMICOLON {std::cout << endl;} Statement1 
                | IDENT L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET ASSIGN NUMBER {
                        std::cout << "[]= " << $1 << ", "<< $3 << ", " << $6;
                        }
            SEMICOLON {std::cout << endl;} Statement1 
                | IDENT L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET ASSIGN IDENT L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET MULT 
                        L_PAREN IDENT L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET ADD Var R_PAREN {
                        std::string temp1 = "temp_" + to_string(k);
                        k++;
                        std::cout << ". " << temp1 << endl;
                        std::cout << "=[] " << temp1 << ", " << $6 << ", " << $8 << endl;
                        std::string temp2 = "temp_" + to_string(k);
                        k++;
                        std::cout << ". " << temp2 << endl;
                        std::cout << "=[] " << temp2 << ", " << $12 << ", " << $14 << endl;
                        std::string temp3 = "temp_" + to_string(k);
                        k++;
                        std::cout << ". " << temp3 << endl;
                        std::cout << "+ "<< temp3 << ", " << temp2 << ", " << $17 << endl;
                        std::string temp4 = "temp_" + to_string(k);
                        k++;
                        std::cout << ". " << temp4 << endl;
                        std::cout << "* "<< temp4 << ", " << temp1 << ", " << temp3 << endl;
                        std::cout << "[]= " << $1 << ", "<< $3 << ", " << temp4;
                        }
                        SEMICOLON {std::cout << endl;} Statement1 
            | IF Bool_Exp THEN Statement Else_statement ENDIF SEMICOLON Statement1
            | WHILE Bool_Exp BEGINLOOP Statement ENDLOOP SEMICOLON Statement1
            | DO BEGINLOOP Statement ENDLOOP WHILE Bool_Exp SEMICOLON Statement1
            | READ Var {std::cout << ".< " << $2;} SEMICOLON {std::cout << endl;} Statement1
            | WRITE Var {std::cout << ".> " << $2;} SEMICOLON {std::cout << endl;} Statement1
            | READ IDENT L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET {
                        std::string temp = "temp_" + to_string(k);
                        k++;
                        std::cout << ". " << temp << endl;
                        std::cout << "[]= " << temp << ", "<< $2 << ", " << $4 << endl;
                        std::cout << ".< " << $2;
                        } 
                        SEMICOLON {std::cout << endl;} Statement1
            | WRITE IDENT L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET {                        
                        std::string temp = "temp_" + to_string(k);
                        k++;
                        std::cout << ". " << temp << endl;
                        std::cout << "=[] " << temp << ", "<< $2 << ", " << $4 << endl;
                        std::cout << ".> " << temp;
                        } 
                        SEMICOLON {std::cout << endl;} Statement1
            | CONTINUE SEMICOLON {std::cout << endl;} Statement1
            | BREAK SEMICOLON {std::cout << endl;} Statement1
            | RETURN Expression SEMICOLON {org_return_exp(); std::cout << endl;} Statement1
;
Statement1 : Statement
        |
;
Else_statement: ELSE Statement
                | 
;
Bool_Exp:   Not Expression Comp Expression
;
Not: NOT
    | 
;
Comp:   EQ
        | NEQ
        | LT
        | GT
        | LTE
        | GTE
        |
;
Expression: Multi_Exp Add_Op 
;
Add_Op: ADD 
        { operands.push_back("+"); args.push_back("+"); arr.push_back("+");
        }
        Expression 
        | MINUS
        { operands.push_back("-"); args.push_back("-"); arr.push_back("-");
        }
        Expression
        | {}
;

Multi_Exp:  Term 
        Mult_Op 
;
Mult_Op:    MULT 
        { operands.push_back("*"); args.push_back("*"); arr.push_back("*");
        }
        Multi_Exp
            | DIV
            { operands.push_back("/"); args.push_back("/"); arr.push_back("/");
        }
        Multi_Exp
            | MOD
            { operands.push_back("%"); args.push_back("%"); arr.push_back("%");
        }
        Multi_Exp
            | {}
;
Term:   Var {operands.push_back($1); args.push_back($1); arr.push_back($1);}
        | Var_arr {arr.push_back($1);}
        | NUMBER  {operands.push_back($1); args.push_back($1); $$ = $1; arr.push_back($1);}
        | L_PAREN {operands.push_back("("); arr.push_back("(");} Expression {organize_into_nodes(); } R_PAREN 
        | IDENT L_PAREN Term_Exp R_PAREN {                
                std::string val = $1;
                if(!findFunction(val)) {
                        std::string msg = "Unidentified function";
	                char a[msg.size()];
		        strcpy(a, msg.c_str());
                        yyerror(a);
                }
                args.push_back($1); org_args();
        }
;
Term_Exp:   Expression
            | Expression COMMA {args.push_back(",");} Term_Exp 
            | {}
;
Var:    IDENT {  
        std::string val = $1;
        if(find(val)) {
                if (!isArray(val)) { 
                                $$ = $1; 
                        }
                        else {
                                std::string msg = "Identifier is not an integer type";
                                char a[msg.size()];
                                strcpy(a, msg.c_str());
                                yyerror(a);
                        }
        }
        else {  
                std::string msg = "Unidentified identifier";
	        char a[msg.size()];
		strcpy(a, msg.c_str());
                yyerror(a);
                }
        } 
;
Var_arr:    IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET {        
                std::string val = $1;
                if(find(val)) {
                        if (isArray(val)) { 
                                $$ = $1; 
                                org_array();
                        }
                        else {
                                std::string msg = "Identifier is not an array type";
                                char a[msg.size()];
                                strcpy(a, msg.c_str());
                                yyerror(a);
                        }
                }
                else {  
                        std::string msg = "Unidentified identifier";
                        char a[msg.size()];
                        strcpy(a, msg.c_str());
                        yyerror(a);
                }


                }


;

%% 

int main(int argc, char **argv) {
   yyin = stdin;
   yyparse();
   std::string val = "main"; 
   if(!findFunction(val)){
           std::string msg = "Not defined main";
	        char a[msg.size()];
		strcpy(a, msg.c_str());
                yyerror(a);
                }
   print_symbol_table();
   return 0;
}

void yyerror(const char *msg) {
    /* implement your error handling */
   fprintf(stderr,"At Line %d : %s\n",yylineno,msg);
}