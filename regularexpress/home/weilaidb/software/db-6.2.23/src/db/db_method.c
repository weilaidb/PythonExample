static int  __db_get_byteswapped __P((DB *, int *));
static int  __db_get_dbname __P((DB *, const char **, const char **));
static DB_ENV *__db_get_env __P((DB *));
static void __db_get_msgcall __P((DB *,
void (**)(const DB_ENV *, const char *, const char *)));
static DB_MPOOLFILE *__db_get_mpf __P((DB *));
static int  __db_get_multiple __P((DB *));
static int  __db_get_transactional __P((DB *));
static int  __db_get_type __P((DB *, DBTYPE *dbtype));
static int  __db_init __P((DB *, u_int32_t));
static int  __db_get_alloc __P((DB *, void *(**)(size_t),
void *(**)(void *, size_t), void (**)(void *)));
static int  __db_set_alloc __P((DB *, void *(*)(size_t),
void *(*)(void *, size_t), void (*)(void *)));
static int  __db_get_append_recno __P((DB *,
int (**)(DB *, DBT *, db_recno_t)));
static int  __db_set_append_recno __P((DB *, int (*)(DB *, DBT *, db_recno_t)));
static int  __db_get_blob_dir __P((DB *, const char **));
static int  __db_set_blob_dir __P((DB *, const char *));
static int  __db_get_blob_sub_dir __P((DB *, const char **));
static int  __db_get_cachesize __P((DB *, u_int32_t *, u_int32_t *, int *));
static int  __db_set_cachesize __P((DB *, u_int32_t, u_int32_t, int));
static int  __db_get_create_dir __P((DB *, const char **));
static int  __db_set_create_dir __P((DB *, const char *));
static int  __db_get_dup_compare
__P((DB *, int (**)(DB *, const DBT *, const DBT *, size_t *)));
static int  __db_get_encrypt_flags __P((DB *, u_int32_t *));
static int  __db_set_encrypt __P((DB *, const char *, u_int32_t));
static int  __db_get_feedback __P((DB *, void (**)(DB *, int, int)));
static int  __db_set_feedback __P((DB *, void (*)(DB *, int, int)));
static int  __db_get_lk_exclusive __P((DB *, int *, int *));
static int  __db_set_lk_exclusive __P((DB *, int));
static void __db_map_flags __P((DB *, u_int32_t *, u_int32_t *));
static int  __db_get_pagesize __P((DB *, u_int32_t *));
static int  __db_set_paniccall __P((DB *, void (*)(DB_ENV *, int)));
static int  __db_set_priority __P((DB *, DB_CACHE_PRIORITY));
static int  __db_get_priority __P((DB *, DB_CACHE_PRIORITY *));
static void __db_get_errcall __P((DB *,
void (**)(const DB_ENV *, const char *, const char *)));
static void __db_set_errcall
__P((DB *, void (*)(const DB_ENV *, const char *, const char *)));
static void __db_get_errfile __P((DB *, FILE **));
static void __db_set_errfile __P((DB *, FILE *));
static void __db_get_errpfx __P((DB *, const char **));
static void __db_set_errpfx __P((DB *, const char *));
static void __db_set_msgcall
__P((DB *, void (*)(const DB_ENV *, const char *, const char *)));
static void __db_get_msgfile __P((DB *, FILE **));
static void __db_set_msgfile __P((DB *, FILE *));
static void __db_get_msgpfx __P((DB *, const char **));
static void __db_set_msgpfx __P((DB *, const char *));
static int  __db_get_assoc_flags __P((DB *, u_int32_t *));
static void __dbh_err __P((DB *, int, const char *, ...));
static void __dbh_errx __P((DB *, const char *, ...));
static void __dbh_msg __P((DB *, const char *, ...));
int
db_create(dbpp, dbenv, flags)
DB **dbpp;
DB_ENV *dbenv;
u_int32_t flags;
int
__db_create_internal(dbpp, env, flags)
DB **dbpp;
ENV *env;
u_int32_t flags;
static int
__db_init(dbp, flags)
DB *dbp;
u_int32_t flags;
int
__dbh_am_chk(dbp, flags)
DB *dbp;
u_int32_t flags;
static void
__dbh_err(DB *dbp, int error, const char *fmt, ...)
static void
__dbh_errx(DB *dbp, const char *fmt, ...)
static void
__dbh_msg(DB *dbp, const char *fmt, ...)
static int
__db_get_byteswapped(dbp, isswapped)
DB *dbp;
int *isswapped;
static int
__db_get_dbname(dbp, fnamep, dnamep)
DB *dbp;
const char **fnamep, **dnamep;
static DB_ENV *
__db_get_env(dbp)
DB *dbp;
static DB_MPOOLFILE *
__db_get_mpf(dbp)
DB *dbp;
static int
__db_get_multiple(dbp)
DB *dbp;
static int
__db_get_transactional(dbp)
DB *dbp;
static int
__db_get_type(dbp, dbtype)
DB *dbp;
DBTYPE *dbtype;
static int
__db_get_append_recno(dbp, funcp)
DB *dbp;
int (**funcp) __P((DB *, DBT *, db_recno_t));
static int
__db_set_append_recno(dbp, func)
DB *dbp;
int (*func) __P((DB *, DBT *, db_recno_t));
int
__db_get_blob_threshold(dbp, bytes)
DB *dbp;
u_int32_t *bytes;
int
__db_set_blob_threshold(dbp, bytes, flags)
DB *dbp;
u_int32_t bytes;
u_int32_t flags;
int
__db_blobs_enabled(dbp)
DB *dbp;
static int
__db_get_blob_sub_dir(dbp, dir)
DB *dbp;
const char **dir;
static int
__db_get_blob_dir(dbp, dir)
DB *dbp;
const char **dir;
static int
__db_set_blob_dir(dbp, dir)
DB *dbp;
const char *dir;
static int
__db_get_cachesize(dbp, cache_gbytesp, cache_bytesp, ncachep)
DB *dbp;
u_int32_t *cache_gbytesp, *cache_bytesp;
int *ncachep;
static int
__db_set_cachesize(dbp, cache_gbytes, cache_bytes, ncache)
DB *dbp;
u_int32_t cache_gbytes, cache_bytes;
int ncache;
static int
__db_set_create_dir(dbp, dir)
DB *dbp;
const char *dir;
static int
__db_get_create_dir(dbp, dirp)
DB *dbp;
const char **dirp;
static int
__db_get_dup_compare(dbp, funcp)
DB *dbp;
int (**funcp) __P((DB *, const DBT *, const DBT *, size_t *));
int
__db_set_dup_compare(dbp, func)
DB *dbp;
int (*func) __P((DB *, const DBT *, const DBT *, size_t *));
static int
__db_get_encrypt_flags(dbp, flagsp)
DB *dbp;
u_int32_t *flagsp;
static int
__db_set_encrypt(dbp, passwd, flags)
DB *dbp;
const char *passwd;
u_int32_t flags;
static void
__db_get_errcall(dbp, errcallp)
DB *dbp;
void (**errcallp) __P((const DB_ENV *, const char *, const char *));
static void
__db_set_errcall(dbp, errcall)
DB *dbp;
void (*errcall) __P((const DB_ENV *, const char *, const char *));
static void
__db_get_errfile(dbp, errfilep)
DB *dbp;
FILE **errfilep;
static void
__db_set_errfile(dbp, errfile)
DB *dbp;
FILE *errfile;
static void
__db_get_errpfx(dbp, errpfxp)
DB *dbp;
const char **errpfxp;
static void
__db_set_errpfx(dbp, errpfx)
DB *dbp;
const char *errpfx;
static int
__db_get_feedback(dbp, feedbackp)
DB *dbp;
void (**feedbackp) __P((DB *, int, int));
static int
__db_set_feedback(dbp, feedback)
DB *dbp;
void (*feedback) __P((DB *, int, int));
static int
__db_get_lk_exclusive(dbp, onoff, nowait)
DB *dbp;
int *onoff;
int *nowait;
static int
__db_set_lk_exclusive(dbp, nowait)
DB *dbp;
int nowait;
static void
__db_map_flags(dbp, inflagsp, outflagsp)
DB *dbp;
u_int32_t *inflagsp, *outflagsp;
static int
__db_get_assoc_flags(dbp, flagsp)
DB *dbp;
u_int32_t *flagsp;
int
__db_get_flags(dbp, flagsp)
DB *dbp;
u_int32_t *flagsp;
int
__db_set_flags(dbp, flags)
DB *dbp;
u_int32_t flags;
int
__db_get_lorder(dbp, db_lorderp)
DB *dbp;
int *db_lorderp;
int
__db_set_lorder(dbp, db_lorder)
DB *dbp;
int db_lorder;
static int
__db_get_alloc(dbp, mal_funcp, real_funcp, free_funcp)
DB *dbp;
void *(**mal_funcp) __P((size_t));
void *(**real_funcp) __P((void *, size_t));
void (**free_funcp) __P((void *));
static int
__db_set_alloc(dbp, mal_func, real_func, free_func)
DB *dbp;
void *(*mal_func) __P((size_t));
void *(*real_func) __P((void *, size_t));
void (*free_func) __P((void *));
static void
__db_get_msgcall(dbp, msgcallp)
DB *dbp;
void (**msgcallp) __P((const DB_ENV *, const char *, const char *));
static void
__db_set_msgcall(dbp, msgcall)
DB *dbp;
void (*msgcall) __P((const DB_ENV *, const char *, const char *));
static void
__db_get_msgfile(dbp, msgfilep)
DB *dbp;
FILE **msgfilep;
static void
__db_set_msgfile(dbp, msgfile)
DB *dbp;
FILE *msgfile;
static void
__db_get_msgpfx(dbp, msgpfxp)
DB *dbp;
const char **msgpfxp;
static void
__db_set_msgpfx(dbp, msgpfx)
DB *dbp;
const char *msgpfx;
static int
__db_get_pagesize(dbp, db_pagesizep)
DB *dbp;
u_int32_t *db_pagesizep;
int
__db_set_pagesize(dbp, db_pagesize)
DB *dbp;
u_int32_t db_pagesize;
static int
__db_set_paniccall(dbp, paniccall)
DB *dbp;
void (*paniccall) __P((DB_ENV *, int));
static int
__db_set_priority(dbp, priority)
DB *dbp;
DB_CACHE_PRIORITY priority;
static int
__db_get_priority(dbp, priority)
DB *dbp;
DB_CACHE_PRIORITY *priority;
int
__db_slice_notsup(dbp)
DB *dbp;
int
__dbc_slice_notsup(dbc)
DBC *dbc;
int
__db_slice_get_slices(dbp, slices)
DB *dbp;
DB ***slices;
int
__db_set_slice_callback(dbp, func)
DB *dbp;
int (*func) __P((const DB *, const DBT *, DBT *));
int
__db_not_sliced(dbp)
DB *dbp;
