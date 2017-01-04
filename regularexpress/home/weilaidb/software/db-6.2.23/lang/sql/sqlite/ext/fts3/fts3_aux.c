#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
typedef struct Fts3auxTable Fts3auxTable;
typedef struct Fts3auxCursor Fts3auxCursor;
struct Fts3auxTable ;
struct Fts3auxCursor ;
#define FTS3_AUX_SCHEMA \
"CREATE TABLE x(term, col, documents, occurrences, languageid HIDDEN)"
static int fts3auxConnectMethod(
sqlite3 *db,
void *pUnused,
int argc,
const char * const *argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int fts3auxDisconnectMethod(sqlite3_vtab *pVtab)
#define FTS4AUX_EQ_CONSTRAINT 1
#define FTS4AUX_GE_CONSTRAINT 2
#define FTS4AUX_LE_CONSTRAINT 4
static int fts3auxBestIndexMethod(
sqlite3_vtab *pVTab,
sqlite3_index_info *pInfo
)
static int fts3auxOpenMethod(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCsr)
static int fts3auxCloseMethod(sqlite3_vtab_cursor *pCursor)
static int fts3auxGrowStatArray(Fts3auxCursor *pCsr, int nSize)
static int fts3auxNextMethod(sqlite3_vtab_cursor *pCursor)
static int fts3auxFilterMethod(
sqlite3_vtab_cursor *pCursor,
int idxNum,
const char *idxStr,
int nVal,
sqlite3_value **apVal
)
static int fts3auxEofMethod(sqlite3_vtab_cursor *pCursor)
static int fts3auxColumnMethod(
sqlite3_vtab_cursor *pCursor,
sqlite3_context *pCtx,
int iCol
)
static int fts3auxRowidMethod(
sqlite3_vtab_cursor *pCursor,
sqlite_int64 *pRowid
)
int sqlite3Fts3InitAux(sqlite3 *db)
