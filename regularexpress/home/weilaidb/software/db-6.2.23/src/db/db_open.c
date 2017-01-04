static int __db_handle_lock __P((DB *));
int
__db_open(dbp, ip, txn, fname, dname, type, flags, mode, meta_pgno)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *fname, *dname;
DBTYPE type;
u_int32_t flags;
int mode;
db_pgno_t meta_pgno;
int
__db_get_open_flags(dbp, flagsp)
DB *dbp;
u_int32_t *flagsp;
int
__db_new_file(dbp, ip, txn, fhp, name)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
DB_FH *fhp;
const char *name;
int
__db_init_subdb(mdbp, dbp, name, ip, txn)
DB *mdbp, *dbp;
const char *name;
DB_THREAD_INFO *ip;
DB_TXN *txn;
int
__db_chk_meta(env, dbp, meta, flags)
ENV *env;
DB *dbp;
DBMETA *meta;
u_int32_t flags;
int
__db_meta_setup(env, dbp, name, meta, oflags, flags)
ENV *env;
DB *dbp;
const char *name;
DBMETA *meta;
u_int32_t oflags;
u_int32_t flags;
int
__db_get_metaflags(env, name, metaflagsp)
ENV *env;
const char *name;
u_int32_t *metaflagsp;
int
__db_reopen(arg_dbc)
DBC *arg_dbc;
static int
__db_handle_lock(dbp)
DB *dbp;
