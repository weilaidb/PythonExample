static int __dbreg_push_id __P((ENV *, int32_t));
static int __dbreg_pop_id __P((ENV *, int32_t *));
static int __dbreg_pluck_id __P((ENV *, int32_t));
int
__dbreg_setup(dbp, fname, dname, create_txnid)
DB *dbp;
const char *fname, *dname;
u_int32_t create_txnid;
int
__dbreg_teardown(dbp)
DB *dbp;
int
__dbreg_teardown_int(env, fnp)
ENV *env;
FNAME *fnp;
int
__dbreg_new_id(dbp, txn)
DB *dbp;
DB_TXN *txn;
int
__dbreg_get_id(dbp, txn, idp)
DB *dbp;
DB_TXN *txn;
int32_t *idp;
int
__dbreg_assign_id(dbp, id, deleted)
DB *dbp;
int32_t id;
int deleted;
int
__dbreg_revoke_id(dbp, have_lock, force_id)
DB *dbp;
int have_lock;
int32_t force_id;
int
__dbreg_revoke_id_int(env, fnp, have_lock, push, force_id)
ENV *env;
FNAME *fnp;
int have_lock, push;
int32_t force_id;
int
__dbreg_close_id(dbp, txn, op)
DB *dbp;
DB_TXN *txn;
u_int32_t op;
int
__dbreg_close_id_int(env, fnp, op, locked)
ENV *env;
FNAME *fnp;
u_int32_t op;
int locked;
int
__dbreg_failchk(env)
ENV *env;
int
__dbreg_log_close(env, fnp, txn, op)
ENV *env;
FNAME *fnp;
DB_TXN *txn;
u_int32_t op;
static int
__dbreg_push_id(env, id)
ENV *env;
int32_t id;
static int
__dbreg_pop_id(env, id)
ENV *env;
int32_t *id;
static int
__dbreg_pluck_id(env, id)
ENV *env;
int32_t id;
int
__dbreg_log_id(dbp, txn, id, needlock)
DB *dbp;
DB_TXN *txn;
int32_t id;
int needlock;
