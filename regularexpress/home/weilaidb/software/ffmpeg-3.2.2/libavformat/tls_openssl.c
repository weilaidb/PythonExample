static int openssl_init;
typedef struct TLSContext  TLSContext;
#if HAVE_THREADS
pthread_mutex_t *openssl_mutexes;
openssl_lock
#if !defined(WIN32) && OPENSSL_VERSION_NUMBER < 0x10000000
openssl_thread_id
url_bio_create
url_bio_destroy
#if OPENSSL_VERSION_NUMBER >= 0x1010000fL
GET_BIO_DATA BIO_get_data(x);
GET_BIO_DATA (x)->ptr;
url_bio_bread
url_bio_bwrite
url_bio_ctrl
url_bio_bputs
#if OPENSSL_VERSION_NUMBER < 0x1010000fL
static BIO_METHOD url_bio_method = ;
ff_openssl_init
ff_openssl_deinit
print_tls_error
tls_close
tls_open
tls_read
tls_write
static const AVOption options[] = ;
static const AVClass tls_class = ;
const URLProtocol ff_tls_openssl_protocol = ;
