static int __pgno_cmp __P((const void *, const void *));
int
__memp_bh_settxn(dbmp, mfp, bhp, vtd)
DB_MPOOL *dbmp;
MPOOLFILE *mfp;
BH *bhp;
void *vtd;
int
__memp_skip_curadj(dbc, pgno)
DBC * dbc;
db_pgno_t pgno;
#define	DB_FREEZER_MAGIC 0x06102002
int
__memp_bh_freeze(dbmp, infop, hp, bhp, need_frozenp)
DB_MPOOL *dbmp;
REGINFO *infop;
DB_MPOOL_HASH *hp;
BH *bhp;
int *need_frozenp;
static int
__pgno_cmp(a, b)
const void *a, *b;
int
__memp_bh_thaw(dbmp, infop, hp, frozen_bhp, alloc_bhp)
DB_MPOOL *dbmp;
REGINFO *infop;
DB_MPOOL_HASH *hp;
BH *frozen_bhp, *alloc_bhp;
