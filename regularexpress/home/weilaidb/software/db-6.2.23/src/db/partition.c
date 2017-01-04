static int __part_rr __P((DB *, DB_THREAD_INFO *, DB_TXN *,
const char *, const char *, const char *, u_int32_t));
static int __partc_close __P((DBC *, db_pgno_t, int *));
static int __partc_del __P((DBC*, u_int32_t));
static int __partc_destroy __P((DBC*));
static int __partc_get_pp __P((DBC*, DBT *, DBT *, u_int32_t));
static int __partc_put __P((DBC*, DBT *, DBT *, u_int32_t, db_pgno_t *));
static int __partc_writelock __P((DBC*));
static int __partition_chk_meta __P((DB *,
DB_THREAD_INFO *, DB_TXN *, u_int32_t));
static int __partition_setup_keys __P((DBC *,
DB_PARTITION *, u_int32_t, u_int32_t));
static int __part_key_cmp __P((const void *, const void *));
static inline void __part_search __P((DB *,
DB_PARTITION *, DBT *, u_int32_t *));
#define	ALLOC_ERR DB_STR_A("0764","Partition failed to allocate %d bytes","%d")
#define	GET_PART_CURSOR(dbc, new_dbc, part_id) do  while (0)
static inline void __part_search(dbp, part, key, part_idp)
DB *dbp;
DB_PARTITION *part;
DBT *key;
u_int32_t *part_idp;
int
__partition_init(dbp, flags)
DB *dbp;
u_int32_t flags;
int
__partition_set(dbp, parts, keys, callback)
DB *dbp;
u_int32_t parts;
DBT *keys;
u_int32_t (*callback)(DB *, DBT *key);
int
__partition_set_dirs(dbp, dirp)
DB *dbp;
const char **dirp;
int
__partition_open(dbp, ip, txn, fname, type, flags, mode, do_open)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *fname;
DBTYPE type;
u_int32_t flags;
int mode, do_open;
static int
__partition_chk_meta(dbp, ip, txn, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
u_int32_t flags;
struct key_sort ;
static int __part_key_cmp(a, b)
const void *a, *b;
static int
__partition_setup_keys(dbc, part, pgsize, flags)
DBC *dbc;
DB_PARTITION *part;
u_int32_t flags, pgsize;
int
__partition_get_callback(dbp, parts, callback)
DB *dbp;
u_int32_t *parts;
u_int32_t (**callback)(DB *, DBT *key);
int
__partition_get_keys(dbp, parts, keys)
DB *dbp;
u_int32_t *parts;
DBT **keys;
int
__partition_get_dirs(dbp, dirpp)
DB *dbp;
const char ***dirpp;
int
__partc_init(dbc)
DBC *dbc;
static int
__partc_get_pp(dbc, key, data, flags)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
int
__partc_get(dbc, key, data, flags)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
static int
__partc_put(dbc, key, data, flags, pgnop)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
db_pgno_t *pgnop;
static int
__partc_del(dbc, flags)
DBC *dbc;
u_int32_t flags;
static int
__partc_writelock(dbc)
DBC *dbc;
static int
__partc_close(dbc, root_pgno, rmroot)
DBC *dbc;
db_pgno_t root_pgno;
int *rmroot;
static int
__partc_destroy(dbc)
DBC *dbc;
int
__partition_close(dbp, txn, flags)
DB *dbp;
DB_TXN *txn;
u_int32_t flags;
int
__partition_sync(dbp)
DB *dbp;
int
__partition_stat(dbc, spp, flags)
DBC *dbc;
void *spp;
u_int32_t flags;
int
__part_truncate(dbc, countp)
DBC *dbc;
u_int32_t *countp;
int
__part_compact(dbp, ip, txn, start, stop, c_data, flags, end)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
DBT *start, *stop;
DB_COMPACT *c_data;
u_int32_t flags;
DBT *end;
int
__part_lsn_reset(dbp, ip)
DB *dbp;
DB_THREAD_INFO *ip;
int
__part_fileid_reset(env, ip, fname, nparts, encrypted)
ENV *env;
DB_THREAD_INFO *ip;
const char *fname;
u_int32_t nparts;
int encrypted;
int
__part_key_range(dbc, dbt, kp, flags)
DBC *dbc;
DBT *dbt;
DB_KEY_RANGE *kp;
u_int32_t flags;
int
__part_remove(dbp, ip, txn, name, subdb, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *name, *subdb;
u_int32_t flags;
int
__part_rename(dbp, ip, txn, name, subdb, newname)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *name, *subdb, *newname;
static int
__part_rr(dbp, ip, txn, name, subdb, newname, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *name, *subdb, *newname;
u_int32_t flags;
int
__partc_dup(dbc_orig, dbc_n)
DBC *dbc_orig;
DBC *dbc_n;
int
__part_verify(dbp, vdp, fname, handle, callback, flags)
DB *dbp;
VRFY_DBINFO *vdp;
const char *fname;
void *handle;
int (*callback) __P((void *, const void *));
u_int32_t flags;
int
__part_testdocopy(dbp, name)
DB *dbp;
const char *name;
int
__db_no_partition(env)
ENV *env;
int
__partition_set(dbp, parts, keys, callback)
DB *dbp;
u_int32_t parts;
DBT *keys;
u_int32_t (*callback)(DB *, DBT *key);
int
__partition_get_callback(dbp, parts, callback)
DB *dbp;
u_int32_t *parts;
u_int32_t (**callback)(DB *, DBT *key);
int
__partition_get_dirs(dbp, dirpp)
DB *dbp;
const char ***dirpp;
int
__partition_get_keys(dbp, parts, keys)
DB *dbp;
u_int32_t *parts;
DBT **keys;
int
__partition_init(dbp, flags)
DB *dbp;
u_int32_t flags;
int
__part_fileid_reset(env, ip, fname, nparts, encrypted)
ENV *env;
DB_THREAD_INFO *ip;
const char *fname;
u_int32_t nparts;
int encrypted;
int
__partition_set_dirs(dbp, dirp)
DB *dbp;
const char **dirp;
