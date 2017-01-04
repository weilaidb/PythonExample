static int __os_map
__P((ENV *, char *, REGINFO *, DB_FH *, size_t, int, int, int, void **));
static int __os_unique_name __P((_TCHAR *, HANDLE, _TCHAR *, size_t));
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
__os_mapfile(env, path, fhp, len, is_rdonly, addr)
ENV *env;
char *path;
DB_FH *fhp;
int is_rdonly;
size_t len;
void **addr;
int
__os_unmapfile(env, addr, len)
ENV *env;
void *addr;
size_t len;
static int
__os_unique_name(orig_path, hfile, result_path, result_path_len)
_TCHAR *orig_path, *result_path;
HANDLE hfile;
size_t result_path_len;
static int
__os_map(env, path, infop, fhp, len, is_region, is_system, is_rdonly, addr)
ENV *env;
REGINFO *infop;
char *path;
DB_FH *fhp;
int is_region, is_system, is_rdonly;
size_t len;
void **addr;
