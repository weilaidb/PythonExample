struct MD5Context ;
static int md5_open(URLContext *h, const char *filename, int flags)
static int md5_write(URLContext *h, const unsigned char *buf, int size)
static int md5_close(URLContext *h)
const URLProtocol ff_md5_protocol = ;
