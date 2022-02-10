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
}

%error-verbose
%locations

%token <ival> NUMBER
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
%token L_PAREN
%token R_PAREN
%token L_SQUARE_BRACKET
%token R_SQUARE_BRACKET
%token ASSIGN
%expect 1

%start Program

%% 
Program:    Function Program
        | 
;
Function:   FUNCTION IDENT SEMICOLON BEGIN_PARAMS Dec_colon END_PARAMS BEGIN_LOCALS Dec_colon END_LOCALS BEGIN_BODY Statement END_BODY {
  std::string func_name = $2;
  std::cout << "func " + func_name << endl;
  add_function_to_symbol_table(func_name);
}
;
Dec_colon:  Declaration SEMICOLON Dec_colon
            | 
;
Declaration:    IDENT COLON Array INTEGER {
        std::string value = $1;
        Type t = Integer;
        std:: cout << ". " + value << endl;
        std::string st = "temp";
        add_function_to_symbol_table(st);
        add_variable_to_symbol_table(value, t);
}
;
Array:  ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF
        | 
;
Statement:  Var ASSIGN Expression SEMICOLON Statement1 
            | IF Bool_Exp THEN Statement Else_statement ENDIF SEMICOLON Statement1
            | WHILE Bool_Exp BEGINLOOP Statement ENDLOOP SEMICOLON Statement1
            | DO BEGINLOOP Statement ENDLOOP WHILE Bool_Exp SEMICOLON Statement1
            | READ Var SEMICOLON Statement1
            | WRITE Var SEMICOLON Statement1
            | CONTINUE SEMICOLON Statement1
            | BREAK SEMICOLON Statement1
            | RETURN Expression SEMICOLON Statement1
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
Add_Op: ADD Expression
        | MINUS Expression
        | 
;
Multi_Exp:  Term Mult_Op 
;
Mult_Op:    MULT Multi_Exp
            | DIV Multi_Exp
            | MOD Multi_Exp
            |
;
Term:   Var
        | NUMBER
        | L_PAREN Expression R_PAREN 
        | IDENT L_PAREN Term_Exp R_PAREN
;
Term_Exp:   Expression
            | Expression COMMA Term_Exp 
            | 
;
Var:    IDENT
        | IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET
;
%% 

int main(int argc, char **argv) {
   yyin = stdin;
   yyparse();
   print_symbol_table();
   return 0;
}

void yyerror(const char *msg) {
    /* implement your error handling */
   fprintf(stderr,"At Line %d : %s\n",yylineno,msg);
}