#define BLOCKSIZE 512
#define BLOBSIZE 10485760
#define FS_VFS_NAME "fs"
typedef struct fs_real_file fs_real_file;
struct fs_real_file ;
typedef struct fs_file fs_file;
struct fs_file ;
typedef struct tmp_file tmp_file;
struct tmp_file ;
#define DATABASE_FILE   1
#define JOURNAL_FILE    2
static int fsClose(sqlite3_file*);
static int fsRead(sqlite3_file*, void*, int iAmt, sqlite3_int64 iOfst);
static int fsWrite(sqlite3_file*, const void*, int iAmt, sqlite3_int64 iOfst);
static int fsTruncate(sqlite3_file*, sqlite3_int64 size);
static int fsSync(sqlite3_file*, int flags);
static int fsFileSize(sqlite3_file*, sqlite3_int64 *pSize);
static int fsLock(sqlite3_file*, int);
static int fsUnlock(sqlite3_file*, int);
static int fsCheckReservedLock(sqlite3_file*, int *pResOut);
static int fsFileControl(sqlite3_file*, int op, void *pArg);
static int fsSectorSize(sqlite3_file*);
static int fsDeviceCharacteristics(sqlite3_file*);
static int tmpClose(sqlite3_file*);
static int tmpRead(sqlite3_file*, void*, int iAmt, sqlite3_int64 iOfst);
static int tmpWrite(sqlite3_file*, const void*, int iAmt, sqlite3_int64 iOfst);
static int tmpTruncate(sqlite3_file*, sqlite3_int64 size);
static int tmpSync(sqlite3_file*, int flags);
static int tmpFileSize(sqlite3_file*, sqlite3_int64 *pSize);
static int tmpLock(sqlite3_file*, int);
static int tmpUnlock(sqlite3_file*, int);
static int tmpCheckReservedLock(sqlite3_file*, int *pResOut);
static int tmpFileControl(sqlite3_file*, int op, void *pArg);
static int tmpSectorSize(sqlite3_file*);
static int tmpDeviceCharacteristics(sqlite3_file*);
static int fsOpen(sqlite3_vfs*, const char *, sqlite3_file*, int , int *);
static int fsDelete(sqlite3_vfs*, const char *zName, int syncDir);
static int fsAccess(sqlite3_vfs*, const char *zName, int flags, int *);
static int fsFullPathname(sqlite3_vfs*, const char *zName, int nOut,char *zOut);
static void *fsDlOpen(sqlite3_vfs*, const char *zFilename);
static void fsDlError(sqlite3_vfs*, int nByte, char *zErrMsg);
static void (*fsDlSym(sqlite3_vfs*,void*, const char *zSymbol))(void);
static void fsDlClose(sqlite3_vfs*, void*);
static int fsRandomness(sqlite3_vfs*, int nByte, char *zOut);
static int fsSleep(sqlite3_vfs*, int microseconds);
static int fsCurrentTime(sqlite3_vfs*, double*);
typedef struct fs_vfs_t fs_vfs_t;
struct fs_vfs_t ;
static fs_vfs_t fs_vfs = ;
static sqlite3_io_methods fs_io_methods = ;
static sqlite3_io_methods tmp_io_methods = ;
#define MIN(x,y) ((x)<(y)?(x):(y))
#define MAX(x,y) ((x)>(y)?(x):(y))
static int tmpClose(sqlite3_file *pFile)
static int tmpRead(
sqlite3_file *pFile,
void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int tmpWrite(
sqlite3_file *pFile,
const void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int tmpTruncate(sqlite3_file *pFile, sqlite_int64 size)
static int tmpSync(sqlite3_file *pFile, int flags)
static int tmpFileSize(sqlite3_file *pFile, sqlite_int64 *pSize)
static int tmpLock(sqlite3_file *pFile, int eLock)
static int tmpUnlock(sqlite3_file *pFile, int eLock)
static int tmpCheckReservedLock(sqlite3_file *pFile, int *pResOut)
static int tmpFileControl(sqlite3_file *pFile, int op, void *pArg)
static int tmpSectorSize(sqlite3_file *pFile)
static int tmpDeviceCharacteristics(sqlite3_file *pFile)
static int fsClose(sqlite3_file *pFile)
static int fsRead(
sqlite3_file *pFile,
void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int fsWrite(
sqlite3_file *pFile,
const void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int fsTruncate(sqlite3_file *pFile, sqlite_int64 size)
static int fsSync(sqlite3_file *pFile, int flags)
static int fsFileSize(sqlite3_file *pFile, sqlite_int64 *pSize)
static int fsLock(sqlite3_file *pFile, int eLock)
static int fsUnlock(sqlite3_file *pFile, int eLock)
static int fsCheckReservedLock(sqlite3_file *pFile, int *pResOut)
static int fsFileControl(sqlite3_file *pFile, int op, void *pArg)
static int fsSectorSize(sqlite3_file *pFile)
static int fsDeviceCharacteristics(sqlite3_file *pFile)
static int fsOpen(
sqlite3_vfs *pVfs,
const char *zName,
sqlite3_file *pFile,
int flags,
int *pOutFlags
)
static int fsDelete(sqlite3_vfs *pVfs, const char *zPath, int dirSync)
static int fsAccess(
sqlite3_vfs *pVfs,
const char *zPath,
int flags,
int *pResOut
)
static int fsFullPathname(
sqlite3_vfs *pVfs,
const char *zPath,
int nOut,
char *zOut
)
static void *fsDlOpen(sqlite3_vfs *pVfs, const char *zPath)
static void fsDlError(sqlite3_vfs *pVfs, int nByte, char *zErrMsg)
static void (*fsDlSym(sqlite3_vfs *pVfs, void *pH, const char *zSym))(void)
static void fsDlClose(sqlite3_vfs *pVfs, void *pHandle)
static int fsRandomness(sqlite3_vfs *pVfs, int nByte, char *zBufOut)
static int fsSleep(sqlite3_vfs *pVfs, int nMicro)
static int fsCurrentTime(sqlite3_vfs *pVfs, double *pTimeOut)
int fs_register(void)
int SqlitetestOnefile_Init()
