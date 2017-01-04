#define EPI_VERSION_STR		"4.218.248.5"
#define ETH_P_BRCM			0x886c
#if defined(CUSTOMER_HW2) && defined(CONFIG_WIFI_CONTROL_FUNC)
struct semaphore wifi_control_sem;
struct dhd_bus *g_bus;
static struct wifi_platform_data *wifi_control_data;
static struct resource *wifi_irqres;
int wifi_get_irq_number(unsigned long *irq_flags_ptr)
int wifi_set_carddetect(int on)
int wifi_set_power(int on, unsigned long msec)
int wifi_set_reset(int on, unsigned long msec)
static int wifi_probe(struct platform_device *pdev)
static int wifi_remove(struct platform_device *pdev)
static int wifi_suspend(struct platform_device *pdev, pm_message_t state)
static int wifi_resume(struct platform_device *pdev)
static struct platform_driver wifi_device = ;
int wifi_add_dev(void)
void wifi_del_dev(void)
#if defined(CONFIG_PM_SLEEP)
atomic_t dhd_mmc_suspend;
DECLARE_WAIT_QUEUE_HEAD(dhd_dpc_wait);
#if defined(OOB_INTR_ONLY)
extern void dhd_enable_oob_intr(struct dhd_bus *bus, bool enable);
MODULE_AUTHOR("Broadcom Corporation");
MODULE_DESCRIPTION("Broadcom 802.11n wireless LAN fullmac driver.");
MODULE_SUPPORTED_DEVICE("Broadcom 802.11n WLAN fullmac cards");
MODULE_LICENSE("Dual BSD/GPL");
#define DRV_MODULE_NAME "brcmfmac"
#if defined(CONFIG_WIRELESS_EXT)
extern wl_iw_extra_params_t g_wl_iw_params;
#if defined(CONFIG_HAS_EARLYSUSPEND)
extern int dhdcdc_set_ioctl(dhd_pub_t *dhd, int ifidx, uint cmd, void *buf,
uint len);
extern void dhd_pktfilter_offload_set(dhd_pub_t *dhd, char *arg);
extern void dhd_pktfilter_offload_enable(dhd_pub_t *dhd, char *arg, int enable,
int master_mode);
typedef struct dhd_if  dhd_if_t;
typedef struct dhd_info  dhd_info_t;
char firmware_path[MOD_PARAM_PATHLEN];
char nvram_path[MOD_PARAM_PATHLEN];
module_param_string(firmware_path, firmware_path, MOD_PARAM_PATHLEN, 0);
module_param_string(nvram_path, nvram_path, MOD_PARAM_PATHLEN, 0);
module_param(dhd_msg_level, int, 0);
uint dhd_sysioc = true;
module_param(dhd_sysioc, uint, 0);
uint dhd_watchdog_ms = 10;
module_param(dhd_watchdog_ms, uint, 0);
uint dhd_console_ms;
module_param(dhd_console_ms, uint, 0);
uint dhd_arp_mode = 0xb;
module_param(dhd_arp_mode, uint, 0);
uint dhd_arp_enable = true;
module_param(dhd_arp_enable, uint, 0);
uint dhd_pkt_filter_enable = true;
module_param(dhd_pkt_filter_enable, uint, 0);
uint dhd_pkt_filter_init;
module_param(dhd_pkt_filter_init, uint, 0);
uint dhd_master_mode = true;
module_param(dhd_master_mode, uint, 1);
int dhd_watchdog_prio = 97;
module_param(dhd_watchdog_prio, int, 0);
int dhd_dpc_prio = 98;
module_param(dhd_dpc_prio, int, 0);
extern int dhd_dongle_memsize;
module_param(dhd_dongle_memsize, int, 0);
uint dhd_roam;
uint dhd_roam = 1;
uint dhd_radio_up = 1;
char iface_name[IFNAMSIZ] = "wlan";
module_param_string(iface_name, iface_name, IFNAMSIZ, 0);
int dhd_ioctl_timeout_msec = IOCTL_RESP_TIMEOUT;
int dhd_idletime = DHD_IDLETIME_TICKS;
module_param(dhd_idletime, int, 0);
uint dhd_poll = false;
module_param(dhd_poll, uint, 0);
uint dhd_cfg80211 = true;
module_param(dhd_cfg80211, uint, 0);
uint dhd_intr = true;
module_param(dhd_intr, uint, 0);
uint dhd_sdiod_drive_strength = 6;
module_param(dhd_sdiod_drive_strength, uint, 0);
extern uint dhd_txbound;
extern uint dhd_rxbound;
module_param(dhd_txbound, uint, 0);
module_param(dhd_rxbound, uint, 0);
extern uint dhd_deferred_tx;
module_param(dhd_deferred_tx, uint, 0);
uint dhd_pktgen;
module_param(dhd_pktgen, uint, 0);
uint dhd_pktgen_len;
module_param(dhd_pktgen_len, uint, 0);
#define FAVORITE_WIFI_CP	(!!dhd_cfg80211)
#define IS_CFG80211_FAVORITE() FAVORITE_WIFI_CP
#define DBG_CFG80211_GET() ((dhd_cfg80211 & WL_DBG_MASK) >> 1)
#define NO_FW_REQ() (dhd_cfg80211 & 0x80)
#define DHD_COMPILED "\nCompiled in " SRCBASE
#define DHD_COMPILED
static void dhd_dpc(unsigned long data);
extern int dhd_wait_pend8021x(struct net_device *dev);
#error TOE requires BDC
static int dhd_toe_get(dhd_info_t *dhd, int idx, u32 *toe_ol);
static int dhd_toe_set(dhd_info_t *dhd, int idx, u32 toe_ol);
static int dhd_wl_host_event(dhd_info_t *dhd, int *ifidx, void *pktdata,
wl_event_msg_t *event_ptr, void **data_ptr);
#if defined(CONFIG_PM_SLEEP)
static int dhd_sleep_pm_callback(struct notifier_block *nfb,
unsigned long action, void *ignored)
static struct notifier_block dhd_sleep_pm_notifier = ;
extern int register_pm_notifier(struct notifier_block *nb);
extern int unregister_pm_notifier(struct notifier_block *nb);
static void dhd_set_packet_filter(int value, dhd_pub_t *dhd)
#if defined(CONFIG_HAS_EARLYSUSPEND)
static int dhd_set_suspend(int value, dhd_pub_t *dhd)
static void dhd_suspend_resume_helper(struct dhd_info *dhd, int val)
static void dhd_early_suspend(struct early_suspend *h)
static void dhd_late_resume(struct early_suspend *h)
void dhd_timeout_start(dhd_timeout_t *tmo, uint usec)
int dhd_timeout_expired(dhd_timeout_t *tmo)
static int dhd_net2idx(dhd_info_t *dhd, struct net_device *net)
int dhd_ifname2idx(dhd_info_t *dhd, char *name)
char *dhd_ifname(dhd_pub_t *dhdp, int ifidx)
static void _dhd_set_multicast_list(dhd_info_t *dhd, int ifidx)
static int
_dhd_set_mac_address(dhd_info_t *dhd, int ifidx, u8 *addr)
extern struct net_device *ap_net_dev;
static void dhd_op_if(dhd_if_t *ifp)
static int _dhd_sysioc_thread(void *data)
static int dhd_set_mac_address(struct net_device *dev, void *addr)
static void dhd_set_multicast_list(struct net_device *dev)
int dhd_sendpkt(dhd_pub_t *dhdp, int ifidx, struct sk_buff *pktbuf)
static inline void *
osl_pkt_frmnative(struct sk_buff *skb)
#define PKTFRMNATIVE(osh, skb)	\
osl_pkt_frmnative((struct sk_buff *)(skb))
static inline struct sk_buff *
osl_pkt_tonative(void *pkt)
#define PKTTONATIVE(osh, pkt)	\
osl_pkt_tonative((pkt))
static int dhd_start_xmit(struct sk_buff *skb, struct net_device *net)
void dhd_txflowcontrol(dhd_pub_t *dhdp, int ifidx, bool state)
void dhd_rx_frame(dhd_pub_t *dhdp, int ifidx, struct sk_buff *pktbuf,
int numpkt)
void dhd_event(struct dhd_info *dhd, char *evpkt, int evlen, int ifidx)
void dhd_txcomplete(dhd_pub_t *dhdp, struct sk_buff *txp, bool success)
static struct net_device_stats *dhd_get_stats(struct net_device *net)
static int dhd_watchdog_thread(void *data)
static void dhd_watchdog(unsigned long data)
static int dhd_dpc_thread(void *data)
static void dhd_dpc(unsigned long data)
void dhd_sched_dpc(dhd_pub_t *dhdp)
static int dhd_toe_get(dhd_info_t *dhd, int ifidx, u32 *toe_ol)
static int dhd_toe_set(dhd_info_t *dhd, int ifidx, u32 toe_ol)
static void dhd_ethtool_get_drvinfo(struct net_device *net,
struct ethtool_drvinfo *info)
struct ethtool_ops dhd_ethtool_ops = ;
static int dhd_ethtool(dhd_info_t *dhd, void *uaddr)
static int dhd_ioctl_entry(struct net_device *net, struct ifreq *ifr, int cmd)
static int dhd_stop(struct net_device *net)
static int dhd_open(struct net_device *net)
int
dhd_add_if(dhd_info_t *dhd, int ifidx, void *handle, char *name,
u8 *mac_addr, u32 flags, u8 bssidx)
void dhd_del_if(dhd_info_t *dhd, int ifidx)
dhd_pub_t *dhd_attach(struct dhd_bus *bus, uint bus_hdrlen)
int dhd_bus_start(dhd_pub_t *dhdp)
int
dhd_iovar(dhd_pub_t *pub, int ifidx, char *name, char *cmd_buf, uint cmd_len,
int set)
static struct net_device_ops dhd_ops_pri = ;
int dhd_net_attach(dhd_pub_t *dhdp, int ifidx)
void dhd_bus_detach(dhd_pub_t *dhdp)
void dhd_detach(dhd_pub_t *dhdp)
static void __exit dhd_module_cleanup(void)
static int __init dhd_module_init(void)
module_init(dhd_module_init);
module_exit(dhd_module_cleanup);
int dhd_os_proto_block(dhd_pub_t *pub)
int dhd_os_proto_unblock(dhd_pub_t *pub)
unsigned int dhd_os_get_ioctl_resp_timeout(void)
void dhd_os_set_ioctl_resp_timeout(unsigned int timeout_msec)
int dhd_os_ioctl_resp_wait(dhd_pub_t *pub, uint *condition, bool *pending)
int dhd_os_ioctl_resp_wake(dhd_pub_t *pub)
void dhd_os_wd_timer(void *bus, uint wdtick)
void *dhd_os_open_image(char *filename)
int dhd_os_get_image_block(char *buf, int len, void *image)
void dhd_os_close_image(void *image)
void dhd_os_sdlock(dhd_pub_t *pub)
void dhd_os_sdunlock(dhd_pub_t *pub)
void dhd_os_sdlock_txq(dhd_pub_t *pub)
void dhd_os_sdunlock_txq(dhd_pub_t *pub)
void dhd_os_sdlock_rxq(dhd_pub_t *pub)
void dhd_os_sdunlock_rxq(dhd_pub_t *pub)
void dhd_os_sdtxlock(dhd_pub_t *pub)
void dhd_os_sdtxunlock(dhd_pub_t *pub)
static int
dhd_wl_host_event(dhd_info_t *dhd, int *ifidx, void *pktdata,
wl_event_msg_t *event, void **data)
void dhd_sendup_event(dhd_pub_t *dhdp, wl_event_msg_t *event, void *data)
void dhd_wait_for_event(dhd_pub_t *dhd, bool *lockvar)
void dhd_wait_event_wakeup(dhd_pub_t *dhd)
int dhd_dev_reset(struct net_device *dev, u8 flag)
int net_os_set_suspend_disable(struct net_device *dev, int val)
int net_os_set_suspend(struct net_device *dev, int val)
int net_os_set_dtim_skip(struct net_device *dev, int val)
int net_os_set_packet_filter(struct net_device *dev, int val)
void dhd_dev_init_ioctl(struct net_device *dev)
int dhd_dev_pno_reset(struct net_device *dev)
int dhd_dev_pno_enable(struct net_device *dev, int pfn_enabled)
int
dhd_dev_pno_set(struct net_device *dev, wlc_ssid_t *ssids_local, int nssid,
unsigned char scan_fr)
int dhd_dev_get_pno_status(struct net_device *dev)
static int dhd_get_pend_8021x_cnt(dhd_info_t *dhd)
#define MAX_WAIT_FOR_8021X_TX	10
int dhd_wait_pend8021x(struct net_device *dev)
void wl_os_wd_timer(struct net_device *ndev, uint wdtick)
int write_to_file(dhd_pub_t *dhd, u8 *buf, int size)
