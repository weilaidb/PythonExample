static void _EnvInfoDelete __P((Tcl_Interp *, DBTCL_INFO *));
static int  env_DbRemove __P((Tcl_Interp *, int, Tcl_Obj * CONST*, DB_ENV *));
static int  env_DbRename __P((Tcl_Interp *, int, Tcl_Obj * CONST*, DB_ENV *));
static int  env_EventInfo __P((Tcl_Interp *,
int, Tcl_Obj * CONST*, DB_ENV *, DBTCL_INFO *));
static int  env_EventCount __P((Tcl_Interp *,
int, Tcl_Obj * CONST*, DB_ENV *, DBTCL_INFO *));
static int  env_GetFlags __P((Tcl_Interp *, int, Tcl_Obj * CONST*, DB_ENV *));
static int  env_GetOpenFlag __P((Tcl_Interp *,
int, Tcl_Obj * CONST*, DB_ENV *));
static int  env_GetLockDetect __P((Tcl_Interp *,
int, Tcl_Obj * CONST*, DB_ENV *));
static int  env_GetSlices __P((Tcl_Interp *,
int, Tcl_Obj * CONST*, DB_ENV *, Tcl_Obj **));
static int  env_GetTimeout __P((Tcl_Interp *, int, Tcl_Obj * CONST*, DB_ENV *));
static int  env_GetVerbose __P((Tcl_Interp *, int, Tcl_Obj * CONST*, DB_ENV *));
int
env_Cmd(clientData, interp, objc, objv)
ClientData clientData;
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
int
tcl_EnvRemove(interp, objc, objv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
static void
_EnvInfoDelete(interp, envip)
Tcl_Interp *interp;
DBTCL_INFO *envip;
int
tcl_EnvClose(interp, objc, objv, dbenv, envip)
Tcl_Interp *interp;
int objc;
Tcl_Obj * CONST* objv;
DB_ENV *dbenv;
DBTCL_INFO *envip;
int
tcl_EnvBackup(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj * CONST* objv;
DB_ENV *dbenv;
int
tcl_EnvDbBackup(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj * CONST* objv;
DB_ENV *dbenv;
int
tcl_EnvIdReset(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj * CONST* objv;
DB_ENV *dbenv;
int
tcl_EnvLsnReset(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj * CONST* objv;
DB_ENV *dbenv;
int
tcl_EnvVerbose(interp, dbenv, which, onoff)
Tcl_Interp *interp;
DB_ENV *dbenv;
Tcl_Obj *which;
Tcl_Obj *onoff;
int
tcl_EnvAttr(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
static const struct  event_names[] = ;
static int
env_EventInfo(interp, objc, objv, dbenv, ip)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
DBTCL_INFO *ip;
static int
env_EventCount(interp, objc, objv, dbenv, ip)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
DBTCL_INFO *ip;
int
tcl_EnvSetFlags(interp, dbenv, which, onoff)
Tcl_Interp *interp;
DB_ENV *dbenv;
Tcl_Obj *which;
Tcl_Obj *onoff;
int
tcl_EnvTest(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
static int
env_DbRemove(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
static int
env_DbRename(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
static int
env_GetFlags(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
static int
env_GetOpenFlag(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_EnvGetEncryptFlags(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
static int
env_GetLockDetect(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
static int
env_GetSlices(interp, objc, objv, dbenv, res)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
Tcl_Obj **res;
static int
env_GetTimeout(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
static int
env_GetVerbose(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
void
tcl_EnvSetErrfile(interp, dbenv, ip, errf)
Tcl_Interp *interp;
DB_ENV *dbenv;
DBTCL_INFO *ip;
char *errf;
int
tcl_EnvSetMsgfile(interp, dbenv, ip, msgf)
Tcl_Interp *interp;
DB_ENV *dbenv;
DBTCL_INFO *ip;
char *msgf;
int
tcl_EnvCloseMsgfile(interp, dbenv, ip)
Tcl_Interp *interp;
DB_ENV *dbenv;
DBTCL_INFO *ip;
int
tcl_EnvSetErrpfx(interp, dbenv, ip, pfx)
Tcl_Interp *interp;
DB_ENV *dbenv;
DBTCL_INFO *ip;
char *pfx;
int
tcl_EnvSetMsgpfx(interp, dbenv, ip, pfx)
Tcl_Interp *interp;
DB_ENV *dbenv;
DBTCL_INFO *ip;
char *pfx;
int
tcl_EnvStatPrint(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
