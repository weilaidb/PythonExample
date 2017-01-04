static int __db_norep __P((ENV *));
static int
__db_norep(env)
ENV *env;
int
__db_rep_enter(dbp, checkgen, checklock, return_now)
DB *dbp;
int checkgen, checklock, return_now;
int
__env_rep_enter(env, checklock)
ENV *env;
int checklock;
int
__env_db_rep_exit(env)
ENV *env;
int
__op_rep_enter(env, local_nowait, obey_user)
ENV *env;
int local_nowait, obey_user;
int
__op_rep_exit(env)
ENV *env;
int
__archive_rep_enter(env)
ENV *env;
int
__archive_rep_exit(env)
ENV *env;
int
__rep_bulk_message(env, bulkp, repth, lsnp, dbt, flags)
ENV *env;
REP_BULK *bulkp;
REP_THROTTLE *repth;
DB_LSN *lsnp;
const DBT *dbt;
u_int32_t flags;
int
__rep_env_refresh(env)
ENV *env;
int
__rep_elect_pp(dbenv, nsites, nvotes, flags)
DB_ENV *dbenv;
u_int32_t nsites, nvotes;
u_int32_t flags;
int
__rep_flush_pp(dbenv)
DB_ENV *dbenv;
int
__rep_lease_check(env, refresh)
ENV *env;
int refresh;
int
__rep_lease_expire(env)
ENV *env;
void
__rep_msg(env, msg)
const ENV *env;
const char *msg;
int
__rep_get_clockskew(dbenv, fast_clockp, slow_clockp)
DB_ENV *dbenv;
u_int32_t *fast_clockp, *slow_clockp;
int
__rep_set_clockskew(dbenv, fast_clock, slow_clock)
DB_ENV *dbenv;
u_int32_t fast_clock, slow_clock;
int
__rep_set_nsites_pp(dbenv, n)
DB_ENV *dbenv;
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
__rep_get_priority(dbenv, priority)
DB_ENV *dbenv;
u_int32_t *priority;
int
__rep_set_timeout_pp(dbenv, which, timeout)
DB_ENV *dbenv;
int which;
db_timeout_t timeout;
int
__rep_get_timeout(dbenv, which, timeout)
DB_ENV *dbenv;
int which;
db_timeout_t *timeout;
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
int
__rep_get_limit(dbenv, gbytesp, bytesp)
DB_ENV *dbenv;
u_int32_t *gbytesp, *bytesp;
int
__rep_open(env)
ENV *env;
int
__rep_preclose(env)
ENV *env;
int
__rep_process_message_pp(dbenv, control, rec, eid, ret_lsnp)
DB_ENV *dbenv;
DBT *control, *rec;
int eid;
DB_LSN *ret_lsnp;
int
__rep_send_message(env, eid, rtype, lsnp, dbtp, logflags, repflags)
ENV *env;
int eid;
u_int32_t rtype;
DB_LSN *lsnp;
const DBT *dbtp;
u_int32_t logflags, repflags;
int
__rep_set_limit(dbenv, gbytes, bytes)
DB_ENV *dbenv;
u_int32_t gbytes, bytes;
int
__rep_set_transport_pp(dbenv, eid, f_send)
DB_ENV *dbenv;
int eid;
int (*f_send) __P((DB_ENV *, const DBT *, const DBT *, const DB_LSN *,
int, u_int32_t));
int
__rep_set_view(dbenv, f_partial)
DB_ENV *dbenv;
int (*f_partial) __P((DB_ENV *,
const char *, int *, u_int32_t));
int
__rep_set_request(dbenv, min, max)
DB_ENV *dbenv;
u_int32_t min, max;
int
__rep_get_request(dbenv, minp, maxp)
DB_ENV *dbenv;
u_int32_t *minp, *maxp;
int
__rep_start_pp(dbenv, dbt, flags)
DB_ENV *dbenv;
DBT *dbt;
u_int32_t flags;
int
__rep_stat_pp(dbenv, statp, flags)
DB_ENV *dbenv;
DB_REP_STAT **statp;
u_int32_t flags;
int
__rep_stat_print_pp(dbenv, flags)
DB_ENV *dbenv;
u_int32_t flags;
int
__rep_stat_print(env, flags)
ENV *env;
u_int32_t flags;
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
