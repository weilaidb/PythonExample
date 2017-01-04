#define BLURAY_PROTO_PREFIX     "bluray:"
#define MIN_PLAYLIST_LENGTH     180
typedef struct  BlurayContext;
#define OFFSET(x) offsetof(BlurayContext, x)
static const AVOption options[] = ;
static const AVClass bluray_context_class = ;
static int check_disc_info(URLContext *h)
static int bluray_close(URLContext *h)
static int bluray_open(URLContext *h, const char *path, int flags)
static int bluray_read(URLContext *h, unsigned char *buf, int size)
static int64_t bluray_seek(URLContext *h, int64_t pos, int whence)
const URLProtocol ff_bluray_protocol = ;
