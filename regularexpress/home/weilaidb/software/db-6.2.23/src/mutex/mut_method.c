int
__mutex_alloc_pp(dbenv, flags, indxp)
DB_ENV *dbenv;
u_int32_t flags;
db_mutex_t *indxp;
int
__mutex_free_pp(dbenv, indx)
DB_ENV *dbenv;
db_mutex_t indx;
int
__mutex_lock_pp(dbenv, indx)
DB_ENV *dbenv;
db_mutex_t indx;
int
__mutex_unlock_pp(dbenv, indx)
DB_ENV *dbenv;
db_mutex_t indx;
int
__mutex_get_align(dbenv, alignp)
DB_ENV *dbenv;
u_int32_t *alignp;
int
__mutex_set_align(dbenv, align)
DB_ENV *dbenv;
u_int32_t align;
int
__mutex_get_increment(dbenv, incrementp)
DB_ENV *dbenv;
u_int32_t *incrementp;
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
__mutex_get_max(dbenv, maxp)
DB_ENV *dbenv;
u_int32_t *maxp;
int
__mutex_set_max(dbenv, max)
DB_ENV *dbenv;
u_int32_t max;
int
__mutex_get_tas_spins(dbenv, tas_spinsp)
DB_ENV *dbenv;
u_int32_t *tas_spinsp;
int
__mutex_set_tas_spins(dbenv, tas_spins)
DB_ENV *dbenv;
u_int32_t tas_spins;
int
__mutex_diags(env, mutex, error)
ENV *env;
db_mutex_t mutex;
int error;
#if !defined(HAVE_ATOMIC_SUPPORT) && defined(HAVE_MUTEX_SUPPORT)
static inline db_mutex_t atomic_get_mutex(env, v)
ENV *env;
db_atomic_t *v;
atomic_value_t
__atomic_inc_int(env, v)
ENV *env;
db_atomic_t *v;
atomic_value_t
__atomic_dec_int(env, v)
ENV *env;
db_atomic_t *v;
int
__atomic_compare_exchange_int(env, v, oldval, newval)
ENV *env;
db_atomic_t *v;
atomic_value_t oldval;
atomic_value_t newval;
