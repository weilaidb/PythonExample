extern const char *sqlite3ErrName(int);
extern int getDbPointer(Tcl_Interp *, const char *, sqlite3 **);
static int backupTestCmd(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *const*objv
)
static void backupTestFinish(ClientData clientData)
static int backupTestInit(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *const*objv
)
int Sqlitetestbackup_Init(Tcl_Interp *interp)
