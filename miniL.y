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
%type <stval> Mult_Op
%type <stval> Add_Op
%type <stval> Mult_Expr
%type <stval> Expression
%start Program

%% 
Program:    Function Program
        | 
;
Function:   FUNCTION IDENT {
  std::string func_name = $2;
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
        Type t = Integer;
        std:: cout << ". " + value << endl;
        add_variable_to_symbol_table(value, t);
        params.push_back(value);
}
;
Array:  ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF
        | 
;
Statement:  Var {operands.push_back($1);
                }
                ASSIGN Expression SEMICOLON {if (operands.size() > 0) {organize_into_nodes();} } Statement1 
            | IF Bool_Exp THEN Statement Else_statement ENDIF SEMICOLON Statement1
            | WHILE Bool_Exp BEGINLOOP Statement ENDLOOP SEMICOLON Statement1
            | DO BEGINLOOP Statement ENDLOOP WHILE Bool_Exp SEMICOLON Statement1
            | READ Var {std::cout << ".< " << $2;} SEMICOLON {std::cout << endl;} Statement1
            | WRITE Var {std::cout << ".> " << $2;} SEMICOLON {std::cout << endl;} Statement1
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
        { operands.push_back("+");
        }
        Expression 
        | MINUS
        { operands.push_back("-");
        }
        Expression
        | 
;

Multi_Exp:  Term 
        Mult_Op 
;
Mult_Op:    MULT 
        { operands.push_back("*");
        }
        Multi_Exp
            | DIV
            { operands.push_back("/");
        }
        Multi_Exp
            | MOD
            { operands.push_back("%");
        }
        Multi_Exp
            | 
;
Term:   Var {operands.push_back($1);}
        | NUMBER  {operands.push_back($1);}
        | L_PAREN {operands.push_back("(");} Expression {organize_into_nodes();} R_PAREN 
        | IDENT L_PAREN Term_Exp R_PAREN
;
Term_Exp:   Expression
            | Expression COMMA Term_Exp 
            | 
;
Var:    IDENT {$$ = $1;}
        | IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET
;
%% 

int main(int argc, char **argv) {
   yyin = stdin;
   yyparse();
   return 0;
}

void yyerror(const char *msg) {
    /* implement your error handling */
   fprintf(stderr,"At Line %d : %s\n",yylineno,msg);
}