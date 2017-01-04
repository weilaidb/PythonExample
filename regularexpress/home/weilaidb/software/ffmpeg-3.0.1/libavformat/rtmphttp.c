#define RTMPT_DEFAULT_PORT 80
#define RTMPTS_DEFAULT_PORT RTMPS_DEFAULT_PORT
typedef struct RTMP_HTTPContext  RTMP_HTTPContext;
static int rtmp_http_send_cmd(URLContext *h, const char *cmd)
static int rtmp_http_write(URLContext *h, const uint8_t *buf, int size)
static int rtmp_http_read(URLContext *h, uint8_t *buf, int size)
static int rtmp_http_close(URLContext *h)
static int rtmp_http_open(URLContext *h, const char *uri, int flags)
#define OFFSET(x) offsetof(RTMP_HTTPContext, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
static const AVOption ffrtmphttp_options[] = ;
static const AVClass ffrtmphttp_class = ;
URLProtocol ff_ffrtmphttp_protocol = ;
