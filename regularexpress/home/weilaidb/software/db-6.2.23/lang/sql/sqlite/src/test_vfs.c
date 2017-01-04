#if SQLITE_TEST
typedef struct Testvfs Testvfs;
typedef struct TestvfsShm TestvfsShm;
typedef struct TestvfsBuffer TestvfsBuffer;
typedef struct TestvfsFile TestvfsFile;
typedef struct TestvfsFd TestvfsFd;
struct TestvfsFile ;
#define tvfsGetFd(pFile) (((TestvfsFile *)pFile)->pFd)
struct TestvfsFd ;
#define FAULT_INJECT_NONE       0
#define FAULT_INJECT_TRANSIENT  1
#define FAULT_INJECT_PERSISTENT 2
typedef struct TestFaultInject TestFaultInject;
struct TestFaultInject ;
struct Testvfs ;
#define TESTVFS_SHMOPEN_MASK      0x00000001
#define TESTVFS_SHMLOCK_MASK      0x00000010
#define TESTVFS_SHMMAP_MASK       0x00000020
#define TESTVFS_SHMBARRIER_MASK   0x00000040
#define TESTVFS_SHMCLOSE_MASK     0x00000080
#define TESTVFS_OPEN_MASK         0x00000100
#define TESTVFS_SYNC_MASK         0x00000200
#define TESTVFS_DELETE_MASK       0x00000400
#define TESTVFS_CLOSE_MASK        0x00000800
#define TESTVFS_WRITE_MASK        0x00001000
#define TESTVFS_TRUNCATE_MASK     0x00002000
#define TESTVFS_ACCESS_MASK       0x00004000
#define TESTVFS_FULLPATHNAME_MASK 0x00008000
#define TESTVFS_READ_MASK         0x00010000
#define TESTVFS_UNLOCK_MASK       0x00020000
#define TESTVFS_LOCK_MASK         0x00040000
#define TESTVFS_CKLOCK_MASK       0x00080000
#define TESTVFS_ALL_MASK          0x000FFFFF
#define TESTVFS_MAX_PAGES 1024
struct TestvfsBuffer ;
#define PARENTVFS(x) (((Testvfs *)((x)->pAppData))->pParent)
#define TESTVFS_MAX_ARGS 12
static int tvfsClose(sqlite3_file*);
static int tvfsRead(sqlite3_file*, void*, int iAmt, sqlite3_int64 iOfst);
static int tvfsWrite(sqlite3_file*,const void*,int iAmt, sqlite3_int64 iOfst);
static int tvfsTruncate(sqlite3_file*, sqlite3_int64 size);
static int tvfsSync(sqlite3_file*, int flags);
static int tvfsFileSize(sqlite3_file*, sqlite3_int64 *pSize);
static int tvfsLock(sqlite3_file*, int);
static int tvfsUnlock(sqlite3_file*, int);
static int tvfsCheckReservedLock(sqlite3_file*, int *);
static int tvfsFileControl(sqlite3_file*, int op, void *pArg);
static int tvfsSectorSize(sqlite3_file*);
static int tvfsDeviceCharacteristics(sqlite3_file*);
static int tvfsOpen(sqlite3_vfs*, const char *, sqlite3_file*, int , int *);
static int tvfsDelete(sqlite3_vfs*, const char *zName, int syncDir);
static int tvfsAccess(sqlite3_vfs*, const char *zName, int flags, int *);
static int tvfsFullPathname(sqlite3_vfs*, const char *zName, int, char *zOut);
static void *tvfsDlOpen(sqlite3_vfs*, const char *zFilename);
static void tvfsDlError(sqlite3_vfs*, int nByte, char *zErrMsg);
static void (*tvfsDlSym(sqlite3_vfs*,void*, const char *zSymbol))(void);
static void tvfsDlClose(sqlite3_vfs*, void*);
static int tvfsRandomness(sqlite3_vfs*, int nByte, char *zOut);
static int tvfsSleep(sqlite3_vfs*, int microseconds);
static int tvfsCurrentTime(sqlite3_vfs*, double*);
static int tvfsShmOpen(sqlite3_file*);
static int tvfsShmLock(sqlite3_file*, int , int, int);
static int tvfsShmMap(sqlite3_file*,int,int,int, void volatile **);
static void tvfsShmBarrier(sqlite3_file*);
static int tvfsShmUnmap(sqlite3_file*, int);
static int tvfsFetch(sqlite3_file*, sqlite3_int64, int, void**);
static int tvfsUnfetch(sqlite3_file*, sqlite3_int64, void*);
static sqlite3_io_methods tvfs_io_methods = ;
static int tvfsResultCode(Testvfs *p, int *pRc)
static int tvfsInjectFault(TestFaultInject *p)
static int tvfsInjectIoerr(Testvfs *p)
static int tvfsInjectFullerr(Testvfs *p)
static int tvfsInjectCantopenerr(Testvfs *p)
static void tvfsExecTcl(
Testvfs *p,
const char *zMethod,
Tcl_Obj *arg1,
Tcl_Obj *arg2,
Tcl_Obj *arg3,
Tcl_Obj *arg4
)
static int tvfsClose(sqlite3_file *pFile)
static int tvfsRead(
sqlite3_file *pFile,
void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int tvfsWrite(
sqlite3_file *pFile,
const void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int tvfsTruncate(sqlite3_file *pFile, sqlite_int64 size)
static int tvfsSync(sqlite3_file *pFile, int flags)
static int tvfsFileSize(sqlite3_file *pFile, sqlite_int64 *pSize)
static int tvfsLock(sqlite3_file *pFile, int eLock)
static int tvfsUnlock(sqlite3_file *pFile, int eLock)
static int tvfsCheckReservedLock(sqlite3_file *pFile, int *pResOut)
static int tvfsFileControl(sqlite3_file *pFile, int op, void *pArg)
static int tvfsSectorSize(sqlite3_file *pFile)
static int tvfsDeviceCharacteristics(sqlite3_file *pFile)
static int tvfsOpen(
sqlite3_vfs *pVfs,
const char *zName,
sqlite3_file *pFile,
int flags,
int *pOutFlags
)
static int tvfsDelete(sqlite3_vfs *pVfs, const char *zPath, int dirSync)
static int tvfsAccess(
sqlite3_vfs *pVfs,
const char *zPath,
int flags,
int *pResOut
)
static int tvfsFullPathname(
sqlite3_vfs *pVfs,
const char *zPath,
int nOut,
char *zOut
)
static void *tvfsDlOpen(sqlite3_vfs *pVfs, const char *zPath)
static void tvfsDlError(sqlite3_vfs *pVfs, int nByte, char *zErrMsg)
static void (*tvfsDlSym(sqlite3_vfs *pVfs, void *p, const char *zSym))(void)
static void tvfsDlClose(sqlite3_vfs *pVfs, void *pHandle)
static int tvfsRandomness(sqlite3_vfs *pVfs, int nByte, char *zBufOut)
static int tvfsSleep(sqlite3_vfs *pVfs, int nMicro)
static int tvfsCurrentTime(sqlite3_vfs *pVfs, double *pTimeOut)
static int tvfsShmOpen(sqlite3_file *pFile)
static void tvfsAllocPage(TestvfsBuffer *p, int iPage, int pgsz)
static int tvfsShmMap(
sqlite3_file *pFile,
int iPage,
int pgsz,
int isWrite,
void volatile **pp
)
static int tvfsShmLock(
sqlite3_file *pFile,
int ofst,
int n,
int flags
)
static void tvfsShmBarrier(sqlite3_file *pFile)
static int tvfsShmUnmap(
sqlite3_file *pFile,
int deleteFlag
)
static int tvfsFetch(
sqlite3_file *pFile,
sqlite3_int64 iOfst,
int iAmt,
void **pp
)
static int tvfsUnfetch(sqlite3_file *pFile, sqlite3_int64 iOfst, void *p)
static int testvfs_obj_cmd(
ClientData cd,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static void testvfs_obj_del(ClientData cd)
static int testvfs_cmd(
ClientData cd,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int Sqlitetestvfs_Init(Tcl_Interp *interp)
