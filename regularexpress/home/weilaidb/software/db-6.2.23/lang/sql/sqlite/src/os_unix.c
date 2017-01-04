#if SQLITE_OS_UNIX
#if !defined(SQLITE_ENABLE_LOCKING_STYLE)
#  if defined(__APPLE__)
#    define SQLITE_ENABLE_LOCKING_STYLE 1
#  else
#    define SQLITE_ENABLE_LOCKING_STYLE 0
#  endif
#if !defined(SQLITE_OMIT_WAL) || SQLITE_MAX_MMAP_SIZE>0
# include <sys/mman.h>
#if SQLITE_ENABLE_LOCKING_STYLE
# include <sys/ioctl.h>
# include <sys/file.h>
# include <sys/param.h>
#if defined(__APPLE__) && ((__MAC_OS_X_VERSION_MIN_REQUIRED > 1050) || \
(__IPHONE_OS_VERSION_MIN_REQUIRED > 2000))
#  if (!defined(TARGET_OS_EMBEDDED) || (TARGET_OS_EMBEDDED==0)) \
&& (!defined(TARGET_IPHONE_SIMULATOR) || (TARGET_IPHONE_SIMULATOR==0))
#    define HAVE_GETHOSTUUID 1
#  else
#    warning "gethostuuid() is disabled."
#  endif
#if OS_VXWORKS
# include <sys/ioctl.h>
# include <semaphore.h>
# include <limits.h>
#if defined(__APPLE__) || SQLITE_ENABLE_LOCKING_STYLE
# include <sys/mount.h>
# include <utime.h>
#define SQLITE_FSFLAGS_IS_MSDOS     0x1
#if SQLITE_THREADSAFE
# include <pthread.h>
# define SQLITE_UNIX_THREADS 1
# define SQLITE_DEFAULT_FILE_PERMISSIONS 0644
# define SQLITE_DEFAULT_PROXYDIR_PERMISSIONS 0755
#define MAX_PATHNAME 512
#define osGetpid(X) (pid_t)getpid()
#define IS_LOCK_ERROR(x)  ((x != SQLITE_OK) && (x != SQLITE_BUSY))
typedef struct unixShm unixShm;
typedef struct unixShmNode unixShmNode;
typedef struct unixInodeInfo unixInodeInfo;
typedef struct UnixUnusedFd UnixUnusedFd;
struct UnixUnusedFd ;
typedef struct unixFile unixFile;
struct unixFile ;
static pid_t randomnessPid = 0;
#define UNIXFILE_EXCL        0x01
#define UNIXFILE_RDONLY      0x02
#define UNIXFILE_PERSIST_WAL 0x04
# define UNIXFILE_DIRSYNC    0x08
# define UNIXFILE_DIRSYNC    0x00
#define UNIXFILE_PSOW        0x10
#define UNIXFILE_DELETE      0x20
#define UNIXFILE_URI         0x40
#define UNIXFILE_NOLOCK      0x80
#define UNIXFILE_WARNED    0x0100
#define UNIXFILE_BLOCK     0x0200
int sqlite3_io_error_hit = 0;
int sqlite3_io_error_hardhit = 0;
int sqlite3_io_error_pending = 0;
int sqlite3_io_error_persist = 0;
int sqlite3_io_error_benign = 0;
int sqlite3_diskfull_pending = 0;
int sqlite3_diskfull = 0;
int sqlite3_open_file_count = 0;
# define O_LARGEFILE 0
# undef O_LARGEFILE
# define O_LARGEFILE 0
# define O_NOFOLLOW 0
# define O_BINARY 0
#if SQLITE_THREADSAFE
#define threadid pthread_self()
#define threadid 0
#if !defined(HAVE_MREMAP)
# if defined(__linux__) && defined(_GNU_SOURCE)
#  define HAVE_MREMAP 1
# else
#  define HAVE_MREMAP 0
# endif
# define lseek lseek64
static int posixOpen(const char *zFile, int flags, int mode)
static int posixFchown(int fd, uid_t uid, gid_t gid)
static int openDirectory(const char*, int*);
static int unixGetpagesize(void);
static struct unix_syscall  aSyscall[] = ;
static int unixSetSystemCall(
sqlite3_vfs *pNotUsed,
const char *zName,
sqlite3_syscall_ptr pNewFunc
)
static sqlite3_syscall_ptr unixGetSystemCall(
sqlite3_vfs *pNotUsed,
const char *zName
)
static const char *unixNextSystemCall(sqlite3_vfs *p, const char *zName)
# define SQLITE_MINIMUM_FILE_DESCRIPTOR 3
static int robust_open(const char *z, int f, mode_t m)
static void unixEnterMutex(void)
static void unixLeaveMutex(void)
static int unixMutexHeld(void)
static const char *azFileLock(int eFileLock)
static int lockTrace(int fd, int op, struct flock *p)
#undef osFcntl
#define osFcntl lockTrace
static int robust_ftruncate(int h, sqlite3_int64 sz)
static int sqliteErrorFromPosixError(int posixError, int sqliteIOErr)
struct vxworksFileId ;
#if OS_VXWORKS
static struct vxworksFileId *vxworksFileList = 0;
static int vxworksSimplifyName(char *z, int n)
static struct vxworksFileId *vxworksFindFileId(const char *zAbsoluteName)
static void vxworksReleaseFileId(struct vxworksFileId *pId)
struct unixFileId ;
struct unixInodeInfo ;
static unixInodeInfo *inodeList = 0;
#define unixLogError(a,b,c)     unixLogErrorAtLine(a,b,c,__LINE__)
static int unixLogErrorAtLine(
int errcode,
const char *zFunc,
const char *zPath,
int iLine
)
static void robust_close(unixFile *pFile, int h, int lineno)
static void storeLastErrno(unixFile *pFile, int error)
static void closePendingFds(unixFile *pFile)
static void releaseInodeInfo(unixFile *pFile)
static int findInodeInfo(
unixFile *pFile,
unixInodeInfo **ppInode
)
static int fileHasMoved(unixFile *pFile)
static void verifyDbFile(unixFile *pFile)
static int unixCheckReservedLock(sqlite3_file *id, int *pResOut)
static int unixFileLock(unixFile *pFile, struct flock *pLock)
static int unixLock(sqlite3_file *id, int eFileLock)
static void setPendingFd(unixFile *pFile)
static int posixUnlock(sqlite3_file *id, int eFileLock, int handleNFSUnlock)
static int unixUnlock(sqlite3_file *id, int eFileLock)
#if SQLITE_MAX_MMAP_SIZE>0
static int unixMapfile(unixFile *pFd, i64 nByte);
static void unixUnmapfile(unixFile *pFd);
static int closeUnixFile(sqlite3_file *id)
static int unixClose(sqlite3_file *id)
static int nolockCheckReservedLock(sqlite3_file *NotUsed, int *pResOut)
static int nolockLock(sqlite3_file *NotUsed, int NotUsed2)
static int nolockUnlock(sqlite3_file *NotUsed, int NotUsed2)
static int nolockClose(sqlite3_file *id)
#define DOTLOCK_SUFFIX ".lock"
static int dotlockCheckReservedLock(sqlite3_file *id, int *pResOut)
static int dotlockLock(sqlite3_file *id, int eFileLock)
static int dotlockUnlock(sqlite3_file *id, int eFileLock)
static int dotlockClose(sqlite3_file *id)
#if SQLITE_ENABLE_LOCKING_STYLE
static int robust_flock(int fd, int op)
# define robust_flock(a,b) flock(a,b)
static int flockCheckReservedLock(sqlite3_file *id, int *pResOut)
static int flockLock(sqlite3_file *id, int eFileLock)
static int flockUnlock(sqlite3_file *id, int eFileLock)
static int flockClose(sqlite3_file *id)
#if OS_VXWORKS
static int semXCheckReservedLock(sqlite3_file *id, int *pResOut)
static int semXLock(sqlite3_file *id, int eFileLock)
static int semXUnlock(sqlite3_file *id, int eFileLock)
static int semXClose(sqlite3_file *id)
#if defined(__APPLE__) && SQLITE_ENABLE_LOCKING_STYLE
typedef struct afpLockingContext afpLockingContext;
struct afpLockingContext ;
struct ByteRangeLockPB2
;
#define afpfsByteRangeLock2FSCTL        _IOWR('z', 23, struct ByteRangeLockPB2)
static int afpSetLock(
const char *path,
unixFile *pFile,
unsigned long long offset,
unsigned long long length,
int setLockFlag
)
static int afpCheckReservedLock(sqlite3_file *id, int *pResOut)
static int afpLock(sqlite3_file *id, int eFileLock)
static int afpUnlock(sqlite3_file *id, int eFileLock)
static int afpClose(sqlite3_file *id)
#if defined(__APPLE__) && SQLITE_ENABLE_LOCKING_STYLE
static int nfsUnlock(sqlite3_file *id, int eFileLock)
static int seekAndRead(unixFile *id, sqlite3_int64 offset, void *pBuf, int cnt)
static int unixRead(
sqlite3_file *id,
void *pBuf,
int amt,
sqlite3_int64 offset
)
static int seekAndWriteFd(
int fd,
i64 iOff,
const void *pBuf,
int nBuf,
int *piErrno
)
static int seekAndWrite(unixFile *id, i64 offset, const void *pBuf, int cnt)
static int unixWrite(
sqlite3_file *id,
const void *pBuf,
int amt,
sqlite3_int64 offset
)
int sqlite3_sync_count = 0;
int sqlite3_fullsync_count = 0;
#if !defined(fdatasync) && !HAVE_FDATASYNC
# define fdatasync fsync
# define HAVE_FULLFSYNC 1
# define HAVE_FULLFSYNC 0
static int full_fsync(int fd, int fullSync, int dataOnly)
static int openDirectory(const char *zFilename, int *pFd)
static int unixSync(sqlite3_file *id, int flags)
static int unixTruncate(sqlite3_file *id, i64 nByte)
static int unixFileSize(sqlite3_file *id, i64 *pSize)
#if SQLITE_ENABLE_LOCKING_STYLE && defined(__APPLE__)
static int proxyFileControl(sqlite3_file*,int,void*);
static int fcntlSizeHint(unixFile *pFile, i64 nByte)
static void unixModeBit(unixFile *pFile, unsigned char mask, int *pArg)
static int unixGetTempname(int nBuf, char *zBuf);
static int unixFileControl(sqlite3_file *id, int op, void *pArg){
unixFile *pFile = (unixFile*)id;
switch( op )
static int unixSectorSize(sqlite3_file *NotUsed)
static int unixSectorSize(sqlite3_file *id)
static int unixDeviceCharacteristics(sqlite3_file *id)
#if !defined(SQLITE_OMIT_WAL) || SQLITE_MAX_MMAP_SIZE>0
static int unixGetpagesize(void)
struct unixShmNode ;
struct unixShm ;
#define UNIX_SHM_BASE   ((22+SQLITE_SHM_NLOCK)*4)
#define UNIX_SHM_DMS    (UNIX_SHM_BASE+SQLITE_SHM_NLOCK)
static int unixShmSystemLock(
unixFile *pFile,
int lockType,
int ofst,
int n
)
static int unixShmRegionPerMap(void)
static void unixShmPurge(unixFile *pFd)
static int unixOpenSharedMemory(unixFile *pDbFd)
static int unixShmMap(
sqlite3_file *fd,
int iRegion,
int szRegion,
int bExtend,
void volatile **pp
)
static int unixShmLock(
sqlite3_file *fd,
int ofst,
int n,
int flags
)
static void unixShmBarrier(
sqlite3_file *fd
)
static int unixShmUnmap(
sqlite3_file *fd,
int deleteFlag
)
# define unixShmMap     0
# define unixShmLock    0
# define unixShmBarrier 0
# define unixShmUnmap   0
#if SQLITE_MAX_MMAP_SIZE>0
static void unixUnmapfile(unixFile *pFd)
static void unixRemapfile(
unixFile *pFd,
i64 nNew
)
static int unixMapfile(unixFile *pFd, i64 nByte)
static int unixFetch(sqlite3_file *fd, i64 iOff, int nAmt, void **pp)
static int unixUnfetch(sqlite3_file *fd, i64 iOff, void *p)
#define IOMETHODS(FINDER,METHOD,VERSION,CLOSE,LOCK,UNLOCK,CKLOCK,SHMMAP)     \
static const sqlite3_io_methods METHOD = ;                                                                           \
static const sqlite3_io_methods *FINDER##Impl(const char *z, unixFile *p)                                                                            \
static const sqlite3_io_methods *(*const FINDER)(const char*,unixFile *p)    \
= FINDER##Impl;
IOMETHODS(
posixIoFinder,
posixIoMethods,
3,
unixClose,
unixLock,
unixUnlock,
unixCheckReservedLock,
unixShmMap
)
IOMETHODS(
nolockIoFinder,
nolockIoMethods,
3,
nolockClose,
nolockLock,
nolockUnlock,
nolockCheckReservedLock,
0
)
IOMETHODS(
dotlockIoFinder,
dotlockIoMethods,
1,
dotlockClose,
dotlockLock,
dotlockUnlock,
dotlockCheckReservedLock,
0
)
#if SQLITE_ENABLE_LOCKING_STYLE
IOMETHODS(
flockIoFinder,
flockIoMethods,
1,
flockClose,
flockLock,
flockUnlock,
flockCheckReservedLock,
0
)
#if OS_VXWORKS
IOMETHODS(
semIoFinder,
semIoMethods,
1,
semXClose,
semXLock,
semXUnlock,
semXCheckReservedLock,
0
)
#if defined(__APPLE__) && SQLITE_ENABLE_LOCKING_STYLE
IOMETHODS(
afpIoFinder,
afpIoMethods,
1,
afpClose,
afpLock,
afpUnlock,
afpCheckReservedLock,
0
)
#if defined(__APPLE__) && SQLITE_ENABLE_LOCKING_STYLE
static int proxyClose(sqlite3_file*);
static int proxyLock(sqlite3_file*, int);
static int proxyUnlock(sqlite3_file*, int);
static int proxyCheckReservedLock(sqlite3_file*, int*);
IOMETHODS(
proxyIoFinder,
proxyIoMethods,
1,
proxyClose,
proxyLock,
proxyUnlock,
proxyCheckReservedLock,
0
)
#if defined(__APPLE__) && SQLITE_ENABLE_LOCKING_STYLE
IOMETHODS(
nfsIoFinder,
nfsIoMethods,
1,
unixClose,
unixLock,
nfsUnlock,
unixCheckReservedLock,
0
)
#if defined(__APPLE__) && SQLITE_ENABLE_LOCKING_STYLE
static const sqlite3_io_methods *autolockIoFinderImpl(
const char *filePath,
unixFile *pNew
)
static const sqlite3_io_methods
*(*const autolockIoFinder)(const char*,unixFile*) = autolockIoFinderImpl;
#if OS_VXWORKS
static const sqlite3_io_methods *vxworksIoFinderImpl(
const char *filePath,
unixFile *pNew
)
static const sqlite3_io_methods
*(*const vxworksIoFinder)(const char*,unixFile*) = vxworksIoFinderImpl;
typedef const sqlite3_io_methods *(*finder_type)(const char*,unixFile*);
static int fillInUnixFile(
sqlite3_vfs *pVfs,
int h,
sqlite3_file *pId,
const char *zFilename,
int ctrlFlags
)
static const char *unixTempFileDir(void)
static int unixGetTempname(int nBuf, char *zBuf)
#if SQLITE_ENABLE_LOCKING_STYLE && defined(__APPLE__)
static int proxyTransformUnixFile(unixFile*, const char*);
static UnixUnusedFd *findReusableFd(const char *zPath, int flags)
static int findCreateFileMode(
const char *zPath,
int flags,
mode_t *pMode,
uid_t *pUid,
gid_t *pGid
)
static int unixOpen(
sqlite3_vfs *pVfs,
const char *zPath,
sqlite3_file *pFile,
int flags,
int *pOutFlags
)
static int unixDelete(
sqlite3_vfs *NotUsed,
const char *zPath,
int dirSync
)
static int unixAccess(
sqlite3_vfs *NotUsed,
const char *zPath,
int flags,
int *pResOut
)
static int unixFullPathname(
sqlite3_vfs *pVfs,
const char *zPath,
int nOut,
char *zOut
)
static void *unixDlOpen(sqlite3_vfs *NotUsed, const char *zFilename)
static void unixDlError(sqlite3_vfs *NotUsed, int nBuf, char *zBufOut)
static void (*unixDlSym(sqlite3_vfs *NotUsed, void *p, const char*zSym))(void)
static void unixDlClose(sqlite3_vfs *NotUsed, void *pHandle)
#define unixDlOpen  0
#define unixDlError 0
#define unixDlSym   0
#define unixDlClose 0
static int unixRandomness(sqlite3_vfs *NotUsed, int nBuf, char *zBuf)
static int unixSleep(sqlite3_vfs *NotUsed, int microseconds)
int sqlite3_current_time = 0;
static int unixCurrentTimeInt64(sqlite3_vfs *NotUsed, sqlite3_int64 *piNow)
static int unixCurrentTime(sqlite3_vfs *NotUsed, double *prNow)
static int unixGetLastError(sqlite3_vfs *NotUsed, int NotUsed2, char *NotUsed3)
#if defined(__APPLE__) && SQLITE_ENABLE_LOCKING_STYLE
typedef struct proxyLockingContext proxyLockingContext;
struct proxyLockingContext ;
static int proxyGetLockPath(const char *dbPath, char *lPath, size_t maxLen)
static int proxyCreateLockPath(const char *lockPath)
static int proxyCreateUnixFile(
const char *path,
unixFile **ppFile,
int islockfile
)
int sqlite3_hostid_num = 0;
#define PROXY_HOSTIDLEN    16
extern int gethostuuid(uuid_t id, const struct timespec *wait);
static int proxyGetHostID(unsigned char *pHostID, int *pError)
#define PROXY_CONCHVERSION 2
#define PROXY_HEADERLEN    1
#define PROXY_PATHINDEX    (PROXY_HEADERLEN+PROXY_HOSTIDLEN)
#define PROXY_MAXCONCHLEN  (PROXY_HEADERLEN+PROXY_HOSTIDLEN+MAXPATHLEN)
static int proxyBreakConchLock(unixFile *pFile, uuid_t myHostID)
static int proxyConchLock(unixFile *pFile, uuid_t myHostID, int lockType)
static int proxyTakeConch(unixFile *pFile)
static int proxyReleaseConch(unixFile *pFile)
static int proxyCreateConchPathname(char *dbPath, char **pConchPath)
static int switchLockProxyPath(unixFile *pFile, const char *path)
static int proxyGetDbPathForUnixFile(unixFile *pFile, char *dbPath)
static int proxyTransformUnixFile(unixFile *pFile, const char *path)
static int proxyFileControl(sqlite3_file *id, int op, void *pArg)
static int proxyCheckReservedLock(sqlite3_file *id, int *pResOut)
static int proxyLock(sqlite3_file *id, int eFileLock)
static int proxyUnlock(sqlite3_file *id, int eFileLock)
static int proxyClose(sqlite3_file *id)
int sqlite3_os_init(void)
int sqlite3_os_end(void)
