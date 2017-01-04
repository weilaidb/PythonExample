AVXTEA *av_xtea_alloc(void)
void av_xtea_init(AVXTEA *ctx, const uint8_t key[16])
void av_xtea_le_init(AVXTEA *ctx, const uint8_t key[16])
static void xtea_crypt_ecb(AVXTEA *ctx, uint8_t *dst, const uint8_t *src,
int decrypt, uint8_t *iv)
static void xtea_le_crypt_ecb(AVXTEA *ctx, uint8_t *dst, const uint8_t *src,
int decrypt, uint8_t *iv)
static void xtea_crypt(AVXTEA *ctx, uint8_t *dst, const uint8_t *src, int count,
uint8_t *iv, int decrypt,
void (*crypt)(AVXTEA *, uint8_t *, const uint8_t *, int, uint8_t *))
void av_xtea_crypt(AVXTEA *ctx, uint8_t *dst, const uint8_t *src, int count,
uint8_t *iv, int decrypt)
void av_xtea_le_crypt(AVXTEA *ctx, uint8_t *dst, const uint8_t *src, int count,
uint8_t *iv, int decrypt)
#define XTEA_NUM_TESTS 6
static const uint8_t xtea_test_key[XTEA_NUM_TESTS][16] = ;
static const uint8_t xtea_test_pt[XTEA_NUM_TESTS][8] = ;
static const uint8_t xtea_test_ct[XTEA_NUM_TESTS][8] = ;
static void test_xtea(AVXTEA *ctx, uint8_t *dst, const uint8_t *src,
const uint8_t *ref, int len, uint8_t *iv, int dir,
const char *test,
void (*crypt)(AVXTEA *, uint8_t *, const uint8_t *, int, uint8_t *, int))
int main(void)
