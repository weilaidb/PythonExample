#define SQLITE_CORE 1
#define UNUSED_PARAMETER(x) (void)(x)
#define MAX_PAGE_SIZE       0x10000
#define DEFAULT_SECTOR_SIZE 0x1000
#if defined(SQLITE_THREADSAFE) && SQLITE_THREADSAFE==0
#define sqlite3_mutex_alloc(X)    ((sqlite3_mutex*)8)
#define sqlite3_mutex_free(X)
#define sqlite3_mutex_enter(X)
#define sqlite3_mutex_try(X)      SQLITE_OK
#define sqlite3_mutex_leave(X)
#define sqlite3_mutex_held(X)     ((void)(X),1)
#define sqlite3_mutex_notheld(X)  ((void)(X),1)
#define MX_CHUNK_NUMBER 299
#define SQLITE_MULTIPLEX_JOURNAL_8_3_OFFSET 400
#define SQLITE_MULTIPLEX_WAL_8_3_OFFSET 700
# define SQLITE_MULTIPLEX_VFS_NAME "multiplex"
# define SQLITE_MULTIPLEX_CHUNK_SIZE 2147418112
# define SQLITE_MULTIPLEX_MAX_CHUNKS 12
typedef struct multiplexGroup multiplexGroup;
typedef struct multiplexConn multiplexConn;
struct multiplexGroup ;
struct multiplexConn ;
static struct  gMultiplex;
static void multiplexEnter(void)
static void multiplexLeave(void)
static int multiplexStrlen30(const char *z)
static void multiplexFilename(
const char *zBase,
int nBase,
int flags,
int iChunk,
char *zOut
)
static int multiplexSubFilename(multiplexGroup *pGroup, int iChunk)
static sqlite3_file *multiplexSubOpen(
multiplexGroup *pGroup,
int iChunk,
int *rc,
int *pOutFlags,
int createFlag
)
static sqlite3_int64 multiplexSubSize(
multiplexGroup *pGroup,
int iChunk,
int *rc
)
static void multiplexControlFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static int multiplexFuncInit(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
static void multiplexSubClose(
multiplexGroup *pGroup,
int iChunk,
sqlite3_vfs *pOrigVfs
)
static void multiplexFreeComponents(multiplexGroup *pGroup)
static int multiplexOpen(
sqlite3_vfs *pVfs,
const char *zName,
sqlite3_file *pConn,
int flags,
int *pOutFlags
)
static int multiplexDelete(
sqlite3_vfs *pVfs,
const char *zName,
int syncDir
)
static int multiplexAccess(sqlite3_vfs *a, const char *b, int c, int *d)
static int multiplexFullPathname(sqlite3_vfs *a, const char *b, int c, char *d)
static void *multiplexDlOpen(sqlite3_vfs *a, const char *b)
static void multiplexDlError(sqlite3_vfs *a, int b, char *c)
static void (*multiplexDlSym(sqlite3_vfs *a, void *b, const char *c))(void)
static void multiplexDlClose(sqlite3_vfs *a, void *b)
static int multiplexRandomness(sqlite3_vfs *a, int b, char *c)
static int multiplexSleep(sqlite3_vfs *a, int b)
static int multiplexCurrentTime(sqlite3_vfs *a, double *b)
static int multiplexGetLastError(sqlite3_vfs *a, int b, char *c)
static int multiplexCurrentTimeInt64(sqlite3_vfs *a, sqlite3_int64 *b)
static int multiplexClose(sqlite3_file *pConn)
static int multiplexRead(
sqlite3_file *pConn,
void *pBuf,
int iAmt,
sqlite3_int64 iOfst
)
static int multiplexWrite(
sqlite3_file *pConn,
const void *pBuf,
int iAmt,
sqlite3_int64 iOfst
)
static int multiplexTruncate(sqlite3_file *pConn, sqlite3_int64 size)
static int multiplexSync(sqlite3_file *pConn, int flags)
static int multiplexFileSize(sqlite3_file *pConn, sqlite3_int64 *pSize)
static int multiplexLock(sqlite3_file *pConn, int lock)
static int multiplexUnlock(sqlite3_file *pConn, int lock)
static int multiplexCheckReservedLock(sqlite3_file *pConn, int *pResOut)
static int multiplexFileControl(sqlite3_file *pConn, int op, void *pArg)
static int multiplexSectorSize(sqlite3_file *pConn)
static int multiplexDeviceCharacteristics(sqlite3_file *pConn)
static int multiplexShmMap(
sqlite3_file *pConn,
int iRegion,
int szRegion,
int bExtend,
void volatile **pp
)
static int multiplexShmLock(
sqlite3_file *pConn,
int ofst,
int n,
int flags
)
static void multiplexShmBarrier(sqlite3_file *pConn)
static int multiplexShmUnmap(sqlite3_file *pConn, int deleteFlag)
int sqlite3_multiplex_initialize(const char *zOrigVfsName, int makeDefault)
int sqlite3_multiplex_shutdown(int eForce)
extern const char *sqlite3ErrName(int);
static int test_multiplex_initialize(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_multiplex_shutdown(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_multiplex_dump(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_multiplex_control(
ClientData cd,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int Sqlitemultiplex_Init(Tcl_Interp *interp)
