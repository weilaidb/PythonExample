static db_size_t __mutex_align_size __P((ENV *));
static int __mutex_region_init __P((ENV *, DB_MUTEXMGR *));
static size_t __mutex_region_size __P((ENV *));
static size_t __mutex_region_max __P((ENV *));
int
__mutex_open(env, create_ok)
ENV *env;
int create_ok;
int
__mutex_region_detach(env, mtxmgr)
ENV *env;
DB_MUTEXMGR *mtxmgr;
static int
__mutex_region_init(env, mtxmgr)
ENV *env;
DB_MUTEXMGR *mtxmgr;
int
__mutex_env_refresh(env)
ENV *env;
static db_size_t
__mutex_align_size(env)
ENV *env;
static size_t
__mutex_region_size(env)
ENV *env;
static size_t
__mutex_region_max(env)
ENV *env;
void
__mutex_resource_return(env, infop)
ENV *env;
REGINFO *infop;
