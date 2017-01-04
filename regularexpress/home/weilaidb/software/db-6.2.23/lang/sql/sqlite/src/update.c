static void updateVirtualTable(
Parse *pParse,
SrcList *pSrc,
Table *pTab,
ExprList *pChanges,
Expr *pRowidExpr,
int *aXRef,
Expr *pWhere,
int onError
);
void sqlite3ColumnDefault(Vdbe *v, Table *pTab, int i, int iReg)
void sqlite3Update(
Parse *pParse,
SrcList *pTabList,
ExprList *pChanges,
Expr *pWhere,
int onError
)
#undef isView
#undef pTrigger
static void updateVirtualTable(
Parse *pParse,
SrcList *pSrc,
Table *pTab,
ExprList *pChanges,
Expr *pRowid,
int *aXRef,
Expr *pWhere,
int onError
)
