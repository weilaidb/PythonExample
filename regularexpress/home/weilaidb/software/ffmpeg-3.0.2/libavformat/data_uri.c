typedef struct  DataContext;
static av_cold int data_open(URLContext *h, const char *uri, int flags)
static av_cold int data_close(URLContext *h)
static int data_read(URLContext *h, unsigned char *buf, int size)
URLProtocol ff_data_protocol = ;
