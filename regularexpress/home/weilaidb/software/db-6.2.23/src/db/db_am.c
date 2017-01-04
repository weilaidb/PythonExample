static int __dbc_set_priority __P((DBC *, DB_CACHE_PRIORITY));
static int __dbc_get_priority __P((DBC *, DB_CACHE_PRIORITY* ));
int
__db_cursor_int(dbp, ip, txn, dbtype, root, flags, locker, dbcp)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
DBTYPE dbtype;
db_pgno_t root;
int flags;
DB_LOCKER *locker;
DBC **dbcp;
int
__db_put(dbp, ip, txn, key, data, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
DBT *key, *data;
u_int32_t flags;
int
__db_del(dbp, ip, txn, key, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
DBT *key;
u_int32_t flags;
int
__db_sync(dbp)
DB *dbp;
int
__db_associate(dbp, ip, txn, sdbp, callback, flags)
DB *dbp, *sdbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
int (*callback) __P((DB *, const DBT *, const DBT *, DBT *));
u_int32_t flags;
int
__db_secondary_get(sdbp, txn, skey, data, flags)
DB *sdbp;
DB_TXN *txn;
DBT *skey, *data;
u_int32_t flags;
int
__db_secondary_close(sdbp, flags)
DB *sdbp;
u_int32_t flags;
int
__db_associate_foreign(fdbp, pdbp, callback, flags)
DB *fdbp, *pdbp;
int (*callback)(DB *, const DBT *, DBT *, const DBT *, int *);
u_int32_t flags;
static int
__dbc_set_priority(dbc, priority)
DBC *dbc;
DB_CACHE_PRIORITY priority;
static int
__dbc_get_priority(dbc, priority)
DBC *dbc;
DB_CACHE_PRIORITY *priority;
