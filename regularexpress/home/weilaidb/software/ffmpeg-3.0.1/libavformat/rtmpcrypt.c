typedef struct RTMPEContext  RTMPEContext;
static const uint8_t rtmpe8_keys[16][16] = ;
static const uint8_t rtmpe9_keys[16][24] = ;
int ff_rtmpe_gen_pub_key(URLContext *h, uint8_t *buf)
int ff_rtmpe_compute_secret_key(URLContext *h, const uint8_t *serverdata,
const uint8_t *clientdata, int type)
static void rtmpe8_sig(const uint8_t *in, uint8_t *out, int key_id)
static void rtmpe9_sig(const uint8_t *in, uint8_t *out, int key_id)
void ff_rtmpe_encrypt_sig(URLContext *h, uint8_t *sig, const uint8_t *digest,
int type)
int ff_rtmpe_update_keystream(URLContext *h)
static int rtmpe_close(URLContext *h)
static int rtmpe_open(URLContext *h, const char *uri, int flags)
static int rtmpe_read(URLContext *h, uint8_t *buf, int size)
static int rtmpe_write(URLContext *h, const uint8_t *buf, int size)
#define OFFSET(x) offsetof(RTMPEContext, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
static const AVOption ffrtmpcrypt_options[] = ;
static const AVClass ffrtmpcrypt_class = ;
URLProtocol ff_ffrtmpcrypt_protocol = ;
