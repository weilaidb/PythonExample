#if defined(BDBSQL_CONVERT_SQLITE) && defined(BDBSQL_FILE_PER_TABLE)
#error BDBSQL_CONVERT_SQLITE is incompatible with BDBSQL_FILE_PER_TABLE
#error BDBSQL_OMIT_SHARING has been replaced by BDBSQL_SINGLE_PROCESS
#define	sqlite3_malloc malloc
#define	sqlite3_free free
#define	sqlite3_strdup strdup
#define	sqlite3_strdup btreeStrdup
typedef struct  DB_SQL_LOCKER;
#define	DB_MIN_CACHESIZE 20
#define	US_PER_SEC 1000000
#define	ROWIDMAXSIZE 10
static int btreeCloseCursor(BtCursor *pCur, int removeList);
static int btreeConfigureDbHandle(Btree *p, int iTable, DB **dbpp, int);
static int btreeCreateDataTable(Btree *, int, CACHED_DB **);
static int btreeCreateSharedBtree(
Btree *, const char *, u_int8_t *, sqlite3 *, int, storage_mode_t);
static int btreeCreateTable(Btree *p, int *piTable, int flags);
static void btreeHandleDbError(
const DB_ENV *dbenv, const char *errpfx, const char *msg);
static int btreeDbHandleIsLocked(CACHED_DB *cached_db);
static int btreeDbHandleLock(Btree *p, CACHED_DB *cached_db);
static int btreeDbHandleUnlock(Btree *p, CACHED_DB *cached_db);
static void btreeFreeSharedBtree(BtShared *p, int clear_cache);
static int btreeGetSharedBtree(
BtShared **, u_int8_t *, sqlite3 *, storage_mode_t, int);
static int btreeHandleCacheCleanup(Btree *p, cleanup_mode_t cleanup);
static int btreeHandleCacheClear(Btree *p);
static int btreeHandleCacheLockUpdate(Btree *p, cleanup_mode_t cleanup);
static int btreeLoadBufferIntoTable(BtCursor *pCur);
static int btreeMoveto(BtCursor *pCur,
const void *pKey, i64 nKey, int bias, int *pRes);
static int btreePrepareEnvironment(Btree *p);
static int btreeRepIsClient(Btree *p);
static int btreeRepStartupFinished(Btree *p);
static int btreeRestoreCursorPosition(BtCursor *pCur, int skipMoveto);
static int btreeSetUpReplication(Btree *p, int master, u8 *replicate);
static int btreeTripAll(Btree *p, int iTable, int incrblobUpdate);
static int btreeTripWatchers(BtCursor *pBt, int incrblobUpdate);
static int indexIsCollated(KeyInfo *keyInfo);
static int supportsDuplicates(DB *db);
static int btreeFileLock(Btree *p);
static int btreeFileUnlock(Btree *p);
static int btreeReopenPrivateEnvironment(Btree *p);
static int btreeSetupLockfile(Btree *p, int *createdFile);
#define BTREE_CREATE 4
struct BtShared *g_shared_btrees = NULL;
DB_ENV *g_tmp_env;
u_int32_t g_uid_next = 0;
#define	MAX_SMALLS 100
#define	BUSY_RETRY_COUNT	100
#define	PATH_SEPARATOR	"/"
#define	pBDb	(pCur->cached_db->dbp)
#define	pDbc	(pCur->dbc)
#define	pIntKey	((pCur->flags & BTREE_INTKEY) != 0)
#define	pIsBuffer	(pCur->pBtree->pBt->resultsBuffer)
#define	GET_TABLENAME(b, sz, i, prefix)	do  while (0)
#define	GET_DURABLE(pBt)					\
((pBt)->dbStorage == DB_STORE_NAMED &&			\
((pBt)->flags & BTREE_OMIT_JOURNAL) == 0)
#define	IS_ENV_READONLY(pBt)					\
(pBt->readonly ? 1 : 0)
#define	GET_ENV_READONLY(pBt)					\
(IS_ENV_READONLY(pBt) ? DB_RDONLY : 0)
#define	IS_BTREE_READONLY(p)					\
((p->readonly || IS_ENV_READONLY(p->pBt)) ? 1 : 0)
#define	RMW(pCur)						\
(pCur->wrFlag && pCur->pBtree->pBt->dbStorage == DB_STORE_NAMED ?	\
DB_RMW : 0)
#define	RMW(pCur) 0
#define	GET_BTREE_ISOLATION(p)	0
#define	GET_BTREE_ISOLATION(p) (!p->pBt->transactional ? 0 :	\
((p->pBt->blobs_enabled) ? DB_READ_COMMITTED :		\
(((p->db->flags & SQLITE_ReadUncommitted) ?		\
DB_READ_UNCOMMITTED : DB_READ_COMMITTED) |		\
((p->pBt->read_txn_flags & DB_TXN_SNAPSHOT) ?		\
DB_TXN_SNAPSHOT : 0))))
#define	HANDLE_INCRBLOB_DEADLOCK(ret, pCur)			\
if (ret == DB_LOCK_DEADLOCK && pCur->isIncrblobHandle)
#define	GET_META_TXN(p)					\
(p->txn_excl ? pSavepointTxn :			\
(pReadTxn ? pReadTxn : pFamilyTxn))
#define	GET_META_FLAGS(p)				\
((p->txn_excl ? DB_RMW : 0) |			\
(GET_BTREE_ISOLATION(p) & ~DB_TXN_SNAPSHOT))
int dberr2sqlite(int err, Btree *p)
int closeDB(Btree *p, DB *dbp, u_int32_t flags)
#define ERR_FILE_NAME "sql-errors.txt"
void btreeGetErrorFile(const BtShared *pBt, char *fname)
static void btreeHandleDbError(
const DB_ENV *dbenv,
const char *errpfx,
const char *msg
)
static int dberr2sqlitelocked(int err, Btree *p)
void log_msg(loglevel_t level, const char *fmt, ...)
int getMetaDataFileName(const char *full_name, char **filename)
static void *btreeMalloc(size_t size)
static void *btreeRealloc(void * buff, size_t size)
static char *btreeStrdup(const char *sq)
static void btreeEventNotification(
DB_ENV *dbenv,
u_int32_t event,
void *event_info
)
static int btreeCompareIntKey(DB *dbp,
const DBT *dbt1, const DBT *dbt2, size_t *locp)
static int btreeCompareDup(DB *dbp,
const DBT *dbt1, const DBT *dbt2, size_t *locp)
static int btreeConvertSqlite(BtShared *pBt, DB_ENV *tmp_env)
int btreeOpenMetaTables(Btree *p, int *pCreating)
int btreeTableNameToId(const char *subdb, int len, int *pid)
static int btreePreloadHandles(Btree *p)
static void btreeFreeSharedBtree(BtShared *p, int clear_cache)
static int btreeCheckEnvPrepare(Btree *p)
static int btreeCheckEnvOpen(Btree *p, int createdDir, u8 replicate)
static int btreeSetUpReplication(Btree *p, int master, u8 *replicate)
static int btreeRepIsClient(Btree *p)
static int btreeRepStartupFinished(Btree *p)
static int btreePrepareEnvironment(Btree *p)
int btreeUpdateBtShared(Btree *p, int needLock)
int btreeReopenEnvironment(Btree *p, int removingRep)
int btreeOpenEnvironment(Btree *p, int needLock)
static int btreeGetSharedBtree(
BtShared **ppBt,
u_int8_t *fileid,
sqlite3 *db,
storage_mode_t store,
int vfsFlags)
static int btreeCreateSharedBtree(
Btree *p,
const char *zFilename,
u_int8_t *fileid,
sqlite3 *db,
int flags,
storage_mode_t store)
int sqlite3BtreeOpen(
sqlite3_vfs *pVfs,
const char *zFilename,
sqlite3 *db,
Btree **ppBtree,
int flags,
int vfsFlags)
static int btreeCloseAllCursors(Btree *p, DB_TXN *txn)
int sqlite3BtreeClose(Btree *p)
int sqlite3BtreeSetCacheSize(Btree *p, int mxPage)
int sqlite3BtreeSetMmapLimit(Btree *p, sqlite3_int64 szMmap)
int sqlite3BtreeSetPagerFlags(
Btree *p,
unsigned pgFlags)
int sqlite3BtreeHandleCacheFixup(Btree *p, int schema_changed)
static int btreeHandleCacheClear(Btree *p)
static int btreeHandleCacheLockUpdate(Btree *p, cleanup_mode_t cleanup)
static int btreeHandleCacheCleanup(Btree *p, cleanup_mode_t cleanup)
int btreeBeginTransInternal(Btree *p, int wrflag)
int sqlite3BtreeBeginTrans(Btree *p, int wrflag)
int sqlite3BtreeCommitPhaseOne(Btree *p, const char *zMaster)
int sqlite3BtreeCommitPhaseTwo(Btree *p, int bCleanup)
int sqlite3BtreeCommit(Btree *p)
int sqlite3BtreeRollback(Btree *p, int tripCode, int writeOnly)
int sqlite3BtreeBeginStmt(Btree *p, int iStatement)
static int btreeCompare(
DB *dbp,
const DBT *dbt1,
const DBT *dbt2,
struct KeyInfo *keyInfo)
static int btreeCompareKeyInfo(DB *dbp,
const DBT *dbt1, const DBT *dbt2, size_t *locp)
static int btreeCompareShared(DB *dbp,
const DBT *dbt1, const DBT *dbt2, size_t *locp)
static int btreeConfigureDbHandle(Btree *p, int iTable, DB **dbpp, int skipdup)
int btreeFindOrCreateDataTable(
Btree *p,
int *piTable,
CACHED_DB **ppCachedDb,
int flags)
static int btreeCreateDataTable(
Btree *p,
int iTable,
CACHED_DB **ppCachedDb)
int isDupIndex(int flags, int storage, KeyInfo *keyInfo, DB *db)
int sqlite3BtreeCursor(
Btree *p,
int iTable,
int wrFlag,
struct KeyInfo *keyInfo,
BtCursor *pCur)
int sqlite3BtreeCursorSize(void)
void sqlite3BtreeCursorZero(BtCursor *pCur)
static int btreeCloseCursor(BtCursor *pCur, int listRemove)
int sqlite3BtreeCloseCursor(BtCursor *pCur)
int indexIsCollated(KeyInfo *keyInfo)
int supportsDuplicates(DB *db)
int splitIndexKey(BtCursor *pCur)
int sqlite3BtreeMovetoUnpacked(
BtCursor *pCur, UnpackedRecord *pUnKey, i64 nKey, int bias, int *pRes)
int btreeMoveto(BtCursor *pCur, const void *pKey, i64 nKey, int bias, int *pRes)
static int btreeTripCursor(BtCursor *pCur, int incrBlobUpdate)
static int btreeTripWatchers(BtCursor *pCur, int incrBlobUpdate)
static int btreeTripAll(Btree *p, int iTable, int incrBlobUpdate)
static int btreeRestoreCursorPosition(BtCursor *pCur, int skipMoveto)
static int btreeLoadBufferIntoTable(BtCursor *pCur)
int sqlite3BtreeKeySize(BtCursor *pCur, i64 *pSize)
int sqlite3BtreeDataSize(BtCursor *pCur, u32 *pSize)
int sqlite3BtreeKey(BtCursor *pCur, u32 offset, u32 amt, void *pBuf)
int sqlite3BtreeData(BtCursor *pCur, u32 offset, u32 amt, void *pBuf)
void *allocateCursorIndex(BtCursor *pCur, u_int32_t amount)
void *btreeCreateIndexKey(BtCursor *pCur)
const void *sqlite3BtreeKeyFetch(BtCursor *pCur, u32 *pAmt)
const void *sqlite3BtreeDataFetch(BtCursor *pCur, u32 *pAmt)
void sqlite3BtreeClearCursor(BtCursor *pCur)
static int decodeResults(BtCursor *pCur)
static int cursorGet(BtCursor *pCur, int op, int *pRes)
int sqlite3BtreeFirst(BtCursor *pCur, int *pRes)
int sqlite3BtreeLast(BtCursor *pCur, int *pRes)
int sqlite3BtreeEof(BtCursor *pCur)
int sqlite3BtreeNext(BtCursor *pCur, int *pRes)
int sqlite3BtreePrevious(BtCursor *pCur, int *pRes)
static int insertData(BtCursor *pCur, int nZero, int nData)
int sqlite3BtreeInsert(
BtCursor *pCur,
const void *pKey, i64 nKey,
const void *pData, int nData,
int nZero,
int appendBias,
int seekResult)
int sqlite3BtreeDelete(BtCursor *pCur)
static int btreeCreateTable(Btree *p, int *piTable, int flags)
int sqlite3BtreeCreateTable(Btree *p, int *piTable, int flags)
int sqlite3BtreeClearTable(Btree *p, int iTable, int *pnChange)
int sqlite3BtreeDropTable(Btree *p, int iTable, int *piMoved)
void sqlite3BtreeGetMeta(Btree *p, int idx, u32 *pMeta)
int sqlite3BtreeUpdateMeta(Btree *p, int idx, u32 iMeta)
int sqlite3BtreeCount(BtCursor *pCur, i64 *pnEntry)
char *sqlite3BtreeIntegrityCheck(
Btree *pBt,
int *aRoot,
int nRoot,
int mxErr,
int *pnErr)
const char *sqlite3BtreeGetFilename(Btree *p)
int sqlite3BtreeIsInTrans(Btree *p)
int sqlite3BtreeCheckpoint(Btree *p, int eMode, int *pnLog, int *pnCkpt)
int sqlite3BtreeCursorHasMoved(BtCursor *pCur)
int sqlite3BtreeCursorIsValid(BtCursor *pCur)
int sqlite3BtreePutData(BtCursor *pCur, u32 offset, u32 amt, void *z)
int sqlite3BtreeIsInReadTrans(Btree *p)
int sqlite3BtreeTripAllCursors(Btree*	p, int errCode, int writeOnly)
int btreeLockSchema(Btree *p, lock_mode_t lockMode)
int sqlite3BtreeLockTable(Btree *p, int iTable, u8 isWriteLock)
int sqlite3BtreeSchemaLocked(Btree *p)
int sqlite3BtreeSyncDisabled(Btree *p)
#if !defined(SQLITE_OMIT_PAGER_PRAGMAS) || !defined(SQLITE_OMIT_VACUUM)
int sqlite3BtreeSetPageSize(Btree *p, int pageSize, int nReserve, int iFix)
int sqlite3BtreeGetPageSize(Btree *p)
int sqlite3BtreeGetReserveNoMutex(Btree *p)
u32 sqlite3BtreeLastPage(Btree *p)
int sqlite3BtreeSetVersion(Btree *pBtree, int iVersion)
int sqlite3BtreeMaxPageCount(Btree *p, int mxPage)
int sqlite3BtreeSecureDelete(Btree *p, int newFlag)
const char *sqlite3BtreeGetJournalname(Btree *p)
void *sqlite3BtreeSchema(Btree *p, int nBytes, void (*xFree)(void *))
Index *btreeGetIndex(Btree *p, int iTable)
int btreeGetKeyInfo(Btree *p, int iTable, KeyInfo **pKeyInfo)
int sqlite3BtreeIncrVacuum(Btree *p)
int sqlite3BtreeIsInBackup(Btree *p)
int sqlite3BtreeGetAutoVacuum(Btree *p)
int sqlite3BtreeSetAutoVacuum(Btree *p, int autoVacuum)
sqlite3_int64 sqlite3BtreeGetCachedRowid(BtCursor *pCur)
void sqlite3BtreeSetCachedRowid(BtCursor *pCur, sqlite3_int64 iRowid)
int sqlite3BtreeSavepoint(Btree *p, int op, int iSavepoint)
Pager *sqlite3BtreePager(Btree *p)
int sqlite3_enable_shared_cache(int enable)
int btreeGetUserTable(Btree *p, DB_TXN *pTxn, DB **pDb, int iTable)
int btreeGetTables(Btree *p, int **iTables, DB_TXN *txn)
int btreeGetPageCount(Btree *p, int **tables, u32 *pageCount, DB_TXN *txn)
static int btreeDbHandleLock(Btree *p, CACHED_DB *cached_db)
static int btreeDbHandleUnlock(Btree *p, CACHED_DB *cached_db)
static int btreeDbHandleIsLocked(CACHED_DB *cached_db)
extern int __db_isbigendian(void);
#define	CMP_INT_1BYTE_MAX 0x7F
#define	CMP_INT_2BYTE_MAX 0x407F
#define	CMP_INT_3BYTE_MAX 0x20407F
#define	CMP_INT_4BYTE_MAX 0x1020407F
#if defined(_MSC_VER) && _MSC_VER < 1300
#define	CMP_INT_5BYTE_MAX 0x081020407Fi64
#define	CMP_INT_6BYTE_MAX 0x01081020407Fi64
#define	CMP_INT_7BYTE_MAX 0x0101081020407Fi64
#define	CMP_INT_8BYTE_MAX 0x010101081020407Fi64
#define	CMP_INT_5BYTE_MAX 0x081020407FLL
#define	CMP_INT_6BYTE_MAX 0x01081020407FLL
#define	CMP_INT_7BYTE_MAX 0x0101081020407FLL
#define	CMP_INT_8BYTE_MAX 0x010101081020407FLL
#define	CMP_INT_2BYTE_VAL 0x80
#define	CMP_INT_3BYTE_VAL 0xC0
#define	CMP_INT_4BYTE_VAL 0xE0
#define	CMP_INT_5BYTE_VAL 0xF0
#define	CMP_INT_6BYTE_VAL 0xF8
#define	CMP_INT_7BYTE_VAL 0xF9
#define	CMP_INT_8BYTE_VAL 0xFA
#define	CMP_INT_9BYTE_VAL 0xFB
#define	CMP_INT_2BYTE_MASK 0x3F
#define	CMP_INT_3BYTE_MASK 0x1F
#define	CMP_INT_4BYTE_MASK 0x0F
#define	CMP_INT_5BYTE_MASK 0x07
static const u_int8_t __dbsql_marshaled_int_size[] = ;
void sqlite3BtreeCursorHints(BtCursor *pCsr, unsigned int mask)
#undef sqlite3_malloc
#undef sqlite3_free
#undef sqlite3_strdup
static int openPrivateEnvironment(Btree *p, int startFamily)
static int btreeReopenPrivateEnvironment(Btree *p)
static int lockFile(int fd, int isread)
static int unlockFile(int fd)
static int btreeSetupLockfile(Btree *p, int *createdFile)
static int btreeReadlock(Btree *p, int dontreopen)
static int btreeWritelock(Btree *p, int dontReopen)
int btreeScopedFileLock(Btree *p, int iswrite, int dontreopen)
static int btreeFileLock(Btree *p)
int btreeScopedFileUnlock(Btree *p, int iswrite)
static int btreeFileUnlock(Btree *p)
int btreeHasFileLock(Btree *p, int iswrite)
void *getThreadID(sqlite3 *db)
int isCurrentThread(void *tid)
#elif defined(SQLITE_MUTEX_PTHREADS)
void *getThreadID(sqlite3 *db)
int isCurrentThread(void *tid)
#elif defined(SQLITE_MUTEX_W32)
void *getThreadID(sqlite3 *db)
int isCurrentThread(void *tid)
void *getThreadID(sqlite3 *db)
int isCurrentThread(void *tid)
int sqlite3BtreeClearTableOfCursor(BtCursor *pCur)
void sqlite3BtreeIncrblobCursor(BtCursor *pCur)
#define restoreCursorPosition(p) \
(p->eState >= CURSOR_REQUIRESEEK ? \
btreeRestoreCursorPosition(p, 0) : \
SQLITE_OK)
int sqlite3BtreeCursorRestore(BtCursor *pCur, int *pDifferentRow)
int sqlite3BtreeIsReadonly(Btree *p)
int sqlite3HeaderSizeBtree(void)
int sqlite3BtreeCursorHasHint(BtCursor *pCsr, unsigned int mask)
int sqlite3BtreeGetOptimalReserve(Btree *p)
