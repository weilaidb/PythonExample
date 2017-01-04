MODULE_AUTHOR("Atheros Communications");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_DESCRIPTION("Atheros driver 802.11n HTC based wireless devices");
static unsigned int ath9k_debug = ATH_DBG_DEFAULT;
module_param_named(debug, ath9k_debug, uint, 0);
MODULE_PARM_DESC(debug, "Debugging mask");
int htc_modparam_nohwcrypt;
module_param_named(nohwcrypt, htc_modparam_nohwcrypt, int, 0444);
MODULE_PARM_DESC(nohwcrypt, "Disable hardware encryption");
#define CHAN2G(_freq, _idx)
#define CHAN5G(_freq, _idx)
#define ATH_HTC_BTCOEX_PRODUCT_ID "wb193"
static struct ieee80211_channel ath9k_2ghz_channels[] = ;
static struct ieee80211_channel ath9k_5ghz_channels[] = ;
#define SHPCHECK(__hw_rate, __flags) \
((__flags & IEEE80211_RATE_SHORT_PREAMBLE) ? (__hw_rate | 0x04) : 0)
#define RATE(_bitrate, _hw_rate, _flags)
static struct ieee80211_rate ath9k_legacy_rates[] = ;
static const struct ieee80211_tpt_blink ath9k_htc_tpt_blink[] = ;
static int ath9k_htc_wait_for_target(struct ath9k_htc_priv *priv)
static void ath9k_deinit_priv(struct ath9k_htc_priv *priv)
static void ath9k_deinit_device(struct ath9k_htc_priv *priv)
static inline int ath9k_htc_connect_svc(struct ath9k_htc_priv *priv,
u16 service_id,
void (*tx) (void *,
struct sk_buff *,
enum htc_endpoint_id,
bool txok),
enum htc_endpoint_id *ep_id)
static int ath9k_init_htc_services(struct ath9k_htc_priv *priv, u16 devid,
u32 drv_info)
static int ath9k_reg_notifier(struct wiphy *wiphy,
struct regulatory_request *request)
static unsigned int ath9k_regread(void *hw_priv, u32 reg_offset)
static void ath9k_multi_regread(void *hw_priv, u32 *addr,
u32 *val, u16 count)
static void ath9k_regwrite_single(void *hw_priv, u32 val, u32 reg_offset)
static void ath9k_regwrite_buffer(void *hw_priv, u32 val, u32 reg_offset)
static void ath9k_regwrite(void *hw_priv, u32 val, u32 reg_offset)
static void ath9k_enable_regwrite_buffer(void *hw_priv)
static void ath9k_regwrite_flush(void *hw_priv)
static u32 ath9k_reg_rmw(void *hw_priv, u32 reg_offset, u32 set, u32 clr)
static void ath_usb_read_cachesize(struct ath_common *common, int *csz)
static bool ath_usb_eeprom_read(struct ath_common *common, u32 off, u16 *data)
static const struct ath_bus_ops ath9k_usb_bus_ops = ;
static void setup_ht_cap(struct ath9k_htc_priv *priv,
struct ieee80211_sta_ht_cap *ht_info)
static int ath9k_init_queues(struct ath9k_htc_priv *priv)
static void ath9k_init_crypto(struct ath9k_htc_priv *priv)
static void ath9k_init_channels_rates(struct ath9k_htc_priv *priv)
static void ath9k_init_misc(struct ath9k_htc_priv *priv)
static void ath9k_init_btcoex(struct ath9k_htc_priv *priv)
static int ath9k_init_priv(struct ath9k_htc_priv *priv,
u16 devid, char *product,
u32 drv_info)
static void ath9k_set_hw_capab(struct ath9k_htc_priv *priv,
struct ieee80211_hw *hw)
static int ath9k_init_firmware_version(struct ath9k_htc_priv *priv)
static int ath9k_init_device(struct ath9k_htc_priv *priv,
u16 devid, char *product, u32 drv_info)
int ath9k_htc_probe_device(struct htc_target *htc_handle, struct device *dev,
u16 devid, char *product, u32 drv_info)
void ath9k_htc_disconnect_device(struct htc_target *htc_handle, bool hotunplug)
void ath9k_htc_suspend(struct htc_target *htc_handle)
int ath9k_htc_resume(struct htc_target *htc_handle)
static int __init ath9k_htc_init(void)
module_init(ath9k_htc_init);
static void __exit ath9k_htc_exit(void)
module_exit(ath9k_htc_exit);
