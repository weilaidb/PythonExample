static int __memp_mpf_alloc __P((DB_MPOOL *,
DB_MPOOLFILE *, const char *, u_int32_t, u_int32_t, MPOOLFILE **));
static int __memp_mpf_find __P((ENV *,
DB_MPOOLFILE *, DB_MPOOL_HASH *, const char *, u_int32_t, MPOOLFILE **));
int
__memp_fopen_pp(dbmfp, path, flags, mode, pagesize)
DB_MPOOLFILE *dbmfp;
const char *path;
u_int32_t flags;
int mode;
size_t pagesize;
#define	MFP_OPEN_CNT(mfp)	((mfp)->mpf_cnt - ((mfp)->neutral_cnt +	\
(u_int32_t)(mfp)->no_backing_file))
#define	MP_IOINFO_RETRIES	5
int
__memp_fopen(dbmfp, mfp, path, dirp, flags, mode, pgsize)
DB_MPOOLFILE *dbmfp;
MPOOLFILE *mfp;
const char *path;
const char **dirp;
u_int32_t flags;
int mode;
size_t pgsize;
static int
__memp_mpf_find(env, dbmfp, hp, path, flags, mfpp)
ENV *env;
DB_MPOOLFILE *dbmfp;
DB_MPOOL_HASH *hp;
const char *path;
u_int32_t flags;
MPOOLFILE **mfpp;
static int
__memp_mpf_alloc(dbmp, dbmfp, path, pagesize, flags, retmfp)
DB_MPOOL *dbmp;
DB_MPOOLFILE *dbmfp;
const char *path;
u_int32_t pagesize;
u_int32_t flags;
MPOOLFILE **retmfp;
int
__memp_fclose_pp(dbmfp, flags)
DB_MPOOLFILE *dbmfp;
u_int32_t flags;
int
__memp_fclose(dbmfp, flags)
DB_MPOOLFILE *dbmfp;
u_int32_t flags;
int
__memp_mf_discard(dbmp, mfp, hp_locked)
DB_MPOOL *dbmp;
MPOOLFILE *mfp;
int hp_locked;
int
__memp_inmemlist(env, namesp, cntp)
ENV *env;
char ***namesp;
int *cntp;
