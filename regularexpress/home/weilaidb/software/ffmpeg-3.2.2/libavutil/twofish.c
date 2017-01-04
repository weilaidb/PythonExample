#define LR(x, n) ((x) << (n) | (x) >> (32 - (n)))
#define RR(x, n) ((x) >> (n) | (x) << (32 - (n)))
typedef struct AVTWOFISH  AVTWOFISH;
static const uint8_t MD1[256] = ;
static const uint8_t MD2[256] = ;
static const uint8_t q0[256] = ;
static const uint8_t q1[256] = ;
struct AVTWOFISH *av_twofish_alloc(void)
const int av_twofish_size = sizeof(AVTWOFISH);
static uint8_t gfmul(uint8_t a, uint8_t b)
static uint32_t tf_RS(uint32_t k0, uint32_t k1)
static void tf_h0(uint8_t y[4], uint32_t L[4], int k)
static uint32_t tf_h(uint32_t X, uint32_t L[4], int k)
static uint32_t MDS_mul(AVTWOFISH *cs, uint32_t X)
static void precomputeMDS(AVTWOFISH *cs)
static void twofish_encrypt(AVTWOFISH *cs, uint8_t *dst, const uint8_t *src)
static void twofish_decrypt(AVTWOFISH *cs, uint8_t *dst, const uint8_t *src, uint8_t *iv)
av_cold int av_twofish_init(AVTWOFISH *cs, const uint8_t *key, int key_bits)
void av_twofish_crypt(AVTWOFISH *cs, uint8_t *dst, const uint8_t *src, int count, uint8_t *iv, int decrypt)
