SQLITE_EXTENSION_INIT1
typedef struct closure_vtab closure_vtab;
typedef struct closure_cursor closure_cursor;
typedef struct closure_queue closure_queue;
typedef struct closure_avl closure_avl;
struct closure_avl ;
static void closureAvlRecomputeHeight(closure_avl *p)
static closure_avl *closureAvlRotateBefore(closure_avl *pP)
static closure_avl *closureAvlRotateAfter(closure_avl *pP)
static closure_avl **closureAvlFromPtr(closure_avl *p, closure_avl **pp)
static closure_avl *closureAvlBalance(closure_avl *p)
static closure_avl *closureAvlSearch(closure_avl *p, sqlite3_int64 id)
static closure_avl *closureAvlFirst(closure_avl *p)
closure_avl *closureAvlNext(closure_avl *p)
static closure_avl *closureAvlInsert(
closure_avl **ppHead,
closure_avl *pNew
)
static void closureAvlDestroy(closure_avl *p, void (*xDestroy)(closure_avl*))
struct closure_vtab ;
struct closure_cursor ;
struct closure_queue ;
static void queuePush(closure_queue *pQueue, closure_avl *pNode)
static closure_avl *queuePull(closure_queue *pQueue)
static char *closureDequote(const char *zIn)
static void closureFree(closure_vtab *p)
static int closureDisconnect(sqlite3_vtab *pVtab)
static const char *closureValueOfKey(const char *zKey, const char *zStr)
static int closureConnect(
sqlite3 *db,
void *pAux,
int argc, const char *const*argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int closureOpen(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCursor)
static void closureClearCursor(closure_cursor *pCur)
static int closureClose(sqlite3_vtab_cursor *cur)
static int closureNext(sqlite3_vtab_cursor *cur)
static int closureInsertNode(
closure_queue *pQueue,
closure_cursor *pCur,
sqlite3_int64 id,
int iGeneration
)
static int closureFilter(
sqlite3_vtab_cursor *pVtabCursor,
int idxNum, const char *idxStr,
int argc, sqlite3_value **argv
)
static int closureColumn(sqlite3_vtab_cursor *cur, sqlite3_context *ctx, int i)
static int closureRowid(sqlite3_vtab_cursor *cur, sqlite_int64 *pRowid)
static int closureEof(sqlite3_vtab_cursor *cur)
static int closureBestIndex(
sqlite3_vtab *pTab,
sqlite3_index_info *pIdxInfo
)
static sqlite3_module closureModule = ;
__declspec(dllexport)
int sqlite3_closure_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
