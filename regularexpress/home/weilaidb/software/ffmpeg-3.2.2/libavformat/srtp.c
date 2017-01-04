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
