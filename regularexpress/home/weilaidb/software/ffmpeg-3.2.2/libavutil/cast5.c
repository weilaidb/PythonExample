#define IA(x) ((x) >> 24)
#define IB(x) (((x) >> 16) & 0xff)
#define IC(x) (((x) >> 8) & 0xff)
#define ID(x) ((x) & 0xff)
#define LR(x, c) (((x) << (c)) | ((x) >> (32 - (c))))
#define F3(l, r, i)                                                                                  \
do  while (0)
#define F2(l, r, i)                                                                                  \
do  while (0)
#define F1(l, r, i)                                                                                  \
do  while (0)
#define COMPUTE_Z                                                                                    \
do  while (0)
#define COMPUTE_X                                                                                    \
do  while (0)
typedef struct AVCAST5  AVCAST5;
const int av_cast5_size = sizeof(AVCAST5);
static const uint32_t S1[256] = ;
static const uint32_t S2[256] = ;
static const uint32_t S3[256] = ;
static const uint32_t S4[256] = ;
static const uint32_t S5[256] = ;
static const uint32_t S6[256] = ;
static const uint32_t S7[256] = ;
static const uint32_t S8[256] = ;
static void generate_round_keys(int rnds, uint32_t* K, uint32_t* x, uint32_t* z)
static void encipher(AVCAST5* cs, uint8_t* dst, const uint8_t* src)
static void decipher(AVCAST5* cs, uint8_t* dst, const uint8_t* src, uint8_t *iv)
struct AVCAST5 *av_cast5_alloc(void)
av_cold int av_cast5_init(AVCAST5* cs, const uint8_t *key, int key_bits)
void av_cast5_crypt2(AVCAST5* cs, uint8_t* dst, const uint8_t* src, int count, uint8_t *iv, int decrypt)
void av_cast5_crypt(AVCAST5* cs, uint8_t* dst, const uint8_t* src, int count, int decrypt)
