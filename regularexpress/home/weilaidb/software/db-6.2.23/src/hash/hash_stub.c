int
__db_no_hash_am(env)
ENV *env;
int
__ham_30_hashmeta(dbp, real_name, obuf)
DB *dbp;
char *real_name;
u_int8_t *obuf;
int
__ham_30_sizefix(dbp, fhp, realname, metabuf)
DB *dbp;
DB_FH *fhp;
char *realname;
u_int8_t *metabuf;
int
__ham_31_hash(dbp, real_name, flags, fhp, h, dirtyp)
DB *dbp;
char *real_name;
u_int32_t flags;
DB_FH *fhp;
PAGE *h;
int *dirtyp;
int
__ham_31_hashmeta(dbp, real_name, flags, fhp, h, dirtyp)
DB *dbp;
char *real_name;
u_int32_t flags;
DB_FH *fhp;
PAGE *h;
int *dirtyp;
int
__ham_46_hash(dbp, real_name, flags, fhp, h, dirtyp)
DB *dbp;
char *real_name;
u_int32_t flags;
DB_FH *fhp;
PAGE *h;
int *dirtyp;
int
__ham_46_hashmeta(dbp, real_name, flags, fhp, h, dirtyp)
DB *dbp;
char *real_name;
u_int32_t flags;
DB_FH *fhp;
PAGE *h;
int *dirtyp;
int
__ham_60_hashmeta(dbp, real_name, flags, fhp, h, dirtyp)
DB *dbp;
char *real_name;
u_int32_t flags;
DB_FH *fhp;
PAGE *h;
int *dirtyp;
int
__ham_60_hash(dbp, real_name, flags, fhp, h, dirtyp)
DB *dbp;
char *real_name;
u_int32_t flags;
DB_FH *fhp;
PAGE *h;
int *dirtyp;
int
__hamc_cmp(dbc, other_dbc, result)
DBC *dbc, *other_dbc;
int *result;
int
__hamc_count(dbc, recnop)
DBC *dbc;
db_recno_t *recnop;
int
__hamc_dup(orig_dbc, new_dbc)
DBC *orig_dbc, *new_dbc;
int
__hamc_init(dbc)
DBC *dbc;
int
__ham_db_close(dbp)
DB *dbp;
int
__ham_db_create(dbp)
DB *dbp;
int
__ham_init_print(env, dtabp)
ENV *env;
DB_DISTAB *dtabp;
int
__ham_init_recover(env, dtabp)
ENV *env;
DB_DISTAB *dtabp;
int
__ham_meta2pgset(dbp, vdp, hmeta, flags, pgset)
DB *dbp;
VRFY_DBINFO *vdp;
HMETA *hmeta;
u_int32_t flags;
DB *pgset;
int
__ham_metachk(dbp, name, hashm)
DB *dbp;
const char *name;
HMETA *hashm;
int
__ham_metagroup_42_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__ham_mswap(env, pg)
ENV *env;
void *pg;
int
__ham_groupalloc_42_recover(env, dbtp, lsnp, op, info)
ENV *env;
DBT *dbtp;
DB_LSN *lsnp;
db_recops op;
void *info;
int
__ham_new_file(dbp, ip, txn, fhp, name)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
DB_FH *fhp;
const char *name;
int
__ham_new_subdb(mdbp, dbp, ip, txn)
DB *mdbp, *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
int
__ham_open(dbp, ip, txn, name, base_pgno, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *name;
db_pgno_t base_pgno;
u_int32_t flags;
int
__ham_pgin(dbp, pg, pp, cookie)
DB *dbp;
db_pgno_t pg;
void *pp;
DBT *cookie;
int
__ham_pgout(dbp, pg, pp, cookie)
DB *dbp;
db_pgno_t pg;
void *pp;
DBT *cookie;
void
__ham_print_cursor(dbc)
DBC *dbc;
int
__ham_quick_delete(dbc)
DBC *dbc;
int
__ham_reclaim(dbp, ip, txn, flags)
DB *dbp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
u_int32_t flags;
int
__ham_salvage(dbp, vdp, pgno, h, handle, callback, flags)
DB *dbp;
VRFY_DBINFO *vdp;
db_pgno_t pgno;
PAGE *h;
void *handle;
int (*callback) __P((void *, const void *));
u_int32_t flags;
int
__ham_stat(dbc, spp, flags)
DBC *dbc;
void *spp;
u_int32_t flags;
int
__ham_stat_print(dbc, flags)
DBC *dbc;
u_int32_t flags;
int
__ham_truncate(dbc, countp)
DBC *dbc;
u_int32_t *countp;
int
__ham_vrfy(dbp, vdp, h, pgno, flags)
DB *dbp;
VRFY_DBINFO *vdp;
PAGE *h;
db_pgno_t pgno;
u_int32_t flags;
int
__ham_vrfy_hashing(dbc, nentries, m, thisbucket, pgno, flags, hfunc)
DBC *dbc;
u_int32_t nentries;
HMETA *m;
u_int32_t thisbucket;
db_pgno_t pgno;
u_int32_t flags;
u_int32_t (*hfunc) __P((DB *, const void *, u_int32_t));
int
__ham_vrfy_meta(dbp, vdp, m, pgno, flags)
DB *dbp;
VRFY_DBINFO *vdp;
HMETA *m;
db_pgno_t pgno;
u_int32_t flags;
int
__ham_vrfy_structure(dbp, vdp, meta_pgno, flags)
DB *dbp;
VRFY_DBINFO *vdp;
db_pgno_t meta_pgno;
u_int32_t flags;
