    /* cs152-miniL phase2 */
%{
    #include <stdio.h>
    #include <stdlib.h>

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
Program:    Function Program {printf("Program -> Function Program\n");}
        | {printf("Program -> epsilon\n");}
;
Function:   FUNCTION Identifier SEMICOLON BEGIN_PARAMS Dec_colon END_PARAMS BEGIN_LOCALS Dec_colon END_LOCALS BEGIN_BODY Statement END_BODY {printf("Function -> FUNCTION Identifier SEMICOLON BEGIN_PARAMS Dec_colon END_PARAMS BEGIN_LOCALS Dec_colon END_LOCALS BEGIN_BODY Statement SEMICOLON St_colon END_BODY\n");}
;
Dec_colon:  Declaration SEMICOLON Dec_colon {printf("Dec_colon -> Declaration SEMICOLON Dec_colon\n");}
            | {printf("Dec_colon -> epsilon\n");}
;
Declaration:    Identifier COLON Array INTEGER {printf("Declaration -> Identifier COLON Array INTEGER\n");}
;
Array:  ARRAY L_SQUARE_BRACKET Number R_SQUARE_BRACKET OF  {printf("Array -> ARRAY L_SQUARE_BRACKET Number R_SQUARE_BRACKET OF\n");}
        | {printf("Array -> epsilon\n");}
;
Statement:  Var ASSIGN Expression SEMICOLON Statement1 {printf("Statement -> Var ASSIGN Expression SEMICOLON Statement1\n");}
            | IF Bool_Exp THEN Statement Else_statement ENDIF SEMICOLON Statement1 {printf("Statement -> IF Bool_Exp THEN Statement Else_statement ENDIF SEMICOLON Statement1\n");}
            | WHILE Bool_Exp BEGINLOOP Statement ENDLOOP SEMICOLON Statement1 {printf("Statement -> WHILE Bool_Exp BEGINLOOP Statement ENDLOOP SEMICOLON Statement1\n");}
            | DO BEGINLOOP Statement ENDLOOP WHILE Bool_Exp SEMICOLON Statement1 {printf("Statement -> DO BEGINLOOP Statement ENDLOOP WHILE Bool_Exp SEMICOLON Statement1\n");}
            | READ Var SEMICOLON Statement1 {printf("Statement -> READ Var SEMICOLON Statement1\n");}
            | WRITE Var SEMICOLON Statement1 {printf("Statement -> WRITE Var SEMICOLON Statement1\n");}
            | CONTINUE SEMICOLON Statement1 {printf("Statement -> CONTINUE SEMICOLON Statement1\n");}
            | BREAK SEMICOLON Statement1 {printf("Statement -> BREAK SEMICOLON Statement1\n");}
            | RETURN Expression SEMICOLON Statement1 {printf("Statement -> RETURN Expression SEMICOLON Statement1\n");}
;
Statement1 : Statement {printf("Statement1 -> Statement\n");}
        | {printf("Statement1 -> epsilon\n");}
;
Else_statement: ELSE Statement {printf("Else_statement -> ELSE Statement SEMICOLON St_colon\n");}
                | {printf("Else_statement -> epsilon\n");}
;
Bool_Exp:   Not Expression Comp Expression {printf("Bool_Exp -> Not Expression Comp Expression\n");}
;
Not: NOT {printf("Not -> NOT\n");}
    | {printf("Not -> epsilon\n");}
;
Comp:   EQ {printf("Comp -> EQ\n");}
        | NEQ {printf("Comp -> NEQ\n");}
        | LT   {printf("Comp -> LT\n");}
        | GT    {printf("Comp -> GT\n");}
        | LTE   {printf("Comp -> LTE\n");}
        | GTE   {printf("Comp -> GTE\n");}
        |   {printf("Comp -> epsilon\n");}
;
Expression: Multi_Exp Add_Op {printf("Expression -> Multi_Exp Add_Op\n");}
;
Add_Op: ADD Expression {printf("Add_Op -> ADD Expression\n");}
        | MINUS Expression {printf("Add_Op -> MINUS Expression\n");}
        | {printf("Add_Op -> epsilon\n");}
;
Multi_Exp:  Term Mult_Op {printf("Multi_Exp -> Term Mult_Op\n");}
;
Mult_Op:    MULT Multi_Exp {printf("Mult_Op -> MULT Multi_Exp\n");}
            | DIV Multi_Exp {printf("Mult_Op -> DIV Multi_Exp\n");}
            | MOD Multi_Exp {printf("Mult_Op -> MOD Multi_Exp\n");}
            | {printf("Mult_Op -> epsilon\n");}
;
Term:   Var {printf("Term -> Var\n");}
        | Number    {printf("Term -> Number\n");}
        | L_PAREN  Expression R_PAREN {printf("Term -> L_PAREN  Expression R_PAREN\n");}
        | Identifier L_PAREN Term_Exp R_PAREN {printf("Term -> Identifier L_PAREN Term_Exp R_PAREN\n");}
;
Term_Exp:   Expression {printf("Term_Exp -> Expression\n");}
            | Expression COMMA Term_Exp {printf("Term_Exp -> Expression COMMA Term_Exp\n");}
            |   {printf("Term_Exp -> epsilon\n");}
;
Var:    Identifier {printf("Var -> Identifier\n");}
        | Identifier L_SQUARE_BRACKET Expression R_SQUARE_BRACKET {printf("Var -> Identifier L_SQUARE_BRACKET Expression R_SQUARE_BRACKET\n");}
;
Identifier: IDENT {printf("Identifier -> IDENT %s\n", $1);}
;
Number: NUMBER {printf("Number -> NUMBER %d\n", $1);}
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