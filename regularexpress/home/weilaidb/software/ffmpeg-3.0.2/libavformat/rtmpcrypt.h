#define AVFORMAT_RTMPCRYPT_H
int ff_rtmpe_gen_pub_key(URLContext *h, uint8_t *buf);
int ff_rtmpe_compute_secret_key(URLContext *h, const uint8_t *serverdata,
const uint8_t *clientdata, int type);
void ff_rtmpe_encrypt_sig(URLContext *h, uint8_t *signature,
const uint8_t *digest, int type);
int ff_rtmpe_update_keystream(URLContext *h);
