#define AV_CAT_SEPARATOR "|"
struct concat_nodes ;
struct concat_data ;
static av_cold int concat_close(URLContext *h)
static av_cold int concat_open(URLContext *h, const char *uri, int flags)
static int concat_read(URLContext *h, unsigned char *buf, int size)
static int64_t concat_seek(URLContext *h, int64_t pos, int whence)
URLProtocol ff_concat_protocol = ;
