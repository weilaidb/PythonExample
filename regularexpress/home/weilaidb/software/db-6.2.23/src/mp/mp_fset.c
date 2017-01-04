int
__memp_dirty(dbmfp, addrp, ip, txn, priority, flags)
DB_MPOOLFILE *dbmfp;
void *addrp;
DB_THREAD_INFO *ip;
DB_TXN *txn;
DB_CACHE_PRIORITY priority;
u_int32_t flags;
int
__memp_shared(dbmfp, pgaddr)
DB_MPOOLFILE *dbmfp;
void *pgaddr;
