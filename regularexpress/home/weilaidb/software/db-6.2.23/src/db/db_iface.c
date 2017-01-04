static int __db_associate_arg __P((DB *, DB *,
int (*)(DB *, const DBT *, const DBT *, DBT *), u_int32_t));
static int __dbc_del_arg __P((DBC *, u_int32_t));
static int __dbc_pget_arg __P((DBC *, DBT *, u_int32_t));
static int __dbc_put_arg __P((DBC *, DBT *, DBT *, u_int32_t));
static int __db_curinval __P((const ENV *));
static int __db_cursor_arg __P((DB *, u_int32_t));
static int __db_del_arg __P((DB *, DBT *, u_int32_t, int));
static int __db_get_arg __P((const DB *, DBT *, DBT *, u_int32_t));
static int __db_join_arg __P((DB *, DBC **, u_int32_t));
static int __db_pget_arg __P((DB *, DBT *, u_int32_t));
static int __db_put_arg __P((DB *, DBT *, DBT *, u_int32_t, int));
static int __dbt_ferr __P((const DB *, const char *, const DBT *, int));
static int __db_compact_func
__P((DBC *, DBC *, u_int32_t *, db_pgno_t, u_int32_t, void *));
static int __db_associate_foreign_arg __P((DB *, DB *,
int (*)(DB *, const DBT *, DBT *, const DBT *, int *),
u_int32_t));
int
__db_associate_pp(dbp, txn, sdbp, callback, flags)
DB *dbp, *sdbp;
DB_TXN *txn;
int (*callback) __P((DB *, const DBT *, const DBT *, DBT *));
u_int32_t flags;
static int
__db_associate_arg(dbp, sdbp, callback, flags)
DB *dbp, *sdbp;
int (*callback) __P((DB *, const DBT *, const DBT *, DBT *));
u_int32_t flags;
int
__db_close_pp(dbp, flags)
DB *dbp;
u_int32_t flags;
int
__db_cursor_pp(dbp, txn, dbcp, flags)
DB *dbp;
DB_TXN *txn;
DBC **dbcp;
u_int32_t flags;
int
__db_cursor(dbp, ip, txn, dbcp, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
DBC **dbcp;
u_int32_t flags;
static int
__db_cursor_arg(dbp, flags)
DB *dbp;
u_int32_t flags;
int
__db_del_pp(dbp, txn, key, flags)
DB *dbp;
DB_TXN *txn;
DBT *key;
u_int32_t flags;
static int
__db_del_arg(dbp, key, flags, forward_op)
DB *dbp;
DBT *key;
u_int32_t flags;
int forward_op;
int
__db_exists(dbp, txn, key, flags)
DB *dbp;
DB_TXN *txn;
DBT *key;
u_int32_t flags;
int
__db_fd_pp(dbp, fdp)
DB *dbp;
int *fdp;
int
__db_get_pp(dbp, txn, key, data, flags)
DB *dbp;
DB_TXN *txn;
DBT *key, *data;
u_int32_t flags;
int
__db_get(dbp, ip, txn, key, data, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
DBT *key, *data;
u_int32_t flags;
static int
__db_get_arg(dbp, key, data, flags)
const DB *dbp;
DBT *key, *data;
u_int32_t flags;
int
__db_join_pp(primary, curslist, dbcp, flags)
DB *primary;
DBC **curslist, **dbcp;
u_int32_t flags;
static int
__db_join_arg(primary, curslist, flags)
DB *primary;
DBC **curslist;
u_int32_t flags;
int
__db_key_range_pp(dbp, txn, key, kr, flags)
DB *dbp;
DB_TXN *txn;
DBT *key;
DB_KEY_RANGE *kr;
u_int32_t flags;
int
__db_open_pp(dbp, txn, fname, dname, type, flags, mode)
DB *dbp;
DB_TXN *txn;
const char *fname, *dname;
DBTYPE type;
u_int32_t flags;
int mode;
int
__db_open_arg(dbp, txn, fname, dname, type, flags)
DB *dbp;
DB_TXN *txn;
const char *fname, *dname;
DBTYPE type;
u_int32_t flags;
int
__db_pget_pp(dbp, txn, skey, pkey, data, flags)
DB *dbp;
DB_TXN *txn;
DBT *skey, *pkey, *data;
u_int32_t flags;
int
__db_pget(dbp, ip, txn, skey, pkey, data, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
DBT *skey, *pkey, *data;
u_int32_t flags;
static int
__db_pget_arg(dbp, pkey, flags)
DB *dbp;
DBT *pkey;
u_int32_t flags;
int
__db_put_pp(dbp, txn, key, data, flags)
DB *dbp;
DB_TXN *txn;
DBT *key, *data;
u_int32_t flags;
static int
__db_put_arg(dbp, key, data, flags, forward_op)
DB *dbp;
DBT *key, *data;
u_int32_t flags;
int forward_op;
static int
__db_compact_func(dbc, my_dbc, countp, pgno, indx, args)
DBC *dbc, *my_dbc;
u_int32_t *countp;
db_pgno_t pgno;
u_int32_t indx;
void *args;
int
__db_compact_pp(dbp, txn, start, stop, c_data, flags, end)
DB *dbp;
DB_TXN *txn;
DBT *start, *stop;
DB_COMPACT *c_data;
u_int32_t flags;
DBT *end;
int
__db_associate_foreign_pp(fdbp, dbp, callback, flags)
DB *dbp, *fdbp;
int (*callback) __P((DB *, const DBT *, DBT *, const DBT *, int *));
u_int32_t flags;
static int
__db_associate_foreign_arg(fdbp, dbp, callback, flags)
DB *dbp, *fdbp;
int (*callback) __P((DB *, const DBT *, DBT *, const DBT *, int *));
u_int32_t flags;
int
__db_sync_pp(dbp, flags)
DB *dbp;
u_int32_t flags;
int
__dbc_close_pp(dbc)
DBC *dbc;
int
__dbc_cmp_pp(dbc, other_cursor, result, flags)
DBC *dbc, *other_cursor;
int *result;
u_int32_t flags;
int
__dbc_count_pp(dbc, recnop, flags)
DBC *dbc;
db_recno_t *recnop;
u_int32_t flags;
int
__dbc_del_pp(dbc, flags)
DBC *dbc;
u_int32_t flags;
static int
__dbc_del_arg(dbc, flags)
DBC *dbc;
u_int32_t flags;
int
__dbc_dup_pp(dbc, dbcp, flags)
DBC *dbc, **dbcp;
u_int32_t flags;
int
__dbc_get_pp(dbc, key, data, flags)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
int
__dbc_get_arg(dbc, key, data, flags)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
int
__db_secondary_close_pp(dbp, flags)
DB *dbp;
u_int32_t flags;
int
__dbc_pget_pp(dbc, skey, pkey, data, flags)
DBC *dbc;
DBT *skey, *pkey, *data;
u_int32_t flags;
static int
__dbc_pget_arg(dbc, pkey, flags)
DBC *dbc;
DBT *pkey;
u_int32_t flags;
int
__dbc_put_pp(dbc, key, data, flags)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
static int
__dbc_put_arg(dbc, key, data, flags)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
static int
__dbt_ferr(dbp, name, dbt, check_thread)
const DB *dbp;
const char *name;
const DBT *dbt;
int check_thread;
static int
__db_curinval(env)
const ENV *env;
int
__db_txn_auto_init(env, ip, txnidp)
ENV *env;
DB_THREAD_INFO *ip;
DB_TXN **txnidp;
int
__db_txn_auto_resolve(env, txn, nosync, ret)
ENV *env;
DB_TXN *txn;
int nosync, ret;
