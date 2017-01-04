static int __memp_pgwrite
__P((ENV *, DB_MPOOLFILE *, DB_MPOOL_HASH *, BH *));
int
__memp_bhwrite(dbmp, hp, mfp, bhp, open_extents)
DB_MPOOL *dbmp;
DB_MPOOL_HASH *hp;
MPOOLFILE *mfp;
BH *bhp;
int open_extents;
int
__memp_pgread(dbmfp, bhp, can_create)
DB_MPOOLFILE *dbmfp;
BH *bhp;
int can_create;
static int
__memp_pgwrite(env, dbmfp, hp, bhp)
ENV *env;
DB_MPOOLFILE *dbmfp;
DB_MPOOL_HASH *hp;
BH *bhp;
int
__memp_pg(dbmfp, pgno, buf, is_pgin)
DB_MPOOLFILE *dbmfp;
db_pgno_t pgno;
void *buf;
int is_pgin;
int
__memp_bhfree(dbmp, infop, mfp, hp, bhp, flags)
DB_MPOOL *dbmp;
REGINFO *infop;
MPOOLFILE *mfp;
DB_MPOOL_HASH *hp;
BH *bhp;
u_int32_t flags;
