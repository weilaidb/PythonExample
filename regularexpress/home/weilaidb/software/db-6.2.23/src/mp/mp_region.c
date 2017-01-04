static int	__memp_init_config __P((ENV *, MPOOL *, int));
static void	__memp_region_size __P((ENV *, roff_t *, u_int32_t *));
#define	MPOOL_DEFAULT_PAGESIZE	(4 * 1024)
int
__memp_open(env, create_ok)
ENV *env;
int create_ok;
int
__memp_region_detach(env, dbmp)
ENV *env;
DB_MPOOL *dbmp;
int
__memp_init(env, dbmp, reginfo_off, htab_buckets, max_nreg)
ENV *env;
DB_MPOOL *dbmp;
u_int reginfo_off, max_nreg;
u_int32_t htab_buckets;
u_int32_t
__memp_max_regions(env)
ENV *env;
static void
__memp_region_size(env, reg_sizep, htab_bucketsp)
ENV *env;
roff_t *reg_sizep;
u_int32_t *htab_bucketsp;
u_int32_t
__memp_region_mutex_count(env)
ENV *env;
static int
__memp_init_config(env, mp, create)
ENV *env;
MPOOL *mp;
int create;
int
__memp_env_refresh(env)
ENV *env;
int
__memp_region_bhfree(infop)
REGINFO *infop;
