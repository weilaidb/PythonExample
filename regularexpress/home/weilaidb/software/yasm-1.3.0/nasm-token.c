#line 1
#define YYCURSOR        cursor
#define YYLIMIT         (s->lim)
#define YYMARKER        (s->ptr)
YYFILL
RETURN
SCANINIT
#define TOK             ((char *)s->tok)
#define TOKLEN          (size_t)(cursor-s->tok)
#define STRBUF_ALLOC_SIZE       128
static YYCTYPE *strbuf = NULL;
static size_t strbuf_size = 0;
static int linechg_numcount;
#line 71
handle_dot_label
nasm_parser_lex
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
#line 508
linechg:
SCANINIT();
if (*cursor == '\0')
goto endofinput;
#line 546
linechg2:
SCANINIT();
if (*cursor == '\0')
goto endofinput;
#line 563
directive:
SCANINIT();
if (*cursor == '\0')
goto endofinput;
#line 590
section_directive:
SCANINIT();
if (*cursor == '\0')
goto endofinput;
#line 625
directive2:
SCANINIT();
if (*cursor == '\0')
goto endofinput;
