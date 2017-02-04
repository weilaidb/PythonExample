#if HAVE_THREADS && GNUTLS_VERSION_NUMBER <= 0x020b00
GCRY_THREAD_OPTION_PTHREAD_IMPL;
typedef struct TLSContext  TLSContext;
ff_gnutls_init
ff_gnutls_deinit
print_tls_error
tls_close
gnutls_url_pull
gnutls_url_push
tls_open
tls_read
tls_write
static const AVOption options[] = ;
static const AVClass tls_class = ;
const URLProtocol ff_tls_gnutls_protocol = ;
