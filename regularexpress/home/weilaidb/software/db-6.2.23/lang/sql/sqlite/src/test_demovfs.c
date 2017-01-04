#if !defined(SQLITE_TEST) || SQLITE_OS_UNIX
# define SQLITE_DEMOVFS_BUFFERSZ 8192
#define MAXPATHNAME 512
typedef struct DemoFile DemoFile;
struct DemoFile ;
static int demoDirectWrite(
DemoFile *p,
const void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int demoFlushBuffer(DemoFile *p)
static int demoClose(sqlite3_file *pFile)
static int demoRead(
sqlite3_file *pFile,
void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int demoWrite(
sqlite3_file *pFile,
const void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int demoTruncate(sqlite3_file *pFile, sqlite_int64 size)
static int demoSync(sqlite3_file *pFile, int flags)
static int demoFileSize(sqlite3_file *pFile, sqlite_int64 *pSize)
static int demoLock(sqlite3_file *pFile, int eLock)
static int demoUnlock(sqlite3_file *pFile, int eLock)
static int demoCheckReservedLock(sqlite3_file *pFile, int *pResOut)
static int demoFileControl(sqlite3_file *pFile, int op, void *pArg)
static int demoSectorSize(sqlite3_file *pFile)
static int demoDeviceCharacteristics(sqlite3_file *pFile)
static int demoOpen(
sqlite3_vfs *pVfs,
const char *zName,
sqlite3_file *pFile,
int flags,
int *pOutFlags
)
static int demoDelete(sqlite3_vfs *pVfs, const char *zPath, int dirSync)
# define F_OK 0
# define R_OK 4
# define W_OK 2
static int demoAccess(
sqlite3_vfs *pVfs,
const char *zPath,
int flags,
int *pResOut
)
static int demoFullPathname(
sqlite3_vfs *pVfs,
const char *zPath,
int nPathOut,
char *zPathOut
)
static void *demoDlOpen(sqlite3_vfs *pVfs, const char *zPath)
static void demoDlError(sqlite3_vfs *pVfs, int nByte, char *zErrMsg)
static void (*demoDlSym(sqlite3_vfs *pVfs, void *pH, const char *z))(void)
static void demoDlClose(sqlite3_vfs *pVfs, void *pHandle)
static int demoRandomness(sqlite3_vfs *pVfs, int nByte, char *zByte)
static int demoSleep(sqlite3_vfs *pVfs, int nMicro)
static int demoCurrentTime(sqlite3_vfs *pVfs, double *pTime)
sqlite3_vfs *sqlite3_demovfs(void)
#if SQLITE_OS_UNIX
static int register_demovfs(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int unregister_demovfs(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int Sqlitetest_demovfs_Init(Tcl_Interp *interp)
int Sqlitetest_demovfs_Init(Tcl_Interp *interp)
