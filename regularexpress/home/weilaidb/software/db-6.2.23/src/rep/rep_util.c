#define	TIMESTAMP_CHECK(env, ts, renv) do  while (0)
static int __rep_lockout_int __P((ENV *, REP *, u_int32_t *, u_int32_t,
const char *, u_int32_t));
static int __rep_newmaster_empty __P((ENV *, int));
static int __rep_print_int __P((ENV *, u_int32_t, const char *, va_list));
static void __rep_print_logmsg __P((ENV *, const DBT *, DB_LSN *));
static int __rep_show_progress __P((ENV *, const char *, int mins));
int
__rep_bulk_message(env, bulk, repth, lsn, dbt, flags)
ENV *env;
REP_BULK *bulk;
REP_THROTTLE *repth;
DB_LSN *lsn;
const DBT *dbt;
u_int32_t flags;
int
__rep_send_bulk(env, bulkp, ctlflags)
ENV *env;
REP_BULK *bulkp;
u_int32_t ctlflags;
int
__rep_bulk_alloc(env, bulkp, eid, offp, flagsp, type)
ENV *env;
REP_BULK *bulkp;
int eid;
uintptr_t *offp;
u_int32_t *flagsp, type;
int
__rep_bulk_free(env, bulkp, flags)
ENV *env;
REP_BULK *bulkp;
u_int32_t flags;
int
__rep_send_message(env, eid, rtype, lsnp, dbt, ctlflags, repflags)
ENV *env;
int eid;
u_int32_t rtype;
DB_LSN *lsnp;
const DBT *dbt;
u_int32_t ctlflags, repflags;
return (ret);
}
static void
__rep_print_logmsg(env, logdbt, lsnp)
ENV *env;
const DBT *logdbt;
DB_LSN *lsnp;
int
__rep_new_master(env, cntrl, eid)
ENV *env;
__rep_control_args *cntrl;
int eid;
static int
__rep_newmaster_empty(env, eid)
ENV *env;
int eid;
void
__rep_elect_done(env, rep)
ENV *env;
REP *rep;
int
__env_rep_enter(env, checklock)
ENV *env;
int checklock;
static int
__rep_show_progress(env, which, mins)
ENV *env;
const char *which;
int mins;
int
__env_db_rep_exit(env)
ENV *env;
int
__db_rep_enter(dbp, checkgen, checklock, return_now)
DB *dbp;
int checkgen, checklock, return_now;
int
__op_handle_enter(env)
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
__rep_lockout_archive(env, rep)
ENV *env;
REP *rep;
int
__rep_lockout_api(env, rep)
ENV *env;
REP *rep;
int
__rep_take_apilockout(env)
ENV *env;
int
__rep_clear_apilockout(env)
ENV *env;
int
__rep_lockout_apply(env, rep, apply_th)
ENV *env;
REP *rep;
u_int32_t apply_th;
int
__rep_lockout_msg(env, rep, msg_th)
ENV *env;
REP *rep;
u_int32_t msg_th;
static int
__rep_lockout_int(env, rep, fieldp, field_val, msg, lockout_flag)
ENV *env;
REP *rep;
u_int32_t *fieldp;
const char *msg;
u_int32_t field_val, lockout_flag;
int
__rep_send_throttle(env, eid, repth, flags, ctlflags)
ENV *env;
int eid;
REP_THROTTLE *repth;
u_int32_t ctlflags, flags;
u_int32_t
__rep_msg_to_old(version, rectype)
u_int32_t version, rectype;
u_int32_t
__rep_msg_from_old(version, rectype)
u_int32_t version, rectype;
int
__rep_print_system(ENV *env, u_int32_t verbose, const char *fmt, ...)
int
__rep_print(ENV *env, u_int32_t verbose, const char *fmt, ...)
static int
__rep_print_int(env, verbose, fmt, ap)
ENV *env;
u_int32_t verbose;
const char *fmt;
va_list ap;
void
__rep_print_message(env, eid, rp, str, flags)
ENV *env;
int eid;
__rep_control_args *rp;
char *str;
u_int32_t flags;
void
__rep_fire_event(env, event, info)
ENV *env;
u_int32_t event;
void *info;
void
__rep_msg(env, msg)
const ENV *env;
const char *msg;
int
__rep_notify_threads(env, wake_reason)
ENV *env;
rep_waitreason_t wake_reason;
int
__rep_check_goal(env, goal)
ENV *env;
struct rep_waitgoal *goal;
int
__rep_log_backup(env, logc, lsn, match)
ENV *env;
DB_LOGC *logc;
DB_LSN *lsn;
u_int32_t match;
int
__rep_get_maxpermlsn(env, max_perm_lsnp)
ENV *env;
DB_LSN *max_perm_lsnp;
int
__rep_is_internal_rep_file(filename)
char *filename;
int
__rep_get_datagen(env, data_genp)
ENV *env;
u_int32_t *data_genp;
int
__rep_become_readonly_master(env, gen, sync_lsnp)
ENV *env;
u_int32_t *gen;
DB_LSN *sync_lsnp;
int
__rep_get_lsnhist_data(env, ip, gen, lsnhist_data)
ENV *env;
DB_THREAD_INFO *ip;
u_int32_t gen;
__rep_lsn_hist_data_args *lsnhist_data;
