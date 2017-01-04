static int __mutex_print_all __P((ENV *, u_int32_t));
static const char *__mutex_print_id __P((int));
static int __mutex_print_stats __P((ENV *, u_int32_t));
static void __mutex_print_summary __P((ENV *));
static int __mutex_stat __P((ENV *, DB_MUTEX_STAT **, u_int32_t));
static const FN MutexFlagNames[] = ;
int
__mutex_stat_pp(dbenv, statp, flags)
DB_ENV *dbenv;
DB_MUTEX_STAT **statp;
u_int32_t flags;
static int
__mutex_stat(env, statp, flags)
ENV *env;
DB_MUTEX_STAT **statp;
u_int32_t flags;
int
__mutex_stat_print_pp(dbenv, flags)
DB_ENV *dbenv;
u_int32_t flags;
int
__mutex_stat_print(env, flags)
ENV *env;
u_int32_t flags;
static void
__mutex_print_summary(env)
ENV *env;
static int
__mutex_print_stats(env, flags)
ENV *env;
u_int32_t flags;
static int
__mutex_print_all(env, flags)
ENV *env;
u_int32_t flags;
void
__mutex_print_debug_single(env, tag, mutex, flags)
ENV *env;
const char *tag;
db_mutex_t mutex;
u_int32_t flags;
void
__mutex_print_debug_stats(env, mbp, mutex, flags)
ENV *env;
DB_MSGBUF *mbp;
db_mutex_t mutex;
u_int32_t flags;
static const char *
__mutex_print_id(alloc_id)
int alloc_id;
void
__mutex_set_wait_info(env, mutex, waitp, nowaitp)
ENV *env;
db_mutex_t mutex;
uintmax_t *waitp, *nowaitp;
void
__mutex_clear(env, mutex)
ENV *env;
db_mutex_t mutex;
int
__mutex_stat_pp(dbenv, statp, flags)
DB_ENV *dbenv;
DB_MUTEX_STAT **statp;
u_int32_t flags;
int
__mutex_stat_print_pp(dbenv, flags)
DB_ENV *dbenv;
u_int32_t flags;
char *
__mutex_describe(env, mutex, dest)
ENV *env;
db_mutex_t mutex;
char *dest;
