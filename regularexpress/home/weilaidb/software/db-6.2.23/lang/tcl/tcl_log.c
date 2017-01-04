static int tcl_LogcGet __P((Tcl_Interp *, int, Tcl_Obj * CONST*, DB_LOGC *));
int
tcl_LogArchive(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_LogCompare(interp, objc, objv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
int
tcl_LogFile(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_LogFlush(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_LogGet(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_LogPut(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_LogStat(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_LogStatPrint(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_LogVerify(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
logc_Cmd(clientData, interp, objc, objv)
ClientData clientData;
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
static int
tcl_LogcGet(interp, objc, objv, logc)
Tcl_Interp *interp;
int objc;
Tcl_Obj * CONST *objv;
DB_LOGC *logc;
static const char *confwhich[] = ;
enum logwhich ;
int
tcl_LogConfig(interp, dbenv, which, onoff)
Tcl_Interp *interp;
DB_ENV *dbenv;
Tcl_Obj *which;
Tcl_Obj *onoff;
int
tcl_LogGetConfig(interp, dbenv, which)
Tcl_Interp *interp;
DB_ENV *dbenv;
Tcl_Obj *which;
int
tcl_LogSetMax(interp, dbenv, objv, logbufset, logmaxset)
Tcl_Interp *interp;
DB_ENV *dbenv;
Tcl_Obj *objv;
u_int32_t *logbufset;
u_int32_t *logmaxset;
