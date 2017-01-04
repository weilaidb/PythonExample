static int openssl_init;
typedef struct TLSContext  TLSContext;
#if HAVE_THREADS
pthread_mutex_t *openssl_mutexes;
static void openssl_lock(int mode, int type, const char *file, int line)
#if !defined(WIN32) && OPENSSL_VERSION_NUMBER < 0x10000000
static unsigned long openssl_thread_id(void)
static int url_bio_create(BIO *b)
static int url_bio_destroy(BIO *b)
#if OPENSSL_VERSION_NUMBER >= 0x1010000fL
#define GET_BIO_DATA(x) BIO_get_data(x);
#define GET_BIO_DATA(x) (x)->ptr;
static int url_bio_bread(BIO *b, char *buf, int len)
static int url_bio_bwrite(BIO *b, const char *buf, int len)
static long url_bio_ctrl(BIO *b, int cmd, long num, void *ptr)
static int url_bio_bputs(BIO *b, const char *str)
#if OPENSSL_VERSION_NUMBER < 0x1010000fL
static BIO_METHOD url_bio_method = ;
int ff_openssl_init(void)
void ff_openssl_deinit(void)
static int print_tls_error(URLContext *h, int ret)
static int tls_close(URLContext *h)
static int tls_open(URLContext *h, const char *uri, int flags, AVDictionary **options)
static int tls_read(URLContext *h, uint8_t *buf, int size)
static int tls_write(URLContext *h, const uint8_t *buf, int size)
static const AVOption options[] = ;
static const AVClass tls_class = ;
const URLProtocol ff_tls_openssl_protocol = ;
