#define TCL_THREADS
extern const char *sqlite3ErrName(int);
struct TestAsyncGlobal  testasync_g = ;
TCL_DECLARE_MUTEX(testasync_g_writerMutex);
static int testAsyncInit(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int testAsyncShutdown(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static Tcl_ThreadCreateType tclWriterThread(ClientData pIsStarted)
static int testAsyncStart(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int testAsyncWait(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int testAsyncControl(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int Sqlitetestasync_Init(Tcl_Interp *interp)
