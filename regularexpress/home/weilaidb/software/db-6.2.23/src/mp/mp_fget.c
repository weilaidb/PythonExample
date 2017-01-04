int
__memp_fget_pp(dbmfp, pgnoaddr, txnp, flags, addrp)
DB_MPOOLFILE *dbmfp;
db_pgno_t *pgnoaddr;
DB_TXN *txnp;
u_int32_t flags;
void *addrp;
int
__memp_fget(dbmfp, pgnoaddr, ip, txn, flags, addrp)
DB_MPOOLFILE *dbmfp;
db_pgno_t *pgnoaddr;
DB_THREAD_INFO *ip;
DB_TXN *txn;
u_int32_t flags;
void *addrp;
int
__memp_find_obsolete_version(env, vis_bhp, hp, foundp)
ENV *env;
BH *vis_bhp;
DB_MPOOL_HASH *hp;
BH **foundp;
