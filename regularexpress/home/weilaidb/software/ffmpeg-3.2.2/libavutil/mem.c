#define _XOPEN_SOURCE 600
#if HAVE_MALLOC_H
AV_JOIN
AV_JOIN
AV_JOIN
AV_JOIN
AV_JOIN
*malloc;
*memalign;
posix_memalign;
*realloc;
free;
#define ALIGN (HAVE_AVX ? 32 : 16)
static size_t max_alloc_size= INT_MAX;
av_max_alloc
*av_malloc
*av_realloc
*av_realloc_f
av_reallocp
*av_realloc_array
av_reallocp_array
av_free
av_freep
*av_mallocz
*av_calloc
*av_strdup
*av_strndup
*av_memdup
av_dynarray_add_nofree
av_dynarray_add
*av_dynarray2_add
fill16
fill24
fill32
av_memcpy_backptr
*av_fast_realloc
av_fast_malloc
av_fast_mallocz
