int sqlite3_release_memory(int n)
typedef struct ScratchFreeslot  ScratchFreeslot;
static SQLITE_WSD struct Mem0Global  mem0 = ;
#define mem0 GLOBAL(struct Mem0Global, mem0)
sqlite3_mutex *sqlite3MallocMutex(void)
static void softHeapLimitEnforcer(
void *NotUsed,
sqlite3_int64 NotUsed2,
int allocSize
)
static int sqlite3MemoryAlarm(
void(*xCallback)(void *pArg, sqlite3_int64 used,int N),
void *pArg,
sqlite3_int64 iThreshold
)
int sqlite3_memory_alarm(
void(*xCallback)(void *pArg, sqlite3_int64 used,int N),
void *pArg,
sqlite3_int64 iThreshold
)
sqlite3_int64 sqlite3_soft_heap_limit64(sqlite3_int64 n)
void sqlite3_soft_heap_limit(int n)
int sqlite3MallocInit(void)
int sqlite3HeapNearlyFull(void)
void sqlite3MallocEnd(void)
sqlite3_int64 sqlite3_memory_used(void)
sqlite3_int64 sqlite3_memory_highwater(int resetFlag)
static void sqlite3MallocAlarm(int nByte)
static int mallocWithAlarm(int n, void **pp)
void *sqlite3Malloc(u64 n)
void *sqlite3_malloc(int n)
void *sqlite3_malloc64(sqlite3_uint64 n)
#if SQLITE_THREADSAFE==0 && !defined(NDEBUG)
static int scratchAllocOut = 0;
void *sqlite3ScratchMalloc(int n)
void sqlite3ScratchFree(void *p)
static int isLookaside(sqlite3 *db, void *p)
#define isLookaside(A,B) 0
int sqlite3MallocSize(void *p)
int sqlite3DbMallocSize(sqlite3 *db, void *p)
sqlite3_uint64 sqlite3_msize(void *p)
void sqlite3_free(void *p)
static SQLITE_NOINLINE void measureAllocationSize(sqlite3 *db, void *p)
void sqlite3DbFree(sqlite3 *db, void *p)
void *sqlite3Realloc(void *pOld, u64 nBytes)
void *sqlite3_realloc(void *pOld, int n)
void *sqlite3_realloc64(void *pOld, sqlite3_uint64 n)
void *sqlite3MallocZero(u64 n)
void *sqlite3DbMallocZero(sqlite3 *db, u64 n)
void *sqlite3DbMallocRaw(sqlite3 *db, u64 n)
void *sqlite3DbRealloc(sqlite3 *db, void *p, u64 n)
void *sqlite3DbReallocOrFree(sqlite3 *db, void *p, u64 n)
char *sqlite3DbStrDup(sqlite3 *db, const char *z)
char *sqlite3DbStrNDup(sqlite3 *db, const char *z, u64 n)
void sqlite3SetString(char **pz, sqlite3 *db, const char *zFormat, ...)
static SQLITE_NOINLINE int apiOomError(sqlite3 *db)
int sqlite3ApiExit(sqlite3* db, int rc)
