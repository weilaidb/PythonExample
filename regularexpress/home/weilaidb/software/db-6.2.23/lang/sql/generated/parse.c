#line 49 "parse.y"
#define YYNOERRORRECOVERY 1
#define yytestcase(X) testcase(X)
struct LimitVal ;
struct LikeOp ;
struct TrigEvent ;
struct AttachKey ;
#line 412 "parse.y"
static void parserDoubleLinkSelect(Parse *pParse, Select *p)
#line 814 "parse.y"
static void spanSet(ExprSpan *pOut, Token *pStart, Token *pEnd)
static void spanExpr(ExprSpan *pOut, Parse *pParse, int op, Token *pValue)
#line 904 "parse.y"
static void spanBinaryExpr(
ExprSpan *pOut,
Parse *pParse,
int op,
ExprSpan *pLeft,
ExprSpan *pRight
)
#line 958 "parse.y"
static void spanUnaryPostfix(
ExprSpan *pOut,
Parse *pParse,
int op,
ExprSpan *pOperand,
Token *pPostOp
)
#line 977 "parse.y"
static void binaryToUnaryIfNull(Parse *pParse, Expr *pY, Expr *pA, int op)
#line 1005 "parse.y"
static void spanUnaryPrefix(
ExprSpan *pOut,
Parse *pParse,
int op,
ExprSpan *pOperand,
Token *pPreOp
)
#line 164 "parse.c"
# define INTERFACE 1
#define YYCODETYPE unsigned char
#define YYNOCODE 254
#define YYACTIONTYPE unsigned short int
#define YYWILDCARD 70
#define sqlite3ParserTOKENTYPE Token
typedef union  YYMINORTYPE;
#define YYSTACKDEPTH 100
#define sqlite3ParserARG_SDECL Parse *pParse;
#define sqlite3ParserARG_PDECL ,Parse *pParse
#define sqlite3ParserARG_FETCH Parse *pParse = yypParser->pParse
#define sqlite3ParserARG_STORE yypParser->pParse = pParse
#define YYNSTATE 642
#define YYNRULE 327
#define YYFALLBACK 1
#define YY_NO_ACTION      (YYNSTATE+YYNRULE+2)
#define YY_ACCEPT_ACTION  (YYNSTATE+YYNRULE+1)
#define YY_ERROR_ACTION   (YYNSTATE+YYNRULE)
static const YYMINORTYPE yyzerominor = ;
# define yytestcase(X)
#define YY_ACTTAB_COUNT (1497)
static const YYACTIONTYPE yy_action[] = ;
static const YYCODETYPE yy_lookahead[] = ;
#define YY_SHIFT_USE_DFLT (-86)
#define YY_SHIFT_COUNT (429)
#define YY_SHIFT_MIN   (-85)
#define YY_SHIFT_MAX   (1383)
static const short yy_shift_ofst[] = ;
#define YY_REDUCE_USE_DFLT (-110)
#define YY_REDUCE_COUNT (305)
#define YY_REDUCE_MIN   (-109)
#define YY_REDUCE_MAX   (1323)
static const short yy_reduce_ofst[] = ;
static const YYACTIONTYPE yy_default[] = ;
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
void *sqlite3ParserAlloc(void *(*mallocProc)(u64))
static void yy_destructor(
yyParser *yypParser,
YYCODETYPE yymajor,
YYMINORTYPE *yypminor
)
static int yy_pop_parser_stack(yyParser *pParser)
void sqlite3ParserFree(
void *p,
void (*freeProc)(void*)
)
int sqlite3ParserStackPeak(void *p)
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
