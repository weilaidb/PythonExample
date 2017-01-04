#define AES_CMAC_H
struct crypto_cipher * ieee80211_aes_cmac_key_setup(const u8 key[]);
void ieee80211_aes_cmac(struct crypto_cipher *tfm, u8 *scratch, const u8 *aad,
const u8 *data, size_t data_len, u8 *mic);
void ieee80211_aes_cmac_key_free(struct crypto_cipher *tfm);
