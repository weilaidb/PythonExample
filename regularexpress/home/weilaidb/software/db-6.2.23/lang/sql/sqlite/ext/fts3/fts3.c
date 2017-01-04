#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
#if defined(SQLITE_ENABLE_FTS3) && !defined(SQLITE_CORE)
# define SQLITE_CORE 1
# include "sqlite3ext.h"
SQLITE_EXTENSION_INIT1
static int fts3EvalNext(Fts3Cursor *pCsr);
static int fts3EvalStart(Fts3Cursor *pCsr);
static int fts3TermSegReaderCursor(
Fts3Cursor *, const char *, int, int, Fts3MultiSegReader **);
# if defined(SQLITE_DEBUG)
int sqlite3Fts3Always(int b)
int sqlite3Fts3Never(int b)
# endif
int sqlite3Fts3PutVarint(char *p, sqlite_int64 v)
#define GETVARINT_STEP(v, ptr, shift, mask1, mask2, var, ret) \
v = (v & mask1) | ( (*ptr++) << shift );                    \
if( (v & mask2)==0 )
#define GETVARINT_INIT(v, ptr, shift, mask1, mask2, var, ret) \
v = (*ptr++);                                               \
if( (v & mask2)==0 )
int sqlite3Fts3GetVarint(const char *p, sqlite_int64 *v)
int sqlite3Fts3GetVarint32(const char *p, int *pi)
int sqlite3Fts3VarintLen(sqlite3_uint64 v)
void sqlite3Fts3Dequote(char *z)
static void fts3GetDeltaVarint(char **pp, sqlite3_int64 *pVal)
static void fts3GetReverseVarint(
char **pp,
char *pStart,
sqlite3_int64 *pVal
)
static int fts3DisconnectMethod(sqlite3_vtab *pVtab)
void sqlite3Fts3ErrMsg(char **pzErr, const char *zFormat, ...)
static void fts3DbExec(
int *pRc,
sqlite3 *db,
const char *zFormat,
...
)
static int fts3DestroyMethod(sqlite3_vtab *pVtab)
static void fts3DeclareVtab(int *pRc, Fts3Table *p)
void sqlite3Fts3CreateStatTable(int *pRc, Fts3Table *p)
static int fts3CreateTables(Fts3Table *p)
static void fts3DatabasePageSize(int *pRc, Fts3Table *p)
static int fts3IsSpecialColumn(
const char *z,
int *pnKey,
char **pzValue
)
static void fts3Appendf(
int *pRc,
char **pz,
const char *zFormat,
...
)
static char *fts3QuoteId(char const *zInput)
static char *fts3ReadExprList(Fts3Table *p, const char *zFunc, int *pRc)
static char *fts3WriteExprList(Fts3Table *p, const char *zFunc, int *pRc)
static int fts3GobbleInt(const char **pp, int *pnOut)
static int fts3PrefixParameter(
const char *zParam,
int *pnIndex,
struct Fts3Index **apIndex
)
static int fts3ContentColumns(
sqlite3 *db,
const char *zDb,
const char *zTbl,
const char ***pazCol,
int *pnCol,
int *pnStr,
char **pzErr
)
static int fts3InitVtab(
int isCreate,
sqlite3 *db,
void *pAux,
int argc,
const char * const *argv,
sqlite3_vtab **ppVTab,
char **pzErr
)
static int fts3ConnectMethod(
sqlite3 *db,
void *pAux,
int argc,
const char * const *argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int fts3CreateMethod(
sqlite3 *db,
void *pAux,
int argc,
const char * const *argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static void fts3SetEstimatedRows(sqlite3_index_info *pIdxInfo, i64 nRow)
static int fts3BestIndexMethod(sqlite3_vtab *pVTab, sqlite3_index_info *pInfo)
static int fts3OpenMethod(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCsr)
static int fts3CloseMethod(sqlite3_vtab_cursor *pCursor)
static int fts3CursorSeekStmt(Fts3Cursor *pCsr, sqlite3_stmt **ppStmt)
static int fts3CursorSeek(sqlite3_context *pContext, Fts3Cursor *pCsr)
static int fts3ScanInteriorNode(
const char *zTerm,
int nTerm,
const char *zNode,
int nNode,
sqlite3_int64 *piFirst,
sqlite3_int64 *piLast
)
static int fts3SelectLeaf(
Fts3Table *p,
const char *zTerm,
int nTerm,
const char *zNode,
int nNode,
sqlite3_int64 *piLeaf,
sqlite3_int64 *piLeaf2
)
static void fts3PutDeltaVarint(
char **pp,
sqlite3_int64 *piPrev,
sqlite3_int64 iVal
)
static void fts3PoslistCopy(char **pp, char **ppPoslist)
static void fts3ColumnlistCopy(char **pp, char **ppPoslist)
#define POSITION_LIST_END 0x7fffffff
static void fts3ReadNextPos(
char **pp,
sqlite3_int64 *pi
)
static int fts3PutColNumber(char **pp, int iCol)
static void fts3PoslistMerge(
char **pp,
char **pp1,
char **pp2
)
static int fts3PoslistPhraseMerge(
char **pp,
int nToken,
int isSaveLeft,
int isExact,
char **pp1,
char **pp2
)
static int fts3PoslistNearMerge(
char **pp,
char *aTmp,
int nRight,
int nLeft,
char **pp1,
char **pp2
)
typedef struct TermSelect TermSelect;
struct TermSelect ;
static void fts3GetDeltaVarint3(
char **pp,
char *pEnd,
int bDescIdx,
sqlite3_int64 *pVal
)
static void fts3PutDeltaVarint3(
char **pp,
int bDescIdx,
sqlite3_int64 *piPrev,
int *pbFirst,
sqlite3_int64 iVal
)
#define DOCID_CMP(i1, i2) ((bDescDoclist?-1:1) * (i1-i2))
static int fts3DoclistOrMerge(
int bDescDoclist,
char *a1, int n1,
char *a2, int n2,
char **paOut, int *pnOut
)
static int fts3DoclistPhraseMerge(
int bDescDoclist,
int nDist,
char *aLeft, int nLeft,
char **paRight, int *pnRight
)
int sqlite3Fts3FirstFilter(
sqlite3_int64 iDelta,
char *pList,
int nList,
char *pOut
)
static int fts3TermSelectFinishMerge(Fts3Table *p, TermSelect *pTS)
static int fts3TermSelectMerge(
Fts3Table *p,
TermSelect *pTS,
char *aDoclist,
int nDoclist
)
static int fts3SegReaderCursorAppend(
Fts3MultiSegReader *pCsr,
Fts3SegReader *pNew
)
static int fts3SegReaderCursor(
Fts3Table *p,
int iLangid,
int iIndex,
int iLevel,
const char *zTerm,
int nTerm,
int isPrefix,
int isScan,
Fts3MultiSegReader *pCsr
)
int sqlite3Fts3SegReaderCursor(
Fts3Table *p,
int iLangid,
int iIndex,
int iLevel,
const char *zTerm,
int nTerm,
int isPrefix,
int isScan,
Fts3MultiSegReader *pCsr
)
static int fts3SegReaderCursorAddZero(
Fts3Table *p,
int iLangid,
const char *zTerm,
int nTerm,
Fts3MultiSegReader *pCsr
)
static int fts3TermSegReaderCursor(
Fts3Cursor *pCsr,
const char *zTerm,
int nTerm,
int isPrefix,
Fts3MultiSegReader **ppSegcsr
)
static void fts3SegReaderCursorFree(Fts3MultiSegReader *pSegcsr)
static int fts3TermSelect(
Fts3Table *p,
Fts3PhraseToken *pTok,
int iColumn,
int *pnOut,
char **ppOut
)
static int fts3DoclistCountDocids(char *aList, int nList)
static int fts3NextMethod(sqlite3_vtab_cursor *pCursor)
# define LARGEST_INT64  (0xffffffff|(((sqlite3_int64)0x7fffffff)<<32))
# define SMALLEST_INT64 (((sqlite3_int64)-1) - LARGEST_INT64)
static sqlite3_int64 fts3DocidRange(sqlite3_value *pVal, i64 iDefault)
static int fts3FilterMethod(
sqlite3_vtab_cursor *pCursor,
int idxNum,
const char *idxStr,
int nVal,
sqlite3_value **apVal
)
static int fts3EofMethod(sqlite3_vtab_cursor *pCursor)
static int fts3RowidMethod(sqlite3_vtab_cursor *pCursor, sqlite_int64 *pRowid)
static int fts3ColumnMethod(
sqlite3_vtab_cursor *pCursor,
sqlite3_context *pCtx,
int iCol
)
static int fts3UpdateMethod(
sqlite3_vtab *pVtab,
int nArg,
sqlite3_value **apVal,
sqlite_int64 *pRowid
)
static int fts3SyncMethod(sqlite3_vtab *pVtab)
static int fts3SetHasStat(Fts3Table *p)
static int fts3BeginMethod(sqlite3_vtab *pVtab)
static int fts3CommitMethod(sqlite3_vtab *pVtab)
static int fts3RollbackMethod(sqlite3_vtab *pVtab)
static void fts3ReversePoslist(char *pStart, char **ppPoslist)
static int fts3FunctionArg(
sqlite3_context *pContext,
const char *zFunc,
sqlite3_value *pVal,
Fts3Cursor **ppCsr
)
static void fts3SnippetFunc(
sqlite3_context *pContext,
int nVal,
sqlite3_value **apVal
)
static void fts3OffsetsFunc(
sqlite3_context *pContext,
int nVal,
sqlite3_value **apVal
)
static void fts3OptimizeFunc(
sqlite3_context *pContext,
int nVal,
sqlite3_value **apVal
)
static void fts3MatchinfoFunc(
sqlite3_context *pContext,
int nVal,
sqlite3_value **apVal
)
static int fts3FindFunctionMethod(
sqlite3_vtab *pVtab,
int nArg,
const char *zName,
void (**pxFunc)(sqlite3_context*,int,sqlite3_value**),
void **ppArg
)
static int fts3RenameMethod(
sqlite3_vtab *pVtab,
const char *zName
)
static int fts3SavepointMethod(sqlite3_vtab *pVtab, int iSavepoint)
static int fts3ReleaseMethod(sqlite3_vtab *pVtab, int iSavepoint)
static int fts3RollbackToMethod(sqlite3_vtab *pVtab, int iSavepoint)
static const sqlite3_module fts3Module = ;
static void hashDestroy(void *p)
void sqlite3Fts3SimpleTokenizerModule(sqlite3_tokenizer_module const**ppModule);
void sqlite3Fts3PorterTokenizerModule(sqlite3_tokenizer_module const**ppModule);
void sqlite3Fts3UnicodeTokenizer(sqlite3_tokenizer_module const**ppModule);
void sqlite3Fts3IcuTokenizerModule(sqlite3_tokenizer_module const**ppModule);
int sqlite3Fts3Init(sqlite3 *db)
static void fts3EvalAllocateReaders(
Fts3Cursor *pCsr,
Fts3Expr *pExpr,
int *pnToken,
int *pnOr,
int *pRc
)
static int fts3EvalPhraseMergeToken(
Fts3Table *pTab,
Fts3Phrase *p,
int iToken,
char *pList,
int nList
)
static int fts3EvalPhraseLoad(
Fts3Cursor *pCsr,
Fts3Phrase *p
)
static int fts3EvalDeferredPhrase(Fts3Cursor *pCsr, Fts3Phrase *pPhrase)
#define MAX_INCR_PHRASE_TOKENS 4
static int fts3EvalPhraseStart(Fts3Cursor *pCsr, int bOptOk, Fts3Phrase *p)
void sqlite3Fts3DoclistPrev(
int bDescIdx,
char *aDoclist,
int nDoclist,
char **ppIter,
sqlite3_int64 *piDocid,
int *pnList,
u8 *pbEof
)
void sqlite3Fts3DoclistNext(
int bDescIdx,
char *aDoclist,
int nDoclist,
char **ppIter,
sqlite3_int64 *piDocid,
u8 *pbEof
)
static void fts3EvalDlPhraseNext(
Fts3Table *pTab,
Fts3Doclist *pDL,
u8 *pbEof
)
typedef struct TokenDoclist TokenDoclist;
struct TokenDoclist ;
static int incrPhraseTokenNext(
Fts3Table *pTab,
Fts3Phrase *pPhrase,
int iToken,
TokenDoclist *p,
u8 *pbEof
)
static int fts3EvalIncrPhraseNext(
Fts3Cursor *pCsr,
Fts3Phrase *p,
u8 *pbEof
)
static int fts3EvalPhraseNext(
Fts3Cursor *pCsr,
Fts3Phrase *p,
u8 *pbEof
)
static void fts3EvalStartReaders(
Fts3Cursor *pCsr,
Fts3Expr *pExpr,
int *pRc
)
typedef struct Fts3TokenAndCost Fts3TokenAndCost;
struct Fts3TokenAndCost ;
static void fts3EvalTokenCosts(
Fts3Cursor *pCsr,
Fts3Expr *pRoot,
Fts3Expr *pExpr,
Fts3TokenAndCost **ppTC,
Fts3Expr ***ppOr,
int *pRc
)
static int fts3EvalAverageDocsize(Fts3Cursor *pCsr, int *pnPage)
static int fts3EvalSelectDeferred(
Fts3Cursor *pCsr,
Fts3Expr *pRoot,
Fts3TokenAndCost *aTC,
int nTC
)
static int fts3EvalStart(Fts3Cursor *pCsr)
static void fts3EvalInvalidatePoslist(Fts3Phrase *pPhrase)
static int fts3EvalNearTrim(
int nNear,
char *aTmp,
char **paPoslist,
int *pnToken,
Fts3Phrase *pPhrase
)
static void fts3EvalNextRow(
Fts3Cursor *pCsr,
Fts3Expr *pExpr,
int *pRc
)
static int fts3EvalNearTest(Fts3Expr *pExpr, int *pRc)
static int fts3EvalTestExpr(
Fts3Cursor *pCsr,
Fts3Expr *pExpr,
int *pRc
)
static int fts3EvalTestDeferredAndNear(Fts3Cursor *pCsr, int *pRc)
static int fts3EvalNext(Fts3Cursor *pCsr)
static void fts3EvalRestart(
Fts3Cursor *pCsr,
Fts3Expr *pExpr,
int *pRc
)
static void fts3EvalUpdateCounts(Fts3Expr *pExpr)
static int fts3EvalGatherStats(
Fts3Cursor *pCsr,
Fts3Expr *pExpr
)
int sqlite3Fts3EvalPhraseStats(
Fts3Cursor *pCsr,
Fts3Expr *pExpr,
u32 *aiOut
)
int sqlite3Fts3EvalPhrasePoslist(
Fts3Cursor *pCsr,
Fts3Expr *pExpr,
int iCol,
char **ppOut
)
void sqlite3Fts3EvalPhraseCleanup(Fts3Phrase *pPhrase)
int sqlite3Fts3Corrupt()
#if !SQLITE_CORE
__declspec(dllexport)
int sqlite3_fts3_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
