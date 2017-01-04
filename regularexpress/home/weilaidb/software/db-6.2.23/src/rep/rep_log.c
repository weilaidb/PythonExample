static int __rep_chk_newfile __P((ENV *, DB_LOGC *, REP *,
__rep_control_args *, int));
static int __rep_log_split __P((ENV *, DB_THREAD_INFO *,
__rep_control_args *, DBT *, DB_LSN *, DB_LSN *));
int
__rep_allreq(env, rp, eid)
ENV *env;
__rep_control_args *rp;
int eid;
int
__rep_log(env, ip, rp, rec, eid, savetime, ret_lsnp)
ENV *env;
DB_THREAD_INFO *ip;
__rep_control_args *rp;
DBT *rec;
int eid;
time_t savetime;
DB_LSN *ret_lsnp;
int
__rep_bulk_log(env, ip, rp, rec, savetime, ret_lsnp)
ENV *env;
DB_THREAD_INFO *ip;
__rep_control_args *rp;
DBT *rec;
time_t savetime;
DB_LSN *ret_lsnp;
static int
__rep_log_split(env, ip, rp, rec, ret_lsnp, last_lsnp)
ENV *env;
DB_THREAD_INFO *ip;
__rep_control_args *rp;
DBT *rec;
DB_LSN *ret_lsnp;
DB_LSN *last_lsnp;
int
__rep_logreq(env, rp, rec, eid)
ENV *env;
__rep_control_args *rp;
DBT *rec;
int eid;
int
__rep_loggap_req(env, rep, lsnp, gapflags)
ENV *env;
REP *rep;
DB_LSN *lsnp;
u_int32_t gapflags;
int
__rep_logready(env, rep, savetime, last_lsnp)
ENV *env;
REP *rep;
time_t savetime;
DB_LSN *last_lsnp;
static int
__rep_chk_newfile(env, logc, rep, rp, eid)
ENV *env;
DB_LOGC *logc;
REP *rep;
__rep_control_args *rp;
int eid;
