ieee80211_tx_result
ieee80211_tx_h_michael_mic_add(struct ieee80211_tx_data *tx)
ieee80211_rx_result
ieee80211_rx_h_michael_mic_verify(struct ieee80211_rx_data *rx)
static int tkip_encrypt_skb(struct ieee80211_tx_data *tx, struct sk_buff *skb)
ieee80211_tx_result
ieee80211_crypto_tkip_encrypt(struct ieee80211_tx_data *tx)
ieee80211_rx_result
ieee80211_crypto_tkip_decrypt(struct ieee80211_rx_data *rx)
static void ccmp_special_blocks(struct sk_buff *skb, u8 *pn, u8 *scratch,
int encrypted)
static inline void ccmp_pn2hdr(u8 *hdr, u8 *pn, int key_id)
static inline void ccmp_hdr2pn(u8 *pn, u8 *hdr)
static int ccmp_encrypt_skb(struct ieee80211_tx_data *tx, struct sk_buff *skb)
ieee80211_tx_result
ieee80211_crypto_ccmp_encrypt(struct ieee80211_tx_data *tx)
ieee80211_rx_result
ieee80211_crypto_ccmp_decrypt(struct ieee80211_rx_data *rx)
static void bip_aad(struct sk_buff *skb, u8 *aad)
static inline void bip_ipn_swap(u8 *d, const u8 *s)
ieee80211_tx_result
ieee80211_crypto_aes_cmac_encrypt(struct ieee80211_tx_data *tx)
ieee80211_rx_result
ieee80211_crypto_aes_cmac_decrypt(struct ieee80211_rx_data *rx)
