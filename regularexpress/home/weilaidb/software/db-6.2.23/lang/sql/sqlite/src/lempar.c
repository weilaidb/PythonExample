%%
%%
# define INTERFACE 1
%%
#define YY_NO_ACTION      (YYNSTATE+YYNRULE+2)
#define YY_ACCEPT_ACTION  (YYNSTATE+YYNRULE+1)
#define YY_ERROR_ACTION   (YYNSTATE+YYNRULE)
static const YYMINORTYPE yyzerominor = ;
# define yytestcase(X)
%%
static const YYCODETYPE yyFallback[] = ;
struct yyStackEntry ;
typedef struct yyStackEntry yyStackEntry;
struct yyParser ;
typedef struct yyParser yyParser;
static FILE *yyTraceFILE = 0;
static char *yyTracePrompt = 0;
void ParseTrace(FILE *TraceFILE, char *zTracePrompt)
static const char *const yyTokenName[] = ;
static const char *const yyRuleName[] = ;
#if YYSTACKDEPTH<=0
static void yyGrowStack(yyParser *p)
void *ParseAlloc(void *(*mallocProc)(u64))
static void yy_destructor(
yyParser *yypParser,
YYCODETYPE yymajor,
YYMINORTYPE *yypminor
)
static int yy_pop_parser_stack(yyParser *pParser)
void ParseFree(
void *p,
void (*freeProc)(void*)
)
int ParseStackPeak(void *p)
static int yy_find_shift_action(
yyParser *pParser,
YYCODETYPE iLookAhead
)
static int yy_find_reduce_action(
int stateno,
YYCODETYPE iLookAhead
)
static void yyStackOverflow(yyParser *yypParser, YYMINORTYPE *yypMinor)
static void yy_shift(
yyParser *yypParser,
int yyNewState,
int yyMajor,
YYMINORTYPE *yypMinor
)
static const struct  yyRuleInfo[] = ;
static void yy_accept(yyParser*);
static void yy_reduce(
yyParser *yypParser,
int yyruleno
)
static void yy_parse_failed(
yyParser *yypParser
)
static void yy_syntax_error(
yyParser *yypParser,
int yymajor,
YYMINORTYPE yyminor
)
static void yy_accept(
yyParser *yypParser
)
void Parse(
void *yyp,
int yymajor,
ParseTOKENTYPE yyminor
ParseARG_PDECL
)
