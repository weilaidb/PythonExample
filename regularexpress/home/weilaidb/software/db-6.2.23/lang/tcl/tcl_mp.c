static int      mp_Cmd __P((ClientData, Tcl_Interp *, int, Tcl_Obj * CONST*));
static int      mp_size_getinput __P((Tcl_Interp *, Tcl_Obj * CONST*, int,
u_int32_t *, u_int32_t *));
static int      pg_Cmd __P((ClientData, Tcl_Interp *, int, Tcl_Obj * CONST*));
static int      tcl_MpGet __P((Tcl_Interp *, int, Tcl_Obj * CONST*,
DB_MPOOLFILE *, DBTCL_INFO *));
static int      tcl_Pg __P((Tcl_Interp *, int, Tcl_Obj * CONST*,
void *, DB_MPOOLFILE *, DBTCL_INFO *));
static int      tcl_PgInit __P((Tcl_Interp *, int, Tcl_Obj * CONST*,
void *, DBTCL_INFO *));
static int      tcl_PgIsset __P((Tcl_Interp *, int, Tcl_Obj * CONST*,
void *, DBTCL_INFO *));
void
_MpInfoDelete(interp, mpip)
Tcl_Interp *interp;
DBTCL_INFO *mpip;
int
tcl_MpSync(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_MpTrickle(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_Mp(interp, objc, objv, dbenv, envip)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
DBTCL_INFO *envip;
int
tcl_MpStat(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_MpStatPrint(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
static int
mp_Cmd(clientData, interp, objc, objv)
ClientData clientData;
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
static int
tcl_MpGet(interp, objc, objv, mp, mpip)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_MPOOLFILE *mp;
DBTCL_INFO *mpip;
static int
pg_Cmd(clientData, interp, objc, objv)
ClientData clientData;
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
static int
tcl_Pg(interp, objc, objv, page, mp, pgip)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
void *page;
DB_MPOOLFILE *mp;
DBTCL_INFO *pgip;
static int
tcl_PgInit(interp, objc, objv, page, pgip)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
void *page;
DBTCL_INFO *pgip;
static int
tcl_PgIsset(interp, objc, objv, page, pgip)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
void *page;
DBTCL_INFO *pgip;
static int
mp_size_getinput(interp, objv, indx, gbytes, bytes)
Tcl_Interp *interp;
Tcl_Obj *CONST objv[];
int indx;
u_int32_t *gbytes, *bytes;
