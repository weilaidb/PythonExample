static int __db_log_novrfy __P((ENV *));
int __log_verify_pp __P((DB_ENV *, const DB_LOG_VERIFY_CONFIG *));
int __log_verify __P((DB_ENV *, const DB_LOG_VERIFY_CONFIG *));
int __log_verify_wrap __P((ENV *env, const char *, u_int32_t, const char *,
const char *, time_t, time_t, u_int32_t, u_int32_t, u_int32_t, u_int32_t,
int, int));
static int
__db_log_novrfy(env)
ENV *env;
int
__log_verify_pp(dbenv, lvconfig)
DB_ENV *dbenv;
const DB_LOG_VERIFY_CONFIG *lvconfig;
int
__log_verify(dbenv, lvconfig)
DB_ENV *dbenv;
const DB_LOG_VERIFY_CONFIG *lvconfig;
int
__log_verify_wrap(env, envhome, cachesize, dbfile, dbname,
stime, etime, stfile, stoffset, efile, eoffset, caf, verbose)
ENV *env;
const char *envhome, *dbfile, *dbname;
time_t stime, etime;
u_int32_t cachesize, stfile, stoffset, efile, eoffset;
int caf, verbose;
