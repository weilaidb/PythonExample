MODULE_AUTHOR("Jouni Malinen");
MODULE_DESCRIPTION("Software simulator of 802.11 radio(s) for mac80211");
MODULE_LICENSE("GPL");
static int radios = 2;
module_param(radios, int, 0444);
MODULE_PARM_DESC(radios, "Number of simulated radios");
static bool fake_hw_scan;
module_param(fake_hw_scan, bool, 0444);
MODULE_PARM_DESC(fake_hw_scan, "Install fake (no-op) hw-scan handler");
enum hwsim_regtest ;
static int regtest = HWSIM_REGTEST_DISABLED;
module_param(regtest, int, 0444);
MODULE_PARM_DESC(regtest, "The type of regulatory test we want to run");
static const char *hwsim_alpha2s[] = ;
static const struct ieee80211_regdomain hwsim_world_regdom_custom_01 = ;
static const struct ieee80211_regdomain hwsim_world_regdom_custom_02 = ;
struct hwsim_vif_priv ;
#define HWSIM_VIF_MAGIC	0x69537748
static inline void hwsim_check_magic(struct ieee80211_vif *vif)
static inline void hwsim_set_magic(struct ieee80211_vif *vif)
static inline void hwsim_clear_magic(struct ieee80211_vif *vif)
struct hwsim_sta_priv ;
#define HWSIM_STA_MAGIC	0x6d537748
static inline void hwsim_check_sta_magic(struct ieee80211_sta *sta)
static inline void hwsim_set_sta_magic(struct ieee80211_sta *sta)
static inline void hwsim_clear_sta_magic(struct ieee80211_sta *sta)
static struct class *hwsim_class;
static struct net_device *hwsim_mon;
#define CHAN2G(_freq)
#define CHAN5G(_freq)
static const struct ieee80211_channel hwsim_channels_2ghz[] = ;
static const struct ieee80211_channel hwsim_channels_5ghz[] = ;
static const struct ieee80211_rate hwsim_rates[] = ;
static spinlock_t hwsim_radio_lock;
static struct list_head hwsim_radios;
struct mac80211_hwsim_data ;
struct hwsim_radiotap_hdr  __packed;
static netdev_tx_t hwsim_mon_xmit(struct sk_buff *skb,
struct net_device *dev)
static void mac80211_hwsim_monitor_rx(struct ieee80211_hw *hw,
struct sk_buff *tx_skb)
static void mac80211_hwsim_monitor_ack(struct ieee80211_hw *hw, const u8 *addr)
static bool hwsim_ps_rx_ok(struct mac80211_hwsim_data *data,
struct sk_buff *skb)
struct mac80211_hwsim_addr_match_data ;
static void mac80211_hwsim_addr_iter(void *data, u8 *mac,
struct ieee80211_vif *vif)
static bool mac80211_hwsim_addr_match(struct mac80211_hwsim_data *data,
const u8 *addr)
static bool mac80211_hwsim_tx_frame(struct ieee80211_hw *hw,
struct sk_buff *skb)
static void mac80211_hwsim_tx(struct ieee80211_hw *hw, struct sk_buff *skb)
static int mac80211_hwsim_start(struct ieee80211_hw *hw)
static void mac80211_hwsim_stop(struct ieee80211_hw *hw)
static int mac80211_hwsim_add_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static int mac80211_hwsim_change_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
enum nl80211_iftype newtype,
bool newp2p)
static void mac80211_hwsim_remove_interface(
struct ieee80211_hw *hw, struct ieee80211_vif *vif)
static void mac80211_hwsim_beacon_tx(void *arg, u8 *mac,
struct ieee80211_vif *vif)
static void mac80211_hwsim_beacon(unsigned long arg)
static const char *hwsim_chantypes[] = ;
static int mac80211_hwsim_config(struct ieee80211_hw *hw, u32 changed)
static void mac80211_hwsim_configure_filter(struct ieee80211_hw *hw,
unsigned int changed_flags,
unsigned int *total_flags,u64 multicast)
static void mac80211_hwsim_bss_info_changed(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *info,
u32 changed)
static int mac80211_hwsim_sta_add(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
static int mac80211_hwsim_sta_remove(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
static void mac80211_hwsim_sta_notify(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
enum sta_notify_cmd cmd,
struct ieee80211_sta *sta)
static int mac80211_hwsim_set_tim(struct ieee80211_hw *hw,
struct ieee80211_sta *sta,
bool set)
static int mac80211_hwsim_conf_tx(
struct ieee80211_hw *hw, u16 queue,
const struct ieee80211_tx_queue_params *params)
static int mac80211_hwsim_get_survey(
struct ieee80211_hw *hw, int idx,
struct survey_info *survey)
enum hwsim_testmode_attr ;
enum hwsim_testmode_cmd ;
static const struct nla_policy hwsim_testmode_policy[HWSIM_TM_ATTR_MAX + 1] = ;
static int hwsim_fops_ps_write(void *dat, u64 val);
static int mac80211_hwsim_testmode_cmd(struct ieee80211_hw *hw,
void *data, int len)
static int mac80211_hwsim_ampdu_action(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
enum ieee80211_ampdu_mlme_action action,
struct ieee80211_sta *sta, u16 tid, u16 *ssn,
u8 buf_size)
static void mac80211_hwsim_flush(struct ieee80211_hw *hw, bool drop)
struct hw_scan_done ;
static void hw_scan_done(struct work_struct *work)
static int mac80211_hwsim_hw_scan(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct cfg80211_scan_request *req)
static void mac80211_hwsim_sw_scan(struct ieee80211_hw *hw)
static void mac80211_hwsim_sw_scan_complete(struct ieee80211_hw *hw)
static struct ieee80211_ops mac80211_hwsim_ops =
;
static void mac80211_hwsim_free(void)
static struct device_driver mac80211_hwsim_driver = ;
static const struct net_device_ops hwsim_netdev_ops = ;
static void hwsim_mon_setup(struct net_device *dev)
static void hwsim_send_ps_poll(void *dat, u8 *mac, struct ieee80211_vif *vif)
static void hwsim_send_nullfunc(struct mac80211_hwsim_data *data, u8 *mac,
struct ieee80211_vif *vif, int ps)
static void hwsim_send_nullfunc_ps(void *dat, u8 *mac,
struct ieee80211_vif *vif)
static void hwsim_send_nullfunc_no_ps(void *dat, u8 *mac,
struct ieee80211_vif *vif)
static int hwsim_fops_ps_read(void *dat, u64 *val)
static int hwsim_fops_ps_write(void *dat, u64 val)
DEFINE_SIMPLE_ATTRIBUTE(hwsim_fops_ps, hwsim_fops_ps_read, hwsim_fops_ps_write,
"%llu\n");
static int hwsim_fops_group_read(void *dat, u64 *val)
static int hwsim_fops_group_write(void *dat, u64 val)
DEFINE_SIMPLE_ATTRIBUTE(hwsim_fops_group,
hwsim_fops_group_read, hwsim_fops_group_write,
"%llx\n");
static int __init init_mac80211_hwsim(void)
static void __exit exit_mac80211_hwsim(void)
module_init(init_mac80211_hwsim);
module_exit(exit_mac80211_hwsim);
