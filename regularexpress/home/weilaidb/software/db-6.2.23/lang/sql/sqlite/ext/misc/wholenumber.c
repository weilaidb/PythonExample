SQLITE_EXTENSION_INIT1
typedef struct wholenumber_cursor wholenumber_cursor;
struct wholenumber_cursor ;
static int wholenumberConnect(
sqlite3 *db,
void *pAux,
int argc, const char *const*argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int wholenumberDisconnect(sqlite3_vtab *pVtab)
static int wholenumberOpen(sqlite3_vtab *p, sqlite3_vtab_cursor **ppCursor)
static int wholenumberClose(sqlite3_vtab_cursor *cur)
static int wholenumberNext(sqlite3_vtab_cursor *cur)
static int wholenumberColumn(
sqlite3_vtab_cursor *cur,
sqlite3_context *ctx,
int i
)
static int wholenumberRowid(sqlite3_vtab_cursor *cur, sqlite_int64 *pRowid)
static int wholenumberEof(sqlite3_vtab_cursor *cur)
static int wholenumberFilter(
sqlite3_vtab_cursor *pVtabCursor,
int idxNum, const char *idxStr,
int argc, sqlite3_value **argv
)
static int wholenumberBestIndex(
sqlite3_vtab *tab,
sqlite3_index_info *pIdxInfo
)
static sqlite3_module wholenumberModule = ;
__declspec(dllexport)
int sqlite3_wholenumber_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
