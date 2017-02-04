LR32 ((x) << (c) | (x) >> (32 - (c)))
RR32 ((x) >> (c) | (x) << (32 - (c)))
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
LR128
F
FL
FLINV
static const uint8_t shifts[2][12] = ;
static const uint8_t vars[2][12] = ;
generate_round_keys
camellia_encrypt
camellia_decrypt
computeSP
*av_camellia_alloc
av_camellia_init
av_camellia_crypt
