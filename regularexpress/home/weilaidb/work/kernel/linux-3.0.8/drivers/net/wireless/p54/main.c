static int modparam_nohwcrypt;
module_param_named(nohwcrypt, modparam_nohwcrypt, bool, S_IRUGO);
MODULE_PARM_DESC(nohwcrypt, "Disable hardware encryption.");
MODULE_AUTHOR("Michael Wu <flamingice@sourmilk.net>");
MODULE_DESCRIPTION("Softmac Prism54 common code");
MODULE_LICENSE("GPL");
MODULE_ALIAS("prism54common");
static int p54_sta_add_remove(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
static void p54_sta_notify(struct ieee80211_hw *dev, struct ieee80211_vif *vif,
enum sta_notify_cmd notify_cmd,
struct ieee80211_sta *sta)
static int p54_set_tim(struct ieee80211_hw *dev, struct ieee80211_sta *sta,
bool set)
u8 *p54_find_ie(struct sk_buff *skb, u8 ie)
static int p54_beacon_format_ie_tim(struct sk_buff *skb)
static int p54_beacon_update(struct p54_common *priv,
struct ieee80211_vif *vif)
static int p54_start(struct ieee80211_hw *dev)
static void p54_stop(struct ieee80211_hw *dev)
static int p54_add_interface(struct ieee80211_hw *dev,
struct ieee80211_vif *vif)
static void p54_remove_interface(struct ieee80211_hw *dev,
struct ieee80211_vif *vif)
static int p54_config(struct ieee80211_hw *dev, u32 changed)
static u64 p54_prepare_multicast(struct ieee80211_hw *dev,
struct netdev_hw_addr_list *mc_list)
static void p54_configure_filter(struct ieee80211_hw *dev,
unsigned int changed_flags,
unsigned int *total_flags,
u64 multicast)
static int p54_conf_tx(struct ieee80211_hw *dev, u16 queue,
const struct ieee80211_tx_queue_params *params)
static void p54_work(struct work_struct *work)
static int p54_get_stats(struct ieee80211_hw *dev,
struct ieee80211_low_level_stats *stats)
static void p54_bss_info_changed(struct ieee80211_hw *dev,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *info,
u32 changed)
static int p54_set_key(struct ieee80211_hw *dev, enum set_key_cmd cmd,
struct ieee80211_vif *vif, struct ieee80211_sta *sta,
struct ieee80211_key_conf *key)
static int p54_get_survey(struct ieee80211_hw *dev, int idx,
struct survey_info *survey)
static unsigned int p54_flush_count(struct p54_common *priv)
static void p54_flush(struct ieee80211_hw *dev, bool drop)
static void p54_set_coverage_class(struct ieee80211_hw *dev, u8 coverage_class)
static const struct ieee80211_ops p54_ops = ;
struct ieee80211_hw *p54_init_common(size_t priv_data_len)
EXPORT_SYMBOL_GPL(p54_init_common);
int p54_register_common(struct ieee80211_hw *dev, struct device *pdev)
EXPORT_SYMBOL_GPL(p54_register_common);
void p54_free_common(struct ieee80211_hw *dev)
EXPORT_SYMBOL_GPL(p54_free_common);
void p54_unregister_common(struct ieee80211_hw *dev)
EXPORT_SYMBOL_GPL(p54_unregister_common);
