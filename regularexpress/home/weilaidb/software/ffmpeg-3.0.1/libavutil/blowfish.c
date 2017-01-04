static const uint32_t orig_p[AV_BF_ROUNDS + 2] = ;
static const uint32_t orig_s[4][256] = ;
#define F(Xl, Xr, P) \
Xr ^=((( ctx->s[0][ Xl >> 24        ] \
+ ctx->s[1][(Xl >> 16) & 0xFF])\
^ ctx->s[2][(Xl >>  8) & 0xFF])\
+ ctx->s[3][ Xl        & 0xFF])\
^ P;
AVBlowfish *av_blowfish_alloc(void)
av_cold void av_blowfish_init(AVBlowfish *ctx, const uint8_t *key, int key_len)
void av_blowfish_crypt_ecb(AVBlowfish *ctx, uint32_t *xl, uint32_t *xr,
int decrypt)
void av_blowfish_crypt(AVBlowfish *ctx, uint8_t *dst, const uint8_t *src,
int count, uint8_t *iv, int decrypt)
#define NUM_VARIABLE_KEY_TESTS 34
static const uint32_t plaintext_l[NUM_VARIABLE_KEY_TESTS] = ;
static const uint32_t plaintext_r[NUM_VARIABLE_KEY_TESTS] = ;
static const uint8_t variable_key[NUM_VARIABLE_KEY_TESTS][8] = ;
static const uint32_t ciphertext_l[NUM_VARIABLE_KEY_TESTS] = ;
static const uint32_t ciphertext_r[NUM_VARIABLE_KEY_TESTS] = ;
static const uint8_t plaintext[8] = "BLOWFISH";
static const uint8_t plaintext2[16] = "BLOWFISHBLOWFISH";
static const uint8_t ciphertext[8] = ;
static const uint8_t ciphertext2[16] = ;
#define IV "blowfish"
static void test_blowfish(AVBlowfish *ctx, uint8_t *dst, const uint8_t *src,
const uint8_t *ref, int len, uint8_t *iv, int dir,
const char *test)
int main(void)
