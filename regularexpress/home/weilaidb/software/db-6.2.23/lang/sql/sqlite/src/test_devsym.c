#if SQLITE_TEST
#define DEVSYM_MAX_PATHNAME 512
#define DEVSYM_VFS_NAME "devsym"
typedef struct devsym_file devsym_file;
struct devsym_file ;
static int devsymClose(sqlite3_file*);
static int devsymRead(sqlite3_file*, void*, int iAmt, sqlite3_int64 iOfst);
static int devsymWrite(sqlite3_file*,const void*,int iAmt, sqlite3_int64 iOfst);
static int devsymTruncate(sqlite3_file*, sqlite3_int64 size);
static int devsymSync(sqlite3_file*, int flags);
static int devsymFileSize(sqlite3_file*, sqlite3_int64 *pSize);
static int devsymLock(sqlite3_file*, int);
static int devsymUnlock(sqlite3_file*, int);
static int devsymCheckReservedLock(sqlite3_file*, int *);
static int devsymFileControl(sqlite3_file*, int op, void *pArg);
static int devsymSectorSize(sqlite3_file*);
static int devsymDeviceCharacteristics(sqlite3_file*);
static int devsymShmLock(sqlite3_file*,int,int,int);
static int devsymShmMap(sqlite3_file*,int,int,int, void volatile **);
static void devsymShmBarrier(sqlite3_file*);
static int devsymShmUnmap(sqlite3_file*,int);
static int devsymOpen(sqlite3_vfs*, const char *, sqlite3_file*, int , int *);
static int devsymDelete(sqlite3_vfs*, const char *zName, int syncDir);
static int devsymAccess(sqlite3_vfs*, const char *zName, int flags, int *);
static int devsymFullPathname(sqlite3_vfs*, const char *zName, int, char *zOut);
static void *devsymDlOpen(sqlite3_vfs*, const char *zFilename);
static void devsymDlError(sqlite3_vfs*, int nByte, char *zErrMsg);
static void (*devsymDlSym(sqlite3_vfs*,void*, const char *zSymbol))(void);
static void devsymDlClose(sqlite3_vfs*, void*);
static int devsymRandomness(sqlite3_vfs*, int nByte, char *zOut);
static int devsymSleep(sqlite3_vfs*, int microseconds);
static int devsymCurrentTime(sqlite3_vfs*, double*);
static sqlite3_vfs devsym_vfs = ;
static sqlite3_io_methods devsym_io_methods = ;
struct DevsymGlobal ;
struct DevsymGlobal g = ;
static int devsymClose(sqlite3_file *pFile)
static int devsymRead(
sqlite3_file *pFile,
void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int devsymWrite(
sqlite3_file *pFile,
const void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int devsymTruncate(sqlite3_file *pFile, sqlite_int64 size)
static int devsymSync(sqlite3_file *pFile, int flags)
static int devsymFileSize(sqlite3_file *pFile, sqlite_int64 *pSize)
static int devsymLock(sqlite3_file *pFile, int eLock)
static int devsymUnlock(sqlite3_file *pFile, int eLock)
static int devsymCheckReservedLock(sqlite3_file *pFile, int *pResOut)
static int devsymFileControl(sqlite3_file *pFile, int op, void *pArg)
static int devsymSectorSize(sqlite3_file *pFile)
static int devsymDeviceCharacteristics(sqlite3_file *pFile)
static int devsymShmLock(sqlite3_file *pFile, int ofst, int n, int flags)
static int devsymShmMap(
sqlite3_file *pFile,
int iRegion,
int szRegion,
int isWrite,
void volatile **pp
)
static void devsymShmBarrier(sqlite3_file *pFile)
static int devsymShmUnmap(sqlite3_file *pFile, int delFlag)
static int devsymOpen(
sqlite3_vfs *pVfs,
const char *zName,
sqlite3_file *pFile,
int flags,
int *pOutFlags
)
static int devsymDelete(sqlite3_vfs *pVfs, const char *zPath, int dirSync)
static int devsymAccess(
sqlite3_vfs *pVfs,
const char *zPath,
int flags,
int *pResOut
)
static int devsymFullPathname(
sqlite3_vfs *pVfs,
const char *zPath,
int nOut,
char *zOut
)
static void *devsymDlOpen(sqlite3_vfs *pVfs, const char *zPath)
static void devsymDlError(sqlite3_vfs *pVfs, int nByte, char *zErrMsg)
static void (*devsymDlSym(sqlite3_vfs *pVfs, void *p, const char *zSym))(void)
static void devsymDlClose(sqlite3_vfs *pVfs, void *pHandle)
static int devsymRandomness(sqlite3_vfs *pVfs, int nByte, char *zBufOut)
static int devsymSleep(sqlite3_vfs *pVfs, int nMicro)
static int devsymCurrentTime(sqlite3_vfs *pVfs, double *pTimeOut)
void devsym_register(int iDeviceChar, int iSectorSize)
