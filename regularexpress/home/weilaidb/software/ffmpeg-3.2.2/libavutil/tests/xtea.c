#define XTEA_NUM_TESTS 6
static const uint8_t xtea_test_key[XTEA_NUM_TESTS][16] = ;
static const uint8_t xtea_test_pt[XTEA_NUM_TESTS][8] = ;
static const uint8_t xtea_test_ct[XTEA_NUM_TESTS][8] = ;
static void test_xtea(AVXTEA *ctx, uint8_t *dst, const uint8_t *src,
const uint8_t *ref, int len, uint8_t *iv, int dir,
const char *test,
void (*crypt)(AVXTEA *, uint8_t *, const uint8_t *, int, uint8_t *, int))
int main(void)
