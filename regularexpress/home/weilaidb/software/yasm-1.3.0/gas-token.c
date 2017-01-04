#line 1 "./modules/parsers/gas/gas-token.re"
#define BSIZE   8192
#define YYCURSOR        cursor
#define YYLIMIT         (s->lim)
#define YYMARKER        (s->ptr)
#define YYFILL(n)
#define RETURN(i)       do  while (0)
#define SCANINIT()
#define TOK             ((char *)s->tok)
#define TOKLEN          (size_t)(cursor-s->tok)
static size_t
preproc_input(yasm_parser_gas *parser_gas, YYCTYPE *buf,
size_t max_size)
static YYCTYPE *
fill(yasm_parser_gas *parser_gas, YYCTYPE *cursor)
static YYCTYPE *
save_line(yasm_parser_gas *parser_gas, YYCTYPE *cursor)
#define STRBUF_ALLOC_SIZE       128
static YYCTYPE *strbuf = NULL;
static size_t strbuf_size = 0;
static void
strbuf_append(size_t count, YYCTYPE *cursor, yasm_scanner *s, int ch)
#line 188 "./modules/parsers/gas/gas-token.re"
int
gas_parser_lex(YYSTYPE *lvalp, yasm_parser_gas *parser_gas)
{
yasm_scanner *s = &parser_gas->s;
YYCTYPE *cursor = s->cur;
size_t count;
YYCTYPE savech;
if (parser_gas->peek_token != NONE)
if (s->eof && cursor == s->eof)
return 0;
switch (parser_gas->state)
scan:
SCANINIT();
{
static unsigned char yybm[] = ;
#line 258 "gas-token.c"
#line 413 "./modules/parsers/gas/gas-token.re"
comment:
SCANINIT();
#line 434 "./modules/parsers/gas/gas-token.re"
line_comment:
#line 440 "./modules/parsers/gas/gas-token.re"
section_directive:
SCANINIT();
