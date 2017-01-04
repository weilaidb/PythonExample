static int __db_rename __P((DB *, DB_THREAD_INFO *,
DB_TXN *, const char *, const char *, const char *, u_int32_t));
static int __db_subdb_rename __P((DB *, DB_THREAD_INFO *,
DB_TXN *, const char *, const char *, const char *, u_int32_t));
int
__env_dbrename_pp(dbenv, txn, name, subdb, newname, flags)
DB_ENV *dbenv;
DB_TXN *txn;
const char *name, *subdb, *newname;
u_int32_t flags;
int
__db_rename_pp(dbp, name, subdb, newname, flags)
DB *dbp;
const char *name, *subdb, *newname;
u_int32_t flags;
static int
__db_rename(dbp, ip, txn, name, subdb, newname, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *name, *subdb, *newname;
u_int32_t flags;
int
__db_rename_int(dbp, ip, txn, name, subdb, newname, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *name, *subdb, *newname;
u_int32_t flags;
static int
__db_subdb_rename(dbp, ip, txn, name, subdb, newname, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *name, *subdb, *newname;
u_int32_t flags;
