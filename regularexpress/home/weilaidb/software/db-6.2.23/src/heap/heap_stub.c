int
__db_no_heap_am(env)
ENV *env;
int
__heap_60_heapmeta(dbp, real_name, flags, fhp, h, dirtyp)
DB *dbp;
char *real_name;
u_int32_t flags;
DB_FH *fhp;
PAGE *h;
int *dirtyp;
int
__heap_60_heap(dbp, real_name, flags, fhp, h, dirtyp)
DB *dbp;
char *real_name;
u_int32_t flags;
DB_FH *fhp;
PAGE *h;
int *dirtyp;
int
__heap_db_create(dbp)
DB *dbp;
int
__heap_db_close(dbp)
DB *dbp;
int
__heap_get_heapsize(dbp, gbytes, bytes)
DB *dbp;
u_int32_t *gbytes, *bytes;
int
__heapc_dup(orig_dbc, new_dbc)
DBC *orig_dbc, *new_dbc;
int
__heapc_gsplit(dbc, dbt, bpp, bpsz)
DBC *dbc;
DBT *dbt;
void **bpp;
u_int32_t *bpsz;
int
__heap_append(dbc, key, data)
DBC *dbc;
DBT *key, *data;
int
__heap_backup(dbenv, dbp, ip, fp, handle, flags)
DB_ENV *dbenv;
DB *dbp;
DB_THREAD_INFO *ip;
DB_FH *fp;
void *handle;
u_int32_t flags;
int
__heapc_init(dbc)
DBC *dbc;
int
__heap_init_print(env, dtabp)
ENV *env;
DB_DISTAB *dtabp;
int
__heap_init_recover(env, dtabp)
ENV *env;
DB_DISTAB *dtabp;
int
__heap_meta2pgset(dbp, vdp, heapmeta, pgset)
DB *dbp;
VRFY_DBINFO *vdp;
HEAPMETA *heapmeta;
DB *pgset;
int
__heap_metachk(dbp, name, hm)
DB *dbp;
const char *name;
HEAPMETA *hm;
int
__heap_new_file(dbp, ip, txn, fhp, name)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
DB_FH *fhp;
const char *name;
int
__heap_open(dbp, ip, txn, name, base_pgno, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *name;
db_pgno_t base_pgno;
u_int32_t flags;
int
__heap_pgin(dbp, pg, pp, cookie)
DB *dbp;
db_pgno_t pg;
void *pp;
DBT *cookie;
int
__heap_pgout(dbp, pg, pp, cookie)
DB *dbp;
db_pgno_t pg;
void *pp;
DBT *cookie;
void
__heap_print_cursor(dbc)
DBC *dbc;
int
__heapc_refresh(dbc)
DBC *dbc;
int
__heap_salvage(dbp, vdp, pgno, h, handle, callback, flags)
DB *dbp;
VRFY_DBINFO *vdp;
db_pgno_t pgno;
PAGE *h;
void *handle;
int (*callback) __P((void *, const void *));
u_int32_t flags;
int
__heap_stat(dbc, spp, flags)
DBC *dbc;
void *spp;
u_int32_t flags;
int
__heap_stat_print(dbc, flags)
DBC *dbc;
u_int32_t flags;
int
__heap_truncate(dbc, countp)
DBC *dbc;
u_int32_t *countp;
int
__heap_vrfy(dbp, vdbp, h, pgno, flags)
DB *dbp;
VRFY_DBINFO *vdbp;
PAGE *h;
db_pgno_t pgno;
u_int32_t flags;
int
__heap_vrfy_meta(dbp, vdp, meta, pgno, flags)
DB *dbp;
VRFY_DBINFO *vdp;
HEAPMETA *meta;
db_pgno_t pgno;
u_int32_t flags;
int
__heap_vrfy_structure(dbp, vdp, flags)
DB *dbp;
VRFY_DBINFO *vdp;
u_int32_t flags;
int
__heap_exist()
