static int   __env_print_all __P((ENV *, u_int32_t));
static int   __env_print_dbenv_all __P((ENV *, u_int32_t));
static int   __env_print_env_all __P((ENV *, u_int32_t));
static int   __env_print_fh __P((ENV *));
static int   __env_print_stats __P((ENV *, u_int32_t));
static int   __env_stat_print __P((ENV *, u_int32_t));
static char *__env_thread_state_print __P((DB_THREAD_STATE));
static const char * __reg_type __P((reg_type_t));
int
__env_stat_print_pp(dbenv, flags)
DB_ENV *dbenv;
u_int32_t flags;
static int
__env_stat_print(env, flags)
ENV *env;
u_int32_t flags;
static int
__env_print_stats(env, flags)
ENV *env;
u_int32_t flags;
static int
__env_print_all(env, flags)
ENV *env;
u_int32_t flags;
static int
__env_print_dbenv_all(env, flags)
ENV *env;
u_int32_t flags;
static int
__env_print_env_all(env, flags)
ENV *env;
u_int32_t flags;
static char *
__env_thread_state_print(state)
DB_THREAD_STATE state;
int
__env_print_thread(env)
ENV *env;
static int
__env_print_fh(env)
ENV *env;
void
__db_print_fh(env, tag, fh, flags)
ENV *env;
const char *tag;
DB_FH *fh;
u_int32_t flags;
void
__db_print_fileid(env, id, suffix)
ENV *env;
u_int8_t *id;
const char *suffix;
void
__db_dl(env, msg, value)
ENV *env;
const char *msg;
u_long value;
void
__db_dl_pct(env, msg, value, pct, tag)
ENV *env;
const char *msg, *tag;
u_long value;
int pct;
void
__db_dlbytes(env, msg, gbytes, mbytes, bytes)
ENV *env;
const char *msg;
u_long gbytes, mbytes, bytes;
void
__db_print_reginfo(env, infop, s, flags)
ENV *env;
REGINFO *infop;
const char *s;
u_int32_t flags;
static const char *
__reg_type(t)
reg_type_t t;
int
__db_stat_not_built(env)
ENV *env;
int
__env_stat_print_pp(dbenv, flags)
DB_ENV *dbenv;
u_int32_t flags;
