static struct lock_class_key ieee80211_rx_skb_queue_class;
void ieee80211_configure_filter(struct ieee80211_local *local)
static void ieee80211_reconfig_filter(struct work_struct *work)
bool ieee80211_cfg_on_oper_channel(struct ieee80211_local *local)
int ieee80211_hw_config(struct ieee80211_local *local, u32 changed)
void ieee80211_bss_info_change_notify(struct ieee80211_sub_if_data *sdata,
u32 changed)
u32 ieee80211_reset_erp_info(struct ieee80211_sub_if_data *sdata)
static void ieee80211_tasklet_handler(unsigned long data)
static void ieee80211_restart_work(struct work_struct *work)
void ieee80211_restart_hw(struct ieee80211_hw *hw)
EXPORT_SYMBOL(ieee80211_restart_hw);
static void ieee80211_recalc_smps_work(struct work_struct *work)
static int ieee80211_ifa_changed(struct notifier_block *nb,
unsigned long data, void *arg)
static int ieee80211_napi_poll(struct napi_struct *napi, int budget)
void ieee80211_napi_schedule(struct ieee80211_hw *hw)
EXPORT_SYMBOL(ieee80211_napi_schedule);
void ieee80211_napi_complete(struct ieee80211_hw *hw)
EXPORT_SYMBOL(ieee80211_napi_complete);
static const struct ieee80211_txrx_stypes
ieee80211_default_mgmt_stypes[NUM_NL80211_IFTYPES] = ;
struct ieee80211_hw *ieee80211_alloc_hw(size_t priv_data_len,
const struct ieee80211_ops *ops)
EXPORT_SYMBOL(ieee80211_alloc_hw);
int ieee80211_register_hw(struct ieee80211_hw *hw)
EXPORT_SYMBOL(ieee80211_register_hw);
void ieee80211_unregister_hw(struct ieee80211_hw *hw)
EXPORT_SYMBOL(ieee80211_unregister_hw);
void ieee80211_free_hw(struct ieee80211_hw *hw)
EXPORT_SYMBOL(ieee80211_free_hw);
static int __init ieee80211_init(void)
static void __exit ieee80211_exit(void)
subsys_initcall(ieee80211_init);
module_exit(ieee80211_exit);
MODULE_DESCRIPTION("IEEE 802.11 subsystem");
MODULE_LICENSE("GPL");
