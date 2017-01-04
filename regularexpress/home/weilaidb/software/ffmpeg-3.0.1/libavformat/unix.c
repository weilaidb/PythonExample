typedef struct UnixContext  UnixContext;
#define OFFSET(x) offsetof(UnixContext, x)
#define ED AV_OPT_FLAG_DECODING_PARAM|AV_OPT_FLAG_ENCODING_PARAM
static const AVOption unix_options[] = ;
static const AVClass unix_class = ;
static int unix_open(URLContext *h, const char *filename, int flags)
static int unix_read(URLContext *h, uint8_t *buf, int size)
static int unix_write(URLContext *h, const uint8_t *buf, int size)
static int unix_close(URLContext *h)
static int unix_get_file_handle(URLContext *h)
URLProtocol ff_unix_protocol = ;
