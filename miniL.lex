NUM   /* cs152-miniL phase1 */
%option noyywrap
%option yylineno

%{   
   /* write your C code here for definitions of variables and including headers */
   #include <stdio.h>
   #define YY_DECL int yylex()
   #include "y.tab.h"
   #include <string.h>
   
   int rows = 1;
   int columns = 0;
%}

   /* some common rules */
ALPHA       [a-zA-Z]
DIGIT       [0-9]
COMMENT     "##"[^\n]*
ID          [a-zA-Z]["_"]*[a-zA-Z0-9]*
INVALID	   [0-9"_"]+[a-zA-Z]+["_"]*[a-zA-Z0-9]*
INVALID_UNDER     [a-zA-Z]["_"]*[a-zA-Z0-9]*["_"]+

%%
   /* specific lexer rules in regex */
"function"	      {columns += strlen(yytext);
                   return FUNCTION;}
"beginparams"	   {columns += strlen(yytext);
                   return BEGIN_PARAMS;}
"endparams"	      {columns += strlen(yytext);
                   return END_PARAMS;}
"beginlocals"	   {columns += strlen(yytext);
                   return BEGIN_LOCALS;}
"endlocals"	      {columns += strlen(yytext);
                   return END_LOCALS;}
"beginbody"	      {columns += strlen(yytext);
                   return BEGIN_BODY;}
"endbody"         {columns += strlen(yytext);
                   return END_BODY;}
"integer"	      {columns += strlen(yytext);
                   return INTEGER;}
"array"	         {columns += strlen(yytext);
                   return ARRAY;}
"of"              {columns += strlen(yytext);
                   return OF;}
"if"	            {columns += strlen(yytext);
                   return IF;}
"then"	         {columns += strlen(yytext);
                   return THEN;}
"endif"	         {columns += strlen(yytext);
                   return ENDIF;}
"else"	         {columns += strlen(yytext);
                   return ELSE;}
"while"	         {columns += strlen(yytext);
                   return WHILE;}
"do"	            {columns += strlen(yytext);
                   return DO;}
"beginloop"	      {columns += strlen(yytext);
                   return BEGINLOOP;}
"endloop"	      {columns += strlen(yytext);
                   return ENDLOOP;}
"continue"	      {columns += strlen(yytext);
                   return CONTINUE;}
"break"	         {columns += strlen(yytext);
                   return BREAK;}
"read"	         {columns += strlen(yytext);
                   return READ;}
"write"	         {columns += strlen(yytext);
                   return WRITE;}
"not"	            {columns += strlen(yytext);
                   return NOT;}
"true"	         {columns += strlen(yytext);
                   return TRUE;}
"false"	         {columns += strlen(yytext);
                   return FALSE;}
"return"	         {columns += strlen(yytext);
                   return RETURN;}
"-"	            {columns++; return MINUS;}
"+"	            {columns++; return ADD;}
"*"	            {columns++; return MULT;}
"/"	            {columns++; return DIV;}
"%"	            {columns++; return MOD;}
"=="	            {columns+=2; return EQ;}
"<>"	            {columns+=2; return NEQ;}
"<"	            {columns++; return LT;}
">"	            {columns++; return GT;}
"<="	            {columns+=2; return LTE;}
">="	            {columns+=2; return GTE;}
";"	            {columns++; return SEMICOLON;}
":"	            {columns++; return COLON;}
","	            {columns++; return COMMA;}
"("	            {columns++; return L_PAREN;}
")"	            {columns++; return R_PAREN;}
"["	            {columns++; return L_SQUARE_BRACKET;}
"]"	            {columns++; return R_SQUARE_BRACKET;}
":="	            {columns+=2; return ASSIGN;}
{COMMENT}         {columns += strlen(yytext);}
{INVALID_UNDER}   {printf("Error at line %d, column %d, identifier \"%s\" cannot end with an underscore\n", rows, columns, yytext);
                   return 0;}
{ID}*              {columns += strlen(yytext);
                    yylval.stval = strdup(yytext);
                    return IDENT;}
{INVALID}    {printf("Error at line %d, column %d, identifier \"%s\" must begin with a letter\n", rows, columns, yytext);
                    return 0;}
{DIGIT}+          {columns += strlen(yytext);
                   yylval.stval = strdup(yytext);
                   return NUMBER;}
" "               {columns += strlen(yytext);}
"\t"              {columns += strlen(yytext);}
.                 {columns++;
                   printf("Error at line %d, column %d, unrecognized symbol \"%s\"\n", rows, columns, yytext);
                   return 0;}
"\n"              {rows++; columns = 0;}
%%
	/* C functions used in lexer 

int main(int argc, char ** argv)
{
  yylex();
}
*/