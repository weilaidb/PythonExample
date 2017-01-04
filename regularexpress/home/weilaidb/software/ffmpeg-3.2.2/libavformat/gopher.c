typedef struct GopherContext  GopherContext;
static int gopher_write(URLContext *h, const uint8_t *buf, int size)
static int gopher_connect(URLContext *h, const char *path)
static int gopher_close(URLContext *h)
static int gopher_open(URLContext *h, const char *uri, int flags)
static int gopher_read(URLContext *h, uint8_t *buf, int size)
const URLProtocol ff_gopher_protocol = ;
