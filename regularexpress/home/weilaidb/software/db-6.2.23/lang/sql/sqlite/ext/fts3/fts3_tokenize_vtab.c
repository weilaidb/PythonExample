#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
typedef struct Fts3tokTable Fts3tokTable;
typedef struct Fts3tokCursor Fts3tokCursor;
struct Fts3tokTable ;
struct Fts3tokCursor ;
static int fts3tokQueryTokenizer(
Fts3Hash *pHash,
const char *zName,
const sqlite3_tokenizer_module **pp,
char **pzErr
)
static int fts3tokDequoteArray(
int argc,
const char * const *argv,
char ***pazDequote
)
#define FTS3_TOK_SCHEMA "CREATE TABLE x(input, token, start, end, position)"
static int fts3tokConnectMethod(
sqlite3 *db,
void *pHash,
int argc,
const char * const *argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int fts3tokDisconnectMethod(sqlite3_vtab *pVtab)
static int fts3tokBestIndexMethod(
sqlite3_vtab *pVTab,
sqlite3_index_info *pInfo
)
static int fts3tokOpenMethod(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCsr)
static void fts3tokResetCursor(Fts3tokCursor *pCsr)
static int fts3tokCloseMethod(sqlite3_vtab_cursor *pCursor)
static int fts3tokNextMethod(sqlite3_vtab_cursor *pCursor)
static int fts3tokFilterMethod(
sqlite3_vtab_cursor *pCursor,
int idxNum,
const char *idxStr,
int nVal,
sqlite3_value **apVal
)
static int fts3tokEofMethod(sqlite3_vtab_cursor *pCursor)
static int fts3tokColumnMethod(
sqlite3_vtab_cursor *pCursor,
sqlite3_context *pCtx,
int iCol
)
static int fts3tokRowidMethod(
sqlite3_vtab_cursor *pCursor,
sqlite_int64 *pRowid
)
int sqlite3Fts3InitTok(sqlite3 *db, Fts3Hash *pHash)
