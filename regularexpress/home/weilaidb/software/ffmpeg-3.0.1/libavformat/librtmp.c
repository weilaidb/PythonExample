#if CONFIG_NETWORK
typedef struct LibRTMPContext  LibRTMPContext;
static void rtmp_log(int level, const char *fmt, va_list args)
static int rtmp_close(URLContext *s)
static int rtmp_open(URLContext *s, const char *uri, int flags)
static int rtmp_write(URLContext *s, const uint8_t *buf, int size)
static int rtmp_read(URLContext *s, uint8_t *buf, int size)
static int rtmp_read_pause(URLContext *s, int pause)
static int64_t rtmp_read_seek(URLContext *s, int stream_index,
int64_t timestamp, int flags)
static int rtmp_get_file_handle(URLContext *s)
#define OFFSET(x) offsetof(LibRTMPContext, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
#define ENC AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = {
,
,
,
,
,
,
,
,
,
,
,
,
,
;
#define RTMP_CLASS(flavor)\
static const AVClass lib ## flavor ## _class = ;
RTMP_CLASS(rtmp)
URLProtocol ff_librtmp_protocol = ;
RTMP_CLASS(rtmpt)
URLProtocol ff_librtmpt_protocol = ;
RTMP_CLASS(rtmpe)
URLProtocol ff_librtmpe_protocol = ;
RTMP_CLASS(rtmpte)
URLProtocol ff_librtmpte_protocol = ;
RTMP_CLASS(rtmps)
URLProtocol ff_librtmps_protocol = ;
