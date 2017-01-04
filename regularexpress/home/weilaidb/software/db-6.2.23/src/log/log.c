static int	__log_init __P((ENV *, DB_LOG *));
static int	__log_recover __P((DB_LOG *));
int
__log_open(env)
ENV *env;
int
__log_region_detach(env, dblp)
ENV *env;
DB_LOG *dblp;
static int
__log_init(env, dblp)
ENV *env;
DB_LOG *dblp;
static int
__log_recover(dblp)
DB_LOG *dblp;
int
__log_find(dblp, find_first, valp, statusp)
DB_LOG *dblp;
int find_first;
u_int32_t *valp;
logfile_validity *statusp;
int
__log_valid(dblp, number, set_persist, fhpp, flags, statusp, versionp)
DB_LOG *dblp;
u_int32_t number;
int set_persist;
DB_FH **fhpp;
u_int32_t flags;
logfile_validity *statusp;
u_int32_t *versionp;
int
__log_env_refresh(env)
ENV *env;
int
__log_get_cached_ckp_lsn(env, ckp_lsnp)
ENV *env;
DB_LSN *ckp_lsnp;
u_int32_t
__log_region_mutex_count(env)
ENV *env;
u_int32_t
__log_region_mutex_max(env)
ENV *env;
size_t
__log_region_size(env)
ENV *env;
size_t
__log_region_max(env)
ENV *env;
int
__log_vtruncate(env, lsn, ckplsn, trunclsn)
ENV *env;
DB_LSN *lsn, *ckplsn, *trunclsn;
int
__log_is_outdated(env, fnum, outdatedp)
ENV *env;
u_int32_t fnum;
int *outdatedp;
int
__log_zero(env, from_lsn)
ENV *env;
DB_LSN *from_lsn;
int
__log_inmem_lsnoff(dblp, lsnp, offsetp)
DB_LOG *dblp;
DB_LSN *lsnp;
size_t *offsetp;
int
__log_inmem_newfile(dblp, file)
DB_LOG *dblp;
u_int32_t file;
int
__log_inmem_chkspace(dblp, len)
DB_LOG *dblp;
size_t len;
void
__log_inmem_copyout(dblp, offset, buf, size)
DB_LOG *dblp;
size_t offset;
void *buf;
size_t size;
void
__log_inmem_copyin(dblp, offset, buf, size)
DB_LOG *dblp;
size_t offset;
void *buf;
size_t size;
void
__log_set_version(env, newver)
ENV *env;
u_int32_t newver;
int
__log_get_oldversion(env, ver)
ENV *env;
u_int32_t *ver;
