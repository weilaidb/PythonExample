#define IPW2100_VERSION "git-1.2.2"
#define DRV_NAME	"ipw2100"
#define DRV_VERSION	IPW2100_VERSION
#define DRV_DESCRIPTION	"Intel(R) PRO/Wireless 2100 Network Driver"
#define DRV_COPYRIGHT	"Copyright(c) 2003-2006 Intel Corporation"
static struct pm_qos_request_list ipw2100_pm_qos_req;
#define IPW2100_RX_DEBUG
MODULE_DESCRIPTION(DRV_DESCRIPTION);
MODULE_VERSION(DRV_VERSION);
MODULE_AUTHOR(DRV_COPYRIGHT);
MODULE_LICENSE("GPL");
static int debug = 0;
static int network_mode = 0;
static int channel = 0;
static int associate = 0;
static int disable = 0;
static struct ipw2100_fw ipw2100_firmware;
module_param(debug, int, 0444);
module_param_named(mode, network_mode, int, 0444);
module_param(channel, int, 0444);
module_param(associate, int, 0444);
module_param(disable, int, 0444);
MODULE_PARM_DESC(debug, "debug level");
MODULE_PARM_DESC(mode, "network mode (0=BSS,1=IBSS,2=Monitor)");
MODULE_PARM_DESC(channel, "channel");
MODULE_PARM_DESC(associate, "auto associate when scanning (default off)");
MODULE_PARM_DESC(disable, "manually disable the radio (default 0 [radio on])");
static u32 ipw2100_debug_level = IPW_DL_NONE;
#define IPW_DEBUG(level, message...) \
do  while (0)
#define IPW_DEBUG(level, message...) do  while (0)
static const char *command_types[] = ;
#define WEXT_USECHANNELS 1
static const long ipw2100_frequencies[] = ;
#define FREQ_COUNT	ARRAY_SIZE(ipw2100_frequencies)
static const long ipw2100_rates_11b[] = ;
static struct ieee80211_rate ipw2100_bg_rates[] = ;
#define RATE_COUNT ARRAY_SIZE(ipw2100_rates_11b)
static void ipw2100_tx_send_commands(struct ipw2100_priv *priv);
static void ipw2100_tx_send_data(struct ipw2100_priv *priv);
static int ipw2100_adapter_setup(struct ipw2100_priv *priv);
static void ipw2100_queues_initialize(struct ipw2100_priv *priv);
static void ipw2100_queues_free(struct ipw2100_priv *priv);
static int ipw2100_queues_allocate(struct ipw2100_priv *priv);
static int ipw2100_fw_download(struct ipw2100_priv *priv,
struct ipw2100_fw *fw);
static int ipw2100_get_firmware(struct ipw2100_priv *priv,
struct ipw2100_fw *fw);
static int ipw2100_get_fwversion(struct ipw2100_priv *priv, char *buf,
size_t max);
static int ipw2100_get_ucodeversion(struct ipw2100_priv *priv, char *buf,
size_t max);
static void ipw2100_release_firmware(struct ipw2100_priv *priv,
struct ipw2100_fw *fw);
static int ipw2100_ucode_download(struct ipw2100_priv *priv,
struct ipw2100_fw *fw);
static void ipw2100_wx_event_work(struct work_struct *work);
static struct iw_statistics *ipw2100_wx_wireless_stats(struct net_device *dev);
static struct iw_handler_def ipw2100_wx_handler_def;
static inline void read_register(struct net_device *dev, u32 reg, u32 * val)
static inline void write_register(struct net_device *dev, u32 reg, u32 val)
static inline void read_register_word(struct net_device *dev, u32 reg,
u16 * val)
static inline void read_register_byte(struct net_device *dev, u32 reg, u8 * val)
static inline void write_register_word(struct net_device *dev, u32 reg, u16 val)
static inline void write_register_byte(struct net_device *dev, u32 reg, u8 val)
static inline void read_nic_dword(struct net_device *dev, u32 addr, u32 * val)
static inline void write_nic_dword(struct net_device *dev, u32 addr, u32 val)
static inline void read_nic_word(struct net_device *dev, u32 addr, u16 * val)
static inline void write_nic_word(struct net_device *dev, u32 addr, u16 val)
static inline void read_nic_byte(struct net_device *dev, u32 addr, u8 * val)
static inline void write_nic_byte(struct net_device *dev, u32 addr, u8 val)
static inline void write_nic_auto_inc_address(struct net_device *dev, u32 addr)
static inline void write_nic_dword_auto_inc(struct net_device *dev, u32 val)
static void write_nic_memory(struct net_device *dev, u32 addr, u32 len,
const u8 * buf)
static void read_nic_memory(struct net_device *dev, u32 addr, u32 len,
u8 * buf)
static inline int ipw2100_hw_is_adapter_in_system(struct net_device *dev)
static int ipw2100_get_ordinal(struct ipw2100_priv *priv, u32 ord,
void *val, u32 * len)
static int ipw2100_set_ordinal(struct ipw2100_priv *priv, u32 ord, u32 * val,
u32 * len)
static char *snprint_line(char *buf, size_t count,
const u8 * data, u32 len, u32 ofs)
static void printk_buf(int level, const u8 * data, u32 len)
#define MAX_RESET_BACKOFF 10
static void schedule_reset(struct ipw2100_priv *priv)
#define HOST_COMPLETE_TIMEOUT (2 * HZ)
static int ipw2100_hw_send_command(struct ipw2100_priv *priv,
struct host_command *cmd)
static int ipw2100_verify(struct ipw2100_priv *priv)
#define IPW_CARD_DISABLE_COMPLETE_WAIT		    100
static int ipw2100_wait_for_card_state(struct ipw2100_priv *priv, int state)
static int sw_reset_and_clock(struct ipw2100_priv *priv)
static int ipw2100_download_firmware(struct ipw2100_priv *priv)
static inline void ipw2100_enable_interrupts(struct ipw2100_priv *priv)
static inline void ipw2100_disable_interrupts(struct ipw2100_priv *priv)
static void ipw2100_initialize_ordinals(struct ipw2100_priv *priv)
static inline void ipw2100_hw_set_gpio(struct ipw2100_priv *priv)
static int rf_kill_active(struct ipw2100_priv *priv)
static int ipw2100_get_hw_features(struct ipw2100_priv *priv)
static int ipw2100_start_adapter(struct ipw2100_priv *priv)
static inline void ipw2100_reset_fatalerror(struct ipw2100_priv *priv)
static int ipw2100_power_cycle_adapter(struct ipw2100_priv *priv)
static int ipw2100_hw_phy_off(struct ipw2100_priv *priv)
static int ipw2100_enable_adapter(struct ipw2100_priv *priv)
static int ipw2100_hw_stop_adapter(struct ipw2100_priv *priv)
static int ipw2100_disable_adapter(struct ipw2100_priv *priv)
static int ipw2100_set_scan_options(struct ipw2100_priv *priv)
static int ipw2100_start_scan(struct ipw2100_priv *priv)
static const struct libipw_geo ipw_geos[] = ;
static int ipw2100_up(struct ipw2100_priv *priv, int deferred)
static void ipw2100_down(struct ipw2100_priv *priv)
static int ipw2100_net_init(struct net_device *dev)
static void ipw2100_reset_adapter(struct work_struct *work)
static void isr_indicate_associated(struct ipw2100_priv *priv, u32 status)
static int ipw2100_set_essid(struct ipw2100_priv *priv, char *essid,
int length, int batch_mode)
static void isr_indicate_association_lost(struct ipw2100_priv *priv, u32 status)
static void isr_indicate_rf_kill(struct ipw2100_priv *priv, u32 status)
static void send_scan_event(void *data)
static void ipw2100_scan_event_later(struct work_struct *work)
static void ipw2100_scan_event_now(struct work_struct *work)
static void isr_scan_complete(struct ipw2100_priv *priv, u32 status)
#define IPW2100_HANDLER(v, f)
struct ipw2100_status_indicator ;
#define IPW2100_HANDLER(v, f)
struct ipw2100_status_indicator ;
static void isr_indicate_scanning(struct ipw2100_priv *priv, u32 status)
static const struct ipw2100_status_indicator status_handlers[] = ;
static void isr_status_change(struct ipw2100_priv *priv, int status)
static void isr_rx_complete_command(struct ipw2100_priv *priv,
struct ipw2100_cmd_header *cmd)
static const char *frame_types[] = ;
static int ipw2100_alloc_skb(struct ipw2100_priv *priv,
struct ipw2100_rx_packet *packet)
#define SEARCH_ERROR   0xffffffff
#define SEARCH_FAIL    0xfffffffe
#define SEARCH_SUCCESS 0xfffffff0
#define SEARCH_DISCARD 0
#define SEARCH_SNAPSHOT 1
#define SNAPSHOT_ADDR(ofs) (priv->snapshot[((ofs) >> 12) & 0xff] + ((ofs) & 0xfff))
static void ipw2100_snapshot_free(struct ipw2100_priv *priv)
static int ipw2100_snapshot_alloc(struct ipw2100_priv *priv)
static u32 ipw2100_match_buf(struct ipw2100_priv *priv, u8 * in_buf,
size_t len, int mode)
static u8 packet_data[IPW_RX_NIC_BUFFER_LENGTH];
static void ipw2100_corruption_detected(struct ipw2100_priv *priv, int i)
static void isr_rx(struct ipw2100_priv *priv, int i,
struct libipw_rx_stats *stats)
static void isr_rx_monitor(struct ipw2100_priv *priv, int i,
struct libipw_rx_stats *stats)
static int ipw2100_corruption_check(struct ipw2100_priv *priv, int i)
static void __ipw2100_rx_process(struct ipw2100_priv *priv)
static int __ipw2100_tx_process(struct ipw2100_priv *priv)
static inline void __ipw2100_tx_complete(struct ipw2100_priv *priv)
static void ipw2100_tx_send_commands(struct ipw2100_priv *priv)
static void ipw2100_tx_send_data(struct ipw2100_priv *priv)
static void ipw2100_irq_tasklet(struct ipw2100_priv *priv)
static irqreturn_t ipw2100_interrupt(int irq, void *data)
static netdev_tx_t ipw2100_tx(struct libipw_txb *txb,
struct net_device *dev, int pri)
static int ipw2100_msg_allocate(struct ipw2100_priv *priv)
static int ipw2100_msg_initialize(struct ipw2100_priv *priv)
static void ipw2100_msg_free(struct ipw2100_priv *priv)
static ssize_t show_pci(struct device *d, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(pci, S_IRUGO, show_pci, NULL);
static ssize_t show_cfg(struct device *d, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(cfg, S_IRUGO, show_cfg, NULL);
static ssize_t show_status(struct device *d, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(status, S_IRUGO, show_status, NULL);
static ssize_t show_capability(struct device *d, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(capability, S_IRUGO, show_capability, NULL);
#define IPW2100_REG(x)
static const struct  hw_data[] = ;
#define IPW2100_NIC(x, s)
static const struct  nic_data[] = ;
#define IPW2100_ORD(x, d)
static const struct  ord_data[] = ;
static ssize_t show_registers(struct device *d, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(registers, S_IRUGO, show_registers, NULL);
static ssize_t show_hardware(struct device *d, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(hardware, S_IRUGO, show_hardware, NULL);
static ssize_t show_memory(struct device *d, struct device_attribute *attr,
char *buf)
static ssize_t store_memory(struct device *d, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(memory, S_IWUSR | S_IRUGO, show_memory, store_memory);
static ssize_t show_ordinals(struct device *d, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(ordinals, S_IRUGO, show_ordinals, NULL);
static ssize_t show_stats(struct device *d, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(stats, S_IRUGO, show_stats, NULL);
static int ipw2100_switch_mode(struct ipw2100_priv *priv, u32 mode)
static ssize_t show_internals(struct device *d, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(internals, S_IRUGO, show_internals, NULL);
static ssize_t show_bssinfo(struct device *d, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(bssinfo, S_IRUGO, show_bssinfo, NULL);
static ssize_t show_debug_level(struct device_driver *d, char *buf)
static ssize_t store_debug_level(struct device_driver *d,
const char *buf, size_t count)
static DRIVER_ATTR(debug_level, S_IWUSR | S_IRUGO, show_debug_level,
store_debug_level);
static ssize_t show_fatal_error(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t store_fatal_error(struct device *d,
struct device_attribute *attr, const char *buf,
size_t count)
static DEVICE_ATTR(fatal_error, S_IWUSR | S_IRUGO, show_fatal_error,
store_fatal_error);
static ssize_t show_scan_age(struct device *d, struct device_attribute *attr,
char *buf)
static ssize_t store_scan_age(struct device *d, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(scan_age, S_IWUSR | S_IRUGO, show_scan_age, store_scan_age);
static ssize_t show_rf_kill(struct device *d, struct device_attribute *attr,
char *buf)
static int ipw_radio_kill_sw(struct ipw2100_priv *priv, int disable_radio)
static ssize_t store_rf_kill(struct device *d, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(rf_kill, S_IWUSR | S_IRUGO, show_rf_kill, store_rf_kill);
static struct attribute *ipw2100_sysfs_entries[] = ;
static struct attribute_group ipw2100_attribute_group = ;
static int status_queue_allocate(struct ipw2100_priv *priv, int entries)
static void status_queue_free(struct ipw2100_priv *priv)
static int bd_queue_allocate(struct ipw2100_priv *priv,
struct ipw2100_bd_queue *q, int entries)
static void bd_queue_free(struct ipw2100_priv *priv, struct ipw2100_bd_queue *q)
static void bd_queue_initialize(struct ipw2100_priv *priv,
struct ipw2100_bd_queue *q, u32 base, u32 size,
u32 r, u32 w)
static void ipw2100_kill_works(struct ipw2100_priv *priv)
static int ipw2100_tx_allocate(struct ipw2100_priv *priv)
static void ipw2100_tx_initialize(struct ipw2100_priv *priv)
static void ipw2100_tx_free(struct ipw2100_priv *priv)
static int ipw2100_rx_allocate(struct ipw2100_priv *priv)
static void ipw2100_rx_initialize(struct ipw2100_priv *priv)
static void ipw2100_rx_free(struct ipw2100_priv *priv)
static int ipw2100_read_mac_address(struct ipw2100_priv *priv)
static int ipw2100_set_mac_address(struct ipw2100_priv *priv, int batch_mode)
static int ipw2100_set_port_type(struct ipw2100_priv *priv, u32 port_type,
int batch_mode)
static int ipw2100_set_channel(struct ipw2100_priv *priv, u32 channel,
int batch_mode)
static int ipw2100_system_config(struct ipw2100_priv *priv, int batch_mode)
static int ipw2100_set_tx_rates(struct ipw2100_priv *priv, u32 rate,
int batch_mode)
static int ipw2100_set_power_mode(struct ipw2100_priv *priv, int power_level)
static int ipw2100_set_rts_threshold(struct ipw2100_priv *priv, u32 threshold)
static int ipw2100_set_short_retry(struct ipw2100_priv *priv, u32 retry)
static int ipw2100_set_long_retry(struct ipw2100_priv *priv, u32 retry)
static int ipw2100_set_mandatory_bssid(struct ipw2100_priv *priv, u8 * bssid,
int batch_mode)
static int ipw2100_disassociate_bssid(struct ipw2100_priv *priv)
static int ipw2100_set_wpa_ie(struct ipw2100_priv *,
struct ipw2100_wpa_assoc_frame *, int)
__attribute__ ((unused));
static int ipw2100_set_wpa_ie(struct ipw2100_priv *priv,
struct ipw2100_wpa_assoc_frame *wpa_frame,
int batch_mode)
struct security_info_params  __packed;
static int ipw2100_set_security_information(struct ipw2100_priv *priv,
int auth_mode,
int security_level,
int unicast_using_group,
int batch_mode)
static int ipw2100_set_tx_power(struct ipw2100_priv *priv, u32 tx_power)
static int ipw2100_set_ibss_beacon_interval(struct ipw2100_priv *priv,
u32 interval, int batch_mode)
static void ipw2100_queues_initialize(struct ipw2100_priv *priv)
static void ipw2100_queues_free(struct ipw2100_priv *priv)
static int ipw2100_queues_allocate(struct ipw2100_priv *priv)
#define IPW_PRIVACY_CAPABLE 0x0008
static int ipw2100_set_wep_flags(struct ipw2100_priv *priv, u32 flags,
int batch_mode)
struct ipw2100_wep_key ;
#define WEP_FMT_64  "%02X%02X%02X%02X-%02X"
#define WEP_FMT_128 "%02X%02X%02X%02X-%02X%02X%02X%02X-%02X%02X%02X"
#define WEP_STR_64(x) x[0],x[1],x[2],x[3],x[4]
#define WEP_STR_128(x) x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],x[8],x[9],x[10]
static int ipw2100_set_key(struct ipw2100_priv *priv,
int idx, char *key, int len, int batch_mode)
static int ipw2100_set_key_index(struct ipw2100_priv *priv,
int idx, int batch_mode)
static int ipw2100_configure_security(struct ipw2100_priv *priv, int batch_mode)
static void ipw2100_security_work(struct work_struct *work)
static void shim__set_security(struct net_device *dev,
struct libipw_security *sec)
static int ipw2100_adapter_setup(struct ipw2100_priv *priv)
static int ipw2100_set_address(struct net_device *dev, void *p)
static int ipw2100_open(struct net_device *dev)
static int ipw2100_close(struct net_device *dev)
static void ipw2100_tx_timeout(struct net_device *dev)
static int ipw2100_wpa_enable(struct ipw2100_priv *priv, int value)
static int ipw2100_wpa_set_auth_algs(struct ipw2100_priv *priv, int value)
static void ipw2100_wpa_assoc_frame(struct ipw2100_priv *priv,
char *wpa_ie, int wpa_ie_len)
static void ipw_ethtool_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static u32 ipw2100_ethtool_get_link(struct net_device *dev)
static const struct ethtool_ops ipw2100_ethtool_ops = ;
static void ipw2100_hang_check(struct work_struct *work)
static void ipw2100_rf_kill(struct work_struct *work)
static void ipw2100_irq_tasklet(struct ipw2100_priv *priv);
static const struct net_device_ops ipw2100_netdev_ops = ;
static struct net_device *ipw2100_alloc_device(struct pci_dev *pci_dev,
void __iomem * base_addr,
unsigned long mem_start,
unsigned long mem_len)
static int ipw2100_pci_init_one(struct pci_dev *pci_dev,
const struct pci_device_id *ent)
static void __devexit ipw2100_pci_remove_one(struct pci_dev *pci_dev)
static int ipw2100_suspend(struct pci_dev *pci_dev, pm_message_t state)
static int ipw2100_resume(struct pci_dev *pci_dev)
static void ipw2100_shutdown(struct pci_dev *pci_dev)
#define IPW2100_DEV_ID(x)
static DEFINE_PCI_DEVICE_TABLE(ipw2100_pci_id_table) = ;
MODULE_DEVICE_TABLE(pci, ipw2100_pci_id_table);
static struct pci_driver ipw2100_pci_driver = ;
static int __init ipw2100_init(void)
static void __exit ipw2100_exit(void)
module_init(ipw2100_init);
module_exit(ipw2100_exit);
static int ipw2100_wx_get_name(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_set_freq(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_get_freq(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_set_mode(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_get_mode(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
#define POWER_MODES 5
static const s32 timeout_duration[POWER_MODES] = ;
static const s32 period_duration[POWER_MODES] = ;
static int ipw2100_wx_get_range(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_set_wap(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_get_wap(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_set_essid(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_get_essid(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_set_nick(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_get_nick(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_set_rate(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_get_rate(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_set_rts(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_get_rts(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_set_txpow(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_get_txpow(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_set_frag(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_get_frag(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_set_retry(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_get_retry(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_set_scan(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_get_scan(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_set_encode(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *key)
static int ipw2100_wx_get_encode(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *key)
static int ipw2100_wx_set_power(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_get_power(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_set_genie(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_get_genie(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_set_auth(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_get_auth(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_set_encodeext(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_get_encodeext(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_set_mlme(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_set_promisc(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_reset(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_set_powermode(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
#define MAX_POWER_STRING 80
static int ipw2100_wx_get_powermode(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_set_preamble(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_get_preamble(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_set_crc_check(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw2100_wx_get_crc_check(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static iw_handler ipw2100_wx_handlers[] = ;
#define IPW2100_PRIV_SET_MONITOR	SIOCIWFIRSTPRIV
#define IPW2100_PRIV_RESET		SIOCIWFIRSTPRIV+1
#define IPW2100_PRIV_SET_POWER		SIOCIWFIRSTPRIV+2
#define IPW2100_PRIV_GET_POWER		SIOCIWFIRSTPRIV+3
#define IPW2100_PRIV_SET_LONGPREAMBLE	SIOCIWFIRSTPRIV+4
#define IPW2100_PRIV_GET_LONGPREAMBLE	SIOCIWFIRSTPRIV+5
#define IPW2100_PRIV_SET_CRC_CHECK	SIOCIWFIRSTPRIV+6
#define IPW2100_PRIV_GET_CRC_CHECK	SIOCIWFIRSTPRIV+7
static const struct iw_priv_args ipw2100_private_args[] = ;
static iw_handler ipw2100_private_handler[] = ;
static struct iw_statistics *ipw2100_wx_wireless_stats(struct net_device *dev)
static struct iw_handler_def ipw2100_wx_handler_def = ;
static void ipw2100_wx_event_work(struct work_struct *work)
#define IPW2100_FW_MAJOR_VERSION 1
#define IPW2100_FW_MINOR_VERSION 3
#define IPW2100_FW_MINOR(x) ((x & 0xff) >> 8)
#define IPW2100_FW_MAJOR(x) (x & 0xff)
#define IPW2100_FW_VERSION ((IPW2100_FW_MINOR_VERSION << 8) | \
IPW2100_FW_MAJOR_VERSION)
#define IPW2100_FW_PREFIX "ipw2100-" __stringify(IPW2100_FW_MAJOR_VERSION) \
"." __stringify(IPW2100_FW_MINOR_VERSION)
#define IPW2100_FW_NAME(x) IPW2100_FW_PREFIX "" x ".fw"
struct ipw2100_fw_header  __packed;
static int ipw2100_mod_firmware_load(struct ipw2100_fw *fw)
static int ipw2100_get_firmware(struct ipw2100_priv *priv,
struct ipw2100_fw *fw)
MODULE_FIRMWARE(IPW2100_FW_NAME("-i"));
MODULE_FIRMWARE(IPW2100_FW_NAME("-p"));
MODULE_FIRMWARE(IPW2100_FW_NAME(""));
static void ipw2100_release_firmware(struct ipw2100_priv *priv,
struct ipw2100_fw *fw)
static int ipw2100_get_fwversion(struct ipw2100_priv *priv, char *buf,
size_t max)
static int ipw2100_get_ucodeversion(struct ipw2100_priv *priv, char *buf,
size_t max)
static int ipw2100_fw_download(struct ipw2100_priv *priv, struct ipw2100_fw *fw)
struct symbol_alive_response ;
static int ipw2100_ucode_download(struct ipw2100_priv *priv,
struct ipw2100_fw *fw)
