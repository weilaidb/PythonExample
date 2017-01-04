static int      lock_Cmd __P((ClientData, Tcl_Interp *, int, Tcl_Obj * CONST*));
static int	_LockMode __P((Tcl_Interp *, Tcl_Obj *, db_lockmode_t *));
static int	_GetThisLock __P((Tcl_Interp *, DB_ENV *, u_int32_t,
u_int32_t, DBT *, db_lockmode_t, char *));
static void	_LockPutInfo __P((Tcl_Interp *, db_lockop_t, DB_LOCK *,
u_int32_t, DBT *));
int
tcl_LockDetect(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_LockGet(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_LockStat(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_LockStatPrint(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_LockTimeout(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
static int
lock_Cmd(clientData, interp, objc, objv)
ClientData clientData;
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
int
tcl_LockVec(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
static int
_LockMode(interp, obj, mode)
Tcl_Interp *interp;
Tcl_Obj *obj;
db_lockmode_t *mode;
static void
_LockPutInfo(interp, op, lock, lockid, objp)
Tcl_Interp *interp;
db_lockop_t op;
DB_LOCK *lock;
u_int32_t lockid;
DBT *objp;
static int
_GetThisLock(interp, dbenv, lockid, flag, objp, mode, newname)
Tcl_Interp *interp;
DB_ENV *dbenv;
u_int32_t lockid;
u_int32_t flag;
DBT *objp;
db_lockmode_t mode;
char *newname;
