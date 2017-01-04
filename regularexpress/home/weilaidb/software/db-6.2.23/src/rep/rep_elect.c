#define	IS_PHASE1_DONE(rep)						\
((rep)->sites >= (rep)->nsites && (rep)->winner != DB_EID_INVALID)
#define	I_HAVE_WON(rep, winner)						\
((rep)->votes >= (rep)->nvotes && winner == (rep)->eid)
static void __rep_cmp_vote __P((ENV *, REP *, int, DB_LSN *,
u_int32_t, u_int32_t, u_int32_t, u_int32_t, u_int32_t));
static int __rep_elect_init
__P((ENV *, u_int32_t, u_int32_t, int *, u_int32_t *));
static int __rep_fire_elected __P((ENV *, REP *, u_int32_t));
static void __rep_elect_master __P((ENV *, REP *));
static int __rep_grow_sites __P((ENV *, u_int32_t));
static void __rep_send_vote __P((ENV *, DB_LSN *, u_int32_t,
u_int32_t, u_int32_t, u_int32_t, u_int32_t, u_int32_t, int,
u_int32_t, u_int32_t));
static int __rep_tally __P((ENV *, REP *, int, u_int32_t *, u_int32_t, int));
static int __rep_wait __P((ENV *, db_timeout_t *, int, u_int32_t, u_int32_t));
int
__rep_elect_pp(dbenv, given_nsites, nvotes, flags)
DB_ENV *dbenv;
u_int32_t given_nsites, nvotes;
u_int32_t flags;
int
__rep_elect_int(env, given_nsites, nvotes, flags)
ENV *env;
u_int32_t given_nsites, nvotes;
u_int32_t flags;
int
__rep_vote1(env, rp, rec, eid)
ENV *env;
__rep_control_args *rp;
DBT *rec;
int eid;
int
__rep_vote2(env, rec, eid)
ENV *env;
DBT *rec;
int eid;
static int
__rep_tally(env, rep, eid, countp, egen, phase)
ENV *env;
REP *rep;
int eid;
u_int32_t *countp;
u_int32_t egen;
int phase;
static void
__rep_cmp_vote(env, rep, eid, lsnp, priority, gen, data_gen, tiebreaker, flags)
ENV *env;
REP *rep;
int eid;
DB_LSN *lsnp;
u_int32_t priority;
u_int32_t data_gen, flags, gen, tiebreaker;
static int
__rep_elect_init(env, nsites, nvotes, beginp, otally)
ENV *env;
u_int32_t nsites, nvotes;
int *beginp;
u_int32_t *otally;
static void
__rep_elect_master(env, rep)
ENV *env;
REP *rep;
static int
__rep_fire_elected(env, rep, egen)
ENV *env;
REP *rep;
u_int32_t egen;
#define	SLEEPTIME(timeout)					\
((timeout > 5000000) ? 500000 : ((timeout >= 10) ? timeout / 10 : 1))
static int
__rep_wait(env, timeoutp, full_elect, egen, flags)
ENV *env;
db_timeout_t *timeoutp;
int full_elect;
u_int32_t egen, flags;
static int
__rep_grow_sites(env, nsites)
ENV *env;
u_int32_t nsites;
static void
__rep_send_vote(env, lsnp,
nsites, nvotes, pri, tie, egen, data_gen, eid, vtype, flags)
ENV *env;
DB_LSN *lsnp;
int eid;
u_int32_t nsites, nvotes, pri;
u_int32_t flags, egen, data_gen, tie, vtype;
