static int	tcl_DbAssociate __P((Tcl_Interp *,
int, Tcl_Obj * CONST*, DB *));
static int	tcl_DbAssociateForeign __P((Tcl_Interp *,
int, Tcl_Obj * CONST*, DB *));
static int	tcl_DbClose __P((Tcl_Interp *,
int, Tcl_Obj * CONST*, DB *, DBTCL_INFO *));
static int	tcl_DbDelete __P((Tcl_Interp *, int, Tcl_Obj * CONST*, DB *));
static int	tcl_DbGet __P((Tcl_Interp *, int, Tcl_Obj * CONST*, DB *, int));
static int	tcl_DbKeyRange __P((Tcl_Interp *, int, Tcl_Obj * CONST*, DB *));
static int	tcl_DbPut __P((Tcl_Interp *, int, Tcl_Obj * CONST*, DB *));
static int	tcl_DbStat __P((Tcl_Interp *, int, Tcl_Obj * CONST*, DB *));
static int	tcl_DbStatPrint __P((Tcl_Interp *,
int, Tcl_Obj * CONST*, DB *));
static int	tcl_DbTruncate __P((Tcl_Interp *, int, Tcl_Obj * CONST*, DB *));
static int	tcl_DbCompact __P((Tcl_Interp *, int, Tcl_Obj * CONST*, DB *));
static int	tcl_DbCompactStat __P((Tcl_Interp *,
int, Tcl_Obj * CONST*, DB *));
static int	tcl_DbCursor __P((Tcl_Interp *,
int, Tcl_Obj * CONST*, DB *, DBC **));
static int	tcl_DbJoin __P((Tcl_Interp *,
int, Tcl_Obj * CONST*, DB *, DBC **));
static int	tcl_DbGetFlags __P((Tcl_Interp *, int, Tcl_Obj * CONST*, DB *));
static int	tcl_DbGetOpenFlags __P((Tcl_Interp *,
int, Tcl_Obj * CONST*, DB *));
static int	tcl_DbGetjoin __P((Tcl_Interp *, int, Tcl_Obj * CONST*, DB *));
static int	tcl_DbCount __P((Tcl_Interp *, int, Tcl_Obj * CONST*, DB *));
static int	tcl_DbSliceLookup __P((
Tcl_Interp *, int, Tcl_Obj * CONST*, DB *, Tcl_Obj **));
static int  	tcl_DbGetSlices __P((
Tcl_Interp *, int, Tcl_Obj * CONST*, DB *, Tcl_Obj **));
static int	tcl_second_call __P((DB *, const DBT *, const DBT *, DBT *));
static int	tcl_foreign_call __P((DB *, const DBT *, DBT *,
const DBT *, int *));
void
_DbInfoDelete(interp, dbip)
Tcl_Interp *interp;
DBTCL_INFO *dbip;
int
db_Cmd(clientData, interp, objc, objv)
ClientData clientData;
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
static int
tcl_DbStat(interp, objc, objv, dbp)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB *dbp;
static int
tcl_DbStatPrint(interp, objc, objv, dbp)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB *dbp;
static int
tcl_DbClose(interp, objc, objv, dbp, dbip)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB *dbp;
DBTCL_INFO *dbip;
static int
tcl_DbPut(interp, objc, objv, dbp)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB *dbp;
static int
tcl_DbGet(interp, objc, objv, dbp, ispget)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB *dbp;
int ispget;
static int
tcl_DbDelete(interp, objc, objv, dbp)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB *dbp;
static int
tcl_DbCursor(interp, objc, objv, dbp, dbcp)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB *dbp;
DBC **dbcp;
static int
tcl_DbAssociate(interp, objc, objv, dbp)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB *dbp;
{
static const char *dbaopts[] = ;
enum dbaopts ;
DB *sdbp;
DB_TXN *txn;
DBTCL_INFO *sdbip;
int i, optindex, result, ret;
char *arg, msg[MSG_SIZE];
u_int32_t flag;
txn = NULL;
result = TCL_OK;
flag = 0;
if (objc < 2)
i = 2;
while (i < objc)
if (result != TCL_OK)
return (result);
arg = Tcl_GetStringFromObj(objv[objc - 1], NULL);
sdbp = NAME_TO_DB(arg);
if (sdbp == NULL)
sdbip = (DBTCL_INFO *)sdbp->api_internal;
if (i != objc - 1)
static int
tcl_DbAssociateForeign(interp, objc, objv, dbp)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB *dbp;
static int
tcl_second_call(dbp, pkey, data, skey)
DB *dbp;
const DBT *pkey, *data;
DBT *skey;
static int tcl_foreign_call(sdbp, pkey, data, fkey, changed)
DB *sdbp;
const DBT *pkey, *fkey;
DBT *data;
int *changed;
static int
tcl_DbJoin(interp, objc, objv, dbp, dbcp)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB *dbp;
DBC **dbcp;
static int
tcl_DbGetjoin(interp, objc, objv, dbp)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB *dbp;
static int
tcl_DbGetFlags(interp, objc, objv, dbp)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB *dbp;
static int
tcl_DbGetOpenFlags(interp, objc, objv, dbp)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB *dbp;
static int
tcl_DbCount(interp, objc, objv, dbp)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB *dbp;
static int
tcl_DbKeyRange(interp, objc, objv, dbp)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB *dbp;
static int
tcl_DbTruncate(interp, objc, objv, dbp)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB *dbp;
static int
tcl_DbSliceLookup(interp, objc, objv, dbp, res)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB *dbp;
Tcl_Obj **res;
static int
tcl_DbGetSlices(interp, objc, objv, dbp, res)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB *dbp;
Tcl_Obj **res;
static int
tcl_DbCompact(interp, objc, objv, dbp)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB *dbp;
static int
tcl_DbCompactStat(interp, objc, objv, dbp)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB *dbp;
int
tcl_CompactStat(interp, ip)
Tcl_Interp *interp;
DBTCL_INFO *ip;
