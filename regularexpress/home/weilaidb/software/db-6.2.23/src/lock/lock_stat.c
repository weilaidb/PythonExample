static int  __lock_dump_object __P((DB_LOCKTAB *, DB_MSGBUF *, DB_LOCKOBJ *));
static int  __lock_print_all __P((ENV *, u_int32_t));
static int  __lock_print_stats __P((ENV *, u_int32_t));
static void __lock_print_header __P((ENV *));
static int  __lock_stat __P((ENV *, DB_LOCK_STAT **, u_int32_t));
int
__lock_stat_pp(dbenv, statp, flags)
DB_ENV *dbenv;
DB_LOCK_STAT **statp;
u_int32_t flags;
static int
__lock_stat(env, statp, flags)
ENV *env;
DB_LOCK_STAT **statp;
u_int32_t flags;
int
__lock_stat_print_pp(dbenv, flags)
DB_ENV *dbenv;
u_int32_t flags;
int
__lock_stat_print(env, flags)
ENV *env;
u_int32_t flags;
static int
__lock_print_stats(env, flags)
ENV *env;
u_int32_t flags;
static int
__lock_print_all(env, flags)
ENV *env;
u_int32_t flags;
static int
__lock_dump_object(lt, mbp, op)
DB_LOCKTAB *lt;
DB_MSGBUF *mbp;
DB_LOCKOBJ *op;
static void
__lock_print_header(env)
ENV *env;
int
__lock_stat_pp(dbenv, statp, flags)
DB_ENV *dbenv;
DB_LOCK_STAT **statp;
u_int32_t flags;
int
__lock_stat_print_pp(dbenv, flags)
DB_ENV *dbenv;
u_int32_t flags;
void
__lock_printlock(lt, mbp, lp, ispgno)
DB_LOCKTAB *lt;
DB_MSGBUF *mbp;
struct __db_lock *lp;
int ispgno;
int
__lock_dump_locker(env, mbp, lt, lip)
ENV *env;
DB_MSGBUF *mbp;
DB_LOCKTAB *lt;
DB_LOCKER *lip;
