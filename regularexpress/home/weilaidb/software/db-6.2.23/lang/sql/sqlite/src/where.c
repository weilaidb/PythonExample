u64 sqlite3WhereOutputRowCount(WhereInfo *pWInfo)
int sqlite3WhereIsDistinct(WhereInfo *pWInfo)
int sqlite3WhereIsOrdered(WhereInfo *pWInfo)
int sqlite3WhereContinueLabel(WhereInfo *pWInfo)
int sqlite3WhereBreakLabel(WhereInfo *pWInfo)
int sqlite3WhereOkOnePass(WhereInfo *pWInfo, int *aiCur)
static void whereOrMove(WhereOrSet *pDest, WhereOrSet *pSrc)
static int whereOrInsert(
WhereOrSet *pSet,
Bitmask prereq,
LogEst rRun,
LogEst nOut
)
static void whereClauseInit(
WhereClause *pWC,
WhereInfo *pWInfo
)
static void whereClauseClear(WhereClause*);
static void whereOrInfoDelete(sqlite3 *db, WhereOrInfo *p)
static void whereAndInfoDelete(sqlite3 *db, WhereAndInfo *p)
static void whereClauseClear(WhereClause *pWC)
static int whereClauseInsert(WhereClause *pWC, Expr *p, u16 wtFlags)
static void whereSplit(WhereClause *pWC, Expr *pExpr, u8 op)
#define initMaskSet(P)  (P)->n=0
static Bitmask getMask(WhereMaskSet *pMaskSet, int iCursor)
static void createMask(WhereMaskSet *pMaskSet, int iCursor)
static Bitmask exprListTableUsage(WhereMaskSet*, ExprList*);
static Bitmask exprSelectTableUsage(WhereMaskSet*, Select*);
static Bitmask exprTableUsage(WhereMaskSet *pMaskSet, Expr *p)
static Bitmask exprListTableUsage(WhereMaskSet *pMaskSet, ExprList *pList)
static Bitmask exprSelectTableUsage(WhereMaskSet *pMaskSet, Select *pS)
static int allowedOp(int op)
static void exprCommute(Parse *pParse, Expr *pExpr)
static u16 operatorMask(int op)
static WhereTerm *whereScanNext(WhereScan *pScan)
static WhereTerm *whereScanInit(
WhereScan *pScan,
WhereClause *pWC,
int iCur,
int iColumn,
u32 opMask,
Index *pIdx
)
static WhereTerm *findTerm(
WhereClause *pWC,
int iCur,
int iColumn,
Bitmask notReady,
u32 op,
Index *pIdx
)
static void exprAnalyze(SrcList*, WhereClause*, int);
static void exprAnalyzeAll(
SrcList *pTabList,
WhereClause *pWC
)
static int isLikeOrGlob(
Parse *pParse,
Expr *pExpr,
Expr **ppPrefix,
int *pisComplete,
int *pnoCase
)
static int isMatchOfColumn(
Expr *pExpr
)
static void transferJoinMarkings(Expr *pDerived, Expr *pBase)
static void markTermAsChild(WhereClause *pWC, int iChild, int iParent)
static WhereTerm *whereNthSubterm(WhereTerm *pTerm, int N)
static void whereCombineDisjuncts(
SrcList *pSrc,
WhereClause *pWC,
WhereTerm *pOne,
WhereTerm *pTwo
)
#if !defined(SQLITE_OMIT_OR_OPTIMIZATION) && !defined(SQLITE_OMIT_SUBQUERY)
static void exprAnalyzeOrTerm(
SrcList *pSrc,
WhereClause *pWC,
int idxTerm
)
static void exprAnalyze(
SrcList *pSrc,
WhereClause *pWC,
int idxTerm
)
static int findIndexCol(
Parse *pParse,
ExprList *pList,
int iBase,
Index *pIdx,
int iCol
)
static int isDistinctRedundant(
Parse *pParse,
SrcList *pTabList,
WhereClause *pWC,
ExprList *pDistinct
)
static LogEst estLog(LogEst N)
#if !defined(SQLITE_OMIT_VIRTUALTABLE) && defined(WHERETRACE_ENABLED)
static void TRACE_IDX_INPUTS(sqlite3_index_info *p)
static void TRACE_IDX_OUTPUTS(sqlite3_index_info *p)
#define TRACE_IDX_INPUTS(A)
#define TRACE_IDX_OUTPUTS(A)
static int termCanDriveIndex(
WhereTerm *pTerm,
struct SrcList_item *pSrc,
Bitmask notReady
)
static void constructAutomaticIndex(
Parse *pParse,
WhereClause *pWC,
struct SrcList_item *pSrc,
Bitmask notReady,
WhereLevel *pLevel
)
static sqlite3_index_info *allocateIndexInfo(
Parse *pParse,
WhereClause *pWC,
struct SrcList_item *pSrc,
ExprList *pOrderBy
)
static int vtabBestIndex(Parse *pParse, Table *pTab, sqlite3_index_info *p)
static int whereKeyStats(
Parse *pParse,
Index *pIdx,
UnpackedRecord *pRec,
int roundUp,
tRowcnt *aStat
)
static LogEst whereRangeAdjust(WhereTerm *pTerm, LogEst nNew)
static int whereRangeSkipScanEst(
Parse *pParse,
WhereTerm *pLower,
WhereTerm *pUpper,
WhereLoop *pLoop,
int *pbDone
)
static int whereRangeScanEst(
Parse *pParse,
WhereLoopBuilder *pBuilder,
WhereTerm *pLower,
WhereTerm *pUpper,
WhereLoop *pLoop
)
static int whereEqualScanEst(
Parse *pParse,
WhereLoopBuilder *pBuilder,
Expr *pExpr,
tRowcnt *pnRow
)
static int whereInScanEst(
Parse *pParse,
WhereLoopBuilder *pBuilder,
ExprList *pList,
tRowcnt *pnRow
)
static void disableTerm(WhereLevel *pLevel, WhereTerm *pTerm)
static void codeApplyAffinity(Parse *pParse, int base, int n, char *zAff)
static int codeEqualityTerm(
Parse *pParse,
WhereTerm *pTerm,
WhereLevel *pLevel,
int iEq,
int bRev,
int iTarget
)
static int codeAllEqualityTerms(
Parse *pParse,
WhereLevel *pLevel,
int bRev,
int nExtraReg,
char **pzAff
)
static void explainAppendTerm(
StrAccum *pStr,
int iTerm,
const char *zColumn,
const char *zOp
)
static void explainIndexRange(StrAccum *pStr, WhereLoop *pLoop, Table *pTab)
static int explainOneScan(
Parse *pParse,
SrcList *pTabList,
WhereLevel *pLevel,
int iLevel,
int iFrom,
u16 wctrlFlags
)
# define explainOneScan(u,v,w,x,y,z) 0
static void addScanStatus(
Vdbe *v,
SrcList *pSrclist,
WhereLevel *pLvl,
int addrExplain
)
# define addScanStatus(a, b, c, d) ((void)d)
static void whereLikeOptimizationStringFixup(
Vdbe *v,
WhereLevel *pLevel,
WhereTerm *pTerm
)
static Bitmask codeOneLoopStart(
WhereInfo *pWInfo,
int iLevel,
Bitmask notReady
)
static void whereTermPrint(WhereTerm *pTerm, int iTerm)
static void whereLoopPrint(WhereLoop *p, WhereClause *pWC)
static void whereLoopInit(WhereLoop *p)
static void whereLoopClearUnion(sqlite3 *db, WhereLoop *p)
static void whereLoopClear(sqlite3 *db, WhereLoop *p)
static int whereLoopResize(sqlite3 *db, WhereLoop *p, int n)
static int whereLoopXfer(sqlite3 *db, WhereLoop *pTo, WhereLoop *pFrom)
static void whereLoopDelete(sqlite3 *db, WhereLoop *p)
static void whereInfoFree(sqlite3 *db, WhereInfo *pWInfo)
static int whereLoopCheaperProperSubset(
const WhereLoop *pX,
const WhereLoop *pY
)
static void whereLoopAdjustCost(const WhereLoop *p, WhereLoop *pTemplate)
static WhereLoop **whereLoopFindLesser(
WhereLoop **ppPrev,
const WhereLoop *pTemplate
)
static int whereLoopInsert(WhereLoopBuilder *pBuilder, WhereLoop *pTemplate)
static void whereLoopOutputAdjust(
WhereClause *pWC,
WhereLoop *pLoop,
LogEst nRow
)
# define ApplyCostMultiplier(C,T)  C += T
# define ApplyCostMultiplier(C,T)
static int whereLoopAddBtreeIndex(
WhereLoopBuilder *pBuilder,
struct SrcList_item *pSrc,
Index *pProbe,
LogEst nInMul
)
static int indexMightHelpWithOrderBy(
WhereLoopBuilder *pBuilder,
Index *pIndex,
int iCursor
)
static Bitmask columnsInIndex(Index *pIdx)
static int whereUsablePartialIndex(int iTab, WhereClause *pWC, Expr *pWhere)
static int whereLoopAddBtree(
WhereLoopBuilder *pBuilder,
Bitmask mExtra
)
static int whereLoopAddVirtual(
WhereLoopBuilder *pBuilder,
Bitmask mExtra
)
static int whereLoopAddOr(WhereLoopBuilder *pBuilder, Bitmask mExtra)
static int whereLoopAddAll(WhereLoopBuilder *pBuilder)
static i8 wherePathSatisfiesOrderBy(
WhereInfo *pWInfo,
ExprList *pOrderBy,
WherePath *pPath,
u16 wctrlFlags,
u16 nLoop,
WhereLoop *pLast,
Bitmask *pRevMask
)
int sqlite3WhereIsSorted(WhereInfo *pWInfo)
static const char *wherePathName(WherePath *pPath, int nLoop, WhereLoop *pLast)
static LogEst whereSortingCost(
WhereInfo *pWInfo,
LogEst nRow,
int nOrderBy,
int nSorted
)
static int wherePathSolver(WhereInfo *pWInfo, LogEst nRowEst)
static int whereShortCut(WhereLoopBuilder *pBuilder)
WhereInfo *sqlite3WhereBegin(
Parse *pParse,
SrcList *pTabList,
Expr *pWhere,
ExprList *pOrderBy,
ExprList *pResultSet,
u16 wctrlFlags,
int iIdxCur
)
void sqlite3WhereEnd(WhereInfo *pWInfo)
