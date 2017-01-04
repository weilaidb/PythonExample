MODULE_AUTHOR("Atheros Communications");
MODULE_DESCRIPTION("Shared library for Atheros wireless 802.11n LAN cards.");
MODULE_LICENSE("Dual BSD/GPL");
int ath9k_cmn_padpos(__le16 frame_control)
EXPORT_SYMBOL(ath9k_cmn_padpos);
int ath9k_cmn_get_hw_crypto_keytype(struct sk_buff *skb)
EXPORT_SYMBOL(ath9k_cmn_get_hw_crypto_keytype);
static u32 ath9k_get_extchanmode(struct ieee80211_channel *chan,
enum nl80211_channel_type channel_type)
void ath9k_cmn_update_ichannel(struct ath9k_channel *ichan,
struct ieee80211_channel *chan,
enum nl80211_channel_type channel_type)
EXPORT_SYMBOL(ath9k_cmn_update_ichannel);
struct ath9k_channel *ath9k_cmn_get_curchannel(struct ieee80211_hw *hw,
struct ath_hw *ah)
EXPORT_SYMBOL(ath9k_cmn_get_curchannel);
int ath9k_cmn_count_streams(unsigned int chainmask, int max)
EXPORT_SYMBOL(ath9k_cmn_count_streams);
void ath9k_cmn_update_txpow(struct ath_hw *ah, u16 cur_txpow,
u16 new_txpow, u16 *txpower)
EXPORT_SYMBOL(ath9k_cmn_update_txpow);
static int __init ath9k_cmn_init(void)
module_init(ath9k_cmn_init);
static void __exit ath9k_cmn_exit(void)
module_exit(ath9k_cmn_exit);
