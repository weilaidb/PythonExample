struct zd_reg_alpha2_map ;
static struct zd_reg_alpha2_map reg_alpha2_map[] = ;
static const struct ieee80211_rate zd_rates[] = ;
static const struct tx_retry_rate zd_retry_rates[] = ;
static const struct ieee80211_channel zd_channels[] = ;
static void housekeeping_init(struct zd_mac *mac);
static void housekeeping_enable(struct zd_mac *mac);
static void housekeeping_disable(struct zd_mac *mac);
static void beacon_init(struct zd_mac *mac);
static void beacon_enable(struct zd_mac *mac);
static void beacon_disable(struct zd_mac *mac);
static void set_rts_cts(struct zd_mac *mac, unsigned int short_preamble);
static int zd_mac_config_beacon(struct ieee80211_hw *hw,
struct sk_buff *beacon);
static int zd_reg2alpha2(u8 regdomain, char *alpha2)
int zd_mac_preinit_hw(struct ieee80211_hw *hw)
int zd_mac_init_hw(struct ieee80211_hw *hw)
void zd_mac_clear(struct zd_mac *mac)
static int set_rx_filter(struct zd_mac *mac)
static int set_mac_and_bssid(struct zd_mac *mac)
static int set_mc_hash(struct zd_mac *mac)
int zd_op_start(struct ieee80211_hw *hw)
void zd_op_stop(struct ieee80211_hw *hw)
int zd_restore_settings(struct zd_mac *mac)
static void zd_mac_tx_status(struct ieee80211_hw *hw, struct sk_buff *skb,
int ackssi, struct tx_status *tx_status)
void zd_mac_tx_failed(struct urb *urb)
void zd_mac_tx_to_dev(struct sk_buff *skb, int error)
static int zd_calc_tx_length_us(u8 *service, u8 zd_rate, u16 tx_length)
static void cs_set_control(struct zd_mac *mac, struct zd_ctrlset *cs,
struct ieee80211_hdr *header,
struct ieee80211_tx_info *info)
static int zd_mac_config_beacon(struct ieee80211_hw *hw, struct sk_buff *beacon)
static int fill_ctrlset(struct zd_mac *mac,
struct sk_buff *skb)
static void zd_op_tx(struct ieee80211_hw *hw, struct sk_buff *skb)
static int filter_ack(struct ieee80211_hw *hw, struct ieee80211_hdr *rx_hdr,
struct ieee80211_rx_status *stats)
int zd_mac_rx(struct ieee80211_hw *hw, const u8 *buffer, unsigned int length)
static int zd_op_add_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static void zd_op_remove_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static int zd_op_config(struct ieee80211_hw *hw, u32 changed)
static void zd_beacon_done(struct zd_mac *mac)
static void zd_process_intr(struct work_struct *work)
static u64 zd_op_prepare_multicast(struct ieee80211_hw *hw,
struct netdev_hw_addr_list *mc_list)
#define SUPPORTED_FIF_FLAGS \
(FIF_PROMISC_IN_BSS | FIF_ALLMULTI | FIF_FCSFAIL | FIF_CONTROL | \
FIF_OTHER_BSS | FIF_BCN_PRBRESP_PROMISC)
static void zd_op_configure_filter(struct ieee80211_hw *hw,
unsigned int changed_flags,
unsigned int *new_flags,
u64 multicast)
static void set_rts_cts(struct zd_mac *mac, unsigned int short_preamble)
static void zd_op_bss_info_changed(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *bss_conf,
u32 changes)
static u64 zd_op_get_tsf(struct ieee80211_hw *hw)
static const struct ieee80211_ops zd_ops = ;
struct ieee80211_hw *zd_mac_alloc_hw(struct usb_interface *intf)
#define BEACON_WATCHDOG_DELAY round_jiffies_relative(HZ)
static void beacon_watchdog_handler(struct work_struct *work)
static void beacon_init(struct zd_mac *mac)
static void beacon_enable(struct zd_mac *mac)
static void beacon_disable(struct zd_mac *mac)
#define LINK_LED_WORK_DELAY HZ
static void link_led_handler(struct work_struct *work)
static void housekeeping_init(struct zd_mac *mac)
static void housekeeping_enable(struct zd_mac *mac)
static void housekeeping_disable(struct zd_mac *mac)
