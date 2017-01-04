#define LR32(x,c) ((x) << (c) | (x) >> (32 - (c)))
#define RR32(x,c) ((x) >> (c) | (x) << (32 - (c)))
#define MASK8 0xff
#define MASK32 0xffffffff
#define MASK64 0xffffffffffffffff
#define Sigma1  0xA09E667F3BCC908B
#define Sigma2  0xB67AE8584CAA73B2
#define Sigma3  0xC6EF372FE94F82BE
#define Sigma4  0x54FF53A5F1D36F1C
#define Sigma5  0x10E527FADE682D1D
#define Sigma6  0xB05688C2B3E6C1FD
static uint64_t SP[8][256];
typedef struct AVCAMELLIA  AVCAMELLIA;
static const uint8_t SBOX1[256] = ;
static const uint8_t SBOX2[256] = ;
static const uint8_t SBOX3[256] = ;
static const uint8_t SBOX4[256] = ;
const int av_camellia_size = sizeof(AVCAMELLIA);
static void LR128(uint64_t d[2], const uint64_t K[2], int x)
static uint64_t F(uint64_t F_IN, uint64_t KE)
static uint64_t FL(uint64_t FL_IN, uint64_t KE)
static uint64_t FLINV(uint64_t FLINV_IN, uint64_t KE)
static const uint8_t shifts[2][12] = ;
static const uint8_t vars[2][12] = ;
static void generate_round_keys(AVCAMELLIA *cs, uint64_t Kl[2], uint64_t Kr[2], uint64_t Ka[2], uint64_t Kb[2])
static void camellia_encrypt(AVCAMELLIA *cs, uint8_t *dst, const uint8_t *src)
static void camellia_decrypt(AVCAMELLIA *cs, uint8_t *dst, const uint8_t *src, uint8_t *iv)
static void computeSP(void)
struct AVCAMELLIA *av_camellia_alloc(void)
av_cold int av_camellia_init(AVCAMELLIA *cs, const uint8_t *key, int key_bits)
void av_camellia_crypt(AVCAMELLIA *cs, uint8_t *dst, const uint8_t *src, int count, uint8_t *iv, int decrypt)
int main(int argc, char *argv[])
