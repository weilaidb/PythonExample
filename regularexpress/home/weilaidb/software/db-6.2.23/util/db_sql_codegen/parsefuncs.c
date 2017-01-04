static void unsupported(pParse, fname)
Parse *pParse;
char *fname;
void sqlite3AddCheckConstraint(
Parse *pParse,
Expr *pCheckExpr
)
void sqlite3AddCollateType(Parse *pParse, Token *pToken)
void sqlite3AddDefaultValue(Parse *pParse, Expr *pExpr)
void sqlite3AddNotNull(Parse *pParse, int onError)
void sqlite3AlterBeginAddColumn(Parse *pParse, SrcList *pSrc)
void sqlite3AlterFinishAddColumn(Parse *pParse, Token *pColDef)
void sqlite3AlterRenameTable(
Parse *pParse,
SrcList *pSrc,
Token *pName
)
void sqlite3Analyze(Parse *pParse, Token *pName1, Token *pName2)
void sqlite3Attach(Parse *pParse, Expr *p, Expr *pDbname, Expr *pKey)
void sqlite3BeginTransaction(Parse *pParse, int type)
void sqlite3BeginTrigger(
Parse *pParse,
Token *pName1,
Token *pName2,
int tr_tm,
int op,
IdList *pColumns,
SrcList *pTableName,
Expr *pWhen,
int isTemp,
int noErr
)
void sqlite3CommitTransaction(Parse *pParse)
void sqlite3CreateView(
Parse *pParse,
Token *pBegin,
Token *pName1,
Token *pName2,
Select *pSelect,
int isTemp,
int noErr
)
void sqlite3DeleteFrom(
Parse *pParse,
SrcList *pTabList,
Expr *pWhere
)
void sqlite3DeleteTriggerStep(TriggerStep *pTriggerStep)
void sqlite3Detach(Parse *pParse, Expr *pDbname)
void sqlite3DropIndex(Parse *pParse, SrcList *pName, int ifExists)
void sqlite3DropTable(Parse *pParse, SrcList *pName, int isView, int noErr)
void sqlite3DropTrigger(Parse *pParse, SrcList *pName, int noErr)
void sqlite3ExprAssignVarNumber(Parse *pParse, Expr *pExpr)
void sqlite3ExprDelete(Expr *p)
Expr *sqlite3ExprFunction(Parse *pParse, ExprList *pList, Token *pToken)
void sqlite3ExprListDelete(ExprList *pList)
Expr *sqlite3ExprSetColl(Parse *pParse, Expr *pExpr, Token *pName)
void sqlite3ExprSetHeight(Expr *p)
void sqlite3ExprSpan(Expr *pExpr, Token *pLeft, Token *pRight)
void sqlite3FinishTrigger(
Parse *pParse,
TriggerStep *pStepList,
Token *pAll
)
IdList *sqlite3IdListAppend(sqlite3 *db, IdList *pList, Token *pToken)
void sqlite3IdListDelete(IdList *pList)
void sqlite3Insert(
Parse *pParse,
SrcList *pTabList,
ExprList *pList,
Select *pSelect,
IdList *pColumn,
int onError
)
int sqlite3JoinType(Parse *pParse, Token *pA, Token *pB, Token *pC)
Expr *sqlite3PExpr(
Parse *pParse,
int op,
Expr *pLeft,
Expr *pRight,
const Token *pToken
)
void sqlite3Pragma(
Parse *pParse,
Token *pId1,
Token *pId2,
Token *pValue,
int minusFlag
)
Expr *sqlite3RegisterExpr(Parse *pParse, Token *pToken)
void sqlite3Reindex(Parse *pParse, Token *pName1, Token *pName2)
void sqlite3RollbackTransaction(Parse *pParse)
int sqlite3Select(
Parse *pParse,
Select *p,
SelectDest *pDest,
Select *pParent,
int parentTab,
int *pParentAgg,
char *aff
)
void sqlite3SelectDelete(Select *p)
Select *sqlite3SelectNew(
Parse *pParse,
ExprList *pEList,
SrcList *pSrc,
Expr *pWhere,
ExprList *pGroupBy,
Expr *pHaving,
ExprList *pOrderBy,
int isDistinct,
Expr *pLimit,
Expr *pOffset
)
SrcList *sqlite3SrcListAppendFromTerm(
Parse *pParse,
SrcList *p,
Token *pTable,
Token *pDatabase,
Token *pAlias,
Select *pSubquery,
Expr *pOn,
IdList *pUsing
)
void sqlite3SrcListDelete(SrcList *pList)
void sqlite3SrcListShiftJoinType(SrcList *p)
TriggerStep *sqlite3TriggerDeleteStep(
sqlite3 *db,
Token *pTableName,
Expr *pWhere
)
TriggerStep *sqlite3TriggerInsertStep(
sqlite3 *db,
Token *pTableName,
IdList *pColumn,
ExprList *pEList,
Select *pSelect,
int orconf
)
TriggerStep *sqlite3TriggerSelectStep(sqlite3 *db, Select *pSelect)
TriggerStep *sqlite3TriggerUpdateStep(
sqlite3 *db,
Token *pTableName,
ExprList *pEList,
Expr *pWhere,
int orconf
)
void sqlite3Update(
Parse *pParse,
SrcList *pTabList,
ExprList *pChanges,
Expr *pWhere,
int onError
)
void sqlite3Vacuum(Parse *pParse)
void sqlite3VtabArgExtend(Parse *pParse, Token *p)
void sqlite3VtabArgInit(Parse *pParse)
void sqlite3VtabBeginParse(
Parse *pParse,
Token *pName1,
Token *pName2,
Token *pModuleName
)
void sqlite3VtabFinishParse(Parse *pParse, Token *pEnd)
void sqlite3DeleteTable(Table *pTable)
void sqlite3DeleteTrigger(Trigger *pTrigger)
