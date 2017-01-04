typedef struct ChildContext  ChildContext;
typedef struct TeeContext  TeeContext;
static const AVOption tee_options[] = ;
static const AVClass tee_class = ;
static const char *const child_delim = "|";
static int tee_write(URLContext *h, const unsigned char *buf, int size)
static int tee_close(URLContext *h)
static int tee_open(URLContext *h, const char *filename, int flags)
const URLProtocol ff_tee_protocol = ;
