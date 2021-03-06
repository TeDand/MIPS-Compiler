/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_SRC_C_PARSER_TAB_HPP_INCLUDED
# define YY_YY_SRC_C_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/C_parser.y" /* yacc.c:1909  */

  #include "ast.hpp"

  #include <cassert>

  extern const Expression *g_root; // A way of getting the AST out

  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);

#line 58 "src/C_parser.tab.hpp" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_VARIABLE = 258,
    T_INTEGER = 259,
    T_STRING = 260,
    T_TYPEDEF = 261,
    T_INC_OP = 262,
    T_DEC_OP = 263,
    T_LEFT_OP = 264,
    T_RIGHT_OP = 265,
    T_LE_OP = 266,
    T_GE_OP = 267,
    T_GT = 268,
    T_LT = 269,
    T_EQUALTO = 270,
    T_NOT_EQUALTO = 271,
    T_TIMES = 272,
    T_PLUS = 273,
    T_MINUS = 274,
    T_DIVIDE = 275,
    T_NOT = 276,
    T_XOR_OP = 277,
    T_TILDA = 278,
    T_COMMA = 279,
    T_SEMICOLON = 280,
    T_LBRACKET = 281,
    T_RBRACKET = 282,
    T_ASS = 283,
    T_LCBRACKET = 284,
    T_RCBRACKET = 285,
    T_LSBRACKET = 286,
    T_RSBRACKET = 287,
    T_COLON = 288,
    T_AND_OP = 289,
    T_OR_OP = 290,
    T_LOGICAL_AND_OP = 291,
    T_LOGICAL_OR_OP = 292,
    MUL_ASSIGN = 293,
    DIV_ASSIGN = 294,
    MOD_ASSIGN = 295,
    ADD_ASSIGN = 296,
    SUB_ASSIGN = 297,
    LEFT_ASSIGN = 298,
    RIGHT_ASSIGN = 299,
    AND_ASSIGN = 300,
    XOR_ASSIGN = 301,
    OR_ASSIGN = 302,
    T_MOD = 303,
    T_CHAR = 304,
    T_INT = 305,
    T_UNSIGNED = 306,
    T_FLOAT = 307,
    T_DOUBLE = 308,
    T_VOID = 309,
    STRUCT = 310,
    T_ENUM = 311,
    T_CASE = 312,
    T_DEFAULT = 313,
    T_IF = 314,
    T_ELSE = 315,
    T_SWITCH = 316,
    T_WHILE = 317,
    DO = 318,
    T_CONTINUE = 319,
    T_BREAK = 320,
    T_RETURN = 321,
    T_FOR = 322
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "src/C_parser.y" /* yacc.c:1909  */

  const Expression *expr;
  double number;
  std::string *string;

#line 144 "src/C_parser.tab.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_C_PARSER_TAB_HPP_INCLUDED  */
