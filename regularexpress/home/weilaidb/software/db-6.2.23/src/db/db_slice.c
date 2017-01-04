#define	DB_VERB_SLICE_PRINTLEN	30
int
__db_slice_open_pp(dbp, txn, fname, dname, type, flags, mode)
DB *dbp;
DB_TXN *txn;
const char *fname, *dname;
DBTYPE type;
u_int32_t flags;
int mode;
int
__db_slice_alloc(dbp, ip, txn)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
int
__db_slice_free(dbp, flags)
DB *dbp;
u_int32_t flags;
int
__db_slice_configure(container, slice)
const DB *container;
DB *slice;
int
__db_slice_default_callback(dbp, key, slice)
const DB *dbp;
const DBT *key;
DBT *slice;
int
__db_slice_metadata(dbp, ip, txn, name, expect, insert)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *name;
DBT *expect;
int insert;
int
__db_slice_fileid_metachk(dbp, ip, txn, id, insert)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
db_slice_t id;
int insert;
int
__db_slice_metachk(dbp, ip, txn)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
int
__db_slice_open(dbp, ip, txn, fname, type, flags, mode)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *fname;
DBTYPE type;
u_int32_t flags;
int mode;
int
__db_slice_close_pp(dbp, flags)
DB *dbp;
u_int32_t flags;
DB *
__db_slice_iterate(dbp, pos)
DB *dbp;
int *pos;
int
__db_slice_sync_pp(dbp, flags)
DB *dbp;
u_int32_t flags;
int
__db_slice_map(dbp, slice, slice_indexp)
DB *dbp;
const DBT *slice;
db_slice_t *slice_indexp;
int
__db_slice_lookup_pp(dbp, key, sl_dbpp, flags)
DB *dbp;
const DBT *key;
DB **sl_dbpp;
u_int32_t flags;
int
__db_slice_build(dbp, key, slice)
const DB *dbp;
const DBT *key;
DBT *slice;
int
__db_slice_activate(dbp, txn, sl_dbt, sl_dbpp, sl_txnp)
DB *dbp;
DB_TXN *txn;
const DBT *sl_dbt;
DB **sl_dbpp;
DB_TXN **sl_txnp;
int
__db_slice_get_pp(dbp, txn, key, data, flags)
DB *dbp;
DB_TXN *txn;
DBT *key, *data;
u_int32_t flags;
int
__db_slice_exists_pp(dbp, txn, key, flags)
DB *dbp;
DB_TXN *txn;
DBT *key;
u_int32_t flags;
int
__db_slice_pget_pp(dbp, txn, skey, pkey, data, flags)
DB *dbp;
DB_TXN *txn;
DBT *skey, *pkey, *data;
u_int32_t flags;
int
__db_slice_put_pp(dbp, txn, key, data, flags)
DB *dbp;
DB_TXN *txn;
DBT *key, *data;
u_int32_t flags;
int
__db_slice_del_pp(dbp, txn, key, flags)
DB *dbp;
DB_TXN *txn;
DBT *key;
u_int32_t flags;
int
__db_slice_secondary_get_pp(sdbp, txn, skey, data, flags)
DB *sdbp;
DB_TXN *txn;
DBT *skey, *data;
u_int32_t flags;
int
__dbc_slice_init(dbc)
DBC *dbc;
int
__dbc_slice_close(dbc)
DBC *dbc;
int
__dbc_slice_activate(dbc, key, sl_dbcp, flags)
DBC *dbc;
const DBT *key;
DBC **sl_dbcp;
u_int32_t flags;
int
__dbc_slice_get_pp(dbc, key, data, flags)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
int
__dbc_slice_fetch_all(dbc, skey, key, data, flags)
DBC *dbc;
DBT *skey, *key, *data;
u_int32_t flags;
int
__dbc_slice_get_all_pp(dbc, key, data, flags)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
int
__dbc_slice_pget_pp(dbc, skey, pkey, data, flags)
DBC *dbc;
DBT *skey, *pkey, *data;
u_int32_t flags;
int
__dbc_slice_put_pp(dbc, key, data, flags)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
int
__dbc_slice_del_pp(dbc, flags)
DBC *dbc;
u_int32_t flags;
int
__db_slice_remove(dbenv, txn, name, subdb, flags)
DB_ENV *dbenv;
DB_TXN *txn;
const char *name;
const char *subdb;
u_int32_t flags;
int
__db_slice_associate(dbp, txn, sdbp, callback, flags)
DB *dbp;
DB_TXN *txn;
DB *sdbp;
int (*callback) __P((DB *, const DBT *, const DBT *, DBT *));
u_int32_t flags;
int
__db_slice_compact(dbp, txn, start, stop, c_data, flags, end)
DB *dbp;
DB_TXN *txn;
DBT *start, *stop;
DB_COMPACT *c_data;
u_int32_t flags;
DBT *end;
int
__db_slice_rename(dbp, txn, name, subdb, newname, flags)
DB *dbp;
DB_TXN *txn;
const char *name;
const char *subdb;
const char *newname;
u_int32_t flags;
int
__db_slice_truncate(dbp, txn, countp, flags)
DB *dbp;
DB_TXN *txn;
u_int32_t *countp;
u_int32_t flags;
int
__db_slice_upgrade(dbp, fname, flags)
DB *dbp;
const char *fname;
u_int32_t flags;
int
__dbc_slice_dump_get(dbc, key, data, flags)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
int
__db_slice_verify(dbp, fname, dname, handle, callback, flags)
DB *dbp;
const char *fname;
const char *dname;
void *handle;
int (*callback) __P((void *, const void *));
u_int32_t flags;
