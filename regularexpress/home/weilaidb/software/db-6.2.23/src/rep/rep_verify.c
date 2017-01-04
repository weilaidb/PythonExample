static int __rep_internal_init __P((ENV *, u_int32_t));
int
__rep_verify(env, rp, rec, eid, savetime)
ENV *env;
__rep_control_args *rp;
DBT *rec;
int eid;
time_t savetime;
static int
__rep_internal_init(env, abbrev)
ENV *env;
u_int32_t abbrev;
int
__rep_verify_fail(env, rp)
ENV *env;
__rep_control_args *rp;
int
__rep_verify_req(env, rp, eid)
ENV *env;
__rep_control_args *rp;
int eid;
int
__rep_dorecovery(env, lsnp, trunclsnp)
ENV *env;
DB_LSN *lsnp, *trunclsnp;
int
__rep_verify_match(env, reclsnp, savetime)
ENV *env;
DB_LSN *reclsnp;
time_t savetime;
