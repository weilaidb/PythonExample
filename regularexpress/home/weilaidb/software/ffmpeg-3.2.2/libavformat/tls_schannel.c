#define SECURITY_WIN32
#define SCHANNEL_INITIAL_BUFFER_SIZE   4096
#define SCHANNEL_FREE_BUFFER_SIZE      1024
#define SECBUFFER_ALERT                17
typedef struct TLSContext  TLSContext;
init_sec_buffer
init_sec_buffer_desc
tls_shutdown_client
tls_close
tls_client_handshake_loop
tls_client_handshake
tls_open
tls_read
tls_write
static const AVOption options[] = ;
static const AVClass tls_class = ;
const URLProtocol ff_tls_schannel_protocol = ;
