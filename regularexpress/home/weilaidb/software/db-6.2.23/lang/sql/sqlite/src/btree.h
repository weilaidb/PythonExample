#define _BTREE_H_
#define SQLITE_N_BTREE_META 16
#define SQLITE_DEFAULT_AUTOVACUUM 0
#define BTREE_AUTOVACUUM_NONE 0
#define BTREE_AUTOVACUUM_FULL 1
#define BTREE_AUTOVACUUM_INCR 2
typedef struct Btree Btree;
typedef struct BtCursor BtCursor;
typedef struct BtShared BtShared;
int sqlite3BtreeOpen(
sqlite3_vfs *pVfs,
const char *zFilename,
sqlite3 *db,
Btree **ppBtree,
int flags,
int vfsFlags
);
#define BTREE_OMIT_JOURNAL  1
#define BTREE_MEMORY        2
#define BTREE_SINGLE        4
#define BTREE_UNORDERED     8
int sqlite3BtreeClose(Btree*);
int sqlite3BtreeSetCacheSize(Btree*,int);
#if SQLITE_MAX_MMAP_SIZE>0
int sqlite3BtreeSetMmapLimit(Btree*,sqlite3_int64);
int sqlite3BtreeSetPagerFlags(Btree*,unsigned);
int sqlite3BtreeSyncDisabled(Btree*);
int sqlite3BtreeSetPageSize(Btree *p, int nPagesize, int nReserve, int eFix);
int sqlite3BtreeGetPageSize(Btree*);
int sqlite3BtreeMaxPageCount(Btree*,int);
u32 sqlite3BtreeLastPage(Btree*);
int sqlite3BtreeSecureDelete(Btree*,int);
int sqlite3BtreeGetOptimalReserve(Btree*);
int sqlite3BtreeGetReserveNoMutex(Btree *p);
int sqlite3BtreeSetAutoVacuum(Btree *, int);
int sqlite3BtreeGetAutoVacuum(Btree *);
int sqlite3BtreeBeginTrans(Btree*,int);
int sqlite3BtreeCommitPhaseOne(Btree*, const char *zMaster);
int sqlite3BtreeCommitPhaseTwo(Btree*, int);
int sqlite3BtreeCommit(Btree*);
int sqlite3BtreeRollback(Btree*,int,int);
int sqlite3BtreeBeginStmt(Btree*,int);
int sqlite3BtreeCreateTable(Btree*, int*, int flags);
int sqlite3BtreeIsInTrans(Btree*);
int sqlite3BtreeIsInReadTrans(Btree*);
int sqlite3BtreeIsInBackup(Btree*);
void *sqlite3BtreeSchema(Btree *, int, void(*)(void *));
int sqlite3BtreeSchemaLocked(Btree *pBtree);
int sqlite3BtreeLockTable(Btree *pBtree, int iTab, u8 isWriteLock);
int sqlite3BtreeSavepoint(Btree *, int, int);
const char *sqlite3BtreeGetFilename(Btree *);
const char *sqlite3BtreeGetJournalname(Btree *);
int sqlite3BtreeCopyFile(Btree *, Btree *);
int sqlite3BtreeIncrVacuum(Btree *);
#define BTREE_INTKEY     1
#define BTREE_BLOBKEY    2
int sqlite3BtreeDropTable(Btree*, int, int*);
int sqlite3BtreeClearTable(Btree*, int, int*);
int sqlite3BtreeClearTableOfCursor(BtCursor*);
int sqlite3BtreeTripAllCursors(Btree*, int, int);
void sqlite3BtreeGetMeta(Btree *pBtree, int idx, u32 *pValue);
int sqlite3BtreeUpdateMeta(Btree*, int idx, u32 value);
int sqlite3BtreeNewDb(Btree *p);
int sqlite3BtreeHandleCacheFixup(Btree *, int);
#define BTREE_FREE_PAGE_COUNT     0
#define BTREE_SCHEMA_VERSION      1
#define BTREE_FILE_FORMAT         2
#define BTREE_DEFAULT_CACHE_SIZE  3
#define BTREE_LARGEST_ROOT_PAGE   4
#define BTREE_TEXT_ENCODING       5
#define BTREE_USER_VERSION        6
#define BTREE_INCR_VACUUM         7
#define BTREE_APPLICATION_ID      8
#define BTREE_DATA_VERSION        15
#define BTREE_BULKLOAD 0x00000001
#define BTREE_SEEK_EQ  0x00000002
int sqlite3BtreeCursor(
Btree*,
int iTable,
int wrFlag,
struct KeyInfo*,
BtCursor *pCursor
);
int sqlite3BtreeCursorSize(void);
void sqlite3BtreeCursorZero(BtCursor*);
int sqlite3BtreeCloseCursor(BtCursor*);
int sqlite3BtreeMovetoUnpacked(
BtCursor*,
UnpackedRecord *pUnKey,
i64 intKey,
int bias,
int *pRes
);
int sqlite3BtreeCursorHasMoved(BtCursor*);
int sqlite3BtreeCursorRestore(BtCursor*, int*);
int sqlite3BtreeDelete(BtCursor*);
int sqlite3BtreeInsert(BtCursor*, const void *pKey, i64 nKey,
const void *pData, int nData,
int nZero, int bias, int seekResult);
int sqlite3BtreeFirst(BtCursor*, int *pRes);
int sqlite3BtreeLast(BtCursor*, int *pRes);
int sqlite3BtreeNext(BtCursor*, int *pRes);
int sqlite3BtreeEof(BtCursor*);
int sqlite3BtreePrevious(BtCursor*, int *pRes);
int sqlite3BtreeKeySize(BtCursor*, i64 *pSize);
int sqlite3BtreeKey(BtCursor*, u32 offset, u32 amt, void*);
const void *sqlite3BtreeKeyFetch(BtCursor*, u32 *pAmt);
const void *sqlite3BtreeDataFetch(BtCursor*, u32 *pAmt);
int sqlite3BtreeDataSize(BtCursor*, u32 *pSize);
int sqlite3BtreeData(BtCursor*, u32 offset, u32 amt, void*);
char *sqlite3BtreeIntegrityCheck(Btree*, int *aRoot, int nRoot, int, int*);
struct Pager *sqlite3BtreePager(Btree*);
int sqlite3BtreePutData(BtCursor*, u32 offset, u32 amt, void*);
void sqlite3BtreeIncrblobCursor(BtCursor *);
void sqlite3BtreeClearCursor(BtCursor *);
int sqlite3BtreeSetVersion(Btree *pBt, int iVersion);
void sqlite3BtreeCursorHints(BtCursor *, unsigned int mask);
int sqlite3BtreeCursorHasHint(BtCursor*, unsigned int mask);
int sqlite3BtreeIsReadonly(Btree *pBt);
int sqlite3HeaderSizeBtree(void);
int sqlite3BtreeCursorIsValid(BtCursor*);
int sqlite3BtreeCount(BtCursor *, i64 *);
int sqlite3BtreeCursorInfo(BtCursor*, int*, int);
void sqlite3BtreeCursorList(Btree*);
int sqlite3BtreeCheckpoint(Btree*, int, int *, int *);
void sqlite3BtreeEnter(Btree*);
void sqlite3BtreeEnterAll(sqlite3*);
# define sqlite3BtreeEnter(X)
# define sqlite3BtreeEnterAll(X)
#if !defined(SQLITE_OMIT_SHARED_CACHE) && SQLITE_THREADSAFE
int sqlite3BtreeSharable(Btree*);
void sqlite3BtreeLeave(Btree*);
void sqlite3BtreeEnterCursor(BtCursor*);
void sqlite3BtreeLeaveCursor(BtCursor*);
void sqlite3BtreeLeaveAll(sqlite3*);
int sqlite3BtreeHoldsMutex(Btree*);
int sqlite3BtreeHoldsAllMutexes(sqlite3*);
int sqlite3SchemaMutexHeld(sqlite3*,int,Schema*);
# define sqlite3BtreeSharable(X) 0
# define sqlite3BtreeLeave(X)
# define sqlite3BtreeEnterCursor(X)
# define sqlite3BtreeLeaveCursor(X)
# define sqlite3BtreeLeaveAll(X)
# define sqlite3BtreeHoldsMutex(X) 1
# define sqlite3BtreeHoldsAllMutexes(X) 1
# define sqlite3SchemaMutexHeld(X,Y,Z) 1
