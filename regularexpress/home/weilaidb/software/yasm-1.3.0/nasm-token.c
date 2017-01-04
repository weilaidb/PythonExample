#line 1 "./modules/parsers/nasm/nasm-token.re"
#define YYCURSOR        cursor
#define YYLIMIT         (s->lim)
#define YYMARKER        (s->ptr)
#define YYFILL(n)
#define RETURN(i)
#define SCANINIT()
#define TOK             ((char *)s->tok)
#define TOKLEN          (size_t)(cursor-s->tok)
#define STRBUF_ALLOC_SIZE       128
static YYCTYPE *strbuf = NULL;
static size_t strbuf_size = 0;
static int linechg_numcount;
#line 71 "./modules/parsers/nasm/nasm-token.re"
static int
handle_dot_label(YYSTYPE *lvalp, char *tok, size_t toklen, size_t zeropos,
yasm_parser_nasm *parser_nasm)
int
nasm_parser_lex(YYSTYPE *lvalp, yasm_parser_nasm *parser_nasm)
{
yasm_scanner *s = &parser_nasm->s;
YYCTYPE *cursor = s->cur;
YYCTYPE endch;
size_t count;
YYCTYPE savech;
if (parser_nasm->peek_token != NONE)
if (s->eof && cursor == s->eof)
return 0;
switch (parser_nasm->state)
scan:
SCANINIT();
if (*cursor == '\0')
goto endofinput;
#line 508 "./modules/parsers/nasm/nasm-token.re"
linechg:
SCANINIT();
if (*cursor == '\0')
goto endofinput;
#line 546 "./modules/parsers/nasm/nasm-token.re"
linechg2:
SCANINIT();
if (*cursor == '\0')
goto endofinput;
#line 563 "./modules/parsers/nasm/nasm-token.re"
directive:
SCANINIT();
if (*cursor == '\0')
goto endofinput;
#line 590 "./modules/parsers/nasm/nasm-token.re"
section_directive:
SCANINIT();
if (*cursor == '\0')
goto endofinput;
#line 625 "./modules/parsers/nasm/nasm-token.re"
directive2:
SCANINIT();
if (*cursor == '\0')
goto endofinput;
