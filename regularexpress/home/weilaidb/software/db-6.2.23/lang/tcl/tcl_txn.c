static int tcl_TxnCommit __P((Tcl_Interp *,
int, Tcl_Obj * CONST *, DB_TXN *, DBTCL_INFO *));
static int txn_Cmd __P((ClientData, Tcl_Interp *, int, Tcl_Obj * CONST *));
void
_TxnInfoDelete(interp, txnip)
Tcl_Interp *interp;
DBTCL_INFO *txnip;
int
tcl_TxnCheckpoint(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_Txn(interp, objc, objv, dbenv, envip)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
DBTCL_INFO *envip;
int
tcl_CDSGroup(interp, objc, objv, dbenv, envip)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
DBTCL_INFO *envip;
int
tcl_TxnStat(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_TxnStatPrint(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
int
tcl_TxnTimeout(interp, objc, objv, dbenv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
static int
txn_Cmd(clientData, interp, objc, objv)
ClientData clientData;
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
static int
tcl_TxnCommit(interp, objc, objv, txnp, txnip)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_TXN *txnp;
DBTCL_INFO *txnip;
int
tcl_TxnRecover(interp, objc, objv, dbenv, envip)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_ENV *dbenv;
DBTCL_INFO *envip;
