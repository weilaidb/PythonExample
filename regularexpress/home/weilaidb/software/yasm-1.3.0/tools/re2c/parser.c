yylex;
*parse_expr;
*parse_diff;
*parse_term;
*parse_factor;
*parse_primary;
static unsigned int accept;
static RegExp *spec;
static Scanner *in;
static int curtok, peektok;
yystype yylval;
static yystype peekval;
get_next_token    (curtok = yylex())
get_peek_token
yyparse
parse_expr
parse_diff
parse_term
parse_factor
parse_primary
yylex
line_source
parse
