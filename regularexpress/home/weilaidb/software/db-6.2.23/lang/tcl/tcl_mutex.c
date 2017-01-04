int
tcl_Mutex(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_MutexFailchkTimeout(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_MutFree(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_MutGet(interp, dbenv, op)
Tcl_Interp *interp;
DB_ENV *dbenv;
int op;
int
tcl_MutLock(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_MutSet(interp, obj, dbenv, op)
Tcl_Interp *interp;
Tcl_Obj *obj;
DB_ENV *dbenv;
int op;
int
tcl_MutStat(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_MutStatPrint(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_MutUnlock(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
