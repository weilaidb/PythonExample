static int __cdsgroup_abort __P((DB_TXN *txn));
static int __cdsgroup_commit __P((DB_TXN *txn, u_int32_t flags));
static int __cdsgroup_discard __P((DB_TXN *txn, u_int32_t flags));
static u_int32_t __cdsgroup_id __P((DB_TXN *txn));
static int __cdsgroup_notsup __P((ENV *env, const char *meth));
static int __cdsgroup_prepare __P((DB_TXN *txn, u_int8_t *gid));
static int __cdsgroup_get_name __P((DB_TXN *txn, const char **namep));
static int __cdsgroup_set_name __P((DB_TXN *txn, const char *name));
static int __cdsgroup_set_timeout
__P((DB_TXN *txn, db_timeout_t timeout, u_int32_t flags));
static int
__cdsgroup_notsup(env, meth)
ENV *env;
const char *meth;
static int
__cdsgroup_abort(txn)
DB_TXN *txn;
static int
__cdsgroup_commit(txn, flags)
DB_TXN *txn;
u_int32_t flags;
static int __cdsgroup_discard(txn, flags)
DB_TXN *txn;
u_int32_t flags;
static u_int32_t __cdsgroup_id(txn)
DB_TXN *txn;
static int __cdsgroup_prepare(txn, gid)
DB_TXN *txn;
u_int8_t *gid;
static int __cdsgroup_get_name(txn, namep)
DB_TXN *txn;
const char **namep;
static int __cdsgroup_set_name(txn, name)
DB_TXN *txn;
const char *name;
static int __cdsgroup_set_timeout(txn, timeout, flags)
DB_TXN *txn;
db_timeout_t timeout;
u_int32_t flags;
int
__cdsgroup_begin(env, txnpp)
ENV *env;
DB_TXN **txnpp;
int __cdsgroup_begin_pp(dbenv, txnpp)
DB_ENV *dbenv;
DB_TXN **txnpp;
