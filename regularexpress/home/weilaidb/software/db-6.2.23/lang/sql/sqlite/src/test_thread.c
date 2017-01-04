#if SQLITE_THREADSAFE
#if !defined(_MSC_VER)
typedef struct SqlThread SqlThread;
struct SqlThread ;
typedef struct EvalEvent EvalEvent;
struct EvalEvent ;
static Tcl_ObjCmdProc sqlthread_proc;
static Tcl_ObjCmdProc clock_seconds_proc;
#if SQLITE_OS_UNIX && defined(SQLITE_ENABLE_UNLOCK_NOTIFY)
static Tcl_ObjCmdProc blocking_step_proc;
static Tcl_ObjCmdProc blocking_prepare_v2_proc;
int Sqlitetest1_Init(Tcl_Interp *);
int Sqlite3_Init(Tcl_Interp *);
extern const char *sqlite3ErrName(int);
extern void *sqlite3TestTextToPtr(const char *);
extern int getDbPointer(Tcl_Interp *, const char *, sqlite3 **);
extern int sqlite3TestMakePointerStr(Tcl_Interp *, char *, void *);
extern int sqlite3TestErrCode(Tcl_Interp *, sqlite3 *, int);
static int tclScriptEvent(Tcl_Event *evPtr, int flags)
static void postToParent(SqlThread *p, Tcl_Obj *pScript)
static Tcl_ThreadCreateType tclScriptThread(ClientData pSqlThread)
static int sqlthread_spawn(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int sqlthread_parent(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int xBusy(void *pArg, int nBusy)
static int sqlthread_open(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int sqlthread_id(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int sqlthread_proc(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int clock_seconds_proc(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
#if SQLITE_OS_UNIX && defined(SQLITE_ENABLE_UNLOCK_NOTIFY)
typedef struct UnlockNotification UnlockNotification;
struct UnlockNotification ;
static void unlock_notify_cb(void **apArg, int nArg)
static int wait_for_unlock_notify(sqlite3 *db)
int sqlite3_blocking_step(sqlite3_stmt *pStmt)
int sqlite3_blocking_prepare_v2(
sqlite3 *db,
const char *zSql,
int nSql,
sqlite3_stmt **ppStmt,
const char **pz
)
static int blocking_step_proc(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int blocking_prepare_v2_proc(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int SqlitetestThread_Init(Tcl_Interp *interp)
int SqlitetestThread_Init(Tcl_Interp *interp)
