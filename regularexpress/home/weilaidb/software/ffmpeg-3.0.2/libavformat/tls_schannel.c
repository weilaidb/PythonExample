#define SECURITY_WIN32
#define SCHANNEL_INITIAL_BUFFER_SIZE   4096
#define SCHANNEL_FREE_BUFFER_SIZE      1024
#define SECBUFFER_ALERT                17
typedef struct TLSContext  TLSContext;
static void init_sec_buffer(SecBuffer *buffer, unsigned long type,
void *data, unsigned long size)
static void init_sec_buffer_desc(SecBufferDesc *desc, SecBuffer *buffers,
unsigned long buffer_count)
static int tls_shutdown_client(URLContext *h)
static int tls_close(URLContext *h)
static int tls_client_handshake_loop(URLContext *h, int initial)
static int tls_client_handshake(URLContext *h)
static int tls_open(URLContext *h, const char *uri, int flags, AVDictionary **options)
static int tls_read(URLContext *h, uint8_t *buf, int len)
static int tls_write(URLContext *h, const uint8_t *buf, int len)
static const AVOption options[] = ;
static const AVClass tls_class = ;
URLProtocol ff_tls_schannel_protocol = ;
