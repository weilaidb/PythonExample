static int __log_print_all __P((ENV *, u_int32_t));
static int __log_print_stats __P((ENV *, u_int32_t));
static int __log_stat __P((ENV *, DB_LOG_STAT **, u_int32_t));
int
__log_stat_pp(dbenv, statp, flags)
DB_ENV *dbenv;
DB_LOG_STAT **statp;
u_int32_t flags;
static int
__log_stat(env, statp, flags)
ENV *env;
DB_LOG_STAT **statp;
u_int32_t flags;
int
__log_stat_print_pp(dbenv, flags)
DB_ENV *dbenv;
u_int32_t flags;
int
__log_stat_print(env, flags)
ENV *env;
u_int32_t flags;
static int
__log_print_stats(env, flags)
ENV *env;
u_int32_t flags;
static int
__log_print_all(env, flags)
ENV *env;
u_int32_t flags;
int
__log_stat_pp(dbenv, statp, flags)
DB_ENV *dbenv;
DB_LOG_STAT **statp;
u_int32_t flags;
int
__log_stat_print_pp(dbenv, flags)
DB_ENV *dbenv;
u_int32_t flags;
