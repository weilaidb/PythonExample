#if SQLITE_OS_UNIX
# include <unistd.h>
typedef struct VLogLog VLogLog;
typedef struct VLogVfs VLogVfs;
typedef struct VLogFile VLogFile;
struct VLogLog ;
struct VLogVfs ;
struct VLogFile ;
#define REALVFS(p) (((VLogVfs*)(p))->pVfs)
static int vlogClose(sqlite3_file*);
static int vlogRead(sqlite3_file*, void*, int iAmt, sqlite3_int64 iOfst);
static int vlogWrite(sqlite3_file*,const void*,int iAmt, sqlite3_int64 iOfst);
static int vlogTruncate(sqlite3_file*, sqlite3_int64 size);
static int vlogSync(sqlite3_file*, int flags);
static int vlogFileSize(sqlite3_file*, sqlite3_int64 *pSize);
static int vlogLock(sqlite3_file*, int);
static int vlogUnlock(sqlite3_file*, int);
static int vlogCheckReservedLock(sqlite3_file*, int *pResOut);
static int vlogFileControl(sqlite3_file*, int op, void *pArg);
static int vlogSectorSize(sqlite3_file*);
static int vlogDeviceCharacteristics(sqlite3_file*);
static int vlogOpen(sqlite3_vfs*, const char *, sqlite3_file*, int , int *);
static int vlogDelete(sqlite3_vfs*, const char *zName, int syncDir);
static int vlogAccess(sqlite3_vfs*, const char *zName, int flags, int *);
static int vlogFullPathname(sqlite3_vfs*, const char *zName, int, char *zOut);
static void *vlogDlOpen(sqlite3_vfs*, const char *zFilename);
static void vlogDlError(sqlite3_vfs*, int nByte, char *zErrMsg);
static void (*vlogDlSym(sqlite3_vfs *pVfs, void *p, const char*zSym))(void);
static void vlogDlClose(sqlite3_vfs*, void*);
static int vlogRandomness(sqlite3_vfs*, int nByte, char *zOut);
static int vlogSleep(sqlite3_vfs*, int microseconds);
static int vlogCurrentTime(sqlite3_vfs*, double*);
static int vlogGetLastError(sqlite3_vfs*, int, char *);
static int vlogCurrentTimeInt64(sqlite3_vfs*, sqlite3_int64*);
static VLogVfs vlog_vfs = ;
static sqlite3_io_methods vlog_io_methods = ;
#if SQLITE_OS_UNIX && !defined(NO_GETTOD)
static sqlite3_uint64 vlog_time()
#elif SQLITE_OS_WIN
static sqlite3_uint64 vlog_time()
static sqlite3_uint64 vlog_time()
static void vlogLogPrint(
VLogLog *pLog,
sqlite3_int64 tStart,
sqlite3_int64 tElapse,
const char *zOp,
sqlite3_int64 iArg1,
sqlite3_int64 iArg2,
const char *zArg3,
int iRes
)
static VLogLog *allLogs = 0;
static void vlogLogClose(VLogLog *p)
static VLogLog *vlogLogOpen(const char *zFilename)
static int vlogClose(sqlite3_file *pFile)
static void vlogSignature(unsigned char *p, int n, char *zCksum)
static int bigToNative(const unsigned char *x)
static int vlogRead(
sqlite3_file *pFile,
void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int vlogWrite(
sqlite3_file *pFile,
const void *z,
int iAmt,
sqlite_int64 iOfst
)
static int vlogTruncate(sqlite3_file *pFile, sqlite_int64 size)
static int vlogSync(sqlite3_file *pFile, int flags)
static int vlogFileSize(sqlite3_file *pFile, sqlite_int64 *pSize)
static int vlogLock(sqlite3_file *pFile, int eLock)
static int vlogUnlock(sqlite3_file *pFile, int eLock)
static int vlogCheckReservedLock(sqlite3_file *pFile, int *pResOut)
static int vlogFileControl(sqlite3_file *pFile, int op, void *pArg)
static int vlogSectorSize(sqlite3_file *pFile)
static int vlogDeviceCharacteristics(sqlite3_file *pFile)
static int vlogOpen(
sqlite3_vfs *pVfs,
const char *zName,
sqlite3_file *pFile,
int flags,
int *pOutFlags
)
static int vlogDelete(sqlite3_vfs *pVfs, const char *zPath, int dirSync)
static int vlogAccess(
sqlite3_vfs *pVfs,
const char *zPath,
int flags,
int *pResOut
)
static int vlogFullPathname(
sqlite3_vfs *pVfs,
const char *zPath,
int nOut,
char *zOut
)
static void *vlogDlOpen(sqlite3_vfs *pVfs, const char *zPath)
static void vlogDlError(sqlite3_vfs *pVfs, int nByte, char *zErrMsg)
static void (*vlogDlSym(sqlite3_vfs *pVfs, void *p, const char *zSym))(void)
static void vlogDlClose(sqlite3_vfs *pVfs, void *pHandle)
static int vlogRandomness(sqlite3_vfs *pVfs, int nByte, char *zBufOut)
static int vlogSleep(sqlite3_vfs *pVfs, int nMicro)
static int vlogCurrentTime(sqlite3_vfs *pVfs, double *pTimeOut)
static int vlogGetLastError(sqlite3_vfs *pVfs, int a, char *b)
static int vlogCurrentTimeInt64(sqlite3_vfs *pVfs, sqlite3_int64 *p)
int sqlite3_register_vfslog(const char *zArg)
