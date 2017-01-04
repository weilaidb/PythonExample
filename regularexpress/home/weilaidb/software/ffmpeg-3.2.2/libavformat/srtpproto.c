typedef struct SRTPProtoContext  SRTPProtoContext;
#define D AV_OPT_FLAG_DECODING_PARAM
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass srtp_context_class = ;
static int srtp_close(URLContext *h)
static int srtp_open(URLContext *h, const char *uri, int flags)
static int srtp_read(URLContext *h, uint8_t *buf, int size)
static int srtp_write(URLContext *h, const uint8_t *buf, int size)
static int srtp_get_file_handle(URLContext *h)
static int srtp_get_multi_file_handle(URLContext *h, int **handles,
int *numhandles)
const URLProtocol ff_srtp_protocol = ;
