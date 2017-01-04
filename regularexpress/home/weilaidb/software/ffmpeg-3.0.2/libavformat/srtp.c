void ff_srtp_free(struct SRTPContext *s)
static void encrypt_counter(struct AVAES *aes, uint8_t *iv, uint8_t *outbuf,
int outlen)
static void derive_key(struct AVAES *aes, const uint8_t *salt, int label,
uint8_t *out, int outlen)
int ff_srtp_set_crypto(struct SRTPContext *s, const char *suite,
const char *params)
static void create_iv(uint8_t *iv, const uint8_t *salt, uint64_t index,
uint32_t ssrc)
int ff_srtp_decrypt(struct SRTPContext *s, uint8_t *buf, int *lenptr)
int ff_srtp_encrypt(struct SRTPContext *s, const uint8_t *in, int len,
uint8_t *out, int outlen)
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
