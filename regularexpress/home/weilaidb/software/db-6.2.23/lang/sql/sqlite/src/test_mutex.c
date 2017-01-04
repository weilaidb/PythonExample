extern const char *sqlite3ErrName(int);
struct sqlite3_mutex ;
static struct test_mutex_globals  g = ;
static int counterMutexHeld(sqlite3_mutex *p)
static int counterMutexNotheld(sqlite3_mutex *p)
static int counterMutexInit(void)
static int counterMutexEnd(void)
static sqlite3_mutex *counterMutexAlloc(int eType)
static void counterMutexFree(sqlite3_mutex *p)
static void counterMutexEnter(sqlite3_mutex *p)
static int counterMutexTry(sqlite3_mutex *p)
static void counterMutexLeave(sqlite3_mutex *p)
static int test_shutdown(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_initialize(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_install_mutex_counters(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_read_mutex_counters(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_clear_mutex_counters(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_alloc_mutex(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_config(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static sqlite3 *getDbPointer(Tcl_Interp *pInterp, Tcl_Obj *pObj)
static int test_enter_db_mutex(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_leave_db_mutex(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int Sqlitetest_mutex_Init(Tcl_Interp *interp)
