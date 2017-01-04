#define	FIRST_OFFSET(env) \
(sizeof(LOGP) + (CRYPTO_ON(env) ? HDR_CRYPTO_SZ : HDR_NORMAL_SZ))
static int __env_init_verify __P((ENV *, u_int32_t, DB_DISTAB *));
int
__log_verify_pp(dbenv, lvconfig)
DB_ENV *dbenv;
const DB_LOG_VERIFY_CONFIG *lvconfig;
int
__log_verify(dbenv, lvconfig, ip)
DB_ENV *dbenv;
const DB_LOG_VERIFY_CONFIG *lvconfig;
DB_THREAD_INFO *ip;
static int
__env_init_verify(env, version, dtabp)
ENV *env;
u_int32_t version;
DB_DISTAB *dtabp;
int
__log_verify_wrap(env, envhome, cachesize, dbfile, dbname,
stime, etime, stfile, stoffset, efile, eoffset, caf, verbose)
ENV *env;
const char *envhome, *dbfile, *dbname;
time_t stime, etime;
u_int32_t cachesize, stfile, stoffset, efile, eoffset;
int caf, verbose;
