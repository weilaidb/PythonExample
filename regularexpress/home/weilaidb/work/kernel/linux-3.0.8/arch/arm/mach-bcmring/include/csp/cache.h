#define CSP_CACHE_H
#if defined(__KERNEL__) && !defined(STANDALONE)
#define CSP_CACHE_FLUSH_ALL      flush_cache_all()
#define CSP_CACHE_FLUSH_ALL
