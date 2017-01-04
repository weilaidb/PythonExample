typedef struct vfstrace_info vfstrace_info;
struct vfstrace_info ;
typedef struct vfstrace_file vfstrace_file;
struct vfstrace_file ;
static int vfstraceClose(sqlite3_file*);
static int vfstraceRead(sqlite3_file*, void*, int iAmt, sqlite3_int64 iOfst);
static int vfstraceWrite(sqlite3_file*,const void*,int iAmt, sqlite3_int64);
static int vfstraceTruncate(sqlite3_file*, sqlite3_int64 size);
static int vfstraceSync(sqlite3_file*, int flags);
static int vfstraceFileSize(sqlite3_file*, sqlite3_int64 *pSize);
static int vfstraceLock(sqlite3_file*, int);
static int vfstraceUnlock(sqlite3_file*, int);
static int vfstraceCheckReservedLock(sqlite3_file*, int *);
static int vfstraceFileControl(sqlite3_file*, int op, void *pArg);
static int vfstraceSectorSize(sqlite3_file*);
static int vfstraceDeviceCharacteristics(sqlite3_file*);
static int vfstraceShmLock(sqlite3_file*,int,int,int);
static int vfstraceShmMap(sqlite3_file*,int,int,int, void volatile **);
static void vfstraceShmBarrier(sqlite3_file*);
static int vfstraceShmUnmap(sqlite3_file*,int);
static int vfstraceOpen(sqlite3_vfs*, const char *, sqlite3_file*, int , int *);
static int vfstraceDelete(sqlite3_vfs*, const char *zName, int syncDir);
static int vfstraceAccess(sqlite3_vfs*, const char *zName, int flags, int *);
static int vfstraceFullPathname(sqlite3_vfs*, const char *zName, int, char *);
static void *vfstraceDlOpen(sqlite3_vfs*, const char *zFilename);
static void vfstraceDlError(sqlite3_vfs*, int nByte, char *zErrMsg);
static void (*vfstraceDlSym(sqlite3_vfs*,void*, const char *zSymbol))(void);
static void vfstraceDlClose(sqlite3_vfs*, void*);
static int vfstraceRandomness(sqlite3_vfs*, int nByte, char *zOut);
static int vfstraceSleep(sqlite3_vfs*, int microseconds);
static int vfstraceCurrentTime(sqlite3_vfs*, double*);
static int vfstraceGetLastError(sqlite3_vfs*, int, char*);
static int vfstraceCurrentTimeInt64(sqlite3_vfs*, sqlite3_int64*);
static int vfstraceSetSystemCall(sqlite3_vfs*,const char*, sqlite3_syscall_ptr);
static sqlite3_syscall_ptr vfstraceGetSystemCall(sqlite3_vfs*, const char *);
static const char *vfstraceNextSystemCall(sqlite3_vfs*, const char *zName);
static const char *fileTail(const char *z)
static void vfstrace_printf(
vfstrace_info *pInfo,
const char *zFormat,
...
)
static void vfstrace_print_errcode(
vfstrace_info *pInfo,
const char *zFormat,
int rc
)
static void strappend(char *z, int *pI, const char *zAppend)
static int vfstraceClose(sqlite3_file *pFile)
static int vfstraceRead(
sqlite3_file *pFile,
void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int vfstraceWrite(
sqlite3_file *pFile,
const void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int vfstraceTruncate(sqlite3_file *pFile, sqlite_int64 size)
static int vfstraceSync(sqlite3_file *pFile, int flags)
static int vfstraceFileSize(sqlite3_file *pFile, sqlite_int64 *pSize)
static const char *lockName(int eLock)
static int vfstraceLock(sqlite3_file *pFile, int eLock)
static int vfstraceUnlock(sqlite3_file *pFile, int eLock)
static int vfstraceCheckReservedLock(sqlite3_file *pFile, int *pResOut)
static int vfstraceFileControl(sqlite3_file *pFile, int op, void *pArg)
static int vfstraceSectorSize(sqlite3_file *pFile)
static int vfstraceDeviceCharacteristics(sqlite3_file *pFile)
static int vfstraceShmLock(sqlite3_file *pFile, int ofst, int n, int flags)
static int vfstraceShmMap(
sqlite3_file *pFile,
int iRegion,
int szRegion,
int isWrite,
void volatile **pp
)
static void vfstraceShmBarrier(sqlite3_file *pFile)
static int vfstraceShmUnmap(sqlite3_file *pFile, int delFlag)
static int vfstraceOpen(
sqlite3_vfs *pVfs,
const char *zName,
sqlite3_file *pFile,
int flags,
int *pOutFlags
)
static int vfstraceDelete(sqlite3_vfs *pVfs, const char *zPath, int dirSync)
static int vfstraceAccess(
sqlite3_vfs *pVfs,
const char *zPath,
int flags,
int *pResOut
)
static int vfstraceFullPathname(
sqlite3_vfs *pVfs,
const char *zPath,
int nOut,
char *zOut
)
static void *vfstraceDlOpen(sqlite3_vfs *pVfs, const char *zPath)
static void vfstraceDlError(sqlite3_vfs *pVfs, int nByte, char *zErrMsg)
static void (*vfstraceDlSym(sqlite3_vfs *pVfs,void *p,const char *zSym))(void)
static void vfstraceDlClose(sqlite3_vfs *pVfs, void *pHandle)
static int vfstraceRandomness(sqlite3_vfs *pVfs, int nByte, char *zBufOut)
static int vfstraceSleep(sqlite3_vfs *pVfs, int nMicro)
static int vfstraceCurrentTime(sqlite3_vfs *pVfs, double *pTimeOut)
static int vfstraceCurrentTimeInt64(sqlite3_vfs *pVfs, sqlite3_int64 *pTimeOut)
static int vfstraceGetLastError(sqlite3_vfs *pVfs, int iErr, char *zErr)
static int vfstraceSetSystemCall(
sqlite3_vfs *pVfs,
const char *zName,
sqlite3_syscall_ptr pFunc
)
static sqlite3_syscall_ptr vfstraceGetSystemCall(
sqlite3_vfs *pVfs,
const char *zName
)
static const char *vfstraceNextSystemCall(sqlite3_vfs *pVfs, const char *zName)
int vfstrace_register(
const char *zTraceName,
const char *zOldVfsName,
int (*xOut)(const char*,void*),
void *pOutArg,
int makeDefault
)
