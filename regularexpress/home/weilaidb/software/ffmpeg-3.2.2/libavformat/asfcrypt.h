#define AVFORMAT_ASFCRYPT_H
void ff_asfcrypt_dec(const uint8_t key[20], uint8_t *data, int len);
