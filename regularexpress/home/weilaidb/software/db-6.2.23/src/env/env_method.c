static int  __db_env_init __P((DB_ENV *));
static void __env_err __P((const DB_ENV *, int, const char *, ...));
static void __env_errx __P((const DB_ENV *, const char *, ...));
static void __env_msg __P((const DB_ENV *, const char *, ...));
static int  __env_get_create_dir __P((DB_ENV *, const char **));
static int  __env_get_data_dirs __P((DB_ENV *, const char ***));
static int  __env_get_data_len __P((DB_ENV *, u_int32_t *));
static int  __env_get_flags __P((DB_ENV *, u_int32_t *));
static int  __env_get_home __P((DB_ENV *, const char **));
static int  __env_get_intermediate_dir_mode __P((DB_ENV *, const char **));
static int  __env_get_metadata_dir __P((DB_ENV *, const char **));
static int  __env_get_shm_key __P((DB_ENV *, long *));
static int  __env_get_thread_count __P((DB_ENV *, u_int32_t *));
static int  __env_get_thread_id_fn __P((DB_ENV *,
void (**)(DB_ENV *, pid_t *, db_threadid_t *)));
static int  __env_get_thread_id_string_fn __P((DB_ENV *,
char * (**)(DB_ENV *, pid_t, db_threadid_t, char *)));
static int  __env_get_timeout __P((DB_ENV *, db_timeout_t *, u_int32_t));
static int  __env_get_tmp_dir __P((DB_ENV *, const char **));
static int  __env_get_verbose __P((DB_ENV *, u_int32_t, int *));
static int  __env_get_app_dispatch
__P((DB_ENV *, int (**)(DB_ENV *, DBT *, DB_LSN *, db_recops)));
static int  __env_set_app_dispatch
__P((DB_ENV *, int (*)(DB_ENV *, DBT *, DB_LSN *, db_recops)));
static int  __env_get_blob_dir __P((DB_ENV *, const char **));
static int __env_set_event_notify
__P((DB_ENV *, void (*)(DB_ENV *, u_int32_t, void *)));
static int  __env_get_feedback __P((DB_ENV *, void (**)(DB_ENV *, int, int)));
static int  __env_set_feedback __P((DB_ENV *, void (*)(DB_ENV *, int, int)));
static int  __env_get_isalive __P((DB_ENV *,
int (**)(DB_ENV *, pid_t, db_threadid_t, u_int32_t)));
static int  __env_set_isalive __P((DB_ENV *,
int (*)(DB_ENV *, pid_t, db_threadid_t, u_int32_t)));
static int  __env_set_thread_id __P((DB_ENV *, void (*)(DB_ENV *,
pid_t *, db_threadid_t *)));
static int  __env_set_thread_id_string __P((DB_ENV *,
char * (*)(DB_ENV *, pid_t, db_threadid_t, char *)));
int
db_env_create(dbenvpp, flags)
DB_ENV **dbenvpp;
u_int32_t flags;
void
__db_env_destroy(dbenv)
DB_ENV *dbenv;
static int
__db_env_init(dbenv)
DB_ENV *dbenv;
static void
__env_err(const DB_ENV *dbenv, int error, const char *fmt, ...)
static void
__env_errx(const DB_ENV *dbenv, const char *fmt, ...)
static void
__env_msg(const DB_ENV *dbenv, const char *fmt, ...)
static int
__env_get_home(dbenv, homep)
DB_ENV *dbenv;
const char **homep;
int
__env_get_alloc(dbenv, mal_funcp, real_funcp, free_funcp)
DB_ENV *dbenv;
void *(**mal_funcp) __P((size_t));
void *(**real_funcp) __P((void *, size_t));
void (**free_funcp) __P((void *));
int
__env_set_alloc(dbenv, mal_func, real_func, free_func)
DB_ENV *dbenv;
void *(*mal_func) __P((size_t));
void *(*real_func) __P((void *, size_t));
void (*free_func) __P((void *));
int
__env_get_memory_init(dbenv, type, countp)
DB_ENV *dbenv;
DB_MEM_CONFIG type;
u_int32_t *countp;
int
__env_get_blob_threshold_pp(dbenv, bytes)
DB_ENV *dbenv;
u_int32_t *bytes;
int
__env_get_blob_threshold_int(env, bytes)
ENV *env;
u_int32_t *bytes;
int
__env_set_blob_threshold(dbenv, bytes, flags)
DB_ENV *dbenv;
u_int32_t bytes;
u_int32_t flags;
int
__env_set_memory_init(dbenv, type, count)
DB_ENV *dbenv;
DB_MEM_CONFIG type;
u_int32_t count;
int
__env_get_memory_max(dbenv, gbytes, bytes)
DB_ENV *dbenv;
u_int32_t *gbytes, *bytes;
int
__env_set_memory_max(dbenv, gbytes, bytes)
DB_ENV *dbenv;
u_int32_t gbytes, bytes;
static int
__env_get_app_dispatch(dbenv, app_dispatchp)
DB_ENV *dbenv;
int (**app_dispatchp) __P((DB_ENV *, DBT *, DB_LSN *, db_recops));
static int
__env_set_app_dispatch(dbenv, app_dispatch)
DB_ENV *dbenv;
int (*app_dispatch) __P((DB_ENV *, DBT *, DB_LSN *, db_recops));
int
__env_set_blob_dir(dbenv, dir)
DB_ENV *dbenv;
const char *dir;
static int
__env_get_blob_dir(dbenv, dirp)
DB_ENV *dbenv;
const char **dirp;
int
__env_get_encrypt_flags(dbenv, flagsp)
DB_ENV *dbenv;
u_int32_t *flagsp;
int
__env_set_encrypt(dbenv, passwd, flags)
DB_ENV *dbenv;
const char *passwd;
u_int32_t flags;
static
const FLAG_MAP EnvMap[] = ;
void
__env_map_flags(flagmap, mapsize, inflags, outflagsp)
const FLAG_MAP *flagmap;
u_int mapsize;
u_int32_t inflags, *outflagsp;
void
__env_fetch_flags(flagmap, mapsize, inflagsp, outflagsp)
const FLAG_MAP *flagmap;
u_int mapsize;
u_int32_t *inflagsp, *outflagsp;
static int
__env_get_flags(dbenv, flagsp)
DB_ENV *dbenv;
u_int32_t *flagsp;
int
__env_set_flags(dbenv, flags, on)
DB_ENV *dbenv;
u_int32_t flags;
int on;
int
__env_set_backup(env, on)
ENV *env;
int on;
static int
__env_get_data_dirs(dbenv, dirpp)
DB_ENV *dbenv;
const char ***dirpp;
int
__env_set_data_dir(dbenv, dir)
DB_ENV *dbenv;
const char *dir;
int
__env_add_data_dir(dbenv, dir)
DB_ENV *dbenv;
const char *dir;
int
__env_set_create_dir(dbenv, dir)
DB_ENV *dbenv;
const char *dir;
static int
__env_get_create_dir(dbenv, dirp)
DB_ENV *dbenv;
const char **dirp;
static int
__env_get_intermediate_dir_mode(dbenv, modep)
DB_ENV *dbenv;
const char **modep;
int
__env_set_home_dir(dbenv, dir)
DB_ENV *dbenv;
const char *dir;
int
__env_set_metadata_dir(dbenv, dir)
DB_ENV *dbenv;
const char *dir;
static int
__env_get_metadata_dir(dbenv, dirp)
DB_ENV *dbenv;
const char **dirp;
int
__env_set_data_len(dbenv, data_len)
DB_ENV *dbenv;
u_int32_t data_len;
static int
__env_get_data_len(dbenv, data_lenp)
DB_ENV *dbenv;
u_int32_t *data_lenp;
int
__env_set_intermediate_dir_mode(dbenv, mode)
DB_ENV *dbenv;
const char *mode;
void
__env_get_errcall(dbenv, errcallp)
DB_ENV *dbenv;
void (**errcallp) __P((const DB_ENV *, const char *, const char *));
void
__env_set_errcall(dbenv, errcall)
DB_ENV *dbenv;
void (*errcall) __P((const DB_ENV *, const char *, const char *));
void
__env_get_errfile(dbenv, errfilep)
DB_ENV *dbenv;
FILE **errfilep;
void
__env_set_errfile(dbenv, errfile)
DB_ENV *dbenv;
FILE *errfile;
void
__env_get_errpfx(dbenv, errpfxp)
DB_ENV *dbenv;
const char **errpfxp;
void
__env_set_errpfx(dbenv, errpfx)
DB_ENV *dbenv;
const char *errpfx;
static int
__env_get_feedback(dbenv, feedbackp)
DB_ENV *dbenv;
void (**feedbackp) __P((DB_ENV *, int, int));
static int
__env_set_feedback(dbenv, feedback)
DB_ENV *dbenv;
void (*feedback) __P((DB_ENV *, int, int));
static int
__env_get_thread_id_fn(dbenv, idp)
DB_ENV *dbenv;
void (**idp) __P((DB_ENV *, pid_t *, db_threadid_t *));
static int
__env_set_thread_id(dbenv, id_func)
DB_ENV *dbenv;
void (*id_func) __P((DB_ENV *, pid_t *, db_threadid_t *));
static int
__env_get_thread_id_string_fn(dbenv, thread_id_stringp)
DB_ENV *dbenv;
char *(**thread_id_stringp)
__P((DB_ENV *, pid_t, db_threadid_t, char *));
static int
__env_set_thread_id_string(dbenv, thread_id_string)
DB_ENV *dbenv;
char *(*thread_id_string) __P((DB_ENV *, pid_t, db_threadid_t, char *));
static int
__env_get_isalive(dbenv, is_alivep)
DB_ENV *dbenv;
int (**is_alivep) __P((DB_ENV *, pid_t, db_threadid_t, u_int32_t));
static int
__env_set_isalive(dbenv, is_alive)
DB_ENV *dbenv;
int (*is_alive) __P((DB_ENV *, pid_t, db_threadid_t, u_int32_t));
static int
__env_get_thread_count(dbenv, countp)
DB_ENV *dbenv;
u_int32_t *countp;
int
__env_set_thread_count(dbenv, count)
DB_ENV *dbenv;
u_int32_t count;
void
__env_get_msgcall(dbenv, msgcallp)
DB_ENV *dbenv;
void (**msgcallp) __P((const DB_ENV *, const char *, const char *));
void
__env_set_msgcall(dbenv, msgcall)
DB_ENV *dbenv;
void (*msgcall) __P((const DB_ENV *, const char *, const char *));
void
__env_get_msgfile(dbenv, msgfilep)
DB_ENV *dbenv;
FILE **msgfilep;
void
__env_set_msgfile(dbenv, msgfile)
DB_ENV *dbenv;
FILE *msgfile;
void
__env_get_msgpfx(dbenv, msgpfxp)
DB_ENV *dbenv;
const char **msgpfxp;
void
__env_set_msgpfx(dbenv, msgpfx)
DB_ENV *dbenv;
const char *msgpfx;
int
__env_set_paniccall(dbenv, paniccall)
DB_ENV *dbenv;
void (*paniccall) __P((DB_ENV *, int));
static int
__env_set_event_notify(dbenv, event_func)
DB_ENV *dbenv;
void (*event_func) __P((DB_ENV *, u_int32_t, void *));
static int
__env_get_shm_key(dbenv, shm_keyp)
DB_ENV *dbenv;
long *shm_keyp;
int
__env_set_shm_key(dbenv, shm_key)
DB_ENV *dbenv;
long shm_key;
static int
__env_get_tmp_dir(dbenv, dirp)
DB_ENV *dbenv;
const char **dirp;
int
__env_set_tmp_dir(dbenv, dir)
DB_ENV *dbenv;
const char *dir;
static int
__env_get_verbose(dbenv, which, onoffp)
DB_ENV *dbenv;
u_int32_t which;
int *onoffp;
int
__env_set_verbose(dbenv, which, on)
DB_ENV *dbenv;
u_int32_t which;
int on;
int
__db_mi_env(env, name)
ENV *env;
const char *name;
int
__db_mi_open(env, name, after)
ENV *env;
const char *name;
int after;
int
__env_not_config(env, i, flags)
ENV *env;
char *i;
u_int32_t flags;
static int
__env_get_timeout(dbenv, timeoutp, flags)
DB_ENV *dbenv;
db_timeout_t *timeoutp;
u_int32_t flags;
int
__env_set_timeout(dbenv, timeout, flags)
DB_ENV *dbenv;
db_timeout_t timeout;
u_int32_t flags;
int
__env_encrypt_adj_size(dbenv, orig_size, ajustp)
DB_ENV *dbenv;
size_t orig_size;
size_t *ajustp;
int
__env_encrypt(dbenv, iv, data, len)
DB_ENV *dbenv;
u_int8_t *iv;
u_int8_t *data;
size_t len;
int
__env_decrypt(dbenv, iv, data, len)
DB_ENV *dbenv;
u_int8_t *iv;
u_int8_t *data;
size_t len;
