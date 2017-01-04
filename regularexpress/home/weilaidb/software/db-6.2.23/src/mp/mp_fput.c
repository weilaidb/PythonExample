static int __memp_reset_lru __P((ENV *, REGINFO *));
int
__memp_fput_pp(dbmfp, pgaddr, priority, flags)
DB_MPOOLFILE *dbmfp;
void *pgaddr;
DB_CACHE_PRIORITY priority;
u_int32_t flags;
int
__memp_fput(dbmfp, ip, pgaddr, priority)
DB_MPOOLFILE *dbmfp;
DB_THREAD_INFO *ip;
void *pgaddr;
DB_CACHE_PRIORITY priority;
static int
__memp_reset_lru(env, infop)
ENV *env;
REGINFO *infop;
int
__memp_unpin_buffers(env, ip)
ENV *env;
DB_THREAD_INFO *ip;
