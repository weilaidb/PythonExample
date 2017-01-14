#define STRINGLIB_FASTSEARCH_H
#define FAST_COUNT 0
#define FAST_SEARCH 1
#define FAST_RSEARCH 2
#if LONG_BIT >= 128
#define STRINGLIB_BLOOM_WIDTH 128
#elif LONG_BIT >= 64
#define STRINGLIB_BLOOM_WIDTH 64
#elif LONG_BIT >= 32
#define STRINGLIB_BLOOM_WIDTH 32
#error
#define STRINGLIB_BLOOM_ADD(mask, ch) \
((mask |= (1UL << ((ch) & (STRINGLIB_BLOOM_WIDTH -1)))))
#define STRINGLIB_BLOOM(mask, ch)     \
((mask &  (1UL << ((ch) & (STRINGLIB_BLOOM_WIDTH -1)))))
Py_LOCAL_INLINE(Py_ssize_t)
fastsearch(const STRINGLIB_CHAR* s, Py_ssize_t n,
const STRINGLIB_CHAR* p, Py_ssize_t m,
Py_ssize_t maxcount, int mode)
