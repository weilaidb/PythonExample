DBTCL_GLOBAL __dbtcl_global;
static int	berkdb_Cmd __P((ClientData, Tcl_Interp *, int,
Tcl_Obj * CONST*));
static int	bdb_EnvOpen __P((Tcl_Interp *, int, Tcl_Obj * CONST*,
DBTCL_INFO *, DB_ENV **));
static int	bdb_DbOpen __P((Tcl_Interp *, int, Tcl_Obj * CONST*,
DBTCL_INFO *, DB **));
static int	bdb_DbRemove __P((Tcl_Interp *, int, Tcl_Obj * CONST*));
static int	bdb_DbRename __P((Tcl_Interp *, int, Tcl_Obj * CONST*));
static int	bdb_Version __P((Tcl_Interp *, int, Tcl_Obj * CONST*));
static int	bdb_SeqOpen __P((Tcl_Interp *, int, Tcl_Obj * CONST*,
DBTCL_INFO *, DB_SEQUENCE **));
static int	heap_callback __P((DB *dbp, const DBT *, const DBT *, DBT *));
static int	bdb_DbUpgrade __P((Tcl_Interp *, int, Tcl_Obj * CONST*));
static int	bdb_DbVerify __P((Tcl_Interp *, int, Tcl_Obj * CONST*,
DBTCL_INFO *));
static int	bdb_GetConfig __P((Tcl_Interp *, int, Tcl_Obj * CONST*));
static int	bdb_Handles __P((Tcl_Interp *, int, Tcl_Obj * CONST*));
static int	bdb_MsgType __P((Tcl_Interp *, int, Tcl_Obj * CONST*));
static int	tcl_bt_compare __P((DB *, const DBT *, const DBT *, size_t *));
static int	tcl_compare_callback __P((DB *, const DBT *, const DBT *,
Tcl_Obj *, char *));
static void	tcl_db_free __P((void *));
static void *	tcl_db_malloc __P((size_t));
static void *	tcl_db_realloc __P((void *, size_t));
static int	tcl_dup_compare __P((DB *, const DBT *, const DBT *, size_t *));
static u_int32_t tcl_h_hash __P((DB *, const void *, u_int32_t));
static int	tcl_isalive __P((DB_ENV *, pid_t, db_threadid_t, u_int32_t));
static u_int32_t tcl_part_callback __P((DB *, DBT *));
static int	tcl_rep_view __P((DB_ENV *, const char *, int *, u_int32_t));
static int	 tcl_set_partition_dirs
__P((Tcl_Interp *, DB *, Tcl_Obj *));
static int	 tcl_set_partition_keys
__P((Tcl_Interp *, DB *, Tcl_Obj *, DBT **));
static int	tcl_slice_callback __P((const DB *, const DBT *, DBT *));
int Db_tcl_Init __P((Tcl_Interp *));
int
Db_tcl_Init(interp)
Tcl_Interp *interp;
static int
berkdb_Cmd(notused, interp, objc, objv)
ClientData notused;
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
static int
bdb_EnvOpen(interp, objc, objv, ip, dbenvp)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DBTCL_INFO *ip;
DB_ENV **dbenvp;
static int
bdb_DbOpen(interp, objc, objv, ip, dbp)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DBTCL_INFO *ip;
DB **dbp;
static int
bdb_SeqOpen(interp, objc, objv, ip, seqp)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DBTCL_INFO *ip;
DB_SEQUENCE **seqp;
static int
bdb_DbRemove(interp, objc, objv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
static int
bdb_DbRename(interp, objc, objv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
static int
bdb_DbVerify(interp, objc, objv, ip)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
DBTCL_INFO *ip;
static int
bdb_Version(interp, objc, objv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
#define	ADD_CONFIG_NAME(name)						\
conf = NewStringObj(name, strlen(name));			\
if (Tcl_ListObjAppendElement(interp, res, conf) != TCL_OK)	\
return (TCL_ERROR);
static int
bdb_GetConfig(interp, objc, objv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
static int
bdb_Handles(interp, objc, objv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
static int
bdb_MsgType(interp, objc, objv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
static int
bdb_DbUpgrade(interp, objc, objv)
Tcl_Interp *interp;
int objc;
Tcl_Obj *CONST objv[];
static int
tcl_bt_compare(dbp, dbta, dbtb, locp)
DB *dbp;
const DBT *dbta, *dbtb;
size_t *locp;
static int
tcl_dup_compare(dbp, dbta, dbtb, locp)
DB *dbp;
const DBT *dbta, *dbtb;
size_t *locp;
static int
tcl_compare_callback(dbp, dbta, dbtb, procobj, errname)
DB *dbp;
const DBT *dbta, *dbtb;
Tcl_Obj *procobj;
char *errname;
static u_int32_t
tcl_h_hash(dbp, buf, len)
DB *dbp;
const void *buf;
u_int32_t len;
static int
tcl_isalive(dbenv, pid, tid, flags)
DB_ENV *dbenv;
pid_t pid;
db_threadid_t tid;
u_int32_t flags;
static u_int32_t
tcl_part_callback(dbp, data)
DB *dbp;
DBT *data;
int
tcl_rep_send(dbenv, control, rec, lsnp, eid, flags)
DB_ENV *dbenv;
const DBT *control, *rec;
const DB_LSN *lsnp;
int eid;
u_int32_t flags;
static int
tcl_rep_view(dbenv, name, result, flags)
DB_ENV *dbenv;
const char *name;
int *result;
u_int32_t flags;
static int
tcl_slice_callback(dbp, key, slice)
const DB *dbp;
const DBT *key;
DBT *slice;
static void *
tcl_db_malloc(size)
size_t size;
static void *
tcl_db_realloc(ptr, size)
void *ptr;
size_t size;
static void
tcl_db_free(ptr)
void *ptr;
static int
tcl_set_partition_keys(interp, dbp, obj, keyp)
Tcl_Interp *interp;
DB *dbp;
Tcl_Obj *obj;
DBT **keyp;
static int
tcl_set_partition_dirs(interp, dbp, obj)
Tcl_Interp *interp;
DB *dbp;
Tcl_Obj *obj;
static int
heap_callback(dbp, key, data, seckey)
DB *dbp;
const DBT *key, *data;
DBT *seckey;
