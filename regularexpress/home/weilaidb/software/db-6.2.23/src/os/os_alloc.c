static void __os_guard __P((const ENV *));
typedef union  db_allocinfo_t;
int
__os_umalloc(env, size, storep)
ENV *env;
size_t size;
void *storep;
int
__os_urealloc(env, size, storep)
ENV *env;
size_t size;
void *storep;
void
__os_ufree(env, ptr)
ENV *env;
void *ptr;
int
__os_strdup(env, str, storep)
ENV *env;
const char *str;
void *storep;
int
__os_calloc(env, num, size, storep)
const ENV *env;
size_t num, size;
void *storep;
int
__os_malloc(env, size, storep)
const ENV *env;
size_t size;
void *storep;
int
__os_realloc(env, size, storep)
const ENV *env;
size_t size;
void *storep;
void
__os_free(env, ptr)
const ENV *env;
void *ptr;
static void
__os_guard(env)
const ENV *env;
void *
__ua_memcpy(dst, src, len)
void *dst;
const void *src;
size_t len;
