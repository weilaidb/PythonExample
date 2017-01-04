#define _XOPEN_SOURCE 600
#if HAVE_MALLOC_H
#define malloc         AV_JOIN(MALLOC_PREFIX, malloc)
#define memalign       AV_JOIN(MALLOC_PREFIX, memalign)
#define posix_memalign AV_JOIN(MALLOC_PREFIX, posix_memalign)
#define realloc        AV_JOIN(MALLOC_PREFIX, realloc)
#define free           AV_JOIN(MALLOC_PREFIX, free)
void *malloc(size_t size);
void *memalign(size_t align, size_t size);
int   posix_memalign(void **ptr, size_t align, size_t size);
void *realloc(void *ptr, size_t size);
void  free(void *ptr);
#define ALIGN (HAVE_AVX ? 32 : 16)
static size_t max_alloc_size= INT_MAX;
void av_max_alloc(size_t max)
void *av_malloc(size_t size)
void *av_realloc(void *ptr, size_t size)
void *av_realloc_f(void *ptr, size_t nelem, size_t elsize)
int av_reallocp(void *ptr, size_t size)
void *av_realloc_array(void *ptr, size_t nmemb, size_t size)
int av_reallocp_array(void *ptr, size_t nmemb, size_t size)
void av_free(void *ptr)
void av_freep(void *arg)
void *av_mallocz(size_t size)
void *av_calloc(size_t nmemb, size_t size)
char *av_strdup(const char *s)
char *av_strndup(const char *s, size_t len)
void *av_memdup(const void *p, size_t size)
int av_dynarray_add_nofree(void *tab_ptr, int *nb_ptr, void *elem)
void av_dynarray_add(void *tab_ptr, int *nb_ptr, void *elem)
void *av_dynarray2_add(void **tab_ptr, int *nb_ptr, size_t elem_size,
const uint8_t *elem_data)
static void fill16(uint8_t *dst, int len)
static void fill24(uint8_t *dst, int len)
static void fill32(uint8_t *dst, int len)
void av_memcpy_backptr(uint8_t *dst, int back, int cnt)
void *av_fast_realloc(void *ptr, unsigned int *size, size_t min_size)
void av_fast_malloc(void *ptr, unsigned int *size, size_t min_size)
void av_fast_mallocz(void *ptr, unsigned int *size, size_t min_size)
