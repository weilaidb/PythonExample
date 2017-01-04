int
__db_no_queue_am(env)
ENV *env;
int
__db_prqueue(dbp, flags)
DB *dbp;
u_int32_t flags;
int
__qam_31_qammeta(dbp, real_name, buf)
DB *dbp;
char *real_name;
u_int8_t *buf;
int
__qam_32_qammeta(dbp, real_name, buf)
DB *dbp;
char *real_name;
u_int8_t *buf;
int
__qam_append(dbc, key, data)
DBC *dbc;
DBT *key, *data;
int
__qamc_dup(orig_dbc, new_dbc)
DBC *orig_dbc, *new_dbc;
int
__qamc_init(dbc)
DBC *dbc;
int
__qam_db_close(dbp, flags)
DB *dbp;
u_int32_t flags;
int
__qam_db_create(dbp)
DB *dbp;
int
__qam_extent_names(env, name, namelistp)
ENV *env;
char *name;
char ***namelistp;
int
__qam_gen_filelist(dbp, ip, filelistp)
DB *dbp;
DB_THREAD_INFO *ip;
QUEUE_FILELIST **filelistp;
int
__qam_init_print(env, dtabp)
ENV *env;
DB_DISTAB *dtabp;
int
__qam_init_recover(env, dtabp)
ENV *env;
DB_DISTAB *dtabp;
int
__qam_metachk(dbp, name, qmeta)
DB *dbp;
const char *name;
QMETA *qmeta;
int
__qam_mswap(env, pg)
ENV *env;
PAGE *pg;
int
__qam_new_file(dbp, ip, txn, fhp, name)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
DB_FH *fhp;
const char *name;
int
__qam_open(dbp, ip, txn, name, base_pgno, mode, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *name;
db_pgno_t base_pgno;
int mode;
u_int32_t flags;
int
__qam_pgin_out(env, pg, pp, cookie)
ENV *env;
db_pgno_t pg;
void *pp;
DBT *cookie;
int
__qam_salvage(dbp, vdp, pgno, h, handle, callback, flags)
DB *dbp;
VRFY_DBINFO *vdp;
db_pgno_t pgno;
PAGE *h;
void *handle;
int (*callback) __P((void *, const void *));
u_int32_t flags;
int
__qam_set_ext_data(dbp, name)
DB *dbp;
const char *name;
int
__qam_stat(dbc, spp, flags)
DBC *dbc;
void *spp;
u_int32_t flags;
int
__qam_stat_print(dbc, flags)
DBC *dbc;
u_int32_t flags;
int
__qam_sync(dbp)
DB *dbp;
int
__qam_truncate(dbc, countp)
DBC *dbc;
u_int32_t *countp;
int
__qam_vrfy_data(dbp, vdp, h, pgno, flags)
DB *dbp;
VRFY_DBINFO *vdp;
QPAGE *h;
db_pgno_t pgno;
u_int32_t flags;
int
__qam_vrfy_meta(dbp, vdp, meta, pgno, flags)
DB *dbp;
VRFY_DBINFO *vdp;
QMETA *meta;
db_pgno_t pgno;
u_int32_t flags;
int
__qam_vrfy_structure(dbp, vdp, flags)
DB *dbp;
VRFY_DBINFO *vdp;
u_int32_t flags;
int
__qam_vrfy_walkqueue(dbp, vdp, handle, callback, flags)
DB *dbp;
VRFY_DBINFO *vdp;
void *handle;
int (*callback) __P((void *, const void *));
u_int32_t flags;
