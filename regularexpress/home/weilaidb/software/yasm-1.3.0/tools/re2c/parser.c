int yylex(void);
static RegExp *parse_expr(void);
static RegExp *parse_diff(void);
static RegExp *parse_term(void);
static RegExp *parse_factor(void);
static RegExp *parse_primary(void);
static unsigned int accept;
static RegExp *spec;
static Scanner *in;
static int curtok, peektok;
yystype yylval;
static yystype peekval;
#define get_next_token()    (curtok = yylex())
static void
get_peek_token(void)
static void
yyparse(void)
static RegExp *
parse_expr(void)
static RegExp *
parse_diff(void)
static RegExp *
parse_term(void)
static RegExp *
parse_factor(void)
static RegExp *
parse_primary(void)
int
yylex(void)
void line_source(FILE *o, unsigned int line)
void parse(FILE *i, FILE *o)
