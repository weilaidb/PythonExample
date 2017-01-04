static int __rep_print_all __P((ENV *, u_int32_t));
static int __rep_print_stats __P((ENV *, u_int32_t));
static int __rep_stat __P((ENV *, DB_REP_STAT **, u_int32_t));
static int __rep_stat_summary_print __P((ENV *));
static const char *__rep_syncstate_to_string __P((repsync_t));
#define	PRINT_LOGQUEUED(sp) do  while (0)
#define	PRINT_MAXPERMLSN(sp) do  while (0)
#define	PRINT_MSGSRECOVER(sp) do  while (0)
#define	PRINT_MSGSSENDFAILURES(sp) do  while (0)
#define	PRINT_STARTUPCOMPLETE(sp) do  while (0)
#define	PRINT_STATUS(sp, is_client) do  while (0)
#define	PRINT_VIEW(sp) do  while (0)
int
__rep_stat_pp(dbenv, statp, flags)
DB_ENV *dbenv;
DB_REP_STAT **statp;
u_int32_t flags;
static int
__rep_stat(env, statp, flags)
ENV *env;
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
static int
__rep_print_stats(env, flags)
ENV *env;
u_int32_t flags;
static int
__rep_print_all(env, flags)
ENV *env;
u_int32_t flags;
static const char *
__rep_syncstate_to_string(state)
repsync_t state;
static int
__rep_stat_summary_print(env)
ENV *env;
int
__rep_stat_pp(dbenv, statp, flags)
DB_ENV *dbenv;
DB_REP_STAT **statp;
u_int32_t flags;
int
__rep_stat_print_pp(dbenv, flags)
DB_ENV *dbenv;
u_int32_t flags;
