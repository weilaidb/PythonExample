int
bdb_HCommand(interp, objc, objv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
int
bdb_NdbmOpen(interp, objc, objv, dbpp)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DBM **dbpp;
int
bdb_DbmCommand(interp, objc, objv, flag, dbm)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
int flag;
DBM *dbm;
int
ndbm_Cmd(clientData, interp, objc, objv)
ClientData clientData;
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
