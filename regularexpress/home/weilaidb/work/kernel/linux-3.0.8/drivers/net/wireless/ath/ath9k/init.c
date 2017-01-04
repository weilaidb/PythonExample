static char *dev_info = "ath9k";
MODULE_AUTHOR("Atheros Communications");
MODULE_DESCRIPTION("Support for Atheros 802.11n wireless LAN cards.");
MODULE_SUPPORTED_DEVICE("Atheros 802.11n WLAN cards");
MODULE_LICENSE("Dual BSD/GPL");
static unsigned int ath9k_debug = ATH_DBG_DEFAULT;
module_param_named(debug, ath9k_debug, uint, 0);
MODULE_PARM_DESC(debug, "Debugging mask");
int ath9k_modparam_nohwcrypt;
module_param_named(nohwcrypt, ath9k_modparam_nohwcrypt, int, 0444);
MODULE_PARM_DESC(nohwcrypt, "Disable hardware encryption");
int led_blink;
module_param_named(blink, led_blink, int, 0444);
MODULE_PARM_DESC(blink, "Enable LED blink on activity");
static int ath9k_btcoex_enable;
module_param_named(btcoex_enable, ath9k_btcoex_enable, int, 0444);
MODULE_PARM_DESC(btcoex_enable, "Enable wifi-BT coexistence");
bool is_ath9k_unloaded;
#define CHAN2G(_freq, _idx)
#define CHAN5G(_freq, _idx)
static const struct ieee80211_channel ath9k_2ghz_chantable[] = ;
static const struct ieee80211_channel ath9k_5ghz_chantable[] = ;
#define SHPCHECK(__hw_rate, __flags) \
((__flags & IEEE80211_RATE_SHORT_PREAMBLE) ? (__hw_rate | 0x04 ) : 0)
#define RATE(_bitrate, _hw_rate, _flags)
static struct ieee80211_rate ath9k_legacy_rates[] = ;
static const struct ieee80211_tpt_blink ath9k_tpt_blink[] = ;
static void ath9k_deinit_softc(struct ath_softc *sc);
static void ath9k_iowrite32(void *hw_priv, u32 val, u32 reg_offset)
static unsigned int ath9k_ioread32(void *hw_priv, u32 reg_offset)
static unsigned int ath9k_reg_rmw(void *hw_priv, u32 reg_offset, u32 set, u32 clr)
static void setup_ht_cap(struct ath_softc *sc,
struct ieee80211_sta_ht_cap *ht_info)
static int ath9k_reg_notifier(struct wiphy *wiphy,
struct regulatory_request *request)
int ath_descdma_setup(struct ath_softc *sc, struct ath_descdma *dd,
struct list_head *head, const char *name,
int nbuf, int ndesc, bool is_tx)
void ath9k_init_crypto(struct ath_softc *sc)
static int ath9k_init_btcoex(struct ath_softc *sc)
static int ath9k_init_queues(struct ath_softc *sc)
static int ath9k_init_channels_rates(struct ath_softc *sc)
static void ath9k_init_misc(struct ath_softc *sc)
static int ath9k_init_softc(u16 devid, struct ath_softc *sc, u16 subsysid,
const struct ath_bus_ops *bus_ops)
static void ath9k_init_band_txpower(struct ath_softc *sc, int band)
static void ath9k_init_txpower_limits(struct ath_softc *sc)
void ath9k_set_hw_capab(struct ath_softc *sc, struct ieee80211_hw *hw)
int ath9k_init_device(u16 devid, struct ath_softc *sc, u16 subsysid,
const struct ath_bus_ops *bus_ops)
static void ath9k_deinit_softc(struct ath_softc *sc)
void ath9k_deinit_device(struct ath_softc *sc)
void ath_descdma_cleanup(struct ath_softc *sc,
struct ath_descdma *dd,
struct list_head *head)
static int __init ath9k_init(void)
module_init(ath9k_init);
static void __exit ath9k_exit(void)
module_exit(ath9k_exit);
