typedef struct AVTEA  AVTEA;
struct AVTEA *av_tea_alloc(void)
const int av_tea_size = sizeof(AVTEA);
void av_tea_init(AVTEA *ctx, const uint8_t key[16], int rounds)
static void tea_crypt_ecb(AVTEA *ctx, uint8_t *dst, const uint8_t *src,
int decrypt, uint8_t *iv)
void av_tea_crypt(AVTEA *ctx, uint8_t *dst, const uint8_t *src, int count,
uint8_t *iv, int decrypt)
#define TEA_NUM_TESTS 4
static const uint8_t tea_test_key[TEA_NUM_TESTS][16] = ;
static const uint8_t tea_test_pt[TEA_NUM_TESTS][8] = ;
static const uint8_t tea_test_ct[TEA_NUM_TESTS][8] = ;
static void test_tea(AVTEA *ctx, uint8_t *dst, const uint8_t *src,
const uint8_t *ref, int len, uint8_t *iv, int dir,
const char *test)
int main(void)
