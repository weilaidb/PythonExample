#if defined(SQLITE_THREADSAFE) && SQLITE_THREADSAFE==0
#define sqlite3_mutex_alloc(X)    ((sqlite3_mutex*)8)
#define sqlite3_mutex_free(X)
#define sqlite3_mutex_enter(X)
#define sqlite3_mutex_try(X)      SQLITE_OK
#define sqlite3_mutex_leave(X)
#define sqlite3_mutex_held(X)     ((void)(X),1)
#define sqlite3_mutex_notheld(X)  ((void)(X),1)
#if SQLITE_OS_UNIX
# include <unistd.h>
#if SQLITE_OS_WIN
# include "os_win.h"
# include <io.h>
typedef struct quotaGroup quotaGroup;
typedef struct quotaConn quotaConn;
typedef struct quotaFile quotaFile;
struct quotaGroup ;
struct quotaFile ;
struct quotaConn ;
struct quota_FILE ;
static struct  gQuota;
static void quotaEnter(void)
static void quotaLeave(void)
static int quotaGroupOpenFileCount(quotaGroup *pGroup)
static void quotaRemoveFile(quotaFile *pFile)
static void quotaRemoveAllFiles(quotaGroup *pGroup)
static void quotaGroupDeref(quotaGroup *pGroup)
static int quotaStrglob(const char *zGlob, const char *z)
static quotaGroup *quotaGroupFind(const char *zFilename)
static sqlite3_file *quotaSubOpen(sqlite3_file *pConn)
static quotaFile *quotaFindFile(
quotaGroup *pGroup,
const char *zName,
int createFlag
)
static char *quota_utf8_to_mbcs(const char *zUtf8)
static void quota_mbcs_free(char *zOld)
static int quotaOpen(
sqlite3_vfs *pVfs,
const char *zName,
sqlite3_file *pConn,
int flags,
int *pOutFlags
)
static int quotaDelete(
sqlite3_vfs *pVfs,
const char *zName,
int syncDir
)
static int quotaClose(sqlite3_file *pConn)
static int quotaRead(
sqlite3_file *pConn,
void *pBuf,
int iAmt,
sqlite3_int64 iOfst
)
static int quotaWrite(
sqlite3_file *pConn,
const void *pBuf,
int iAmt,
sqlite3_int64 iOfst
)
static int quotaTruncate(sqlite3_file *pConn, sqlite3_int64 size)
static int quotaSync(sqlite3_file *pConn, int flags)
static int quotaFileSize(sqlite3_file *pConn, sqlite3_int64 *pSize)
static int quotaLock(sqlite3_file *pConn, int lock)
static int quotaUnlock(sqlite3_file *pConn, int lock)
static int quotaCheckReservedLock(sqlite3_file *pConn, int *pResOut)
static int quotaFileControl(sqlite3_file *pConn, int op, void *pArg)
static int quotaSectorSize(sqlite3_file *pConn)
static int quotaDeviceCharacteristics(sqlite3_file *pConn)
static int quotaShmMap(
sqlite3_file *pConn,
int iRegion,
int szRegion,
int bExtend,
void volatile **pp
)
static int quotaShmLock(
sqlite3_file *pConn,
int ofst,
int n,
int flags
)
static void quotaShmBarrier(sqlite3_file *pConn)
static int quotaShmUnmap(sqlite3_file *pConn, int deleteFlag)
int sqlite3_quota_initialize(const char *zOrigVfsName, int makeDefault)
int sqlite3_quota_shutdown(void)
int sqlite3_quota_set(
const char *zPattern,
sqlite3_int64 iLimit,
void (*xCallback)(
const char *zFilename,
sqlite3_int64 *piLimit,
sqlite3_int64 iSize,
void *pArg
),
void *pArg,
void (*xDestroy)(void*)
)
int sqlite3_quota_file(const char *zFilename)
quota_FILE *sqlite3_quota_fopen(const char *zFilename, const char *zMode)
size_t sqlite3_quota_fread(
void *pBuf,
size_t size,
size_t nmemb,
quota_FILE *p
)
size_t sqlite3_quota_fwrite(
const void *pBuf,
size_t size,
size_t nmemb,
quota_FILE *p
)
int sqlite3_quota_fclose(quota_FILE *p)
int sqlite3_quota_fflush(quota_FILE *p, int doFsync)
int sqlite3_quota_fseek(quota_FILE *p, long offset, int whence)
void sqlite3_quota_rewind(quota_FILE *p)
long sqlite3_quota_ftell(quota_FILE *p)
int sqlite3_quota_ferror(quota_FILE *p)
int sqlite3_quota_ftruncate(quota_FILE *p, sqlite3_int64 szNew)
int sqlite3_quota_file_mtime(quota_FILE *p, time_t *pTime)
sqlite3_int64 sqlite3_quota_file_truesize(quota_FILE *p)
sqlite3_int64 sqlite3_quota_file_size(quota_FILE *p)
long sqlite3_quota_file_available(quota_FILE *p)
int sqlite3_quota_remove(const char *zFilename)
typedef struct TclQuotaCallback TclQuotaCallback;
struct TclQuotaCallback ;
extern const char *sqlite3ErrName(int);
static void tclQuotaCallback(
const char *zFilename,
sqlite3_int64 *piLimit,
sqlite3_int64 iSize,
void *pArg
)
static void tclCallbackDestructor(void *pObj)
static int test_quota_initialize(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_quota_shutdown(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_quota_set(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_quota_file(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_quota_dump(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_quota_fopen(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
extern void *sqlite3TestTextToPtr(const char*);
static int test_quota_fread(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_quota_fwrite(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_quota_fclose(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_quota_fflush(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_quota_fseek(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_quota_rewind(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_quota_ftell(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_quota_ftruncate(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_quota_file_size(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_quota_file_truesize(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_quota_file_mtime(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_quota_remove(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_quota_glob(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_quota_file_available(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_quota_ferror(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int Sqlitequota_Init(Tcl_Interp *interp)
