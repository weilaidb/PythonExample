#define AVUTIL_MEM_H
defined && __INTEL_COMPILER < 1110 || defined(__SUNPRO_C)
DECLARE_ALIGNED      t __attribute__ ((aligned (n))) v
DECLARE_ASM_CONST    const t __attribute__ ((aligned (n))) v
defined
DECLARE_ALIGNED                      \
AV_PRAGMA(DATA_ALIGN(v,n))                      \
__attribute__)) v
DECLARE_ASM_CONST                    \
AV_PRAGMA(DATA_ALIGN(v,n))                      \
__attribute__)) v
defined
DECLARE_ALIGNED      t __attribute__ ((aligned (n))) v
DECLARE_ASM_CONST    static const t av_used __attribute__ ((aligned (n))) v
defined
DECLARE_ALIGNED      __declspec(align(n)) t v
DECLARE_ASM_CONST    __declspec(align(n)) static const t v
DECLARE_ALIGNED      t v
DECLARE_ASM_CONST    static const t v
AV_GCC_VERSION_AT_LEAST
__attribute__)
#define av_malloc_attrib
AV_GCC_VERSION_AT_LEAST
av_alloc_size __attribute__((alloc_size(__VA_ARGS__)))
av_alloc_size
av_alloc_size;
av_alloc_size;
*av_malloc_array
*av_mallocz_array
*av_calloc av_malloc_attrib;
*av_realloc av_alloc_size(2);
av_warn_unused_result
av_reallocp;
*av_realloc_f;
*av_realloc_array;
av_reallocp_array;
*av_fast_realloc;
av_fast_malloc;
av_fast_mallocz;
av_free;
av_freep;
*av_strdup av_malloc_attrib;
*av_strndup av_malloc_attrib;
*av_memdup;
av_memcpy_backptr;
av_dynarray_add;
av_warn_unused_result
av_dynarray_add_nofree;
*av_dynarray2_add;
av_size_mult
av_max_alloc;
