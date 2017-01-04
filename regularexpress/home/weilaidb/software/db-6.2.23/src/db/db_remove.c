static int __db_dbtxn_remove __P((DB *,
DB_THREAD_INFO *, DB_TXN *, const char *, const char *, APPNAME));
static int __db_subdb_remove __P((DB *,
DB_THREAD_INFO *, DB_TXN *, const char *, const char *, u_int32_t));
int
__env_dbremove_pp(dbenv, txn, name, subdb, flags)
DB_ENV *dbenv;
DB_TXN *txn;
const char *name, *subdb;
u_int32_t flags;
int
__db_remove_pp(dbp, name, subdb, flags)
DB *dbp;
const char *name, *subdb;
u_int32_t flags;
int
__db_remove(dbp, ip, txn, name, subdb, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *name, *subdb;
u_int32_t flags;
int
__db_remove_int(dbp, ip, txn, name, subdb, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *name, *subdb;
u_int32_t flags;
int
__db_inmem_remove(dbp, txn, name)
DB *dbp;
DB_TXN *txn;
const char *name;
static int
__db_subdb_remove(dbp, ip, txn, name, subdb, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *name, *subdb;
u_int32_t flags;
static int
__db_dbtxn_remove(dbp, ip, txn, name, subdb, appname)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *name, *subdb;
APPNAME appname;
