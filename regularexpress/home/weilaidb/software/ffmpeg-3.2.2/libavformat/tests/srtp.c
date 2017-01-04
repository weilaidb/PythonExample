static const char *aes128_80_key = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmn";
static const uint8_t rtp_aes128_80[] = ;
static const uint8_t rtcp_aes128_80[] = ;
static const char *aes128_32_key = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmn";
static const uint8_t rtp_aes128_32[] = ;
static const uint8_t rtcp_aes128_32[] = ;
static const char *aes128_80_32_key = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmn";
static const uint8_t rtp_aes128_80_32[] = ;
static const uint8_t rtcp_aes128_80_32[] = ;
static void print_data(const uint8_t *buf, int len)
static int test_decrypt(struct SRTPContext *srtp, const uint8_t *in, int len,
uint8_t *out)
static void test_encrypt(const uint8_t *data, int in_len, const char *suite,
const char *key)
int main(void)
