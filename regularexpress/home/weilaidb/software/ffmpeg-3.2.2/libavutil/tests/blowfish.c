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
