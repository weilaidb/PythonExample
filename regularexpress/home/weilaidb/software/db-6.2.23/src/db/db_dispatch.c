static int __db_txnlist_find_internal __P((ENV *, DB_TXNHEAD *,
db_txnlist_type, u_int32_t,  DB_TXNLIST **,
int, u_int32_t *));
int
__db_dispatch(env, dtab, db, lsnp, redo, params)
ENV *env;
DB_DISTAB *dtab;
DBT *db;
DB_LSN *lsnp;
db_recops redo;
void *params;
int
__db_add_recovery(dbenv, dtab, func, ndx)
DB_ENV *dbenv;
DB_DISTAB *dtab;
int (*func) __P((DB_ENV *, DBT *, DB_LSN *, db_recops));
u_int32_t ndx;
int
__db_add_recovery_int(env, dtab, func, ndx)
ENV *env;
DB_DISTAB *dtab;
int (*func) __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
u_int32_t ndx;
int
__db_txnlist_init(env, ip, low_txn, hi_txn, trunc_lsn, retp)
ENV *env;
DB_THREAD_INFO *ip;
u_int32_t low_txn, hi_txn;
DB_LSN *trunc_lsn;
DB_TXNHEAD **retp;
#define	FIND_GENERATION(hp, txnid, gen) do  while (0)
int
__db_txnlist_add(env, hp, txnid, status, lsn)
ENV *env;
DB_TXNHEAD *hp;
u_int32_t txnid, status;
DB_LSN *lsn;
int
__db_txnlist_remove(env, hp, txnid)
ENV *env;
DB_TXNHEAD *hp;
u_int32_t txnid;
void
__db_txnlist_ckp(env, hp, ckp_lsn)
ENV *env;
DB_TXNHEAD *hp;
DB_LSN *ckp_lsn;
void
__db_txnlist_end(env, hp)
ENV *env;
DB_TXNHEAD *hp;
int
__db_txnlist_find(env, hp, txnid, statusp)
ENV *env;
DB_TXNHEAD *hp;
u_int32_t txnid, *statusp;
int
__db_txnlist_update(env, hp, txnid, status, lsn, ret_status, add_ok)
ENV *env;
DB_TXNHEAD *hp;
u_int32_t txnid, status;
DB_LSN *lsn;
u_int32_t *ret_status;
int add_ok;
static int
__db_txnlist_find_internal(env,
hp, type, txnid, txnlistp, del, statusp)
ENV *env;
DB_TXNHEAD *hp;
db_txnlist_type type;
u_int32_t  txnid;
DB_TXNLIST **txnlistp;
int del;
u_int32_t *statusp;
int
__db_txnlist_gen(env, hp, incr, min, max)
ENV *env;
DB_TXNHEAD *hp;
int incr;
u_int32_t min, max;
int
__db_txnlist_lsnadd(env, hp, lsnp)
ENV *env;
DB_TXNHEAD *hp;
DB_LSN *lsnp;
int
__db_txnlist_lsnget(env, hp, lsnp, flags)
ENV *env;
DB_TXNHEAD *hp;
DB_LSN *lsnp;
u_int32_t flags;
int
__db_txnlist_lsninit(env, hp, lsnp)
ENV *env;
DB_TXNHEAD *hp;
DB_LSN *lsnp;
void
__db_txnlist_print(hp)
DB_TXNHEAD *hp;
