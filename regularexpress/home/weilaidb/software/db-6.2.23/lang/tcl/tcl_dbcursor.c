static int tcl_DbcDbstream __P((Tcl_Interp *,
int, Tcl_Obj * CONST*, DBC *, DB_STREAM **));
static int tcl_DbcDel __P((Tcl_Interp *, int, Tcl_Obj * CONST*, DBC *));
static int tcl_DbcDup __P((Tcl_Interp *, int, Tcl_Obj * CONST*, DBC *));
static int tcl_DbcCompare __P((Tcl_Interp *, int, Tcl_Obj * CONST*, DBC *));
static int tcl_DbcGet __P((Tcl_Interp *, int, Tcl_Obj * CONST*, DBC *, int));
static int tcl_DbcHeapDel __P((Tcl_Interp *, DBC *));
static int tcl_DbcPut __P((Tcl_Interp *, int, Tcl_Obj * CONST*, DBC *));
int
dbc_Cmd(clientData, interp, objc, objv)
ClientData clientData;
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
static int
tcl_DbcHeapDel(interp, dbc)
Tcl_Interp *interp;
DBC *dbc;
static int
tcl_DbcPut(interp, objc, objv, dbc)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DBC *dbc;
static int
tcl_DbcGet(interp, objc, objv, dbc, ispget)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DBC *dbc;
int ispget;
static int
tcl_DbcCompare(interp, objc, objv, dbc)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DBC *dbc;
static int
tcl_DbcDup(interp, objc, objv, dbc)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DBC *dbc;
static int
tcl_DbcDel(interp, objc, objv, dbc)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DBC *dbc;
static int
tcl_DbcDbstream(interp, objc, objv, dbc, dbsp)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DBC *dbc;
DB_STREAM **dbsp;
