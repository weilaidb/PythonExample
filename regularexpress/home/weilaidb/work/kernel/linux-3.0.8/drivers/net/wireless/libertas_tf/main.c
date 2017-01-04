#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRIVER_RELEASE_VERSION "004.p0"
#define LBTF_FW_VER_MIN		0x05840300
#define LBTF_FW_VER_MAX		0x0584ffff
#define QOS_CONTROL_LEN		2
unsigned int lbtf_debug;
EXPORT_SYMBOL_GPL(lbtf_debug);
module_param_named(libertas_tf_debug, lbtf_debug, int, 0644);
static const char lbtf_driver_version[] = "THINFIRM-USB8388-" DRIVER_RELEASE_VERSION
"-dbg"
"";
struct workqueue_struct *lbtf_wq;
static const struct ieee80211_channel lbtf_channels[] = ;
static const struct ieee80211_rate lbtf_rates[] = ;
static void lbtf_cmd_work(struct work_struct *work)
static int lbtf_setup_firmware(struct lbtf_private *priv)
static void command_timer_fn(unsigned long data)
static int lbtf_init_adapter(struct lbtf_private *priv)
static void lbtf_free_adapter(struct lbtf_private *priv)
static void lbtf_op_tx(struct ieee80211_hw *hw, struct sk_buff *skb)
static void lbtf_tx_work(struct work_struct *work)
static int lbtf_op_start(struct ieee80211_hw *hw)
static void lbtf_op_stop(struct ieee80211_hw *hw)
static int lbtf_op_add_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static void lbtf_op_remove_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static int lbtf_op_config(struct ieee80211_hw *hw, u32 changed)
static u64 lbtf_op_prepare_multicast(struct ieee80211_hw *hw,
struct netdev_hw_addr_list *mc_list)
#define SUPPORTED_FIF_FLAGS  (FIF_PROMISC_IN_BSS | FIF_ALLMULTI)
static void lbtf_op_configure_filter(struct ieee80211_hw *hw,
unsigned int changed_flags,
unsigned int *new_flags,
u64 multicast)
static void lbtf_op_bss_info_changed(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *bss_conf,
u32 changes)
static int lbtf_op_get_survey(struct ieee80211_hw *hw, int idx,
struct survey_info *survey)
static const struct ieee80211_ops lbtf_ops = ;
int lbtf_rx(struct lbtf_private *priv, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(lbtf_rx);
struct lbtf_private *lbtf_add_card(void *card, struct device *dmdev)
EXPORT_SYMBOL_GPL(lbtf_add_card);
int lbtf_remove_card(struct lbtf_private *priv)
EXPORT_SYMBOL_GPL(lbtf_remove_card);
void lbtf_send_tx_feedback(struct lbtf_private *priv, u8 retrycnt, u8 fail)
EXPORT_SYMBOL_GPL(lbtf_send_tx_feedback);
void lbtf_bcn_sent(struct lbtf_private *priv)
EXPORT_SYMBOL_GPL(lbtf_bcn_sent);
static int __init lbtf_init_module(void)
static void __exit lbtf_exit_module(void)
module_init(lbtf_init_module);
module_exit(lbtf_exit_module);
MODULE_DESCRIPTION("Libertas WLAN Thinfirm Driver Library");
MODULE_AUTHOR("Cozybit Inc.");
MODULE_LICENSE("GPL");
