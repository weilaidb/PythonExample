int
__memp_env_create(dbenv)
DB_ENV *dbenv;
void
__memp_env_destroy(dbenv)
DB_ENV *dbenv;
int
__memp_get_cachesize(dbenv, gbytesp, bytesp, ncachep)
DB_ENV *dbenv;
u_int32_t *gbytesp, *bytesp;
int *ncachep;
int
__memp_set_cachesize(dbenv, gbytes, bytes, arg_ncache)
DB_ENV *dbenv;
u_int32_t gbytes, bytes;
int arg_ncache;
int
__memp_set_config(dbenv, which, on)
DB_ENV *dbenv;
u_int32_t which;
int on;
int
__memp_get_config(dbenv, which, onp)
DB_ENV *dbenv;
u_int32_t which;
int *onp;
int
__memp_get_mp_max_openfd(dbenv, maxopenfdp)
DB_ENV *dbenv;
int *maxopenfdp;
int
__memp_set_mp_max_openfd(dbenv, maxopenfd)
DB_ENV *dbenv;
int maxopenfd;
int
__memp_get_mp_max_write(dbenv, maxwritep, maxwrite_sleepp)
DB_ENV *dbenv;
int *maxwritep;
db_timeout_t *maxwrite_sleepp;
int
__memp_set_mp_max_write(dbenv, maxwrite, maxwrite_sleep)
DB_ENV *dbenv;
int maxwrite;
db_timeout_t maxwrite_sleep;
int
__memp_get_mp_mmapsize(dbenv, mp_mmapsizep)
DB_ENV *dbenv;
size_t *mp_mmapsizep;
int
__memp_set_mp_mmapsize(dbenv, mp_mmapsize)
DB_ENV *dbenv;
size_t mp_mmapsize;
int
__memp_get_mp_pagesize(dbenv, mp_pagesizep)
DB_ENV *dbenv;
u_int32_t *mp_pagesizep;
int
__memp_set_mp_pagesize(dbenv, mp_pagesize)
DB_ENV *dbenv;
u_int32_t mp_pagesize;
int
__memp_get_reg_dir(dbenv, dirp)
DB_ENV *dbenv;
const char **dirp;
int
__memp_set_reg_dir(dbenv, dir)
DB_ENV *dbenv;
const char *dir;
int
__memp_get_mp_tablesize(dbenv, mp_tablesizep)
DB_ENV *dbenv;
u_int32_t *mp_tablesizep;
int
__memp_set_mp_tablesize(dbenv, mp_tablesize)
DB_ENV *dbenv;
u_int32_t mp_tablesize;
int
__memp_get_mp_mtxcount(dbenv, mp_mtxcountp)
DB_ENV *dbenv;
u_int32_t *mp_mtxcountp;
int
__memp_set_mp_mtxcount(dbenv, mp_mtxcount)
DB_ENV *dbenv;
u_int32_t mp_mtxcount;
int
__memp_nameop(env, fileid, newname, fullold, fullnew, inmem)
ENV *env;
u_int8_t *fileid;
const char *newname, *fullold, *fullnew;
int inmem;
int
__memp_ftruncate(dbmfp, txn, ip, pgno, flags)
DB_MPOOLFILE *dbmfp;
DB_TXN *txn;
DB_THREAD_INFO *ip;
db_pgno_t pgno;
u_int32_t flags;
int
__memp_alloc_freelist(dbmfp, nelems, listp)
DB_MPOOLFILE *dbmfp;
u_int32_t nelems;
db_pgno_t **listp;
int
__memp_free_freelist(dbmfp)
DB_MPOOLFILE *dbmfp;
int
__memp_get_freelist(dbmfp, nelemp, listp)
DB_MPOOLFILE *dbmfp;
u_int32_t *nelemp;
db_pgno_t **listp;
int
__memp_extend_freelist(dbmfp, count, listp)
DB_MPOOLFILE *dbmfp;
u_int32_t count;
db_pgno_t **listp;
int
__memp_set_last_pgno(dbmfp, pgno)
DB_MPOOLFILE *dbmfp;
db_pgno_t pgno;
