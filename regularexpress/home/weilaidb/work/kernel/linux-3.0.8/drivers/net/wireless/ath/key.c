#define REG_READ			(common->ops->read)
#define REG_WRITE(_ah, _reg, _val)	(common->ops->write)(_ah, _val, _reg)
#define ENABLE_REGWRITE_BUFFER(_ah)			\
if (common->ops->enable_write_buffer)		\
common->ops->enable_write_buffer((_ah));
#define REGWRITE_BUFFER_FLUSH(_ah)			\
if (common->ops->write_flush)			\
common->ops->write_flush((_ah));
#define IEEE80211_WEP_NKID      4
bool ath_hw_keyreset(struct ath_common *common, u16 entry)
EXPORT_SYMBOL(ath_hw_keyreset);
static bool ath_hw_keysetmac(struct ath_common *common,
u16 entry, const u8 *mac)
static bool ath_hw_set_keycache_entry(struct ath_common *common, u16 entry,
const struct ath_keyval *k,
const u8 *mac)
static int ath_setkey_tkip(struct ath_common *common, u16 keyix, const u8 *key,
struct ath_keyval *hk, const u8 *addr,
bool authenticator)
static int ath_reserve_key_cache_slot_tkip(struct ath_common *common)
static int ath_reserve_key_cache_slot(struct ath_common *common,
u32 cipher)
int ath_key_config(struct ath_common *common,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta,
struct ieee80211_key_conf *key)
EXPORT_SYMBOL(ath_key_config);
void ath_key_delete(struct ath_common *common, struct ieee80211_key_conf *key)
EXPORT_SYMBOL(ath_key_delete);
