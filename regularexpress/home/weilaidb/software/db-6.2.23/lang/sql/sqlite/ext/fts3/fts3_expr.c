#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
int sqlite3_fts3_enable_parentheses = 0;
# ifdef SQLITE_ENABLE_FTS3_PARENTHESIS
#  define sqlite3_fts3_enable_parentheses 1
# else
#  define sqlite3_fts3_enable_parentheses 0
# endif
#define SQLITE_FTS3_DEFAULT_NEAR_PARAM 10
typedef struct ParseContext ParseContext;
struct ParseContext ;
static int fts3isspace(char c)
static void *fts3MallocZero(int nByte)
int sqlite3Fts3OpenTokenizer(
sqlite3_tokenizer *pTokenizer,
int iLangid,
const char *z,
int n,
sqlite3_tokenizer_cursor **ppCsr
)
static int fts3ExprParse(ParseContext *, const char *, int, Fts3Expr **, int *);
static int getNextToken(
ParseContext *pParse,
int iCol,
const char *z, int n,
Fts3Expr **ppExpr,
int *pnConsumed
)
static void *fts3ReallocOrFree(void *pOrig, int nNew)
static int getNextString(
ParseContext *pParse,
const char *zInput, int nInput,
Fts3Expr **ppExpr
)
static int getNextNode(
ParseContext *pParse,
const char *z, int n,
Fts3Expr **ppExpr,
int *pnConsumed
)
static int opPrecedence(Fts3Expr *p)
static void insertBinaryOperator(
Fts3Expr **ppHead,
Fts3Expr *pPrev,
Fts3Expr *pNew
)
static int fts3ExprParse(
ParseContext *pParse,
const char *z, int n,
Fts3Expr **ppExpr,
int *pnConsumed
)
static int fts3ExprCheckDepth(Fts3Expr *p, int nMaxDepth)
static int fts3ExprBalance(Fts3Expr **pp, int nMaxDepth)
static int fts3ExprParseUnbalanced(
sqlite3_tokenizer *pTokenizer,
int iLangid,
char **azCol,
int bFts4,
int nCol,
int iDefaultCol,
const char *z, int n,
Fts3Expr **ppExpr
)
int sqlite3Fts3ExprParse(
sqlite3_tokenizer *pTokenizer,
int iLangid,
char **azCol,
int bFts4,
int nCol,
int iDefaultCol,
const char *z, int n,
Fts3Expr **ppExpr,
char **pzErr
)
static void fts3FreeExprNode(Fts3Expr *p)
void sqlite3Fts3ExprFree(Fts3Expr *pDel)
static int queryTestTokenizer(
sqlite3 *db,
const char *zName,
const sqlite3_tokenizer_module **pp
)
static char *exprToString(Fts3Expr *pExpr, char *zBuf)
static void fts3ExprTest(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
int sqlite3Fts3ExprInitTestInterface(sqlite3* db)
