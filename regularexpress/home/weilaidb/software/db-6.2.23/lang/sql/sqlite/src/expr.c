char sqlite3ExprAffinity(Expr *pExpr)
Expr *sqlite3ExprAddCollateToken(
Parse *pParse,
Expr *pExpr,
const Token *pCollName,
int dequote
)
Expr *sqlite3ExprAddCollateString(Parse *pParse, Expr *pExpr, const char *zC)
Expr *sqlite3ExprSkipCollate(Expr *pExpr)
CollSeq *sqlite3ExprCollSeq(Parse *pParse, Expr *pExpr)
char sqlite3CompareAffinity(Expr *pExpr, char aff2)
static char comparisonAffinity(Expr *pExpr)
int sqlite3IndexAffinityOk(Expr *pExpr, char idx_affinity)
static u8 binaryCompareP5(Expr *pExpr1, Expr *pExpr2, int jumpIfNull)
CollSeq *sqlite3BinaryCompareCollSeq(
Parse *pParse,
Expr *pLeft,
Expr *pRight
)
static int codeCompare(
Parse *pParse,
Expr *pLeft,
Expr *pRight,
int opcode,
int in1, int in2,
int dest,
int jumpIfNull
)
#if SQLITE_MAX_EXPR_DEPTH>0
int sqlite3ExprCheckHeight(Parse *pParse, int nHeight)
static void heightOfExpr(Expr *p, int *pnHeight)
static void heightOfExprList(ExprList *p, int *pnHeight)
static void heightOfSelect(Select *p, int *pnHeight)
static void exprSetHeight(Expr *p)
void sqlite3ExprSetHeightAndFlags(Parse *pParse, Expr *p)
int sqlite3SelectExprHeight(Select *p)
void sqlite3ExprSetHeightAndFlags(Parse *pParse, Expr *p)
#define exprSetHeight(y)
Expr *sqlite3ExprAlloc(
sqlite3 *db,
int op,
const Token *pToken,
int dequote
)
Expr *sqlite3Expr(
sqlite3 *db,
int op,
const char *zToken
)
void sqlite3ExprAttachSubtrees(
sqlite3 *db,
Expr *pRoot,
Expr *pLeft,
Expr *pRight
)
Expr *sqlite3PExpr(
Parse *pParse,
int op,
Expr *pLeft,
Expr *pRight,
const Token *pToken
)
static int exprAlwaysTrue(Expr *p)
static int exprAlwaysFalse(Expr *p)
Expr *sqlite3ExprAnd(sqlite3 *db, Expr *pLeft, Expr *pRight)
Expr *sqlite3ExprFunction(Parse *pParse, ExprList *pList, Token *pToken)
void sqlite3ExprAssignVarNumber(Parse *pParse, Expr *pExpr)
void sqlite3ExprDelete(sqlite3 *db, Expr *p)
static int exprStructSize(Expr *p)
static int dupedExprStructSize(Expr *p, int flags)
static int dupedExprNodeSize(Expr *p, int flags)
static int dupedExprSize(Expr *p, int flags)
static Expr *exprDup(sqlite3 *db, Expr *p, int flags, u8 **pzBuffer)
static With *withDup(sqlite3 *db, With *p)
# define withDup(x,y) 0
Expr *sqlite3ExprDup(sqlite3 *db, Expr *p, int flags)
ExprList *sqlite3ExprListDup(sqlite3 *db, ExprList *p, int flags)
#if !defined(SQLITE_OMIT_VIEW) || !defined(SQLITE_OMIT_TRIGGER) \
|| !defined(SQLITE_OMIT_SUBQUERY)
SrcList *sqlite3SrcListDup(sqlite3 *db, SrcList *p, int flags)
IdList *sqlite3IdListDup(sqlite3 *db, IdList *p)
Select *sqlite3SelectDup(sqlite3 *db, Select *p, int flags)
Select *sqlite3SelectDup(sqlite3 *db, Select *p, int flags)
ExprList *sqlite3ExprListAppend(
Parse *pParse,
ExprList *pList,
Expr *pExpr
)
void sqlite3ExprListSetName(
Parse *pParse,
ExprList *pList,
Token *pName,
int dequote
)
void sqlite3ExprListSetSpan(
Parse *pParse,
ExprList *pList,
ExprSpan *pSpan
)
void sqlite3ExprListCheckLength(
Parse *pParse,
ExprList *pEList,
const char *zObject
)
void sqlite3ExprListDelete(sqlite3 *db, ExprList *pList)
u32 sqlite3ExprListFlags(const ExprList *pList)
static int exprNodeIsConstant(Walker *pWalker, Expr *pExpr)
static int selectNodeIsConstant(Walker *pWalker, Select *NotUsed)
static int exprIsConst(Expr *p, int initFlag, int iCur)
int sqlite3ExprIsConstant(Expr *p)
int sqlite3ExprIsConstantNotJoin(Expr *p)
int sqlite3ExprIsTableConstant(Expr *p, int iCur)
int sqlite3ExprIsConstantOrFunction(Expr *p, u8 isInit)
int sqlite3ExprIsInteger(Expr *p, int *pValue)
int sqlite3ExprCanBeNull(const Expr *p)
int sqlite3ExprNeedsNoAffinityChange(const Expr *p, char aff)
int sqlite3IsRowid(const char *z)
static int isCandidateForInOpt(Select *p)
int sqlite3CodeOnce(Parse *pParse)
static void sqlite3SetHasNullFlag(Vdbe *v, int iCur, int regHasNull)
static int sqlite3InRhsIsConstant(Expr *pIn)
int sqlite3FindInIndex(Parse *pParse, Expr *pX, u32 inFlags, int *prRhsHasNull)
int sqlite3CodeSubselect(
Parse *pParse,
Expr *pExpr,
int rHasNullFlag,
int isRowid
)
static void sqlite3ExprCodeIN(
Parse *pParse,
Expr *pExpr,
int destIfFalse,
int destIfNull
)
static char *dup8bytes(Vdbe *v, const char *in)
static void codeReal(Vdbe *v, const char *z, int negateFlag, int iMem)
static void codeInteger(Parse *pParse, Expr *pExpr, int negFlag, int iMem)
static void cacheEntryClear(Parse *pParse, struct yColCache *p)
void sqlite3ExprCacheStore(Parse *pParse, int iTab, int iCol, int iReg)
void sqlite3ExprCacheRemove(Parse *pParse, int iReg, int nReg)
void sqlite3ExprCachePush(Parse *pParse)
void sqlite3ExprCachePop(Parse *pParse)
static void sqlite3ExprCachePinRegister(Parse *pParse, int iReg)
void sqlite3ExprCodeGetColumnOfTable(
Vdbe *v,
Table *pTab,
int iTabCur,
int iCol,
int regOut
)
int sqlite3ExprCodeGetColumn(
Parse *pParse,
Table *pTab,
int iColumn,
int iTable,
int iReg,
u8 p5
)
void sqlite3ExprCacheClear(Parse *pParse)
void sqlite3ExprCacheAffinityChange(Parse *pParse, int iStart, int iCount)
void sqlite3ExprCodeMove(Parse *pParse, int iFrom, int iTo, int nReg)
#if defined(SQLITE_DEBUG) || defined(SQLITE_COVERAGE_TEST)
static int usedAsColumnCache(Parse *pParse, int iFrom, int iTo)
static void exprToRegister(Expr *p, int iReg)
int sqlite3ExprCodeTarget(Parse *pParse, Expr *pExpr, int target)
void sqlite3ExprCodeAtInit(
Parse *pParse,
Expr *pExpr,
int regDest,
u8 reusable
)
int sqlite3ExprCodeTemp(Parse *pParse, Expr *pExpr, int *pReg)
void sqlite3ExprCode(Parse *pParse, Expr *pExpr, int target)
void sqlite3ExprCodeFactorable(Parse *pParse, Expr *pExpr, int target)
void sqlite3ExprCodeAndCache(Parse *pParse, Expr *pExpr, int target)
void sqlite3TreeViewExpr(TreeView *pView, const Expr *pExpr, u8 moreToFollow)
void sqlite3TreeViewExprList(
TreeView *pView,
const ExprList *pList,
u8 moreToFollow,
const char *zLabel
)
int sqlite3ExprCodeExprList(
Parse *pParse,
ExprList *pList,
int target,
u8 flags
)
static void exprCodeBetween(
Parse *pParse,
Expr *pExpr,
int dest,
int jumpIfTrue,
int jumpIfNull
)
void sqlite3ExprIfTrue(Parse *pParse, Expr *pExpr, int dest, int jumpIfNull)
void sqlite3ExprIfFalse(Parse *pParse, Expr *pExpr, int dest, int jumpIfNull)
int sqlite3ExprCompare(Expr *pA, Expr *pB, int iTab)
int sqlite3ExprListCompare(ExprList *pA, ExprList *pB, int iTab)
int sqlite3ExprImpliesExpr(Expr *pE1, Expr *pE2, int iTab)
struct SrcCount ;
static int exprSrcCount(Walker *pWalker, Expr *pExpr)
int sqlite3FunctionUsesThisSrc(Expr *pExpr, SrcList *pSrcList)
static int addAggInfoColumn(sqlite3 *db, AggInfo *pInfo)
static int addAggInfoFunc(sqlite3 *db, AggInfo *pInfo)
static int analyzeAggregate(Walker *pWalker, Expr *pExpr)
static int analyzeAggregatesInSelect(Walker *pWalker, Select *pSelect)
void sqlite3ExprAnalyzeAggregates(NameContext *pNC, Expr *pExpr)
void sqlite3ExprAnalyzeAggList(NameContext *pNC, ExprList *pList)
int sqlite3GetTempReg(Parse *pParse)
void sqlite3ReleaseTempReg(Parse *pParse, int iReg)
int sqlite3GetTempRange(Parse *pParse, int nReg)
void sqlite3ReleaseTempRange(Parse *pParse, int iReg, int nReg)
void sqlite3ClearTempRegCache(Parse *pParse)
