#define TKIP_H
u8 *ieee80211_tkip_add_iv(u8 *pos, struct ieee80211_key *key, u16 iv16);
int ieee80211_tkip_encrypt_data(struct crypto_cipher *tfm,
struct ieee80211_key *key,
u8 *pos, size_t payload_len, u8 *ta);
enum ;
int ieee80211_tkip_decrypt_data(struct crypto_cipher *tfm,
struct ieee80211_key *key,
u8 *payload, size_t payload_len, u8 *ta,
u8 *ra, int only_iv, int queue,
u32 *out_iv32, u16 *out_iv16);
