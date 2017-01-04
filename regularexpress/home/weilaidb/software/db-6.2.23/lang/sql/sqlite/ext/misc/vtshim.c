SQLITE_EXTENSION_INIT1
typedef struct vtshim_aux vtshim_aux;
typedef struct vtshim_vtab vtshim_vtab;
typedef struct vtshim_cursor vtshim_cursor;
struct vtshim_aux ;
struct vtshim_vtab ;
struct vtshim_cursor ;
#define VTSHIM_COPY_ERRMSG()                                             \
do  while (0)
static int vtshimCreate(
sqlite3 *db,
void *ppAux,
int argc,
const char *const*argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int vtshimConnect(
sqlite3 *db,
void *ppAux,
int argc,
const char *const*argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int vtshimBestIndex(
sqlite3_vtab *pBase,
sqlite3_index_info *pIdxInfo
)
static int vtshimDisconnect(sqlite3_vtab *pBase)
static int vtshimDestroy(sqlite3_vtab *pBase)
static int vtshimOpen(sqlite3_vtab *pBase, sqlite3_vtab_cursor **ppCursor)
static int vtshimClose(sqlite3_vtab_cursor *pX)
static int vtshimFilter(
sqlite3_vtab_cursor *pX,
int idxNum,
const char *idxStr,
int argc,
sqlite3_value **argv
)
static int vtshimNext(sqlite3_vtab_cursor *pX)
static int vtshimEof(sqlite3_vtab_cursor *pX)
static int vtshimColumn(sqlite3_vtab_cursor *pX, sqlite3_context *ctx, int i)
static int vtshimRowid(sqlite3_vtab_cursor *pX, sqlite3_int64 *pRowid)
static int vtshimUpdate(
sqlite3_vtab *pBase,
int argc,
sqlite3_value **argv,
sqlite3_int64 *pRowid
)
static int vtshimBegin(sqlite3_vtab *pBase)
static int vtshimSync(sqlite3_vtab *pBase)
static int vtshimCommit(sqlite3_vtab *pBase)
static int vtshimRollback(sqlite3_vtab *pBase)
static int vtshimFindFunction(
sqlite3_vtab *pBase,
int nArg,
const char *zName,
void (**pxFunc)(sqlite3_context*,int,sqlite3_value**),
void **ppArg
)
static int vtshimRename(sqlite3_vtab *pBase, const char *zNewName)
static int vtshimSavepoint(sqlite3_vtab *pBase, int n)
static int vtshimRelease(sqlite3_vtab *pBase, int n)
static int vtshimRollbackTo(sqlite3_vtab *pBase, int n)
static void vtshimAuxDestructor(void *pXAux)
static int vtshimCopyModule(
const sqlite3_module *pMod,
sqlite3_module **ppMod
)
__declspec(dllexport)
void *sqlite3_create_disposable_module(
sqlite3 *db,
const char *zName,
const sqlite3_module *p,
void *pClientData,
void(*xDestroy)(void*)
)
__declspec(dllexport)
void sqlite3_dispose_module(void *pX)
__declspec(dllexport)
int sqlite3_vtshim_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
