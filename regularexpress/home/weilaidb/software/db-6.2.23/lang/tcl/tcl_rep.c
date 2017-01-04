typedef struct  NAMEMAP;
static const NAMEMAP rep_ack_policies[] = ;
static const NAMEMAP rep_config_types[] = ;
static const NAMEMAP rep_timeout_types[] = ;
static int tcl_RepNumberToName __P((const NAMEMAP *, u_int32_t, const char **));
int
tcl_RepConfig(interp, dbenv, list)
Tcl_Interp *interp;
DB_ENV *dbenv;
Tcl_Obj *list;
int
tcl_RepGetTwo(interp, dbenv, op)
Tcl_Interp *interp;
DB_ENV *dbenv;
int op;
int
tcl_RepGetConfig(interp, dbenv, which)
Tcl_Interp *interp;
DB_ENV *dbenv;
Tcl_Obj *which;
int
tcl_RepGetTimeout(interp, dbenv, which)
Tcl_Interp *interp;
DB_ENV *dbenv;
Tcl_Obj *which;
int
tcl_RepGetAckPolicy(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_RepGetLocalSite(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
static int
tcl_RepNumberToName(map, value, namep)
const NAMEMAP *map;
u_int32_t value;
const char **namep;
int
tcl_RepElect(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_RepFlush(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_RepSync(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_RepLease(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_RepInmemFiles(interp, dbenv)
Tcl_Interp *interp;
DB_ENV *dbenv;
int
tcl_RepLimit(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_RepNSites(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_RepRequest(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_RepNoarchiveTimeout(interp, dbenv)
Tcl_Interp *interp;
DB_ENV *dbenv;
int
tcl_RepTransport(interp, objc, objv, dbenv, ip)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
DBTCL_INFO *ip;
int
tcl_RepStart(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_RepProcessMessage(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_RepStat(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_RepStatPrint(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_RepMgr(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_RepMgrSiteList(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_RepMgrStat(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_RepMgrStatPrint(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_RepApplied(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
