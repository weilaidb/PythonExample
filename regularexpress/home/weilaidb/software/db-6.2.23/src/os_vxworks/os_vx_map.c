typedef struct  os_segdata_t;
static os_segdata_t *__os_segdata;
static int __os_segdata_size;
#define	OS_SEGDATA_STARTING_SIZE 16
#define	OS_SEGDATA_INCREMENT	 16
static int __os_segdata_allocate
__P((ENV *, const char *, REGINFO *, REGION *));
static int __os_segdata_find_byname
__P((ENV *, const char *, REGINFO *, REGION *));
static int __os_segdata_init __P((ENV *));
static int __os_segdata_new __P((ENV *, int *));
static int __os_segdata_release __P((ENV *, REGION *, int));
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
__os_segdata_init(env)
ENV *env;
int
__os_segdata_destroy(env)
ENV *env;
static int
__os_segdata_allocate(env, name, infop, rp)
ENV *env;
const char *name;
REGINFO *infop;
REGION *rp;
static int
__os_segdata_new(env, segidp)
ENV *env;
int *segidp;
static int
__os_segdata_find_byname(env, name, infop, rp)
ENV *env;
const char *name;
REGINFO *infop;
REGION *rp;
static int
__os_segdata_release(env, rp, is_locked)
ENV *env;
REGION *rp;
int is_locked;
