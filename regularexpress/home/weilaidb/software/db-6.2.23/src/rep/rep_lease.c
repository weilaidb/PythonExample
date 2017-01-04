static void __rep_find_entry __P((ENV *, REP *, int, REP_LEASE_ENTRY **));
int
__rep_update_grant(env, ts)
ENV *env;
db_timespec *ts;
int
__rep_islease_granted(env)
ENV *env;
int
__rep_lease_table_alloc(env, nsites)
ENV *env;
u_int32_t nsites;
int
__rep_lease_grant(env, rp, rec, eid)
ENV *env;
__rep_control_args *rp;
DBT *rec;
int eid;
static void
__rep_find_entry(env, rep, eid, lep)
ENV *env;
REP *rep;
int eid;
REP_LEASE_ENTRY **lep;
int
__rep_lease_check(env, refresh)
ENV *env;
int refresh;
int
__rep_lease_refresh(env)
ENV *env;
int
__rep_lease_expire(env)
ENV *env;
db_timeout_t
__rep_lease_waittime(env)
ENV *env;
