static int  __rep_abort_prepared __P((ENV *));
static int  __rep_await_condition __P((ENV *,
struct rep_waitgoal *, db_timeout_t));
static int  __rep_bt_cmp __P((DB *, const DBT *, const DBT *, size_t *));
static int  __rep_check_applied __P((ENV *,
DB_THREAD_INFO *, DB_COMMIT_INFO *, struct rep_waitgoal *));
static void __rep_config_map __P((ENV *, u_int32_t *, u_int32_t *));
static u_int32_t __rep_conv_vers __P((ENV *, u_int32_t));
static int  __rep_defview __P((DB_ENV *, const char *, int *, u_int32_t));
static int  __rep_restore_prepared __P((ENV *));
static int  __rep_save_lsn_hist __P((ENV *, DB_THREAD_INFO *, DB_LSN *));
int
__rep_env_create(dbenv)
DB_ENV *dbenv;
void
__rep_env_destroy(dbenv)
DB_ENV *dbenv;
int
__rep_get_config(dbenv, which, onp)
DB_ENV *dbenv;
u_int32_t which;
int *onp;
int
__rep_set_config(dbenv, which, on)
DB_ENV *dbenv;
u_int32_t which;
int on;
static void
__rep_config_map(env, inflagsp, outflagsp)
ENV *env;
u_int32_t *inflagsp, *outflagsp;
int
__rep_start_pp(dbenv, dbt, flags)
DB_ENV *dbenv;
DBT *dbt;
u_int32_t flags;
int
__rep_start_int(env, dbt, flags, startopts)
ENV *env;
DBT *dbt;
u_int32_t flags;
u_int32_t startopts;
static int
__rep_save_lsn_hist(env, ip, lsnp)
ENV *env;
DB_THREAD_INFO *ip;
DB_LSN *lsnp;
int
__rep_open_sysdb(env, ip, txn, dbname, flags, dbpp)
ENV *env;
DB_THREAD_INFO *ip;
DB_TXN *txn;
const char *dbname;
u_int32_t flags;
DB **dbpp;
int
__rep_client_dbinit(env, startup, which)
ENV *env;
int startup;
repdb_t which;
static int
__rep_bt_cmp(dbp, dbt1, dbt2, locp)
DB *dbp;
const DBT *dbt1, *dbt2;
size_t *locp;
int
__rep_blob_cmp(dbp, dbt1, dbt2, locp)
DB *dbp;
const DBT *dbt1, *dbt2;
size_t *locp;
int
__rep_offset_cmp(dbp, dbt1, dbt2, locp)
DB *dbp;
const DBT *dbt1, *dbt2;
size_t *locp;
static int
__rep_abort_prepared(env)
ENV *env;
static int
__rep_restore_prepared(env)
ENV *env;
int
__rep_get_limit(dbenv, gbytesp, bytesp)
DB_ENV *dbenv;
u_int32_t *gbytesp, *bytesp;
int
__rep_set_limit(dbenv, gbytes, bytes)
DB_ENV *dbenv;
u_int32_t gbytes, bytes;
int
__rep_set_nsites_pp(dbenv, n)
DB_ENV *dbenv;
u_int32_t n;
int
__rep_set_nsites_int(env, n)
ENV *env;
u_int32_t n;
int
__rep_get_nsites(dbenv, n)
DB_ENV *dbenv;
u_int32_t *n;
int
__rep_set_priority_pp(dbenv, priority)
DB_ENV *dbenv;
u_int32_t priority;
int
__rep_set_priority_int(env, priority)
ENV *env;
u_int32_t priority;
int
__rep_get_priority(dbenv, priority)
DB_ENV *dbenv;
u_int32_t *priority;
int
__rep_set_timeout_pp(dbenv, which, timeout)
DB_ENV *dbenv;
int which;
db_timeout_t timeout;
int
__rep_set_timeout_int(env, which, timeout)
ENV *env;
int which;
db_timeout_t timeout;
int
__rep_get_timeout(dbenv, which, timeout)
DB_ENV *dbenv;
int which;
db_timeout_t *timeout;
int
__rep_get_request(dbenv, minp, maxp)
DB_ENV *dbenv;
db_timeout_t *minp, *maxp;
int
__rep_set_request(dbenv, min, max)
DB_ENV *dbenv;
db_timeout_t min, max;
int
__rep_set_view(dbenv, f_partial)
DB_ENV *dbenv;
int (*f_partial) __P((DB_ENV *,
const char *, int *, u_int32_t));
static int
__rep_defview(dbenv, name, result, flags)
DB_ENV *dbenv;
const char *name;
int *result;
u_int32_t flags;
int
__rep_call_partial(env, name, result, flags, lsp)
ENV *env;
const char *name;
int *result;
u_int32_t flags;
DELAYED_BLOB_LIST **lsp;
int
__rep_set_transport_pp(dbenv, eid, f_send)
DB_ENV *dbenv;
int eid;
int (*f_send) __P((DB_ENV *,
const DBT *, const DBT *, const DB_LSN *, int, u_int32_t));
int
__rep_set_transport_int(env, eid, f_send)
ENV *env;
int eid;
int (*f_send) __P((DB_ENV *,
const DBT *, const DBT *, const DB_LSN *, int, u_int32_t));
int
__rep_get_clockskew(dbenv, fast_clockp, slow_clockp)
DB_ENV *dbenv;
u_int32_t *fast_clockp, *slow_clockp;
int
__rep_set_clockskew(dbenv, fast_clock, slow_clock)
DB_ENV *dbenv;
u_int32_t fast_clock, slow_clock;
int
__rep_flush_pp (dbenv)
DB_ENV *dbenv;
int
__rep_flush_int(env)
ENV *env;
int
__rep_sync(dbenv, flags)
DB_ENV *dbenv;
u_int32_t flags;
int
__rep_txn_applied(env, ip, commit_info, timeout)
ENV *env;
DB_THREAD_INFO *ip;
DB_COMMIT_INFO *commit_info;
db_timeout_t timeout;
static int
__rep_await_condition(env, reasonp, duration)
ENV *env;
struct rep_waitgoal *reasonp;
db_timeout_t duration;
static int
__rep_check_applied(env, ip, commit_info, reasonp)
ENV *env;
DB_THREAD_INFO *ip;
DB_COMMIT_INFO *commit_info;
struct rep_waitgoal *reasonp;
int
__rep_read_lsn_history(env, ip, txn, dbc, gen, gen_infop, reasonp, flags,
use_cache)
ENV *env;
DB_THREAD_INFO *ip;
DB_TXN **txn;
DBC **dbc;
u_int32_t gen;
__rep_lsn_hist_data_args *gen_infop;
struct rep_waitgoal *reasonp;
u_int32_t flags;
int use_cache;
static u_int32_t
__rep_conv_vers(env, log_ver)
ENV *env;
u_int32_t log_ver;
