static int incrAggDepth(Walker *pWalker, Expr *pExpr)
static void incrAggFunctionDepth(Expr *pExpr, int N)
static void resolveAlias(
Parse *pParse,
ExprList *pEList,
int iCol,
Expr *pExpr,
const char *zType,
int nSubquery
)
static int nameInUsingClause(IdList *pUsing, const char *zCol)
int sqlite3MatchSpanName(
const char *zSpan,
const char *zCol,
const char *zTab,
const char *zDb
)
static int lookupName(
Parse *pParse,
const char *zDb,
const char *zTab,
const char *zCol,
NameContext *pNC,
Expr *pExpr
)
Expr *sqlite3CreateColumnExpr(sqlite3 *db, SrcList *pSrc, int iSrc, int iCol)
static void notValidPartIdxWhere(
Parse *pParse,
NameContext *pNC,
const char *zMsg
)
static void notValidCheckConstraint(
Parse *pParse,
NameContext *pNC,
const char *zMsg
)
# define notValidCheckConstraint(P,N,M)
static int exprProbability(Expr *p)
static int resolveExprStep(Walker *pWalker, Expr *pExpr)
static int resolveAsName(
Parse *pParse,
ExprList *pEList,
Expr *pE
)
static int resolveOrderByTermToExprList(
Parse *pParse,
Select *pSelect,
Expr *pE
)
static void resolveOutOfRangeError(
Parse *pParse,
const char *zType,
int i,
int mx
)
static int resolveCompoundOrderBy(
Parse *pParse,
Select *pSelect
)
int sqlite3ResolveOrderGroupBy(
Parse *pParse,
Select *pSelect,
ExprList *pOrderBy,
const char *zType
)
static int resolveOrderGroupBy(
NameContext *pNC,
Select *pSelect,
ExprList *pOrderBy,
const char *zType
)
static int resolveSelectStep(Walker *pWalker, Select *p)
int sqlite3ResolveExprNames(
NameContext *pNC,
Expr *pExpr
)
void sqlite3ResolveSelectNames(
Parse *pParse,
Select *p,
NameContext *pOuterNC
)
void sqlite3ResolveSelfReference(
Parse *pParse,
Table *pTab,
int type,
Expr *pExpr,
ExprList *pList
)
