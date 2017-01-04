struct VtabCtx ;
static int createModule(
sqlite3 *db,
const char *zName,
const sqlite3_module *pModule,
void *pAux,
void (*xDestroy)(void *)
)
int sqlite3_create_module(
sqlite3 *db,
const char *zName,
const sqlite3_module *pModule,
void *pAux
)
int sqlite3_create_module_v2(
sqlite3 *db,
const char *zName,
const sqlite3_module *pModule,
void *pAux,
void (*xDestroy)(void *)
)
void sqlite3VtabLock(VTable *pVTab)
VTable *sqlite3GetVTable(sqlite3 *db, Table *pTab)
void sqlite3VtabUnlock(VTable *pVTab)
static VTable *vtabDisconnectAll(sqlite3 *db, Table *p)
void sqlite3VtabDisconnect(sqlite3 *db, Table *p)
void sqlite3VtabUnlockList(sqlite3 *db)
void sqlite3VtabClear(sqlite3 *db, Table *p)
static void addModuleArgument(sqlite3 *db, Table *pTable, char *zArg)
void sqlite3VtabBeginParse(
Parse *pParse,
Token *pName1,
Token *pName2,
Token *pModuleName,
int ifNotExists
)
static void addArgumentToVtab(Parse *pParse)
void sqlite3VtabFinishParse(Parse *pParse, Token *pEnd)
void sqlite3VtabArgInit(Parse *pParse)
void sqlite3VtabArgExtend(Parse *pParse, Token *p)
static int vtabCallConstructor(
sqlite3 *db,
Table *pTab,
Module *pMod,
int (*xConstruct)(sqlite3*,void*,int,const char*const*,sqlite3_vtab**,char**),
char **pzErr
)
int sqlite3VtabCallConnect(Parse *pParse, Table *pTab)
static int growVTrans(sqlite3 *db)
static void addToVTrans(sqlite3 *db, VTable *pVTab)
int sqlite3VtabCallCreate(sqlite3 *db, int iDb, const char *zTab, char **pzErr)
int sqlite3_declare_vtab(sqlite3 *db, const char *zCreateTable)
int sqlite3VtabCallDestroy(sqlite3 *db, int iDb, const char *zTab)
static void callFinaliser(sqlite3 *db, int offset)
int sqlite3VtabSync(sqlite3 *db, Vdbe *p)
int sqlite3VtabRollback(sqlite3 *db)
int sqlite3VtabCommit(sqlite3 *db)
int sqlite3VtabBegin(sqlite3 *db, VTable *pVTab)
int sqlite3VtabSavepoint(sqlite3 *db, int op, int iSavepoint)
FuncDef *sqlite3VtabOverloadFunction(
sqlite3 *db,
FuncDef *pDef,
int nArg,
Expr *pExpr
)
void sqlite3VtabMakeWritable(Parse *pParse, Table *pTab)
int sqlite3_vtab_on_conflict(sqlite3 *db)
int sqlite3_vtab_config(sqlite3 *db, int op, ...)
