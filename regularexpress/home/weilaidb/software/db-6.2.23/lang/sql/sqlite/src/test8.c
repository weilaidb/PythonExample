typedef struct echo_vtab echo_vtab;
typedef struct echo_cursor echo_cursor;
struct echo_vtab ;
struct echo_cursor ;
static int simulateVtabError(echo_vtab *p, const char *zMethod)
static void dequoteString(char *z)
static int getColumnNames(
sqlite3 *db,
const char *zTab,
char ***paCol,
int *pnCol
)
static int getIndexArray(
sqlite3 *db,
const char *zTab,
int nCol,
int **paIndex
)
static void appendToEchoModule(Tcl_Interp *interp, const char *zArg)
static int echoDeclareVtab(
echo_vtab *pVtab,
sqlite3 *db
)
static int echoDestructor(sqlite3_vtab *pVtab)
typedef struct EchoModule EchoModule;
struct EchoModule ;
static int echoConstructor(
sqlite3 *db,
void *pAux,
int argc, const char *const*argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int echoCreate(
sqlite3 *db,
void *pAux,
int argc, const char *const*argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int echoConnect(
sqlite3 *db,
void *pAux,
int argc, const char *const*argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int echoDisconnect(sqlite3_vtab *pVtab)
static int echoDestroy(sqlite3_vtab *pVtab)
static int echoOpen(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCursor)
static int echoClose(sqlite3_vtab_cursor *cur)
static int echoEof(sqlite3_vtab_cursor *cur)
static int echoNext(sqlite3_vtab_cursor *cur)
static int echoColumn(sqlite3_vtab_cursor *cur, sqlite3_context *ctx, int i)
static int echoRowid(sqlite3_vtab_cursor *cur, sqlite_int64 *pRowid)
static int hashString(const char *zString)
static int echoFilter(
sqlite3_vtab_cursor *pVtabCursor,
int idxNum, const char *idxStr,
int argc, sqlite3_value **argv
)
static void string_concat(char **pzStr, char *zAppend, int doFree, int *pRc)
static int echoBestIndex(sqlite3_vtab *tab, sqlite3_index_info *pIdxInfo)
int echoUpdate(
sqlite3_vtab *tab,
int nData,
sqlite3_value **apData,
sqlite_int64 *pRowid
)
static int echoTransactionCall(sqlite3_vtab *tab, const char *zCall)
static int echoBegin(sqlite3_vtab *tab)
static int echoSync(sqlite3_vtab *tab)
static int echoCommit(sqlite3_vtab *tab)
static int echoRollback(sqlite3_vtab *tab)
static void overloadedGlobFunction(
sqlite3_context *pContext,
int nArg,
sqlite3_value **apArg
)
static int echoFindFunction(
sqlite3_vtab *vtab,
int nArg,
const char *zFuncName,
void (**pxFunc)(sqlite3_context*,int,sqlite3_value**),
void **ppArg
)
static int echoRename(sqlite3_vtab *vtab, const char *zNewName)
static int echoSavepoint(sqlite3_vtab *pVTab, int iSavepoint)
static int echoRelease(sqlite3_vtab *pVTab, int iSavepoint)
static int echoRollbackTo(sqlite3_vtab *pVTab, int iSavepoint)
static sqlite3_module echoModule = ;
static sqlite3_module echoModuleV2 = ;
extern int getDbPointer(Tcl_Interp *interp, const char *zA, sqlite3 **ppDb);
extern const char *sqlite3ErrName(int);
static void moduleDestroy(void *p)
static int register_echo_module(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int declare_vtab(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int Sqlitetest8_Init(Tcl_Interp *interp)
