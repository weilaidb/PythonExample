static int __db_nomutex __P((ENV *));
static int
__db_nomutex(env)
ENV *env;
int
__mutex_alloc_pp(dbenv, flags, indxp)
DB_ENV *dbenv;
u_int32_t flags;
db_mutex_t *indxp;
int
__mutex_alloc(env, alloc_id, flags, indxp)
ENV *env;
int alloc_id;
u_int32_t flags;
db_mutex_t *indxp;
void
__mutex_clear(env, mutex)
ENV *env;
db_mutex_t mutex;
int
__mutex_free_pp(dbenv, indx)
DB_ENV *dbenv;
db_mutex_t indx;
int
__mutex_free(env, indxp)
ENV *env;
db_mutex_t *indxp;
int
__mutex_get_align(dbenv, alignp)
DB_ENV *dbenv;
u_int32_t *alignp;
int
__mutex_get_increment(dbenv, incrementp)
DB_ENV *dbenv;
u_int32_t *incrementp;
int
__mutex_get_max(dbenv, maxp)
DB_ENV *dbenv;
u_int32_t *maxp;
int
__mutex_get_tas_spins(dbenv, tas_spinsp)
DB_ENV *dbenv;
u_int32_t *tas_spinsp;
int
__mutex_lock_pp(dbenv, indx)
DB_ENV *dbenv;
db_mutex_t indx;
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
int
__mutex_refresh(env, mutex)
ENV *env;
db_mutex_t mutex;
int
__mutex_set_align(dbenv, align)
DB_ENV *dbenv;
u_int32_t align;
int
__mutex_set_increment(dbenv, increment)
DB_ENV *dbenv;
u_int32_t increment;
int
__mutex_get_init(dbenv, initp)
DB_ENV *dbenv;
u_int32_t *initp;
int
__mutex_set_init(dbenv, init)
DB_ENV *dbenv;
u_int32_t init;
int
__mutex_set_max(dbenv, max)
DB_ENV *dbenv;
u_int32_t max;
int
__mutex_set_tas_spins(dbenv, tas_spins)
DB_ENV *dbenv;
u_int32_t tas_spins;
void
__mutex_set_wait_info(env, mutex, waitp, nowaitp)
ENV *env;
db_mutex_t mutex;
uintmax_t *waitp, *nowaitp;
int
__mutex_stat_pp(dbenv, statp, flags)
DB_ENV *dbenv;
DB_MUTEX_STAT **statp;
u_int32_t flags;
int
__mutex_stat_print_pp(dbenv, flags)
DB_ENV *dbenv;
u_int32_t flags;
int
__mutex_unlock_pp(dbenv, indx)
DB_ENV *dbenv;
db_mutex_t indx;
