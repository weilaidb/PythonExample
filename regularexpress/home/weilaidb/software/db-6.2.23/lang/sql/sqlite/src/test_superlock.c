struct SuperlockBusy ;
typedef struct SuperlockBusy SuperlockBusy;
struct Superlock ;
typedef struct Superlock Superlock;
static int superlockBusyHandler(void *pCtx, int UNUSED)
static int superlockIsWal(Superlock *pLock)
static int superlockShmLock(
sqlite3_file *fd,
int idx,
int nByte,
SuperlockBusy *pBusy
)
static int superlockWalLock(
sqlite3 *db,
SuperlockBusy *pBusy
)
void sqlite3demo_superunlock(void *pLock)
int sqlite3demo_superlock(
const char *zPath,
const char *zVfs,
int (*xBusy)(void*,int),
void *pBusyArg,
void **ppLock
)
struct InterpAndScript ;
typedef struct InterpAndScript InterpAndScript;
static void superunlock_del(ClientData cd)
static int superunlock_cmd(
ClientData cd,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int superlock_busy(void *pCtx, int nBusy)
static int superlock_cmd(
ClientData cd,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int SqliteSuperlock_Init(Tcl_Interp *interp)
