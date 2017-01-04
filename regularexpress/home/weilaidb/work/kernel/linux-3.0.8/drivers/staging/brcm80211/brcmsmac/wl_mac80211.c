#define __UNDEF_NO_VERSION__
#define N_TX_QUEUES	4
static void wl_timer(unsigned long data);
static void _wl_timer(struct wl_timer *t);
static int ieee_hw_init(struct ieee80211_hw *hw);
static int ieee_hw_rate_init(struct ieee80211_hw *hw);
static int wl_linux_watchdog(void *ctx);
#define MAC_FILTERS (FIF_PROMISC_IN_BSS | \
FIF_ALLMULTI | \
FIF_FCSFAIL | \
FIF_PLCPFAIL | \
FIF_CONTROL | \
FIF_OTHER_BSS | \
FIF_BCN_PRBRESP_PROMISC)
static int wl_found;
#define WL_DEV_IF(dev)		((struct wl_if *)netdev_priv(dev))
#define	WL_INFO(dev)		((struct wl_info *)(WL_DEV_IF(dev)->wl))
static int wl_request_fw(struct wl_info *wl, struct pci_dev *pdev);
static void wl_release_fw(struct wl_info *wl);
static void wl_dpc(unsigned long data);
static irqreturn_t wl_isr(int irq, void *dev_id);
static int __devinit wl_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *ent);
static void wl_remove(struct pci_dev *pdev);
static void wl_free(struct wl_info *wl);
static void wl_set_basic_rate(struct wl_rateset *rs, u16 rate, bool is_br);
MODULE_AUTHOR("Broadcom Corporation");
MODULE_DESCRIPTION("Broadcom 802.11n wireless LAN driver.");
MODULE_SUPPORTED_DEVICE("Broadcom 802.11n WLAN cards");
MODULE_LICENSE("Dual BSD/GPL");
static struct pci_device_id wl_id_table[] = ;
MODULE_DEVICE_TABLE(pci, wl_id_table);
static int msglevel = 0xdeadbeef;
module_param(msglevel, int, 0);
static int phymsglevel = 0xdeadbeef;
module_param(phymsglevel, int, 0);
#define HW_TO_WL(hw)	 (hw->priv)
#define WL_TO_HW(wl)	  (wl->pub->ieee_hw)
static int wl_ops_start(struct ieee80211_hw *hw);
static void wl_ops_stop(struct ieee80211_hw *hw);
static int wl_ops_add_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif);
static void wl_ops_remove_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif);
static int wl_ops_config(struct ieee80211_hw *hw, u32 changed);
static void wl_ops_bss_info_changed(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *info,
u32 changed);
static void wl_ops_configure_filter(struct ieee80211_hw *hw,
unsigned int changed_flags,
unsigned int *total_flags, u64 multicast);
static int wl_ops_set_tim(struct ieee80211_hw *hw, struct ieee80211_sta *sta,
bool set);
static void wl_ops_sw_scan_start(struct ieee80211_hw *hw);
static void wl_ops_sw_scan_complete(struct ieee80211_hw *hw);
static void wl_ops_set_tsf(struct ieee80211_hw *hw, u64 tsf);
static int wl_ops_get_stats(struct ieee80211_hw *hw,
struct ieee80211_low_level_stats *stats);
static void wl_ops_sta_notify(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
enum sta_notify_cmd cmd,
struct ieee80211_sta *sta);
static int wl_ops_conf_tx(struct ieee80211_hw *hw, u16 queue,
const struct ieee80211_tx_queue_params *params);
static u64 wl_ops_get_tsf(struct ieee80211_hw *hw);
static int wl_ops_sta_add(struct ieee80211_hw *hw, struct ieee80211_vif *vif,
struct ieee80211_sta *sta);
static int wl_ops_sta_remove(struct ieee80211_hw *hw, struct ieee80211_vif *vif,
struct ieee80211_sta *sta);
static int wl_ops_ampdu_action(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
enum ieee80211_ampdu_mlme_action action,
struct ieee80211_sta *sta, u16 tid, u16 *ssn,
u8 buf_size);
static void wl_ops_rfkill_poll(struct ieee80211_hw *hw);
static void wl_ops_flush(struct ieee80211_hw *hw, bool drop);
static void wl_ops_tx(struct ieee80211_hw *hw, struct sk_buff *skb)
static int wl_ops_start(struct ieee80211_hw *hw)
static void wl_ops_stop(struct ieee80211_hw *hw)
static int
wl_ops_add_interface(struct ieee80211_hw *hw, struct ieee80211_vif *vif)
static void
wl_ops_remove_interface(struct ieee80211_hw *hw, struct ieee80211_vif *vif)
static int
ieee_set_channel(struct ieee80211_hw *hw, struct ieee80211_channel *chan,
enum nl80211_channel_type type)
static int wl_ops_config(struct ieee80211_hw *hw, u32 changed)
static void
wl_ops_bss_info_changed(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *info, u32 changed)
static void
wl_ops_configure_filter(struct ieee80211_hw *hw,
unsigned int changed_flags,
unsigned int *total_flags, u64 multicast)
static int
wl_ops_set_tim(struct ieee80211_hw *hw, struct ieee80211_sta *sta, bool set)
static void wl_ops_sw_scan_start(struct ieee80211_hw *hw)
static void wl_ops_sw_scan_complete(struct ieee80211_hw *hw)
static void wl_ops_set_tsf(struct ieee80211_hw *hw, u64 tsf)
static int
wl_ops_get_stats(struct ieee80211_hw *hw,
struct ieee80211_low_level_stats *stats)
static void
wl_ops_sta_notify(struct ieee80211_hw *hw, struct ieee80211_vif *vif,
enum sta_notify_cmd cmd, struct ieee80211_sta *sta)
static int
wl_ops_conf_tx(struct ieee80211_hw *hw, u16 queue,
const struct ieee80211_tx_queue_params *params)
static u64 wl_ops_get_tsf(struct ieee80211_hw *hw)
static int
wl_ops_sta_add(struct ieee80211_hw *hw, struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
static int
wl_ops_sta_remove(struct ieee80211_hw *hw, struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
static int
wl_ops_ampdu_action(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
enum ieee80211_ampdu_mlme_action action,
struct ieee80211_sta *sta, u16 tid, u16 *ssn,
u8 buf_size)
static void wl_ops_rfkill_poll(struct ieee80211_hw *hw)
static void wl_ops_flush(struct ieee80211_hw *hw, bool drop)
static const struct ieee80211_ops wl_ops = ;
static int wl_set_hint(struct wl_info *wl, char *abbrev)
static struct wl_info *wl_attach(u16 vendor, u16 device, unsigned long regs,
uint bustype, void *btparam, uint irq)
#define CHAN2GHZ(channel, freqency, chflags)
static struct ieee80211_channel wl_2ghz_chantable[] = ;
#define CHAN5GHZ(channel, chflags)
static struct ieee80211_channel wl_5ghz_nphy_chantable[] = ;
#define RATE(rate100m, _flags)
static struct ieee80211_rate wl_legacy_ratetable[] = ;
static struct ieee80211_supported_band wl_band_2GHz_nphy = ;
static struct ieee80211_supported_band wl_band_5GHz_nphy = ;
static int ieee_hw_rate_init(struct ieee80211_hw *hw)
static int ieee_hw_init(struct ieee80211_hw *hw)
static int __devinit
wl_pci_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static int wl_suspend(struct pci_dev *pdev, pm_message_t state)
static int wl_resume(struct pci_dev *pdev)
static void wl_remove(struct pci_dev *pdev)
static struct pci_driver wl_pci_driver = ;
static int __init wl_module_init(void)
static void __exit wl_module_exit(void)
module_init(wl_module_init);
module_exit(wl_module_exit);
static void wl_free(struct wl_info *wl)
static void wl_set_basic_rate(struct wl_rateset *rs, u16 rate, bool is_br)
void wl_txflowcontrol(struct wl_info *wl, struct wl_if *wlif, bool state,
int prio)
void wl_init(struct wl_info *wl)
uint wl_reset(struct wl_info *wl)
void wl_intrson(struct wl_info *wl)
bool wl_alloc_dma_resources(struct wl_info *wl, uint addrwidth)
u32 wl_intrsoff(struct wl_info *wl)
void wl_intrsrestore(struct wl_info *wl, u32 macintmask)
int wl_up(struct wl_info *wl)
void wl_down(struct wl_info *wl)
static irqreturn_t wl_isr(int irq, void *dev_id)
static void wl_dpc(unsigned long data)
static void wl_timer(unsigned long data)
static void _wl_timer(struct wl_timer *t)
struct wl_timer *wl_init_timer(struct wl_info *wl, void (*fn) (void *arg),
void *arg, const char *name)
void wl_add_timer(struct wl_info *wl, struct wl_timer *t, uint ms, int periodic)
bool wl_del_timer(struct wl_info *wl, struct wl_timer *t)
void wl_free_timer(struct wl_info *wl, struct wl_timer *t)
static int wl_linux_watchdog(void *ctx)
struct wl_fw_hdr ;
char *wl_firmwares[WL_MAX_FW] = ;
int wl_ucode_init_buf(struct wl_info *wl, void **pbuf, u32 idx)
int wl_ucode_init_uint(struct wl_info *wl, u32 *data, u32 idx)
static int wl_request_fw(struct wl_info *wl, struct pci_dev *pdev)
void wl_ucode_free_buf(void *p)
static void wl_release_fw(struct wl_info *wl)
int wl_check_firmwares(struct wl_info *wl)
bool wl_rfkill_set_hw_state(struct wl_info *wl)
void wl_msleep(struct wl_info *wl, uint ms)
