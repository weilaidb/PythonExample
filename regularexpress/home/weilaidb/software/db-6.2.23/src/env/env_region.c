static int  __env_des_get __P((ENV *, REGINFO *, REGINFO *, REGION **));
static int  __env_faultmem __P((ENV *, void *, size_t, int));
static int  __env_sys_attach __P((ENV *, REGINFO *, REGION *));
static int  __env_sys_detach __P((ENV *, REGINFO *, int));
static void __env_des_destroy __P((ENV *, REGION *));
static void __env_remove_file __P((ENV *));
int
__env_attach(env, init_flagsp, create_ok, retry_ok)
ENV *env;
u_int32_t *init_flagsp;
int create_ok, retry_ok;
int
__env_turn_on(env)
ENV *env;
int
__env_turn_off(env, flags)
ENV *env;
u_int32_t flags;
void
__env_panic_set(env, on)
ENV *env;
int on;
int
__env_ref_increment(env)
ENV *env;
int
__env_ref_decrement(env)
ENV *env;
int
__env_ref_get(dbenv, countp)
DB_ENV *dbenv;
u_int32_t *countp;
int
__env_region_cleanup(env)
ENV *env;
int
__env_detach(env, destroy)
ENV *env;
int destroy;
int
__env_remove_env(env)
ENV *env;
static void
__env_remove_file(env)
ENV *env;
int
__env_region_attach(env, infop, init, max)
ENV *env;
REGINFO *infop;
size_t init, max;
int
__env_region_share(env, infop)
ENV *env;
REGINFO *infop;
int
__env_region_detach(env, infop, destroy)
ENV *env;
REGINFO *infop;
int destroy;
static int
__env_sys_attach(env, infop, rp)
ENV *env;
REGINFO *infop;
REGION *rp;
static int
__env_sys_detach(env, infop, destroy)
ENV *env;
REGINFO *infop;
int destroy;
static int
__env_des_get(env, env_infop, infop, rpp)
ENV *env;
REGINFO *env_infop, *infop;
REGION **rpp;
static void
__env_des_destroy(env, rp)
ENV *env;
REGION *rp;
static int
__env_faultmem(env, addr, size, created)
ENV *env;
void *addr;
size_t size;
int created;
