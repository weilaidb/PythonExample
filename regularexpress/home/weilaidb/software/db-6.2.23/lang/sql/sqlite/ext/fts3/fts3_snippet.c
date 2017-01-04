#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
#define FTS3_MATCHINFO_NPHRASE   'p'
#define FTS3_MATCHINFO_NCOL      'c'
#define FTS3_MATCHINFO_NDOC      'n'
#define FTS3_MATCHINFO_AVGLENGTH 'a'
#define FTS3_MATCHINFO_LENGTH    'l'
#define FTS3_MATCHINFO_LCS       's'
#define FTS3_MATCHINFO_HITS      'x'
#define FTS3_MATCHINFO_LHITS     'y'
#define FTS3_MATCHINFO_DEFAULT   "pcx"
typedef struct LoadDoclistCtx LoadDoclistCtx;
struct LoadDoclistCtx ;
typedef struct SnippetIter SnippetIter;
typedef struct SnippetPhrase SnippetPhrase;
typedef struct SnippetFragment SnippetFragment;
struct SnippetIter ;
struct SnippetPhrase ;
struct SnippetFragment ;
typedef struct MatchInfo MatchInfo;
struct MatchInfo ;
typedef struct StrBuffer StrBuffer;
struct StrBuffer ;
static void fts3GetDeltaPosition(char **pp, int *piPos)
static int fts3ExprIterate2(
Fts3Expr *pExpr,
int *piPhrase,
int (*x)(Fts3Expr*,int,void*),
void *pCtx
)
static int fts3ExprIterate(
Fts3Expr *pExpr,
int (*x)(Fts3Expr*,int,void*),
void *pCtx
)
static int fts3ExprLoadDoclistsCb(Fts3Expr *pExpr, int iPhrase, void *ctx)
static int fts3ExprLoadDoclists(
Fts3Cursor *pCsr,
int *pnPhrase,
int *pnToken
)
static int fts3ExprPhraseCountCb(Fts3Expr *pExpr, int iPhrase, void *ctx)
static int fts3ExprPhraseCount(Fts3Expr *pExpr)
static void fts3SnippetAdvance(char **ppIter, int *piIter, int iNext)
static int fts3SnippetNextCandidate(SnippetIter *pIter)
static void fts3SnippetDetails(
SnippetIter *pIter,
u64 mCovered,
int *piToken,
int *piScore,
u64 *pmCover,
u64 *pmHighlight
)
static int fts3SnippetFindPositions(Fts3Expr *pExpr, int iPhrase, void *ctx)
static int fts3BestSnippet(
int nSnippet,
Fts3Cursor *pCsr,
int iCol,
u64 mCovered,
u64 *pmSeen,
SnippetFragment *pFragment,
int *piScore
)
static int fts3StringAppend(
StrBuffer *pStr,
const char *zAppend,
int nAppend
)
static int fts3SnippetShift(
Fts3Table *pTab,
int iLangid,
int nSnippet,
const char *zDoc,
int nDoc,
int *piPos,
u64 *pHlmask
)
static int fts3SnippetText(
Fts3Cursor *pCsr,
SnippetFragment *pFragment,
int iFragment,
int isLast,
int nSnippet,
const char *zOpen,
const char *zClose,
const char *zEllipsis,
StrBuffer *pOut
)
static int fts3ColumnlistCount(char **ppCollist)
static int fts3ExprGlobalHitsCb(
Fts3Expr *pExpr,
int iPhrase,
void *pCtx
)
static int fts3ExprLocalHitsCb(
Fts3Expr *pExpr,
int iPhrase,
void *pCtx
)
static int fts3ExprLHitsCb(
Fts3Expr *pExpr,
int iPhrase,
void *pCtx
)
static int fts3MatchinfoCheck(
Fts3Table *pTab,
char cArg,
char **pzErr
)
static int fts3MatchinfoSize(MatchInfo *pInfo, char cArg)
static int fts3MatchinfoSelectDoctotal(
Fts3Table *pTab,
sqlite3_stmt **ppStmt,
sqlite3_int64 *pnDoc,
const char **paLen
)
typedef struct LcsIterator LcsIterator;
struct LcsIterator ;
#define LCS_ITERATOR_FINISHED 0x7FFFFFFF;
static int fts3MatchinfoLcsCb(
Fts3Expr *pExpr,
int iPhrase,
void *pCtx
)
static int fts3LcsIteratorAdvance(LcsIterator *pIter)
static int fts3MatchinfoLcs(Fts3Cursor *pCsr, MatchInfo *pInfo)
static int fts3MatchinfoValues(
Fts3Cursor *pCsr,
int bGlobal,
MatchInfo *pInfo,
const char *zArg
)
static int fts3GetMatchinfo(
Fts3Cursor *pCsr,
const char *zArg
)
void sqlite3Fts3Snippet(
sqlite3_context *pCtx,
Fts3Cursor *pCsr,
const char *zStart,
const char *zEnd,
const char *zEllipsis,
int iCol,
int nToken
)
typedef struct TermOffset TermOffset;
typedef struct TermOffsetCtx TermOffsetCtx;
struct TermOffset ;
struct TermOffsetCtx ;
static int fts3ExprTermOffsetInit(Fts3Expr *pExpr, int iPhrase, void *ctx)
void sqlite3Fts3Offsets(
sqlite3_context *pCtx,
Fts3Cursor *pCsr
)
void sqlite3Fts3Matchinfo(
sqlite3_context *pContext,
Fts3Cursor *pCsr,
const char *zArg
)
