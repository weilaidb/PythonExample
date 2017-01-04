#if !defined(MPOOL_ALLOC_SEARCH_LIMIT)
#define	MPOOL_ALLOC_SEARCH_LIMIT	500
int
__memp_bh_unreachable(env, bhp, snapshots, n_snapshots)
ENV *env;
BH *bhp;
DB_LSN *snapshots;
int n_snapshots;
int
__memp_alloc(dbmp, infop, mfp, len, offsetp, retp)
DB_MPOOL *dbmp;
REGINFO *infop;
MPOOLFILE *mfp;
size_t len;
roff_t *offsetp;
void *retp;
void
__memp_free(infop, buf)
REGINFO *infop;
void *buf;
