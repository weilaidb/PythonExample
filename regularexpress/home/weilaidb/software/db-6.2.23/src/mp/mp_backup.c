static int __memp_check_backup __P((ENV *,
MPOOLFILE *, void *, u_int32_t *, u_int32_t));
int
__memp_backup_open(env, mpf, dbfile, target, flags, fpp, handlep)
ENV *env;
DB_MPOOLFILE *mpf;
const char *dbfile;
const char *target;
u_int32_t flags;
DB_FH **fpp;
void **handlep;
int
__memp_backup_mpf(env, mpf, ip, first_pgno, last_pgno, fp, handle, flags)
ENV *env;
DB_MPOOLFILE *mpf;
DB_THREAD_INFO *ip;
db_pgno_t first_pgno, last_pgno;
DB_FH *fp;
void *handle;
u_int32_t flags;
int
__memp_backup_close(env, mpf, dbfile, fp, handle)
ENV *env;
DB_MPOOLFILE *mpf;
const char *dbfile;
DB_FH *fp;
void *handle;
static int
__memp_check_backup(env, mfp, arg, countp, flags)
ENV *env;
MPOOLFILE *mfp;
void *arg;
u_int32_t *countp;
u_int32_t flags;
int
__memp_failchk(env)
ENV *env;
