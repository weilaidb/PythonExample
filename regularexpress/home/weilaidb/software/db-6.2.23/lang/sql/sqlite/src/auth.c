int sqlite3_set_authorizer(
sqlite3 *db,
int (*xAuth)(void*,int,const char*,const char*,const char*,const char*),
void *pArg
)
static void sqliteAuthBadReturnCode(Parse *pParse)
int sqlite3AuthReadCol(
Parse *pParse,
const char *zTab,
const char *zCol,
int iDb
)
void sqlite3AuthRead(
Parse *pParse,
Expr *pExpr,
Schema *pSchema,
SrcList *pTabList
)
int sqlite3AuthCheck(
Parse *pParse,
int code,
const char *zArg1,
const char *zArg2,
const char *zArg3
)
void sqlite3AuthContextPush(
Parse *pParse,
AuthContext *pContext,
const char *zContext
)
void sqlite3AuthContextPop(AuthContext *pContext)
