static int __os_map __P((ENV *, char *, DB_FH *, size_t, int, int, void **));
static int __shm_mode __P((ENV *));
static int __no_system_mem __P((ENV *));
int
__os_attach(env, infop, rp)
ENV *env;
REGINFO *infop;
REGION *rp;
int
__os_detach(env, infop, destroy)
ENV *env;
REGINFO *infop;
int destroy;
int
__os_mapfile(env, path, fhp, len, is_rdonly, addrp)
ENV *env;
char *path;
DB_FH *fhp;
int is_rdonly;
size_t len;
void **addrp;
int
__os_unmapfile(env, addr, len)
ENV *env;
void *addr;
size_t len;
static int
__os_map(env, path, fhp, len, is_region, is_rdonly, addrp)
ENV *env;
char *path;
DB_FH *fhp;
int is_region, is_rdonly;
size_t len;
void **addrp;
#define	SHM_R	0400
#define	SHM_W	0200
static int
__shm_mode(env)
ENV *env;
static int
__no_system_mem(env)
ENV *env;
