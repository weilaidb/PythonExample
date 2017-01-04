#if SQLITE_OS_WIN
int sqlite3_io_error_hit = 0;
int sqlite3_io_error_hardhit = 0;
int sqlite3_io_error_pending = 0;
int sqlite3_io_error_persist = 0;
int sqlite3_io_error_benign = 0;
int sqlite3_diskfull_pending = 0;
int sqlite3_diskfull = 0;
int sqlite3_open_file_count = 0;
#if !SQLITE_OS_WINNT && !defined(SQLITE_OMIT_WAL)
#  error "WAL mode requires support from the Windows NT kernel, compile\
with SQLITE_OMIT_WAL."
#if !SQLITE_OS_WINNT && SQLITE_MAX_MMAP_SIZE>0
#  error "Memory mapped files require support from the Windows NT kernel,\
compile with SQLITE_MAX_MMAP_SIZE=0."
#if !SQLITE_OS_WINCE && !SQLITE_OS_WINRT && !defined(SQLITE_WIN32_NO_ANSI)
#  define SQLITE_WIN32_HAS_ANSI
#if (SQLITE_OS_WINCE || SQLITE_OS_WINNT || SQLITE_OS_WINRT) && \
!defined(SQLITE_WIN32_NO_WIDE)
#  define SQLITE_WIN32_HAS_WIDE
#if !defined(SQLITE_WIN32_HAS_ANSI) && !defined(SQLITE_WIN32_HAS_WIDE)
#  error "At least one of SQLITE_WIN32_HAS_ANSI and SQLITE_WIN32_HAS_WIDE\
must be defined."
#  define NTDDI_WIN8                        0x06020000
#  define NTDDI_WINBLUE                     0x06030000
#  if defined(NTDDI_VERSION) && NTDDI_VERSION >= NTDDI_WINBLUE
#    define SQLITE_WIN32_GETVERSIONEX   0
#  else
#    define SQLITE_WIN32_GETVERSIONEX   1
#  endif
#  define MAX_PATH                      (260)
#  define SQLITE_WIN32_MAX_PATH_CHARS   (MAX_PATH)
#  define UNICODE_STRING_MAX_CHARS      (32767)
#  define SQLITE_WINNT_MAX_PATH_CHARS   (UNICODE_STRING_MAX_CHARS)
#  define SQLITE_WIN32_MAX_PATH_BYTES   (SQLITE_WIN32_MAX_PATH_CHARS*4)
#  define SQLITE_WINNT_MAX_PATH_BYTES   \
(sizeof(WCHAR) * SQLITE_WINNT_MAX_PATH_CHARS)
#  define SQLITE_WIN32_MAX_ERRMSG_CHARS (1024)
#  define winIsDirSep(a)                (((a) == '/') || ((a) == '\\'))
#  define UNUSED_VARIABLE_VALUE(x)      (void)(x)
#  define winGetDirSep()                '\\'
#if SQLITE_WIN32_FILEMAPPING_API && \
(!defined(SQLITE_OMIT_WAL) || SQLITE_MAX_MMAP_SIZE>0)
#if SQLITE_OS_WINRT
WINBASEAPI HANDLE WINAPI CreateFileMappingFromApp(HANDLE, \
LPSECURITY_ATTRIBUTES, ULONG, ULONG64, LPCWSTR);
WINBASEAPI LPVOID WINAPI MapViewOfFileFromApp(HANDLE, ULONG, ULONG64, SIZE_T);
#if defined(SQLITE_WIN32_HAS_ANSI)
WINBASEAPI HANDLE WINAPI CreateFileMappingA(HANDLE, LPSECURITY_ATTRIBUTES, \
DWORD, DWORD, DWORD, LPCSTR);
#if defined(SQLITE_WIN32_HAS_WIDE)
WINBASEAPI HANDLE WINAPI CreateFileMappingW(HANDLE, LPSECURITY_ATTRIBUTES, \
DWORD, DWORD, DWORD, LPCWSTR);
WINBASEAPI LPVOID WINAPI MapViewOfFile(HANDLE, DWORD, DWORD, DWORD, SIZE_T);
WINBASEAPI BOOL WINAPI FlushViewOfFile(LPCVOID, SIZE_T);
WINBASEAPI BOOL WINAPI UnmapViewOfFile(LPCVOID);
# define INVALID_FILE_ATTRIBUTES ((DWORD)-1)
# define FILE_FLAG_MASK          (0xFF3C0000)
# define FILE_ATTRIBUTE_MASK     (0x0003FFF7)
typedef struct winShm winShm;
typedef struct winShmNode winShmNode;
#if SQLITE_OS_WINCE
typedef struct winceLock  winceLock;
typedef struct winFile winFile;
struct winFile ;
#define WINFILE_RDONLY          0x02
#define WINFILE_PERSIST_WAL     0x04
#define WINFILE_PSOW            0x10
#  define SQLITE_WIN32_DBG_BUF_SIZE   ((int)(4096-sizeof(DWORD)))
#  define SQLITE_WIN32_DATA_DIRECTORY_TYPE (1)
#  define SQLITE_WIN32_TEMP_DIRECTORY_TYPE (2)
#  define SQLITE_WIN32_HEAP_CREATE    (TRUE)
#  define SQLITE_WIN32_HEAP_INIT_SIZE ((SQLITE_DEFAULT_CACHE_SIZE) * \
(SQLITE_DEFAULT_PAGE_SIZE) + 4194304)
#  define SQLITE_WIN32_HEAP_MAX_SIZE  (0)
#  define SQLITE_WIN32_HEAP_FLAGS     (0)
typedef struct winMemData winMemData;
struct winMemData ;
#define WINMEM_MAGIC1     0x42b2830b
#define WINMEM_MAGIC2     0xbd4d7cf4
static struct winMemData win_mem_data = ;
#define winMemAssertMagic1() assert( win_mem_data.magic1==WINMEM_MAGIC1 )
#define winMemAssertMagic2() assert( win_mem_data.magic2==WINMEM_MAGIC2 )
#define winMemAssertMagic()  winMemAssertMagic1(); winMemAssertMagic2();
#define winMemAssertMagic()
#define winMemGetDataPtr()  &win_mem_data
#define winMemGetHeap()     win_mem_data.hHeap
#define winMemGetOwned()    win_mem_data.bOwned
static void *winMemMalloc(int nBytes);
static void winMemFree(void *pPrior);
static void *winMemRealloc(void *pPrior, int nBytes);
static int winMemSize(void *p);
static int winMemRoundup(int n);
static int winMemInit(void *pAppData);
static void winMemShutdown(void *pAppData);
const sqlite3_mem_methods *sqlite3MemGetWin32(void);
LONG SQLITE_WIN32_VOLATILE sqlite3_os_type = 0;
static LONG SQLITE_WIN32_VOLATILE sqlite3_os_type = 0;
#  define SYSCALL sqlite3_syscall_ptr
#if SQLITE_OS_WINCE || SQLITE_OS_WINRT
#  define osAreFileApisANSI()       1
static struct win_syscall  aSyscall[] = ;
static int winSetSystemCall(
sqlite3_vfs *pNotUsed,
const char *zName,
sqlite3_syscall_ptr pNewFunc
)
static sqlite3_syscall_ptr winGetSystemCall(
sqlite3_vfs *pNotUsed,
const char *zName
)
static const char *winNextSystemCall(sqlite3_vfs *p, const char *zName)
int sqlite3_win32_compact_heap(LPUINT pnLargest)
int sqlite3_win32_reset_heap()
void sqlite3_win32_write_debug(const char *zBuf, int nBuf)
#if SQLITE_OS_WINRT
static HANDLE sleepObj = NULL;
void sqlite3_win32_sleep(DWORD milliseconds)
#if SQLITE_MAX_WORKER_THREADS>0 && !SQLITE_OS_WINCE && !SQLITE_OS_WINRT && \
SQLITE_THREADSAFE>0
DWORD sqlite3Win32Wait(HANDLE hObject)
#if !defined(SQLITE_WIN32_GETVERSIONEX) || !SQLITE_WIN32_GETVERSIONEX
# define osIsNT()  (1)
#elif SQLITE_OS_WINCE || SQLITE_OS_WINRT || !defined(SQLITE_WIN32_HAS_ANSI)
# define osIsNT()  (1)
#elif !defined(SQLITE_WIN32_HAS_WIDE)
# define osIsNT()  (0)
# define osIsNT()  ((sqlite3_os_type==2) || sqlite3_win32_is_nt())
int sqlite3_win32_is_nt(void)
static void *winMemMalloc(int nBytes)
static void winMemFree(void *pPrior)
static void *winMemRealloc(void *pPrior, int nBytes)
static int winMemSize(void *p)
static int winMemRoundup(int n)
static int winMemInit(void *pAppData)
static void winMemShutdown(void *pAppData)
const sqlite3_mem_methods *sqlite3MemGetWin32(void)
void sqlite3MemSetDefault(void)
static LPWSTR winUtf8ToUnicode(const char *zFilename)
static char *winUnicodeToUtf8(LPCWSTR zWideFilename)
static LPWSTR winMbcsToUnicode(const char *zFilename)
static char *winUnicodeToMbcs(LPCWSTR zWideFilename)
char *sqlite3_win32_mbcs_to_utf8(const char *zFilename)
char *sqlite3_win32_utf8_to_mbcs(const char *zFilename)
int sqlite3_win32_set_directory(DWORD type, LPCWSTR zValue)
static int winGetLastErrorMsg(DWORD lastErrno, int nBuf, char *zBuf)
#define winLogError(a,b,c,d)   winLogErrorAtLine(a,b,c,d,__LINE__)
static int winLogErrorAtLine(
int errcode,
DWORD lastErrno,
const char *zFunc,
const char *zPath,
int iLine
)
# define SQLITE_WIN32_IOERR_RETRY 10
# define SQLITE_WIN32_IOERR_RETRY_DELAY 25
static int winIoerrRetry = SQLITE_WIN32_IOERR_RETRY;
static int winIoerrRetryDelay = SQLITE_WIN32_IOERR_RETRY_DELAY;
#if !defined(winIoerrCanRetry1)
#define winIoerrCanRetry1(a) (((a)==ERROR_ACCESS_DENIED)        || \
((a)==ERROR_SHARING_VIOLATION)    || \
((a)==ERROR_LOCK_VIOLATION)       || \
((a)==ERROR_DEV_NOT_EXIST)        || \
((a)==ERROR_NETNAME_DELETED)      || \
((a)==ERROR_SEM_TIMEOUT)          || \
((a)==ERROR_NETWORK_UNREACHABLE))
static int winRetryIoerr(int *pnRetry, DWORD *pError)
static void winLogIoerr(int nRetry, int lineno)
#if SQLITE_OS_WINCE
#if !defined(SQLITE_MSVC_LOCALTIME_API) || !SQLITE_MSVC_LOCALTIME_API
struct tm *__cdecl localtime(const time_t *t)
#define HANDLE_TO_WINFILE(a) (winFile*)&((char*)a)[-(int)offsetof(winFile,h)]
static void winceMutexAcquire(HANDLE h)
#define winceMutexRelease(h) ReleaseMutex(h)
static int winceCreateLock(const char *zFilename, winFile *pFile)
static void winceDestroyLock(winFile *pFile)
static BOOL winceLockFile(
LPHANDLE phFile,
DWORD dwFileOffsetLow,
DWORD dwFileOffsetHigh,
DWORD nNumberOfBytesToLockLow,
DWORD nNumberOfBytesToLockHigh
)
static BOOL winceUnlockFile(
LPHANDLE phFile,
DWORD dwFileOffsetLow,
DWORD dwFileOffsetHigh,
DWORD nNumberOfBytesToUnlockLow,
DWORD nNumberOfBytesToUnlockHigh
)
static BOOL winLockFile(
LPHANDLE phFile,
DWORD flags,
DWORD offsetLow,
DWORD offsetHigh,
DWORD numBytesLow,
DWORD numBytesHigh
)
static BOOL winUnlockFile(
LPHANDLE phFile,
DWORD offsetLow,
DWORD offsetHigh,
DWORD numBytesLow,
DWORD numBytesHigh
)
# define INVALID_SET_FILE_POINTER ((DWORD)-1)
static int winSeekFile(winFile *pFile, sqlite3_int64 iOffset)
#if SQLITE_MAX_MMAP_SIZE>0
static int winMapfile(winFile*, sqlite3_int64);
static int winUnmapfile(winFile*);
#define MX_CLOSE_ATTEMPT 3
static int winClose(sqlite3_file *id)
static int winRead(
sqlite3_file *id,
void *pBuf,
int amt,
sqlite3_int64 offset
){
#if !SQLITE_OS_WINCE && !defined(SQLITE_WIN32_NO_OVERLAPPED)
OVERLAPPED overlapped;
winFile *pFile = (winFile*)id;
DWORD nRead;
int nRetry = 0;
assert( id!=0 );
assert( amt>0 );
assert( offset>=0 );
SimulateIOError(return SQLITE_IOERR_READ);
OSTRACE(("READ pid=%lu, pFile=%p, file=%p, buffer=%p, amount=%d, "
"offset=%lld, lock=%d\n", osGetCurrentProcessId(), pFile,
pFile->h, pBuf, amt, offset, pFile->locktype));
#if SQLITE_MAX_MMAP_SIZE>0
if( offset<pFile->mmapSize )
#if SQLITE_OS_WINCE || defined(SQLITE_WIN32_NO_OVERLAPPED)
if( winSeekFile(pFile, offset) )
while( !osReadFile(pFile->h, pBuf, amt, &nRead, 0) )
static int winWrite(
sqlite3_file *id,
const void *pBuf,
int amt,
sqlite3_int64 offset
){
int rc = 0;
winFile *pFile = (winFile*)id;
int nRetry = 0;
assert( amt>0 );
assert( pFile );
SimulateIOError(return SQLITE_IOERR_WRITE);
SimulateDiskfullError(return SQLITE_FULL);
OSTRACE(("WRITE pid=%lu, pFile=%p, file=%p, buffer=%p, amount=%d, "
"offset=%lld, lock=%d\n", osGetCurrentProcessId(), pFile,
pFile->h, pBuf, amt, offset, pFile->locktype));
#if SQLITE_MAX_MMAP_SIZE>0
if( offset<pFile->mmapSize )
#if SQLITE_OS_WINCE || defined(SQLITE_WIN32_NO_OVERLAPPED)
rc = winSeekFile(pFile, offset);
if( rc==0 ){
static int winTruncate(sqlite3_file *id, sqlite3_int64 nByte)
int sqlite3_sync_count = 0;
int sqlite3_fullsync_count = 0;
static int winSync(sqlite3_file *id, int flags)
static int winFileSize(sqlite3_file *id, sqlite3_int64 *pSize)
# define LOCKFILE_FAIL_IMMEDIATELY 1
# define LOCKFILE_EXCLUSIVE_LOCK 2
# define SQLITE_LOCKFILE_FLAGS   (LOCKFILE_FAIL_IMMEDIATELY | \
LOCKFILE_EXCLUSIVE_LOCK)
# define SQLITE_LOCKFILEEX_FLAGS (LOCKFILE_FAIL_IMMEDIATELY)
static int winGetReadLock(winFile *pFile)
static int winUnlockReadLock(winFile *pFile)
static int winLock(sqlite3_file *id, int locktype)
static int winCheckReservedLock(sqlite3_file *id, int *pResOut)
static int winUnlock(sqlite3_file *id, int locktype)
static void winModeBit(winFile *pFile, unsigned char mask, int *pArg)
static int winGetTempname(sqlite3_vfs *, char **);
static int winIsDir(const void *);
static BOOL winIsDriveLetterAndColon(const char *);
static int winFileControl(sqlite3_file *id, int op, void *pArg)
static int winSectorSize(sqlite3_file *id)
static int winDeviceCharacteristics(sqlite3_file *id)
static SYSTEM_INFO winSysInfo;
static void winShmEnterMutex(void)
static void winShmLeaveMutex(void)
static int winShmMutexHeld(void)
struct winShmNode ;
static winShmNode *winShmNodeList = 0;
struct winShm ;
#define WIN_SHM_BASE   ((22+SQLITE_SHM_NLOCK)*4)
#define WIN_SHM_DMS    (WIN_SHM_BASE+SQLITE_SHM_NLOCK)
#define _SHM_UNLCK  1
#define _SHM_RDLCK  2
#define _SHM_WRLCK  3
static int winShmSystemLock(
winShmNode *pFile,
int lockType,
int ofst,
int nByte
)
static int winOpen(sqlite3_vfs*,const char*,sqlite3_file*,int,int*);
static int winDelete(sqlite3_vfs *,const char*,int);
static void winShmPurge(sqlite3_vfs *pVfs, int deleteFlag)
static int winOpenSharedMemory(winFile *pDbFd)
static int winShmUnmap(
sqlite3_file *fd,
int deleteFlag
)
static int winShmLock(
sqlite3_file *fd,
int ofst,
int n,
int flags
)
static void winShmBarrier(
sqlite3_file *fd
){
UNUSED_PARAMETER(fd);
static int winShmMap(
sqlite3_file *fd,
int iRegion,
int szRegion,
int isWrite,
void volatile **pp
)
# define winShmMap     0
# define winShmLock    0
# define winShmBarrier 0
# define winShmUnmap   0
#if SQLITE_MAX_MMAP_SIZE>0
static int winUnmapfile(winFile *pFile)
static int winMapfile(winFile *pFd, sqlite3_int64 nByte)
static int winFetch(sqlite3_file *fd, i64 iOff, int nAmt, void **pp)
static int winUnfetch(sqlite3_file *fd, i64 iOff, void *p)
static const sqlite3_io_methods winIoMethod = ;
#if defined(__CYGWIN__)
static char *winConvertToUtf8Filename(const void *zFilename)
static void *winConvertFromUtf8Filename(const char *zFilename)
static int winMakeEndInDirSep(int nBuf, char *zBuf)
static int winGetTempname(sqlite3_vfs *pVfs, char **pzBuf)
static int winIsDir(const void *zConverted)
static int winOpen(
sqlite3_vfs *pVfs,
const char *zName,
sqlite3_file *id,
int flags,
int *pOutFlags
)
static int winDelete(
sqlite3_vfs *pVfs,
const char *zFilename,
int syncDir
)
static int winAccess(
sqlite3_vfs *pVfs,
const char *zFilename,
int flags,
int *pResOut
)
static BOOL winIsDriveLetterAndColon(
const char *zPathname
)
static BOOL winIsVerbatimPathname(
const char *zPathname
)
static int winFullPathname(
sqlite3_vfs *pVfs,
const char *zRelative,
int nFull,
char *zFull
)
static void *winDlOpen(sqlite3_vfs *pVfs, const char *zFilename)
static void winDlError(sqlite3_vfs *pVfs, int nBuf, char *zBufOut)
static void (*winDlSym(sqlite3_vfs *pVfs,void *pH,const char *zSym))(void)
static void winDlClose(sqlite3_vfs *pVfs, void *pHandle)
#define winDlOpen  0
#define winDlError 0
#define winDlSym   0
#define winDlClose 0
static int winRandomness(sqlite3_vfs *pVfs, int nBuf, char *zBuf)
static int winSleep(sqlite3_vfs *pVfs, int microsec)
int sqlite3_current_time = 0;
static int winCurrentTimeInt64(sqlite3_vfs *pVfs, sqlite3_int64 *piNow)
static int winCurrentTime(sqlite3_vfs *pVfs, double *prNow)
static int winGetLastError(sqlite3_vfs *pVfs, int nBuf, char *zBuf)
int sqlite3_os_init(void)
int sqlite3_os_end(void)
