typedef struct  BH_TRACK;
static int __bhcmp __P((const void *, const void *));
static int __memp_close_flush_files __P((ENV *, int));
static int __memp_sync_files __P((ENV *));
static int __memp_sync_file __P((ENV *,
MPOOLFILE *, void *, u_int32_t *, u_int32_t));
int
__memp_walk_files(env, mp, func, arg, countp, flags)
ENV *env;
MPOOL *mp;
int (*func)__P((ENV *, MPOOLFILE *, void *, u_int32_t *, u_int32_t));
void *arg;
u_int32_t *countp;
u_int32_t flags;
int
__memp_discard_all_mpfs (env, mp)
ENV *env;
MPOOL *mp;
int
__memp_sync_pp(dbenv, lsnp)
DB_ENV *dbenv;
DB_LSN *lsnp;
int
__memp_sync(env, flags, lsnp)
ENV *env;
u_int32_t flags;
DB_LSN *lsnp;
int
__memp_fsync_pp(dbmfp)
DB_MPOOLFILE *dbmfp;
int
__memp_fsync(dbmfp)
DB_MPOOLFILE *dbmfp;
int
__mp_xxx_fh(dbmfp, fhp)
DB_MPOOLFILE *dbmfp;
DB_FH **fhp;
int
__memp_sync_int(env, dbmfp, trickle_max, flags, wrote_totalp, interruptedp)
ENV *env;
DB_MPOOLFILE *dbmfp;
u_int32_t trickle_max, flags, *wrote_totalp;
int *interruptedp;
static int
__memp_sync_file(env, mfp, argp, countp, flags)
ENV *env;
MPOOLFILE *mfp;
void *argp;
u_int32_t *countp;
u_int32_t flags;
static int
__memp_sync_files(env)
ENV *env;
int
__memp_mf_sync(dbmp, mfp, locked)
DB_MPOOL *dbmp;
MPOOLFILE *mfp;
int locked;
static int
__memp_close_flush_files(env, dosync)
ENV *env;
int dosync;
static int
__bhcmp(p1, p2)
const void *p1, *p2;
