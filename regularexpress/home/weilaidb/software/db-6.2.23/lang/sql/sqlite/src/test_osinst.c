#if SQLITE_OS_WIN
#  include "os_win.h"
#define INST_MAX_PATHNAME 512
#define OS_ACCESS            1
#define OS_CHECKRESERVEDLOCK 2
#define OS_CLOSE             3
#define OS_CURRENTTIME       4
#define OS_DELETE            5
#define OS_DEVCHAR           6
#define OS_FILECONTROL       7
#define OS_FILESIZE          8
#define OS_FULLPATHNAME      9
#define OS_LOCK              11
#define OS_OPEN              12
#define OS_RANDOMNESS        13
#define OS_READ              14
#define OS_SECTORSIZE        15
#define OS_SLEEP             16
#define OS_SYNC              17
#define OS_TRUNCATE          18
#define OS_UNLOCK            19
#define OS_WRITE             20
#define OS_SHMUNMAP          22
#define OS_SHMMAP            23
#define OS_SHMLOCK           25
#define OS_SHMBARRIER        26
#define OS_ANNOTATE          28
#define OS_NUMEVENTS         29
#define VFSLOG_BUFFERSIZE 8192
typedef struct VfslogVfs VfslogVfs;
typedef struct VfslogFile VfslogFile;
struct VfslogVfs ;
struct VfslogFile ;
#define REALVFS(p) (((VfslogVfs *)(p))->pVfs)
static int vfslogClose(sqlite3_file*);
static int vfslogRead(sqlite3_file*, void*, int iAmt, sqlite3_int64 iOfst);
static int vfslogWrite(sqlite3_file*,const void*,int iAmt, sqlite3_int64 iOfst);
static int vfslogTruncate(sqlite3_file*, sqlite3_int64 size);
static int vfslogSync(sqlite3_file*, int flags);
static int vfslogFileSize(sqlite3_file*, sqlite3_int64 *pSize);
static int vfslogLock(sqlite3_file*, int);
static int vfslogUnlock(sqlite3_file*, int);
static int vfslogCheckReservedLock(sqlite3_file*, int *pResOut);
static int vfslogFileControl(sqlite3_file*, int op, void *pArg);
static int vfslogSectorSize(sqlite3_file*);
static int vfslogDeviceCharacteristics(sqlite3_file*);
static int vfslogShmLock(sqlite3_file *pFile, int ofst, int n, int flags);
static int vfslogShmMap(sqlite3_file *pFile,int,int,int,volatile void **);
static void vfslogShmBarrier(sqlite3_file*);
static int vfslogShmUnmap(sqlite3_file *pFile, int deleteFlag);
static int vfslogOpen(sqlite3_vfs*, const char *, sqlite3_file*, int , int *);
static int vfslogDelete(sqlite3_vfs*, const char *zName, int syncDir);
static int vfslogAccess(sqlite3_vfs*, const char *zName, int flags, int *);
static int vfslogFullPathname(sqlite3_vfs*, const char *zName, int, char *zOut);
static void *vfslogDlOpen(sqlite3_vfs*, const char *zFilename);
static void vfslogDlError(sqlite3_vfs*, int nByte, char *zErrMsg);
static void (*vfslogDlSym(sqlite3_vfs *pVfs, void *p, const char*zSym))(void);
static void vfslogDlClose(sqlite3_vfs*, void*);
static int vfslogRandomness(sqlite3_vfs*, int nByte, char *zOut);
static int vfslogSleep(sqlite3_vfs*, int microseconds);
static int vfslogCurrentTime(sqlite3_vfs*, double*);
static int vfslogGetLastError(sqlite3_vfs*, int, char *);
static int vfslogCurrentTimeInt64(sqlite3_vfs*, sqlite3_int64*);
static sqlite3_vfs vfslog_vfs = ;
static sqlite3_io_methods vfslog_io_methods = ;
#if SQLITE_OS_UNIX && !defined(NO_GETTOD)
static sqlite3_uint64 vfslog_time()
#elif SQLITE_OS_WIN
static sqlite3_uint64 vfslog_time()
static sqlite3_uint64 vfslog_time()
static void vfslog_call(sqlite3_vfs *, int, int, sqlite3_int64, int, int, int);
static void vfslog_string(sqlite3_vfs *, const char *);
static int vfslogClose(sqlite3_file *pFile)
static int vfslogRead(
sqlite3_file *pFile,
void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int vfslogWrite(
sqlite3_file *pFile,
const void *z,
int iAmt,
sqlite_int64 iOfst
)
static int vfslogTruncate(sqlite3_file *pFile, sqlite_int64 size)
static int vfslogSync(sqlite3_file *pFile, int flags)
static int vfslogFileSize(sqlite3_file *pFile, sqlite_int64 *pSize)
static int vfslogLock(sqlite3_file *pFile, int eLock)
static int vfslogUnlock(sqlite3_file *pFile, int eLock)
static int vfslogCheckReservedLock(sqlite3_file *pFile, int *pResOut)
static int vfslogFileControl(sqlite3_file *pFile, int op, void *pArg)
static int vfslogSectorSize(sqlite3_file *pFile)
static int vfslogDeviceCharacteristics(sqlite3_file *pFile)
static int vfslogShmLock(sqlite3_file *pFile, int ofst, int n, int flags)
static int vfslogShmMap(
sqlite3_file *pFile,
int iRegion,
int szRegion,
int isWrite,
volatile void **pp
)
static void vfslogShmBarrier(sqlite3_file *pFile)
static int vfslogShmUnmap(sqlite3_file *pFile, int deleteFlag)
static int vfslogOpen(
sqlite3_vfs *pVfs,
const char *zName,
sqlite3_file *pFile,
int flags,
int *pOutFlags
)
static int vfslogDelete(sqlite3_vfs *pVfs, const char *zPath, int dirSync)
static int vfslogAccess(
sqlite3_vfs *pVfs,
const char *zPath,
int flags,
int *pResOut
)
static int vfslogFullPathname(
sqlite3_vfs *pVfs,
const char *zPath,
int nOut,
char *zOut
)
static void *vfslogDlOpen(sqlite3_vfs *pVfs, const char *zPath)
static void vfslogDlError(sqlite3_vfs *pVfs, int nByte, char *zErrMsg)
static void (*vfslogDlSym(sqlite3_vfs *pVfs, void *p, const char *zSym))(void)
static void vfslogDlClose(sqlite3_vfs *pVfs, void *pHandle)
static int vfslogRandomness(sqlite3_vfs *pVfs, int nByte, char *zBufOut)
static int vfslogSleep(sqlite3_vfs *pVfs, int nMicro)
static int vfslogCurrentTime(sqlite3_vfs *pVfs, double *pTimeOut)
static int vfslogGetLastError(sqlite3_vfs *pVfs, int a, char *b)
static int vfslogCurrentTimeInt64(sqlite3_vfs *pVfs, sqlite3_int64 *p)
static void vfslog_flush(VfslogVfs *p)
static void put32bits(unsigned char *p, unsigned int v)
static void vfslog_call(
sqlite3_vfs *pVfs,
int eEvent,
int iFileid,
sqlite3_int64 nClick,
int return_code,
int size,
int offset
)
static void vfslog_string(sqlite3_vfs *pVfs, const char *zStr)
static void vfslog_finalize(VfslogVfs *p)
int sqlite3_vfslog_finalize(const char *zVfs)
int sqlite3_vfslog_new(
const char *zVfs,
const char *zParentVfs,
const char *zLog
)
int sqlite3_vfslog_annotate(const char *zVfs, const char *zMsg)
static const char *vfslog_eventname(int eEvent)
typedef struct VfslogVtab VfslogVtab;
typedef struct VfslogCsr VfslogCsr;
struct VfslogVtab ;
struct VfslogCsr ;
static unsigned int get32bits(unsigned char *p)
static void dequote(char *z)
static int vlogConnect(
sqlite3 *db,
void *pAux,
int argc, const char *const*argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int vlogBestIndex(sqlite3_vtab *tab, sqlite3_index_info *pIdxInfo)
static int vlogDisconnect(sqlite3_vtab *pVtab)
static int vlogOpen(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCursor)
static int vlogClose(sqlite3_vtab_cursor *pCursor)
static int vlogNext(sqlite3_vtab_cursor *pCursor)
static int vlogEof(sqlite3_vtab_cursor *pCursor)
static int vlogFilter(
sqlite3_vtab_cursor *pCursor,
int idxNum, const char *idxStr,
int argc, sqlite3_value **argv
)
static int vlogColumn(
sqlite3_vtab_cursor *pCursor,
sqlite3_context *ctx,
int i
)
static int vlogRowid(sqlite3_vtab_cursor *pCursor, sqlite_int64 *pRowid)
int sqlite3_vfslog_register(sqlite3 *db)
#if defined(SQLITE_TEST) || defined(TCLSH)
static int test_vfslog(
void *clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int SqlitetestOsinst_Init(Tcl_Interp *interp)
