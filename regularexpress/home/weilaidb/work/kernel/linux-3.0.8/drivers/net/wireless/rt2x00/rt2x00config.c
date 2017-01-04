void rt2x00lib_config_intf(struct rt2x00_dev *rt2x00dev,
struct rt2x00_intf *intf,
enum nl80211_iftype type,
const u8 *mac, const u8 *bssid)
void rt2x00lib_config_erp(struct rt2x00_dev *rt2x00dev,
struct rt2x00_intf *intf,
struct ieee80211_bss_conf *bss_conf,
u32 changed)
void rt2x00lib_config_antenna(struct rt2x00_dev *rt2x00dev,
struct antenna_setup config)
static u16 rt2x00ht_center_channel(struct rt2x00_dev *rt2x00dev,
struct ieee80211_conf *conf)
void rt2x00lib_config(struct rt2x00_dev *rt2x00dev,
struct ieee80211_conf *conf,
unsigned int ieee80211_flags)
