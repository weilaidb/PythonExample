typedef struct IcecastContext  IcecastContext;
#define DEFAULT_ICE_USER "source"
#define NOT_EMPTY(s) (s && s[0])
#define OFFSET(x) offsetof(IcecastContext, x)
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static void cat_header(AVBPrint *bp, const char key[], const char value[])
static int icecast_close(URLContext *h)
static int icecast_open(URLContext *h, const char *uri, int flags)
static int icecast_write(URLContext *h, const uint8_t *buf, int size)
static const AVClass icecast_context_class = ;
const URLProtocol ff_icecast_protocol = ;
