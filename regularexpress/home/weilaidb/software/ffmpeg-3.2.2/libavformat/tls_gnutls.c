#if HAVE_THREADS && GNUTLS_VERSION_NUMBER <= 0x020b00
GCRY_THREAD_OPTION_PTHREAD_IMPL;
typedef struct TLSContext  TLSContext;
void ff_gnutls_init(void)
void ff_gnutls_deinit(void)
static int print_tls_error(URLContext *h, int ret)
static int tls_close(URLContext *h)
static ssize_t gnutls_url_pull(gnutls_transport_ptr_t transport,
void *buf, size_t len)
static ssize_t gnutls_url_push(gnutls_transport_ptr_t transport,
const void *buf, size_t len)
static int tls_open(URLContext *h, const char *uri, int flags, AVDictionary **options)
static int tls_read(URLContext *h, uint8_t *buf, int size)
static int tls_write(URLContext *h, const uint8_t *buf, int size)
static const AVOption options[] = ;
static const AVClass tls_class = ;
const URLProtocol ff_tls_gnutls_protocol = ;
