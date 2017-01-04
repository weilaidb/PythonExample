static void __memp_print_bh __P((ENV *,
DB_MPOOL *, const char *, BH *, roff_t *));
static int  __memp_print_all __P((ENV *, u_int32_t));
static int  __memp_print_stats __P((ENV *, u_int32_t));
static int __memp_print_hash __P((ENV *,
DB_MPOOL *, REGINFO *, roff_t *, u_int32_t));
static int  __memp_stat __P((ENV *,
DB_MPOOL_STAT **, DB_MPOOL_FSTAT ***, u_int32_t));
static void __memp_stat_wait
__P((ENV *, REGINFO *, MPOOL *, DB_MPOOL_STAT *, u_int32_t));
static int __memp_file_stats __P((ENV *,
MPOOLFILE *, void *, u_int32_t *, u_int32_t));
static int __memp_count_files __P((ENV *,
MPOOLFILE *, void *, u_int32_t *, u_int32_t));
static int __memp_get_files __P((ENV *,
MPOOLFILE *, void *, u_int32_t *, u_int32_t));
static int __memp_print_files __P((ENV *,
MPOOLFILE *, void *, u_int32_t *, u_int32_t));
int
__memp_stat_pp(dbenv, gspp, fspp, flags)
DB_ENV *dbenv;
DB_MPOOL_STAT **gspp;
DB_MPOOL_FSTAT ***fspp;
u_int32_t flags;
static int
__memp_stat(env, gspp, fspp, flags)
ENV *env;
DB_MPOOL_STAT **gspp;
DB_MPOOL_FSTAT ***fspp;
u_int32_t flags;
static int
__memp_file_stats(env, mfp, argp, countp, flags)
ENV *env;
MPOOLFILE *mfp;
void *argp;
u_int32_t *countp;
u_int32_t flags;
static int
__memp_count_files(env, mfp, argp, countp, flags)
ENV *env;
MPOOLFILE *mfp;
void *argp;
u_int32_t *countp;
u_int32_t flags;
static int
__memp_get_files(env, mfp, argp, fsp_len, flags)
ENV *env;
MPOOLFILE *mfp;
void *argp;
u_int32_t fsp_len[];
u_int32_t flags;
int
__memp_stat_print_pp(dbenv, flags)
DB_ENV *dbenv;
u_int32_t flags;
#define	FMAP_ENTRIES	200
int
__memp_stat_print(env, flags)
ENV *env;
u_int32_t flags;
static int
__memp_print_stats(env, flags)
ENV *env;
u_int32_t flags;
static int
__memp_print_all(env, flags)
ENV *env;
u_int32_t flags;
static int
__memp_print_files(env, mfp, argp, countp, flags)
ENV *env;
MPOOLFILE *mfp;
void *argp;
u_int32_t *countp;
u_int32_t flags;
static int
__memp_print_hash(env, dbmp, reginfo, fmap, flags)
ENV *env;
DB_MPOOL *dbmp;
REGINFO *reginfo;
roff_t *fmap;
u_int32_t flags;
static void
__memp_print_bh(env, dbmp, prefix, bhp, fmap)
ENV *env;
DB_MPOOL *dbmp;
const char *prefix;
BH *bhp;
roff_t *fmap;
static void
__memp_stat_wait(env, reginfo, mp, mstat, flags)
ENV *env;
REGINFO *reginfo;
MPOOL *mp;
DB_MPOOL_STAT *mstat;
u_int32_t flags;
int
__memp_stat_pp(dbenv, gspp, fspp, flags)
DB_ENV *dbenv;
DB_MPOOL_STAT **gspp;
DB_MPOOL_FSTAT ***fspp;
u_int32_t flags;
int
__memp_stat_print_pp(dbenv, flags)
DB_ENV *dbenv;
u_int32_t flags;
void
__memp_stat_hash(reginfo, mp, dirtyp)
REGINFO *reginfo;
MPOOL *mp;
u_int32_t *dirtyp;
