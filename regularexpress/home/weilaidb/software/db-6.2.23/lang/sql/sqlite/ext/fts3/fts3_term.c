#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
typedef struct Fts3termTable Fts3termTable;
typedef struct Fts3termCursor Fts3termCursor;
struct Fts3termTable ;
struct Fts3termCursor ;
#define FTS3_TERMS_SCHEMA "CREATE TABLE x(term, docid, col, pos)"
static int fts3termConnectMethod(
sqlite3 *db,
void *pCtx,
int argc,
const char * const *argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int fts3termDisconnectMethod(sqlite3_vtab *pVtab)
#define FTS4AUX_EQ_CONSTRAINT 1
#define FTS4AUX_GE_CONSTRAINT 2
#define FTS4AUX_LE_CONSTRAINT 4
static int fts3termBestIndexMethod(
sqlite3_vtab *pVTab,
sqlite3_index_info *pInfo
)
static int fts3termOpenMethod(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCsr)
static int fts3termCloseMethod(sqlite3_vtab_cursor *pCursor)
static int fts3termNextMethod(sqlite3_vtab_cursor *pCursor)
static int fts3termFilterMethod(
sqlite3_vtab_cursor *pCursor,
int idxNum,
const char *idxStr,
int nVal,
sqlite3_value **apVal
)
static int fts3termEofMethod(sqlite3_vtab_cursor *pCursor)
static int fts3termColumnMethod(
sqlite3_vtab_cursor *pCursor,
sqlite3_context *pCtx,
int iCol
)
static int fts3termRowidMethod(
sqlite3_vtab_cursor *pCursor,
sqlite_int64 *pRowid
)
int sqlite3Fts3InitTerm(sqlite3 *db)
