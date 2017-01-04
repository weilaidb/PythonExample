struct LimitVal ;
struct LikeOp ;
struct TrigEvent ;
struct AttachKey ;
# define INTERFACE 1
#define YYCODETYPE unsigned char
#define YYNOCODE 248
#define YYACTIONTYPE unsigned short int
#define YYWILDCARD 59
#define sqlite3ParserTOKENTYPE Token
typedef union  YYMINORTYPE;
#define YYSTACKDEPTH 100
#define sqlite3ParserARG_SDECL Parse *pParse;
#define sqlite3ParserARG_PDECL ,Parse *pParse
#define sqlite3ParserARG_FETCH Parse *pParse = yypParser->pParse
#define sqlite3ParserARG_STORE yypParser->pParse = pParse
#define YYNSTATE 589
#define YYNRULE 313
#define YYFALLBACK 1
#define YY_NO_ACTION      (YYNSTATE+YYNRULE+2)
#define YY_ACCEPT_ACTION  (YYNSTATE+YYNRULE+1)
#define YY_ERROR_ACTION   (YYNSTATE+YYNRULE)
static const YYMINORTYPE yyzerominor;
static const YYACTIONTYPE yy_action[] = ;
static const YYCODETYPE yy_lookahead[] = ;
#define YY_SHIFT_USE_DFLT (-62)
#define YY_SHIFT_MAX 389
static const short yy_shift_ofst[] = ;
#define YY_REDUCE_USE_DFLT (-165)
#define YY_REDUCE_MAX 291
static const short yy_reduce_ofst[] = ;
static const YYACTIONTYPE yy_default[] = ;
#define YY_SZ_ACTTAB (int)(sizeof(yy_action)/sizeof(yy_action[0]))
static const YYCODETYPE yyFallback[] = ;
struct yyStackEntry ;
typedef struct yyStackEntry yyStackEntry;
struct yyParser ;
typedef struct yyParser yyParser;
static FILE *yyTraceFILE = 0;
static char *yyTracePrompt = 0;
void sqlite3ParserTrace(FILE *TraceFILE, char *zTracePrompt)
static const char *const yyTokenName[] = ;
static const char *const yyRuleName[] = ;
#if YYSTACKDEPTH<=0
static void yyGrowStack(yyParser *p)
void *sqlite3ParserAlloc(void *(*mallocProc)(size_t))
static void yy_destructor(YYCODETYPE yymajor, YYMINORTYPE *yypminor)
static int yy_pop_parser_stack(yyParser *pParser)
void sqlite3ParserFree(
void *p,
void (*freeProc)(void*)
)
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
void sqlite3Parser(
void *yyp,
int yymajor,
sqlite3ParserTOKENTYPE yyminor
sqlite3ParserARG_PDECL
)
