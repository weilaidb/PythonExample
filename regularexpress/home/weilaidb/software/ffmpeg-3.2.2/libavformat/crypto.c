#define MAX_BUFFER_BLOCKS 257
#define BLOCKSIZE 16
typedef struct CryptoContext  CryptoContext;
#define OFFSET(x) offsetof(CryptoContext, x)
#define D AV_OPT_FLAG_DECODING_PARAM
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass crypto_class = ;
static int set_aes_arg(CryptoContext *c, uint8_t **buf, int *buf_len,
uint8_t *default_buf, int default_buf_len,
const char *desc)
static int crypto_open2(URLContext *h, const char *uri, int flags, AVDictionary **options)
static int crypto_read(URLContext *h, uint8_t *buf, int size)
static int64_t crypto_seek(URLContext *h, int64_t pos, int whence)
static int crypto_write(URLContext *h, const unsigned char *buf, int size)
static int crypto_close(URLContext *h)
const URLProtocol ff_crypto_protocol = ;
