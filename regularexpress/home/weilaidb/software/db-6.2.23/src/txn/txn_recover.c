int
__txn_recover_pp(dbenv, preplist, count, retp, flags)
DB_ENV *dbenv;
DB_PREPLIST *preplist;
long count, *retp;
u_int32_t flags;
int
__txn_recover(env, txns, count, retp, flags)
ENV *env;
DB_PREPLIST *txns;
long  count, *retp;
u_int32_t flags;
int
__txn_get_prepared(env, xids, txns, count, retp, flags)
ENV *env;
XID *xids;
DB_PREPLIST *txns;
long count;
long *retp;
u_int32_t flags;
int
__txn_openfiles(env, ip, min, force)
ENV *env;
DB_THREAD_INFO *ip;
DB_LSN *min;
int force;
