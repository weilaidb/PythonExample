SecIdentityRef SecIdentityCreate(CFAllocatorRef allocator, SecCertificateRef certificate, SecKeyRef privateKey);
#define ioErr -36
typedef struct TLSContext  TLSContext;
static int print_tls_error(URLContext *h, int ret)
static int import_pem(URLContext *h, char *path, CFArrayRef *array)
static int load_ca(URLContext *h)
static int load_cert(URLContext *h)
static OSStatus tls_read_cb(SSLConnectionRef connection, void *data, size_t *dataLength)
static OSStatus tls_write_cb(SSLConnectionRef connection, const void *data, size_t *dataLength)
static int tls_close(URLContext *h)
#define CHECK_ERROR(func, ...) do  while (0)
static int tls_open(URLContext *h, const char *uri, int flags, AVDictionary **options)
static int map_ssl_error(OSStatus status, size_t processed)
static int tls_read(URLContext *h, uint8_t *buf, int size)
static int tls_write(URLContext *h, const uint8_t *buf, int size)
static const AVOption options[] = ;
static const AVClass tls_class = ;
URLProtocol ff_tls_securetransport_protocol = ;
