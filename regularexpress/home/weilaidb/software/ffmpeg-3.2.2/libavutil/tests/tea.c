#define TEA_NUM_TESTS 4
static const uint8_t tea_test_key[TEA_NUM_TESTS][16] = ;
static const uint8_t tea_test_pt[TEA_NUM_TESTS][8] = ;
static const uint8_t tea_test_ct[TEA_NUM_TESTS][8] = ;
static void test_tea(struct AVTEA *ctx, uint8_t *dst, const uint8_t *src,
const uint8_t *ref, int len, uint8_t *iv, int dir,
const char *test)
int main(void)
