static int __env_lsn_reset __P((ENV *, DB_THREAD_INFO *, const char *, int));
int
__env_lsn_reset_pp(dbenv, name, flags)
DB_ENV *dbenv;
const char *name;
u_int32_t flags;
static int
__env_lsn_reset(env, ip, name, encrypted)
ENV *env;
DB_THREAD_INFO *ip;
const char *name;
int encrypted;
int
__db_lsn_reset(mpf, ip)
DB_MPOOLFILE *mpf;
DB_THREAD_INFO *ip;
