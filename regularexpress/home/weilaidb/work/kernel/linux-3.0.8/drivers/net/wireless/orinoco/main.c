#define DRIVER_NAME "orinoco"
MODULE_AUTHOR("Pavel Roskin <proski@gnu.org> & "
"David Gibson <hermes@gibson.dropbear.id.au>");
MODULE_DESCRIPTION("Driver for Lucent Orinoco, Prism II based "
"and similar wireless cards");
MODULE_LICENSE("Dual MPL/GPL");
int orinoco_debug = ORINOCO_DEBUG;
EXPORT_SYMBOL(orinoco_debug);
module_param(orinoco_debug, int, 0644);
MODULE_PARM_DESC(orinoco_debug, "Debug level");
static int suppress_linkstatus;
module_param(suppress_linkstatus, bool, 0644);
MODULE_PARM_DESC(suppress_linkstatus, "Don't log link status changes");
static int ignore_disconnect;
module_param(ignore_disconnect, int, 0644);
MODULE_PARM_DESC(ignore_disconnect,
"Don't report lost link to the network layer");
int force_monitor;
module_param(force_monitor, int, 0644);
MODULE_PARM_DESC(force_monitor, "Allow monitor mode for all firmware versions");
static const u8 encaps_hdr[] = ;
#define ENCAPS_OVERHEAD		(sizeof(encaps_hdr) + 2)
#define ORINOCO_MIN_MTU		256
#define ORINOCO_MAX_MTU		(IEEE80211_MAX_DATA_LEN - ENCAPS_OVERHEAD)
#define MAX_IRQLOOPS_PER_IRQ	10
#define MAX_IRQLOOPS_PER_JIFFY	(20000/HZ)
#define DUMMY_FID		0xFFFF
#define MAX_MULTICAST(priv)	(HERMES_MAX_MULTICAST)
#define ORINOCO_INTEN	 	(HERMES_EV_RX | HERMES_EV_ALLOC \
| HERMES_EV_TX | HERMES_EV_TXEXC \
| HERMES_EV_WTERR | HERMES_EV_INFO \
| HERMES_EV_INFDROP)
struct hermes_txexc_data  __packed;
struct hermes_rx_descriptor  __packed;
struct orinoco_rx_data ;
struct orinoco_scan_data ;
static int __orinoco_set_multicast_list(struct net_device *dev);
static int __orinoco_up(struct orinoco_private *priv);
static int __orinoco_down(struct orinoco_private *priv);
static int __orinoco_commit(struct orinoco_private *priv);
void set_port_type(struct orinoco_private *priv)
int orinoco_open(struct net_device *dev)
EXPORT_SYMBOL(orinoco_open);
int orinoco_stop(struct net_device *dev)
EXPORT_SYMBOL(orinoco_stop);
struct net_device_stats *orinoco_get_stats(struct net_device *dev)
EXPORT_SYMBOL(orinoco_get_stats);
void orinoco_set_multicast_list(struct net_device *dev)
EXPORT_SYMBOL(orinoco_set_multicast_list);
int orinoco_change_mtu(struct net_device *dev, int new_mtu)
EXPORT_SYMBOL(orinoco_change_mtu);
int orinoco_process_xmit_skb(struct sk_buff *skb,
struct net_device *dev,
struct orinoco_private *priv,
int *tx_control,
u8 *mic_buf)
EXPORT_SYMBOL(orinoco_process_xmit_skb);
static netdev_tx_t orinoco_xmit(struct sk_buff *skb, struct net_device *dev)
static void __orinoco_ev_alloc(struct net_device *dev, hermes_t *hw)
static void __orinoco_ev_tx(struct net_device *dev, hermes_t *hw)
static void __orinoco_ev_txexc(struct net_device *dev, hermes_t *hw)
void orinoco_tx_timeout(struct net_device *dev)
EXPORT_SYMBOL(orinoco_tx_timeout);
static inline int is_ethersnap(void *_hdr)
static inline void orinoco_spy_gather(struct net_device *dev, u_char *mac,
int level, int noise)
static void orinoco_stat_gather(struct net_device *dev,
struct sk_buff *skb,
struct hermes_rx_descriptor *desc)
static void orinoco_rx_monitor(struct net_device *dev, u16 rxfid,
struct hermes_rx_descriptor *desc)
void __orinoco_ev_rx(struct net_device *dev, hermes_t *hw)
EXPORT_SYMBOL(__orinoco_ev_rx);
static void orinoco_rx(struct net_device *dev,
struct hermes_rx_descriptor *desc,
struct sk_buff *skb)
static void orinoco_rx_isr_tasklet(unsigned long data)
static void print_linkstatus(struct net_device *dev, u16 status)
static void orinoco_join_ap(struct work_struct *work)
static void orinoco_send_bssid_wevent(struct orinoco_private *priv)
static void orinoco_send_assocreqie_wevent(struct orinoco_private *priv)
static void orinoco_send_assocrespie_wevent(struct orinoco_private *priv)
static void orinoco_send_wevents(struct work_struct *work)
static void qbuf_scan(struct orinoco_private *priv, void *buf,
int len, int type)
static void qabort_scan(struct orinoco_private *priv)
static void orinoco_process_scan_results(struct work_struct *work)
void __orinoco_ev_info(struct net_device *dev, hermes_t *hw)
EXPORT_SYMBOL(__orinoco_ev_info);
static void __orinoco_ev_infdrop(struct net_device *dev, hermes_t *hw)
static int __orinoco_up(struct orinoco_private *priv)
static int __orinoco_down(struct orinoco_private *priv)
static int orinoco_reinit_firmware(struct orinoco_private *priv)
static int
__orinoco_set_multicast_list(struct net_device *dev)
void orinoco_reset(struct work_struct *work)
static int __orinoco_commit(struct orinoco_private *priv)
int orinoco_commit(struct orinoco_private *priv)
static void __orinoco_ev_tick(struct net_device *dev, hermes_t *hw)
static void __orinoco_ev_wterr(struct net_device *dev, hermes_t *hw)
irqreturn_t orinoco_interrupt(int irq, void *dev_id)
EXPORT_SYMBOL(orinoco_interrupt);
#if defined(CONFIG_PM_SLEEP) && !defined(CONFIG_HERMES_CACHE_FW_ON_INIT)
static int orinoco_pm_notifier(struct notifier_block *notifier,
unsigned long pm_event,
void *unused)
static void orinoco_register_pm_notifier(struct orinoco_private *priv)
static void orinoco_unregister_pm_notifier(struct orinoco_private *priv)
#define orinoco_register_pm_notifier(priv) do  while(0)
#define orinoco_unregister_pm_notifier(priv) do  while(0)
int orinoco_init(struct orinoco_private *priv)
EXPORT_SYMBOL(orinoco_init);
static const struct net_device_ops orinoco_netdev_ops = ;
struct orinoco_private
*alloc_orinocodev(int sizeof_card,
struct device *device,
int (*hard_reset)(struct orinoco_private *),
int (*stop_fw)(struct orinoco_private *, int))
EXPORT_SYMBOL(alloc_orinocodev);
int orinoco_if_add(struct orinoco_private *priv,
unsigned long base_addr,
unsigned int irq,
const struct net_device_ops *ops)
EXPORT_SYMBOL(orinoco_if_add);
void orinoco_if_del(struct orinoco_private *priv)
EXPORT_SYMBOL(orinoco_if_del);
void free_orinocodev(struct orinoco_private *priv)
EXPORT_SYMBOL(free_orinocodev);
int orinoco_up(struct orinoco_private *priv)
EXPORT_SYMBOL(orinoco_up);
void orinoco_down(struct orinoco_private *priv)
EXPORT_SYMBOL(orinoco_down);
static char version[] __initdata = DRIVER_NAME " " DRIVER_VERSION
" (David Gibson <hermes@gibson.dropbear.id.au>, "
"Pavel Roskin <proski@gnu.org>, et al)";
static int __init init_orinoco(void)
static void __exit exit_orinoco(void)
module_init(init_orinoco);
module_exit(exit_orinoco);
