#line 1
#define BSIZE   8192
#define YYCURSOR        cursor
#define YYLIMIT         (s->lim)
#define YYMARKER        (s->ptr)
YYFILL
RETURN       do  while (0)
SCANINIT
#define TOK             ((char *)s->tok)
#define TOKLEN          (size_t)(cursor-s->tok)
preproc_input
fill
save_line
#define STRBUF_ALLOC_SIZE       128
static YYCTYPE *strbuf = NULL;
static size_t strbuf_size = 0;
strbuf_append
#line 188
gas_parser_lex
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
#line 258
#line 413
comment:
SCANINIT();
#line 434
line_comment:
#line 440
section_directive:
SCANINIT();
