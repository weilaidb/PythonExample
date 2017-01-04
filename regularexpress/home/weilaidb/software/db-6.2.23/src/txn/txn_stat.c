static int  __txn_compare __P((const void *, const void *));
static int  __txn_print_all __P((ENV *, u_int32_t));
static int  __txn_print_stats __P((ENV *, u_int32_t));
static int  __txn_stat __P((ENV *, DB_TXN_STAT **, u_int32_t));
static char *__txn_status __P((DB_TXN_ACTIVE *));
static char *__txn_xa_status __P((DB_TXN_ACTIVE *));
static void __txn_gid __P((ENV *, DB_MSGBUF *, DB_TXN_ACTIVE *));
static void __txn_print_stats_slices
__P((ENV *, DB_MSGBUF *, DB_TXN_ACTIVE_SLICE *));
int
__txn_stat_pp(dbenv, statp, flags)
DB_ENV *dbenv;
DB_TXN_STAT **statp;
u_int32_t flags;
static int
__txn_stat(env, statp, flags)
ENV *env;
DB_TXN_STAT **statp;
u_int32_t flags;
int
__txn_stat_print_pp(dbenv, flags)
DB_ENV *dbenv;
u_int32_t flags;
int
__txn_stat_print(env, flags)
ENV *env;
u_int32_t flags;
static void
__txn_print_stats_slices(env, mbp, txns)
ENV *env;
DB_MSGBUF *mbp;
DB_TXN_ACTIVE_SLICE *txns;
static int
__txn_print_stats(env, flags)
ENV *env;
u_int32_t flags;
static int
__txn_print_all(env, flags)
ENV *env;
u_int32_t flags;
static char *
__txn_status(txn)
DB_TXN_ACTIVE *txn;
static char *
__txn_xa_status(txn)
DB_TXN_ACTIVE *txn;
static void
__txn_gid(env, mbp, txn)
ENV *env;
DB_MSGBUF *mbp;
DB_TXN_ACTIVE *txn;
static int
__txn_compare(a1, b1)
const void *a1, *b1;
int
__txn_stat_pp(dbenv, statp, flags)
DB_ENV *dbenv;
DB_TXN_STAT **statp;
u_int32_t flags;
int
__txn_stat_print_pp(dbenv, flags)
DB_ENV *dbenv;
u_int32_t flags;
