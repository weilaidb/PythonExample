#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_ASYNCIO)
#define MIN(x,y) ((x)<(y)?(x):(y))
#define MAX(x,y) ((x)>(y)?(x):(y))
#define UNUSED_PARAMETER(x) (void)(x)
typedef struct AsyncWrite AsyncWrite;
typedef struct AsyncFile AsyncFile;
typedef struct AsyncFileData AsyncFileData;
typedef struct AsyncFileLock AsyncFileLock;
typedef struct AsyncLock AsyncLock;
static int sqlite3async_trace = 0;
# define ASYNC_TRACE(X) if( sqlite3async_trace ) asyncTrace X
static void asyncTrace(const char *zFormat, ...)
# define ASYNC_TRACE(X)
# define TESTONLY( X ) X
# define TESTONLY( X )
static void async_mutex_enter(int eMutex);
static void async_mutex_leave(int eMutex);
static void async_cond_wait(int eCond, int eMutex);
static void async_cond_signal(int eCond);
static void async_sched_yield(void);
static int async_os_initialize(void);
static void async_os_shutdown(void);
#define ASYNC_MUTEX_LOCK    0
#define ASYNC_MUTEX_QUEUE   1
#define ASYNC_MUTEX_WRITER  2
#define ASYNC_COND_QUEUE    0
#if SQLITE_OS_WIN || defined(_WIN32) || defined(WIN32) || defined(__CYGWIN__) || defined(__MINGW32__) || defined(__BORLANDC__)
#define mutex_held(X) (GetCurrentThreadId()==primitives.aHolder[X])
static struct AsyncPrimitives  primitives = ;
static int async_os_initialize(void)
static void async_os_shutdown(void)
static void async_mutex_enter(int eMutex)
static void async_mutex_leave(int eMutex)
static void async_cond_wait(int eCond, int eMutex)
static void async_cond_signal(int eCond)
static void async_sched_yield(void)
#define mutex_held(X) pthread_equal(primitives.aHolder[X], pthread_self())
static int  async_os_initialize(void)
static void async_os_shutdown(void)
static struct AsyncPrimitives  primitives = ;
static void async_mutex_enter(int eMutex)
static void async_mutex_leave(int eMutex)
static void async_cond_wait(int eCond, int eMutex)
static void async_cond_signal(int eCond)
static void async_sched_yield(void)
#define assert_mutex_is_held(X) assert( mutex_held(X) )
#define SQLITE_ASYNC_TWO_FILEHANDLES 1
static struct TestAsyncStaticData  async = ;
#define ASYNC_NOOP          0
#define ASYNC_WRITE         1
#define ASYNC_SYNC          2
#define ASYNC_TRUNCATE      3
#define ASYNC_CLOSE         4
#define ASYNC_DELETE        5
#define ASYNC_OPENEXCLUSIVE 6
#define ASYNC_UNLOCK        7
static const char *azOpcodeName[] = ;
struct AsyncWrite ;
struct AsyncLock ;
struct AsyncFileLock ;
struct AsyncFile ;
struct AsyncFileData ;
static void addAsyncWrite(AsyncWrite *pWrite)
static void incrOpenFileCount(void)
static int addNewAsyncWrite(
AsyncFileData *pFileData,
int op,
sqlite3_int64 iOffset,
int nByte,
const char *zByte
)
static int asyncClose(sqlite3_file *pFile)
static int asyncWrite(
sqlite3_file *pFile,
const void *pBuf,
int amt,
sqlite3_int64 iOff
)
static int asyncRead(
sqlite3_file *pFile,
void *zOut,
int iAmt,
sqlite3_int64 iOffset
)
static int asyncTruncate(sqlite3_file *pFile, sqlite3_int64 nByte)
static int asyncSync(sqlite3_file *pFile, int flags)
int asyncFileSize(sqlite3_file *pFile, sqlite3_int64 *piSize)
static int getFileLock(AsyncLock *pLock)
static AsyncLock *findLock(const char *zName, int nName)
static int asyncLock(sqlite3_file *pFile, int eLock)
static int asyncUnlock(sqlite3_file *pFile, int eLock)
static int asyncCheckReservedLock(sqlite3_file *pFile, int *pResOut)
static int asyncFileControl(sqlite3_file *id, int op, void *pArg)
static int asyncSectorSize(sqlite3_file *pFile)
static int asyncDeviceCharacteristics(sqlite3_file *pFile)
static int unlinkAsyncFile(AsyncFileData *pData)
static int doAsynchronousOpen(int flags)
static int asyncOpen(
sqlite3_vfs *pAsyncVfs,
const char *zName,
sqlite3_file *pFile,
int flags,
int *pOutFlags
)
static int asyncDelete(sqlite3_vfs *pAsyncVfs, const char *z, int syncDir)
static int asyncAccess(
sqlite3_vfs *pAsyncVfs,
const char *zName,
int flags,
int *pResOut
)
static int asyncFullPathname(
sqlite3_vfs *pAsyncVfs,
const char *zPath,
int nPathOut,
char *zPathOut
)
static void *asyncDlOpen(sqlite3_vfs *pAsyncVfs, const char *zPath)
static void asyncDlError(sqlite3_vfs *pAsyncVfs, int nByte, char *zErrMsg)
static void (*asyncDlSym(
sqlite3_vfs *pAsyncVfs,
void *pHandle,
const char *zSymbol
))(void)
static void asyncDlClose(sqlite3_vfs *pAsyncVfs, void *pHandle)
static int asyncRandomness(sqlite3_vfs *pAsyncVfs, int nByte, char *zBufOut)
static int asyncSleep(sqlite3_vfs *pAsyncVfs, int nMicro)
static int asyncCurrentTime(sqlite3_vfs *pAsyncVfs, double *pTimeOut)
static sqlite3_vfs async_vfs = ;
static void asyncWriterThread(void)
int sqlite3async_initialize(const char *zParent, int isDefault)
void sqlite3async_shutdown(void)
void sqlite3async_run(void)
int sqlite3async_control(int op, ...)
