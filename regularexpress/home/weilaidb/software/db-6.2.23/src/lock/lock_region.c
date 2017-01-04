static int  __lock_region_init __P((ENV *, DB_LOCKTAB *));
#define	DB_LOCK_RIW_N	9
static const u_int8_t db_riw_conflicts[] = ;
#define	DB_LOCK_CDB_N	5
static const u_int8_t db_cdb_conflicts[] = ;
int
__lock_open(env)
ENV *env;
static int
__lock_region_init(env, lt)
ENV *env;
DB_LOCKTAB *lt;
int
__lock_env_refresh(env)
ENV *env;
int
__lock_region_detach(env, lt)
ENV *env;
DB_LOCKTAB *lt;
u_int32_t
__lock_region_mutex_count(env)
ENV *env;
u_int32_t
__lock_region_mutex_max(env)
ENV *env;
size_t
__lock_region_max(env)
ENV *env;
size_t
__lock_region_size(env, other_alloc)
ENV *env;
size_t other_alloc;
