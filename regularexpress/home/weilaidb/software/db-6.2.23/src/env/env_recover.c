static int	__db_log_corrupt __P((ENV *, DB_LSN *));
static int	__env_init_rec_47 __P((ENV *));
static int	__env_init_rec_48 __P((ENV *));
static int	__env_init_rec_53 __P((ENV *));
static int	__env_init_rec_60 __P((ENV *));
static int	__env_init_rec_60p1 __P((ENV *));
static int	__log_earliest __P((ENV *, DB_LOGC *, int32_t *, DB_LSN *));
static double	__lsn_diff __P((DB_LSN *, DB_LSN *, DB_LSN *, u_int32_t, int));
static int	__log_backup __P((ENV *, DB_LOGC *, DB_LSN *, DB_LSN*));
int
__db_apprec(env, ip, max_lsn, trunclsn, update, flags)
ENV *env;
DB_THREAD_INFO *ip;
DB_LSN *max_lsn, *trunclsn;
int update;
u_int32_t flags;
static double
__lsn_diff(low, high, current, max, is_forward)
DB_LSN *low, *high, *current;
u_int32_t max;
int is_forward;
static int
__log_backup(env, logc, max_lsn, start_lsn)
ENV *env;
DB_LOGC *logc;
DB_LSN *max_lsn, *start_lsn;
static int
__log_earliest(env, logc, lowtime, lowlsn)
ENV *env;
DB_LOGC *logc;
int32_t *lowtime;
DB_LSN *lowlsn;
int
__env_openfiles(env, logc, txninfo,
data, open_lsn, last_lsn, nfiles, in_recovery)
ENV *env;
DB_LOGC *logc;
void *txninfo;
DBT *data;
DB_LSN *open_lsn, *last_lsn;
double nfiles;
int in_recovery;
static int
__db_log_corrupt(env, lsnp)
ENV *env;
DB_LSN *lsnp;
int
__env_init_rec(env, version)
ENV *env;
u_int32_t version;
static int
__env_init_rec_47(env)
ENV *env;
static int
__env_init_rec_48(env)
ENV *env;
static int
__env_init_rec_53(env)
ENV *env;
static int
__env_init_rec_60(env)
ENV *env;
static int
__env_init_rec_60p1(env)
ENV *env;
