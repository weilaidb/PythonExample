#if HAVE_IO_H
#if HAVE_UNISTD_H
typedef struct CacheEntry  CacheEntry;
typedef struct Context  Context;
static int cmp(const void *key, const void *node)
static int cache_open(URLContext *h, const char *arg, int flags, AVDictionary **options)
static int add_entry(URLContext *h, const unsigned char *buf, int size)
static int cache_read(URLContext *h, unsigned char *buf, int size)
static int64_t cache_seek(URLContext *h, int64_t pos, int whence)
static int enu_free(void *opaque, void *elem)
static int cache_close(URLContext *h)
#define OFFSET(x) offsetof(Context, x)
#define D AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass cache_context_class = ;
URLProtocol ff_cache_protocol = ;
