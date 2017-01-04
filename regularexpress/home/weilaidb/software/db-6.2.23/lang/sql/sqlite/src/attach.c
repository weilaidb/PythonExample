static int resolveAttachExpr(NameContext *pName, Expr *pExpr)
static void attachFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **argv
)
static void detachFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **argv
)
static void codeAttach(
Parse *pParse,
int type,
FuncDef const *pFunc,
Expr *pAuthArg,
Expr *pFilename,
Expr *pDbname,
Expr *pKey
)
void sqlite3Detach(Parse *pParse, Expr *pDbname)
void sqlite3Attach(Parse *pParse, Expr *p, Expr *pDbname, Expr *pKey)
void sqlite3FixInit(
DbFixer *pFix,
Parse *pParse,
int iDb,
const char *zType,
const Token *pName
)
int sqlite3FixSrcList(
DbFixer *pFix,
SrcList *pList
)
#if !defined(SQLITE_OMIT_VIEW) || !defined(SQLITE_OMIT_TRIGGER)
int sqlite3FixSelect(
DbFixer *pFix,
Select *pSelect
)
int sqlite3FixExpr(
DbFixer *pFix,
Expr *pExpr
)
int sqlite3FixExprList(
DbFixer *pFix,
ExprList *pList
)
int sqlite3FixTriggerStep(
DbFixer *pFix,
TriggerStep *pStep
)
