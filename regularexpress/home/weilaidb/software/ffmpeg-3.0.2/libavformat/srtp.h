#define AVFORMAT_SRTP_H
struct AVAES;
struct AVHMAC;
struct SRTPContext ;
int ff_srtp_set_crypto(struct SRTPContext *s, const char *suite,
const char *params);
void ff_srtp_free(struct SRTPContext *s);
int ff_srtp_decrypt(struct SRTPContext *s, uint8_t *buf, int *lenptr);
int ff_srtp_encrypt(struct SRTPContext *s, const uint8_t *in, int len,
uint8_t *out, int outlen);
