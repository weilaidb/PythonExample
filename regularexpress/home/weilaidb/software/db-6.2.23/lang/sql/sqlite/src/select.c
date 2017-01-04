#if SELECTTRACE_ENABLED int sqlite3SelectTrace = 0;
# define SELECTTRACE(K,P,S,X)  \
if(sqlite3SelectTrace&(K))   \
sqlite3DebugPrintf("%*s%s.%p: ",(P)->nSelectIndent*2-2,"",(S)->zSelName,(S)),\
sqlite3DebugPrintf X
# define SELECTTRACE(K,P,S,X)
typedef struct DistinctCtx DistinctCtx;
struct DistinctCtx ;
typedef struct SortCtx SortCtx;
struct SortCtx ;
#define SORTFLAG_UseSorter  0x01
static void clearSelect(sqlite3 *db, Select *p, int bFree)
void sqlite3SelectDestInit(SelectDest *pDest, int eDest, int iParm)
Select *sqlite3SelectNew(
Parse *pParse,
ExprList *pEList,
SrcList *pSrc,
Expr *pWhere,
ExprList *pGroupBy,
Expr *pHaving,
ExprList *pOrderBy,
u16 selFlags,
Expr *pLimit,
Expr *pOffset
)
#if SELECTTRACE_ENABLED
void sqlite3SelectSetName(Select *p, const char *zName)
void sqlite3SelectDelete(sqlite3 *db, Select *p)
static Select *findRightmost(Select *p)
int sqlite3JoinType(Parse *pParse, Token *pA, Token *pB, Token *pC)
static int columnIndex(Table *pTab, const char *zCol)
static int tableAndColumnIndex(
SrcList *pSrc,
int N,
const char *zCol,
int *piTab,
int *piCol
)
static void addWhereTerm(
Parse *pParse,
SrcList *pSrc,
int iLeft,
int iColLeft,
int iRight,
int iColRight,
int isOuterJoin,
Expr **ppWhere
)
static void setJoinExpr(Expr *p, int iTable)
static int sqliteProcessJoin(Parse *pParse, Select *p)
static KeyInfo *keyInfoFromExprList(
Parse *pParse,
ExprList *pList,
int iStart,
int nExtra
);
static void pushOntoSorter(
Parse *pParse,
SortCtx *pSort,
Select *pSelect,
int regData,
int nData,
int nPrefixReg
)
static void codeOffset(
Vdbe *v,
int iOffset,
int iContinue
)
static void codeDistinct(
Parse *pParse,
int iTab,
int addrRepeat,
int N,
int iMem
)
static int checkForMultiColumnSelectError(
Parse *pParse,
SelectDest *pDest,
int nExpr
)
static void selectInnerLoop(
Parse *pParse,
Select *p,
ExprList *pEList,
int srcTab,
SortCtx *pSort,
DistinctCtx *pDistinct,
SelectDest *pDest,
int iContinue,
int iBreak
)
KeyInfo *sqlite3KeyInfoAlloc(sqlite3 *db, int N, int X)
void sqlite3KeyInfoUnref(KeyInfo *p)
KeyInfo *sqlite3KeyInfoRef(KeyInfo *p)
int sqlite3KeyInfoIsWriteable(KeyInfo *p)
static KeyInfo *keyInfoFromExprList(
Parse *pParse,
ExprList *pList,
int iStart,
int nExtra
)
static const char *selectOpName(int id)
static void explainTempTable(Parse *pParse, const char *zUsage)
# define explainSetInteger(a, b) a = b
# define explainTempTable(y,z)
# define explainSetInteger(y,z)
#if !defined(SQLITE_OMIT_EXPLAIN) && !defined(SQLITE_OMIT_COMPOUND_SELECT)
static void explainComposite(
Parse *pParse,
int op,
int iSub1,
int iSub2,
int bUseTmp
)
# define explainComposite(v,w,x,y,z)
static void generateSortTail(
Parse *pParse,
Select *p,
SortCtx *pSort,
int nColumn,
SelectDest *pDest
)
# define columnType(A,B,C,D,E,F) columnTypeImpl(A,B,C,D,E,F)
static const char *columnTypeImpl(
NameContext *pNC,
Expr *pExpr,
const char **pzOrigDb,
const char **pzOrigTab,
const char **pzOrigCol,
u8 *pEstWidth
){
char const *zOrigDb = 0;
char const *zOrigTab = 0;
char const *zOrigCol = 0;
# define columnType(A,B,C,D,E,F) columnTypeImpl(A,B,F)
static const char *columnTypeImpl(
NameContext *pNC,
Expr *pExpr,
u8 *pEstWidth
)
static void generateColumnTypes(
Parse *pParse,
SrcList *pTabList,
ExprList *pEList
)
static void generateColumnNames(
Parse *pParse,
SrcList *pTabList,
ExprList *pEList
)
static int selectColumnsFromExprList(
Parse *pParse,
ExprList *pEList,
i16 *pnCol,
Column **paCol
)
static void selectAddColumnTypeAndCollation(
Parse *pParse,
Table *pTab,
Select *pSelect
)
Table *sqlite3ResultSetOfSelect(Parse *pParse, Select *pSelect)
Vdbe *sqlite3GetVdbe(Parse *pParse)
static void computeLimitRegisters(Parse *pParse, Select *p, int iBreak)
static CollSeq *multiSelectCollSeq(Parse *pParse, Select *p, int iCol)
static KeyInfo *multiSelectOrderByKeyInfo(Parse *pParse, Select *p, int nExtra)
static void generateWithRecursiveQuery(
Parse *pParse,
Select *p,
SelectDest *pDest
)
static int multiSelectOrderBy(
Parse *pParse,
Select *p,
SelectDest *pDest
);
static void selectWrongNumTermsError(Parse *pParse, Select *p)
static int multiSelectValues(
Parse *pParse,
Select *p,
SelectDest *pDest
)
static int multiSelect(
Parse *pParse,
Select *p,
SelectDest *pDest
)
static int generateOutputSubroutine(
Parse *pParse,
Select *p,
SelectDest *pIn,
SelectDest *pDest,
int regReturn,
int regPrev,
KeyInfo *pKeyInfo,
int iBreak
)
static int multiSelectOrderBy(
Parse *pParse,
Select *p,
SelectDest *pDest
)
#if !defined(SQLITE_OMIT_SUBQUERY) || !defined(SQLITE_OMIT_VIEW)
static void substExprList(sqlite3*, ExprList*, int, ExprList*);
static void substSelect(sqlite3*, Select *, int, ExprList *);
static Expr *substExpr(
sqlite3 *db,
Expr *pExpr,
int iTable,
ExprList *pEList
)
static void substExprList(
sqlite3 *db,
ExprList *pList,
int iTable,
ExprList *pEList
)
static void substSelect(
sqlite3 *db,
Select *p,
int iTable,
ExprList *pEList
)
#if !defined(SQLITE_OMIT_SUBQUERY) || !defined(SQLITE_OMIT_VIEW)
static int flattenSubquery(
Parse *pParse,
Select *p,
int iFrom,
int isAgg,
int subqueryIsAgg
)
static u8 minMaxQuery(AggInfo *pAggInfo, ExprList **ppMinMax)
static Table *isSimpleCount(Select *p, AggInfo *pAggInfo)
int sqlite3IndexedByLookup(Parse *pParse, struct SrcList_item *pFrom)
static int convertCompoundSelectToSubquery(Walker *pWalker, Select *p)
static struct Cte *searchWith(
With *pWith,
struct SrcList_item *pItem,
With **ppContext
)
void sqlite3WithPush(Parse *pParse, With *pWith, u8 bFree)
static int withExpand(
Walker *pWalker,
struct SrcList_item *pFrom
)
static void selectPopWith(Walker *pWalker, Select *p)
#define selectPopWith 0
static int selectExpander(Walker *pWalker, Select *p)
static int exprWalkNoop(Walker *NotUsed, Expr *NotUsed2)
static void sqlite3SelectExpand(Parse *pParse, Select *pSelect)
static void selectAddSubqueryTypeInfo(Walker *pWalker, Select *p)
static void sqlite3SelectAddTypeInfo(Parse *pParse, Select *pSelect)
void sqlite3SelectPrep(
Parse *pParse,
Select *p,
NameContext *pOuterNC
)
static void resetAccumulator(Parse *pParse, AggInfo *pAggInfo)
static void finalizeAggFunctions(Parse *pParse, AggInfo *pAggInfo)
static void updateAccumulator(Parse *pParse, AggInfo *pAggInfo)
static void explainSimpleCount(
Parse *pParse,
Table *pTab,
Index *pIdx
)
# define explainSimpleCount(a,b,c)
int sqlite3Select(
Parse *pParse,
Select *p,
SelectDest *pDest
)
void sqlite3TreeViewSelect(TreeView *pView, const Select *p, u8 moreToFollow)
