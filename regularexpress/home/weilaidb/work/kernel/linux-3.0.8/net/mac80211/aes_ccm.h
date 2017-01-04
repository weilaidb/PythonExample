#define AES_CCM_H
#define AES_BLOCK_LEN 16
struct crypto_cipher *ieee80211_aes_key_setup_encrypt(const u8 key[]);
void ieee80211_aes_ccm_encrypt(struct crypto_cipher *tfm, u8 *scratch,
u8 *data, size_t data_len,
u8 *cdata, u8 *mic);
int ieee80211_aes_ccm_decrypt(struct crypto_cipher *tfm, u8 *scratch,
u8 *cdata, size_t data_len,
u8 *mic, u8 *data);
void ieee80211_aes_key_free(struct crypto_cipher *tfm);
