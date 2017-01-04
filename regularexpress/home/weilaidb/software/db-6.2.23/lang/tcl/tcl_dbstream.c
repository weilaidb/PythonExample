static int tcl_DbstreamRead __P((Tcl_Interp *,
int, Tcl_Obj * CONST*, DB_STREAM *));
static int tcl_DbstreamWrite __P((Tcl_Interp *,
int, Tcl_Obj * CONST*, DB_STREAM *));
int
dbstream_Cmd(clientData, interp, objc, objv)
ClientData clientData;
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
static int
tcl_DbstreamRead(interp, objc, objv, dbs)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_STREAM *dbs;
static int
tcl_DbstreamWrite(interp, objc, objv, dbs)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_STREAM *dbs;
