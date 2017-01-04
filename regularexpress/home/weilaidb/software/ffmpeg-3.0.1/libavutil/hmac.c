#define MAX_HASHLEN 64
#define MAX_BLOCKLEN 128
struct AVHMAC ;
#define DEFINE_SHA(bits)                           \
static av_cold void sha ## bits ##_init(void *ctx) \
#define DEFINE_SHA512(bits)                        \
static av_cold void sha ## bits ##_init(void *ctx) \
DEFINE_SHA(160)
DEFINE_SHA(224)
DEFINE_SHA(256)
DEFINE_SHA512(384)
DEFINE_SHA512(512)
AVHMAC *av_hmac_alloc(enum AVHMACType type)
void av_hmac_free(AVHMAC *c)
void av_hmac_init(AVHMAC *c, const uint8_t *key, unsigned int keylen)
void av_hmac_update(AVHMAC *c, const uint8_t *data, unsigned int len)
int av_hmac_final(AVHMAC *c, uint8_t *out, unsigned int outlen)
int av_hmac_calc(AVHMAC *c, const uint8_t *data, unsigned int len,
const uint8_t *key, unsigned int keylen,
uint8_t *out, unsigned int outlen)
static void test(AVHMAC *hmac, const uint8_t *key, int keylen,
const uint8_t *data, int datalen)
int main(void)
