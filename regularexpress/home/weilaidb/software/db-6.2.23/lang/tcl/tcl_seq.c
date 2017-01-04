static int	tcl_SeqClose __P((Tcl_Interp *,
int, Tcl_Obj * CONST*, DB_SEQUENCE *, DBTCL_INFO *));
static int	tcl_SeqGet __P((Tcl_Interp *,
int, Tcl_Obj * CONST*, DB_SEQUENCE *));
static int	tcl_SeqRemove __P((Tcl_Interp *,
int, Tcl_Obj * CONST*, DB_SEQUENCE *, DBTCL_INFO *));
static int	tcl_SeqStat __P((Tcl_Interp *,
int, Tcl_Obj * CONST*, DB_SEQUENCE *));
static int	tcl_SeqStatPrint __P((Tcl_Interp *,
int, Tcl_Obj * CONST*, DB_SEQUENCE *));
static int	tcl_SeqGetFlags __P((Tcl_Interp *,
int, Tcl_Obj * CONST*, DB_SEQUENCE *));
int
seq_Cmd(clientData, interp, objc, objv)
ClientData clientData;
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
static int
tcl_SeqStat(interp, objc, objv, seq)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_SEQUENCE *seq;
static int
tcl_SeqStatPrint(interp, objc, objv, seq)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_SEQUENCE *seq;
static int
tcl_SeqClose(interp, objc, objv, seq, ip)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_SEQUENCE *seq;
DBTCL_INFO *ip;
static int
tcl_SeqGet(interp, objc, objv, seq)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_SEQUENCE *seq;
static int
tcl_SeqRemove(interp, objc, objv, seq, ip)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_SEQUENCE *seq;
DBTCL_INFO *ip;
static int
tcl_SeqGetFlags(interp, objc, objv, seq)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DB_SEQUENCE *seq;
