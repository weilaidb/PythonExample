#define AVUTIL_MEM_H
#if defined(__INTEL_COMPILER) && __INTEL_COMPILER < 1110 || defined(__SUNPRO_C)
#define DECLARE_ALIGNED(n,t,v)      t __attribute__ ((aligned (n))) v
#define DECLARE_ASM_CONST(n,t,v)    const t __attribute__ ((aligned (n))) v
#elif defined(__TI_COMPILER_VERSION__)
#define DECLARE_ALIGNED(n,t,v)                      \
AV_PRAGMA(DATA_ALIGN(v,n))                      \
t __attribute__((aligned(n))) v
#define DECLARE_ASM_CONST(n,t,v)                    \
AV_PRAGMA(DATA_ALIGN(v,n))                      \
static const t __attribute__((aligned(n))) v
#elif defined(__GNUC__)
#define DECLARE_ALIGNED(n,t,v)      t __attribute__ ((aligned (n))) v
#define DECLARE_ASM_CONST(n,t,v)    static const t av_used __attribute__ ((aligned (n))) v
#elif defined(_MSC_VER)
#define DECLARE_ALIGNED(n,t,v)      __declspec(align(n)) t v
#define DECLARE_ASM_CONST(n,t,v)    __declspec(align(n)) static const t v
#define DECLARE_ALIGNED(n,t,v)      t v
#define DECLARE_ASM_CONST(n,t,v)    static const t v
#if AV_GCC_VERSION_AT_LEAST(3,1)
#define av_malloc_attrib __attribute__((__malloc__))
#define av_malloc_attrib
#if AV_GCC_VERSION_AT_LEAST(4,3)
#define av_alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define av_alloc_size(...)
void *av_malloc(size_t size) av_malloc_attrib av_alloc_size(1);
void *av_mallocz(size_t size) av_malloc_attrib av_alloc_size(1);
av_alloc_size(1, 2) static inline void *av_malloc_array(size_t nmemb, size_t size)
av_alloc_size(1, 2) static inline void *av_mallocz_array(size_t nmemb, size_t size)
void *av_calloc(size_t nmemb, size_t size) av_malloc_attrib;
void *av_realloc(void *ptr, size_t size) av_alloc_size(2);
av_warn_unused_result
int av_reallocp(void *ptr, size_t size);
void *av_realloc_f(void *ptr, size_t nelem, size_t elsize);
av_alloc_size(2, 3) void *av_realloc_array(void *ptr, size_t nmemb, size_t size);
av_alloc_size(2, 3) int av_reallocp_array(void *ptr, size_t nmemb, size_t size);
void *av_fast_realloc(void *ptr, unsigned int *size, size_t min_size);
void av_fast_malloc(void *ptr, unsigned int *size, size_t min_size);
void av_fast_mallocz(void *ptr, unsigned int *size, size_t min_size);
void av_free(void *ptr);
void av_freep(void *ptr);
char *av_strdup(const char *s) av_malloc_attrib;
char *av_strndup(const char *s, size_t len) av_malloc_attrib;
void *av_memdup(const void *p, size_t size);
void av_memcpy_backptr(uint8_t *dst, int back, int cnt);
void av_dynarray_add(void *tab_ptr, int *nb_ptr, void *elem);
av_warn_unused_result
int av_dynarray_add_nofree(void *tab_ptr, int *nb_ptr, void *elem);
void *av_dynarray2_add(void **tab_ptr, int *nb_ptr, size_t elem_size,
const uint8_t *elem_data);
static inline int av_size_mult(size_t a, size_t b, size_t *r)
void av_max_alloc(size_t max);
