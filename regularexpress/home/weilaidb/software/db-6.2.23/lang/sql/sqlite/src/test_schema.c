#define SCHEMA \
"CREATE TABLE x("                                                            \
"database,"         \
"tablename,"                                   \
"cid,"    \
"name,"                                     \
"type,"               \
"not_null,"         \
"dflt_value,"                   \
"pk"  \
")"
SQLITE_EXTENSION_INIT1
typedef struct schema_vtab schema_vtab;
typedef struct schema_cursor schema_cursor;
struct schema_vtab ;
struct schema_cursor ;
static int schemaDestroy(sqlite3_vtab *pVtab)
static int schemaCreate(
sqlite3 *db,
void *pAux,
int argc, const char *const*argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int schemaOpen(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCursor)
static int schemaClose(sqlite3_vtab_cursor *cur)
static int schemaColumn(sqlite3_vtab_cursor *cur, sqlite3_context *ctx, int i)
static int schemaRowid(sqlite3_vtab_cursor *cur, sqlite_int64 *pRowid)
static int finalize(sqlite3_stmt **ppStmt)
static int schemaEof(sqlite3_vtab_cursor *cur)
static int schemaNext(sqlite3_vtab_cursor *cur)
static int schemaFilter(
sqlite3_vtab_cursor *pVtabCursor,
int idxNum, const char *idxStr,
int argc, sqlite3_value **argv
)
static int schemaBestIndex(sqlite3_vtab *tab, sqlite3_index_info *pIdxInfo)
static sqlite3_module schemaModule = ;
extern int getDbPointer(Tcl_Interp *interp, const char *zA, sqlite3 **ppDb);
static int register_schema_module(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int Sqlitetestschema_Init(Tcl_Interp *interp)
__declspec(dllexport)
int sqlite3_schema_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
