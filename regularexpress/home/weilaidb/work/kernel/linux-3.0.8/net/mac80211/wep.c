int ieee80211_wep_init(struct ieee80211_local *local)
void ieee80211_wep_free(struct ieee80211_local *local)
static inline bool ieee80211_wep_weak_iv(u32 iv, int keylen)
static void ieee80211_wep_get_iv(struct ieee80211_local *local,
int keylen, int keyidx, u8 *iv)
static u8 *ieee80211_wep_add_iv(struct ieee80211_local *local,
struct sk_buff *skb,
int keylen, int keyidx)
static void ieee80211_wep_remove_iv(struct ieee80211_local *local,
struct sk_buff *skb,
struct ieee80211_key *key)
int ieee80211_wep_encrypt_data(struct crypto_cipher *tfm, u8 *rc4key,
size_t klen, u8 *data, size_t data_len)
int ieee80211_wep_encrypt(struct ieee80211_local *local,
struct sk_buff *skb,
const u8 *key, int keylen, int keyidx)
int ieee80211_wep_decrypt_data(struct crypto_cipher *tfm, u8 *rc4key,
size_t klen, u8 *data, size_t data_len)
static int ieee80211_wep_decrypt(struct ieee80211_local *local,
struct sk_buff *skb,
struct ieee80211_key *key)
bool ieee80211_wep_is_weak_iv(struct sk_buff *skb, struct ieee80211_key *key)
ieee80211_rx_result
ieee80211_crypto_wep_decrypt(struct ieee80211_rx_data *rx)
static int wep_encrypt_skb(struct ieee80211_tx_data *tx, struct sk_buff *skb)
ieee80211_tx_result
ieee80211_crypto_wep_encrypt(struct ieee80211_tx_data *tx)
