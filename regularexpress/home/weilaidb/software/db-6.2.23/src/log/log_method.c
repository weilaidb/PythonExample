int
__log_env_create(dbenv)
DB_ENV *dbenv;
void
__log_env_destroy(dbenv)
DB_ENV *dbenv;
int
__log_get_lg_bsize(dbenv, lg_bsizep)
DB_ENV *dbenv;
u_int32_t *lg_bsizep;
int
__log_set_lg_bsize(dbenv, lg_bsize)
DB_ENV *dbenv;
u_int32_t lg_bsize;
int
__log_get_lg_filemode(dbenv, lg_modep)
DB_ENV *dbenv;
int *lg_modep;
int
__log_set_lg_filemode(dbenv, lg_mode)
DB_ENV *dbenv;
int lg_mode;
int
__log_get_lg_max(dbenv, lg_maxp)
DB_ENV *dbenv;
u_int32_t *lg_maxp;
int
__log_set_lg_max(dbenv, lg_max)
DB_ENV *dbenv;
u_int32_t lg_max;
int
__log_get_lg_regionmax(dbenv, lg_regionmaxp)
DB_ENV *dbenv;
u_int32_t *lg_regionmaxp;
int
__log_set_lg_regionmax(dbenv, lg_regionmax)
DB_ENV *dbenv;
u_int32_t lg_regionmax;
int
__log_get_lg_dir(dbenv, dirp)
DB_ENV *dbenv;
const char **dirp;
int
__log_set_lg_dir(dbenv, dir)
DB_ENV *dbenv;
const char *dir;
void
__log_get_flags(dbenv, flagsp)
DB_ENV *dbenv;
u_int32_t *flagsp;
void
__log_set_flags(env, flags, on)
ENV *env;
u_int32_t flags;
int on;
#undef	OK_FLAGS
#define	OK_FLAGS							\
(DB_LOG_AUTO_REMOVE | DB_LOG_BLOB | DB_LOG_DIRECT |       	\
DB_LOG_DSYNC | DB_LOG_EXT_FILE | DB_LOG_IN_MEMORY |	\
DB_LOG_NOSYNC | DB_LOG_ZERO)
static const FLAG_MAP LogMap[] = ;
int
__log_get_config(dbenv, which, onp)
DB_ENV *dbenv;
u_int32_t which;
int *onp;
int
__log_set_config(dbenv, flags, on)
DB_ENV *dbenv;
u_int32_t flags;
int on;
int
__log_set_config_int(dbenv, flags, on, in_open)
DB_ENV *dbenv;
u_int32_t flags;
int on;
int in_open;
int
__log_check_sizes(env, lg_max, lg_bsize)
ENV *env;
u_int32_t lg_max;
u_int32_t lg_bsize;
