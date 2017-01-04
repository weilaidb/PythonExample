#if SQLITE_TEST
typedef struct CrashFile CrashFile;
typedef struct CrashGlobal CrashGlobal;
typedef struct WriteBuffer WriteBuffer;
struct WriteBuffer ;
struct CrashFile ;
struct CrashGlobal ;
static CrashGlobal g = ;
static int sqlite3CrashTestEnable = 0;
static void *crash_malloc(int nByte)
static void crash_free(void *p)
static void *crash_realloc(void *p, int n)
static int writeDbFile(CrashFile *p, u8 *z, i64 iAmt, i64 iOff)
static int writeListSync(CrashFile *pFile, int isCrash)
static int writeListAppend(
sqlite3_file *pFile,
sqlite3_int64 iOffset,
const u8 *zBuf,
int nBuf
)
static int cfClose(sqlite3_file *pFile)
static int cfRead(
sqlite3_file *pFile,
void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int cfWrite(
sqlite3_file *pFile,
const void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int cfTruncate(sqlite3_file *pFile, sqlite_int64 size)
static int cfSync(sqlite3_file *pFile, int flags)
static int cfFileSize(sqlite3_file *pFile, sqlite_int64 *pSize)
static int cfLock(sqlite3_file *pFile, int eLock)
static int cfUnlock(sqlite3_file *pFile, int eLock)
static int cfCheckReservedLock(sqlite3_file *pFile, int *pResOut)
static int cfFileControl(sqlite3_file *pFile, int op, void *pArg)
static int cfSectorSize(sqlite3_file *pFile)
static int cfDeviceCharacteristics(sqlite3_file *pFile)
static int cfShmLock(sqlite3_file *pFile, int ofst, int n, int flags)
static void cfShmBarrier(sqlite3_file *pFile)
static int cfShmUnmap(sqlite3_file *pFile, int delFlag)
static int cfShmMap(
sqlite3_file *pFile,
int iRegion,
int sz,
int w,
void volatile **pp
)
static const sqlite3_io_methods CrashFileVtab = ;
struct crashAppData ;
static int cfOpen(
sqlite3_vfs *pCfVfs,
const char *zName,
sqlite3_file *pFile,
int flags,
int *pOutFlags
)
static int cfDelete(sqlite3_vfs *pCfVfs, const char *zPath, int dirSync)
static int cfAccess(
sqlite3_vfs *pCfVfs,
const char *zPath,
int flags,
int *pResOut
)
static int cfFullPathname(
sqlite3_vfs *pCfVfs,
const char *zPath,
int nPathOut,
char *zPathOut
)
static void *cfDlOpen(sqlite3_vfs *pCfVfs, const char *zPath)
static void cfDlError(sqlite3_vfs *pCfVfs, int nByte, char *zErrMsg)
static void (*cfDlSym(sqlite3_vfs *pCfVfs, void *pH, const char *zSym))(void)
static void cfDlClose(sqlite3_vfs *pCfVfs, void *pHandle)
static int cfRandomness(sqlite3_vfs *pCfVfs, int nByte, char *zBufOut)
static int cfSleep(sqlite3_vfs *pCfVfs, int nMicro)
static int cfCurrentTime(sqlite3_vfs *pCfVfs, double *pTimeOut)
static int processDevSymArgs(
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[],
int *piDeviceChar,
int *piSectorSize
)
static int crashEnableCmd(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int crashParamsObjCmd(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int devSymObjCmd(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int jtObjCmd(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int jtUnregisterObjCmd(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int Sqlitetest6_Init(Tcl_Interp *interp)
