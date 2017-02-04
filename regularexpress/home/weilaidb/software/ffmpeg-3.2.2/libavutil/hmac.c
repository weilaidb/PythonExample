#define MAX_HASHLEN 64
#define MAX_BLOCKLEN 128
struct AVHMAC ;
DEFINE_SHA                           \
static av_cold void sha ## bits ##_init(void *ctx) \
DEFINE_SHA512                        \
static av_cold void sha ## bits ##_init(void *ctx) \
DEFINE_SHA(160)
DEFINE_SHA(224)
DEFINE_SHA(256)
DEFINE_SHA512(384)
DEFINE_SHA512(512)
*av_hmac_alloc
av_hmac_free
av_hmac_init
av_hmac_update
av_hmac_final
av_hmac_calc
