u32 rt_global_debug_component = COMP_ERR ;
static DEFINE_PCI_DEVICE_TABLE(rtl8192_pci_id_tbl) = ;
static char ifname[IFNAMSIZ] = "wlan%d";
static int hwwep = 1;
static int channels = 0x3fff;
MODULE_LICENSE("GPL");
MODULE_VERSION("V 1.1");
MODULE_DEVICE_TABLE(pci, rtl8192_pci_id_tbl);
MODULE_DESCRIPTION("Linux driver for Realtek RTL819x WiFi cards");
module_param_string(ifname, ifname, sizeof(ifname), S_IRUGO|S_IWUSR);
module_param(hwwep,int, S_IRUGO|S_IWUSR);
module_param(channels,int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(ifname," Net interface name, wlan%d=default");
MODULE_PARM_DESC(hwwep," Try to use hardware WEP support. Still broken and not available on all cards");
MODULE_PARM_DESC(channels," Channel bitmask for specific locales. NYI");
static int __devinit rtl8192_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *id);
static void __devexit rtl8192_pci_disconnect(struct pci_dev *pdev);
static struct pci_driver rtl8192_pci_driver = ;
static void rtl8192_start_beacon(struct ieee80211_device *ieee80211);
static void rtl8192_stop_beacon(struct ieee80211_device *ieee80211);
static void rtl819x_watchdog_wqcallback(struct work_struct *work);
static void rtl8192_irq_rx_tasklet(unsigned long arg);
static void rtl8192_irq_tx_tasklet(unsigned long arg);
static void rtl8192_prepare_beacon(unsigned long arg);
static irqreturn_t rtl8192_interrupt(int irq, void *param);
static void rtl819xE_tx_cmd(struct r8192_priv *priv, struct sk_buff *skb);
static void rtl8192_update_ratr_table(struct r8192_priv *priv);
static void rtl8192_restart(struct work_struct *work);
static void watch_dog_timer_callback(unsigned long data);
static int _rtl8192_up(struct r8192_priv *priv);
static void rtl8192_cancel_deferred_work(struct r8192_priv* priv);
static short rtl8192_tx(struct r8192_priv *priv, struct sk_buff* skb);
typedef struct _CHANNEL_LIST
CHANNEL_LIST, *PCHANNEL_LIST;
static const CHANNEL_LIST ChannelPlan[] = ;
static void rtl819x_set_channel_map(u8 channel_plan, struct r8192_priv* priv)
static inline bool rx_hal_is_cck_rate(prx_fwinfo_819x_pci pdrvinfo)
void CamResetAllEntry(struct r8192_priv* priv)
void write_cam(struct r8192_priv *priv, u8 addr, u32 data)
u32 read_cam(struct r8192_priv *priv, u8 addr)
u8 read_nic_byte(struct r8192_priv *priv, int x)
u32 read_nic_dword(struct r8192_priv *priv, int x)
u16 read_nic_word(struct r8192_priv *priv, int x)
void write_nic_byte(struct r8192_priv *priv, int x,u8 y)
void write_nic_dword(struct r8192_priv *priv, int x,u32 y)
void write_nic_word(struct r8192_priv *priv, int x,u16 y)
u8 rtl8192e_ap_sec_type(struct ieee80211_device *ieee)
void rtl8192e_SetHwReg(struct ieee80211_device *ieee80211, u8 variable, u8 *val)
static struct proc_dir_entry *rtl8192_proc = NULL;
static int proc_get_stats_ap(char *page, char **start,
off_t offset, int count,
int *eof, void *data)
static int proc_get_registers(char *page, char **start,
off_t offset, int count,
int *eof, void *data)
static int proc_get_stats_tx(char *page, char **start,
off_t offset, int count,
int *eof, void *data)
static int proc_get_stats_rx(char *page, char **start,
off_t offset, int count,
int *eof, void *data)
static void rtl8192_proc_module_init(void)
static void rtl8192_proc_module_remove(void)
static void rtl8192_proc_remove_one(struct r8192_priv *priv)
static void rtl8192_proc_init_one(struct r8192_priv *priv)
static short check_nic_enough_desc(struct ieee80211_device *ieee, int prio)
static void tx_timeout(struct net_device *dev)
static void rtl8192_irq_enable(struct r8192_priv *priv)
static void rtl8192_irq_disable(struct r8192_priv *priv)
static void rtl8192_update_msr(struct r8192_priv *priv)
static void rtl8192_set_chan(struct ieee80211_device *ieee80211, short ch)
static void rtl8192_rx_enable(struct r8192_priv *priv)
static const u32 TX_DESC_BASE[] = ;
static void rtl8192_tx_enable(struct r8192_priv *priv)
static void rtl8192_free_rx_ring(struct r8192_priv *priv)
static void rtl8192_free_tx_ring(struct r8192_priv *priv, unsigned int prio)
void PHY_SetRtl8192eRfOff(struct r8192_priv *priv)
static void rtl8192_halt_adapter(struct r8192_priv *priv, bool reset)
static void rtl8192_data_hard_stop(struct ieee80211_device *ieee80211)
static void rtl8192_data_hard_resume(struct ieee80211_device *ieee80211)
static void rtl8192_hard_data_xmit(struct sk_buff *skb,
struct ieee80211_device *ieee80211, int rate)
static int rtl8192_hard_start_xmit(struct sk_buff *skb, struct ieee80211_device *ieee80211)
static void rtl8192_tx_isr(struct r8192_priv *priv, int prio)
static void rtl8192_stop_beacon(struct ieee80211_device *ieee80211)
static void rtl8192_config_rate(struct r8192_priv *priv, u16* rate_config)
#define SHORT_SLOT_TIME 9
#define NON_SHORT_SLOT_TIME 20
static void rtl8192_update_cap(struct r8192_priv *priv, u16 cap)
static void rtl8192_net_update(struct r8192_priv *priv)
static void rtl819xE_tx_cmd(struct r8192_priv *priv, struct sk_buff *skb)
static u8 MapHwQueueToFirmwareQueue(u8 QueueID)
static u8 MRateToHwRate8190Pci(u8 rate)
static u8 QueryIsShort(u8 TxHT, u8 TxRate, cb_desc *tcb_desc)
static short rtl8192_tx(struct r8192_priv *priv, struct sk_buff* skb)
static short rtl8192_alloc_rx_desc_ring(struct r8192_priv *priv)
static int rtl8192_alloc_tx_desc_ring(struct r8192_priv *priv,
unsigned int prio, unsigned int entries)
static short rtl8192_pci_initdescring(struct r8192_priv *priv)
static void rtl8192_pci_resetdescring(struct r8192_priv *priv)
static void rtl8192_link_change(struct ieee80211_device *ieee)
static const struct ieee80211_qos_parameters def_qos_parameters = ;
static void rtl8192_update_beacon(struct work_struct * work)
static const int WDCAPARA_ADD[] = ;
static void rtl8192_qos_activate(struct work_struct * work)
static int rtl8192_qos_handle_probe_response(struct r8192_priv *priv,
int active_network,
struct ieee80211_network *network)
static int rtl8192_handle_beacon(struct ieee80211_device *ieee,
struct ieee80211_beacon * beacon,
struct ieee80211_network * network)
static int rtl8192_qos_association_resp(struct r8192_priv *priv,
struct ieee80211_network *network)
static int rtl8192_handle_assoc_response(struct ieee80211_device *ieee,
struct ieee80211_assoc_response_frame *resp,
struct ieee80211_network *network)
static void rtl8192_update_ratr_table(struct r8192_priv* priv)
static bool GetNmodeSupportBySecCfg8190Pci(struct ieee80211_device *ieee)
static void rtl8192_refresh_supportrate(struct r8192_priv* priv)
static u8 rtl8192_getSupportedWireleeMode(void)
static void rtl8192_SetWirelessMode(struct ieee80211_device *ieee, u8 wireless_mode)
static bool GetHalfNmodeSupportByAPs819xPci(struct ieee80211_device* ieee)
static short rtl8192_is_tx_queue_empty(struct ieee80211_device *ieee)
static void rtl8192_hw_sleep_down(struct r8192_priv *priv)
static void rtl8192_hw_wakeup(struct ieee80211_device *ieee)
static void rtl8192_hw_wakeup_wq (struct work_struct *work)
#define MIN_SLEEP_TIME 50
#define MAX_SLEEP_TIME 10000
static void rtl8192_hw_to_sleep(struct ieee80211_device *ieee, u32 th, u32 tl)
static void rtl8192_init_priv_variable(struct r8192_priv *priv)
static void rtl8192_init_priv_lock(struct r8192_priv* priv)
#define DRV_NAME "wlan0"
static void rtl8192_init_priv_task(struct r8192_priv *priv)
static void rtl8192_get_eeprom_size(struct r8192_priv *priv)
static void rtl8192_read_eeprom_info(struct r8192_priv *priv)
static short rtl8192_get_channel_map(struct r8192_priv *priv)
static short rtl8192_init(struct r8192_priv *priv)
static void rtl8192_hwconfig(struct r8192_priv *priv)
static RT_STATUS rtl8192_adapter_start(struct r8192_priv *priv)
static void rtl8192_prepare_beacon(unsigned long arg)
static void rtl8192_start_beacon(struct ieee80211_device *ieee80211)
static bool HalRxCheckStuck8190Pci(struct r8192_priv *priv)
static RESET_TYPE RxCheckStuck(struct r8192_priv *priv)
static RESET_TYPE rtl819x_check_reset(struct r8192_priv *priv)
static void InactivePsWorkItemCallback(struct r8192_priv *priv)
bool MgntActSet_802_11_PowerSaveMode(struct r8192_priv *priv, u8 rtPsMode)
void LeisurePSEnter(struct ieee80211_device *ieee80211)
void LeisurePSLeave(struct ieee80211_device *ieee80211)
void IPSEnter(struct r8192_priv *priv)
void IPSLeave(struct r8192_priv *priv)
void IPSLeave_wq(struct work_struct *work)
void ieee80211_ips_leave_wq(struct ieee80211_device *ieee80211)
void ieee80211_ips_leave(struct ieee80211_device *ieee80211)
static void rtl819x_update_rxcounts(
struct r8192_priv *priv,
u32* TotalRxBcnNum,
u32* TotalRxDataNum
)
static void rtl819x_watchdog_wqcallback(struct work_struct *work)
void watch_dog_timer_callback(unsigned long data)
static int _rtl8192_up(struct r8192_priv *priv)
static int rtl8192_open(struct net_device *dev)
int rtl8192_up(struct net_device *dev)
static int rtl8192_close(struct net_device *dev)
int rtl8192_down(struct net_device *dev)
void rtl8192_commit(struct r8192_priv *priv)
static void rtl8192_restart(struct work_struct *work)
static void r8192_set_multicast(struct net_device *dev)
static int r8192_set_mac_adr(struct net_device *dev, void *mac)
static void r8192e_set_hw_key(struct r8192_priv *priv, struct ieee_param *ipw)
static int rtl8192_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static u8 HwRateToMRate90(bool bIsHT, u8 rate)
static void UpdateRxPktTimeStamp8190(struct r8192_priv *priv, struct ieee80211_rx_stats *stats)
static long rtl819x_translate_todbm(u8 signal_strength_index)
static void rtl8192_process_phyinfo(struct r8192_priv * priv, u8* buffer,struct ieee80211_rx_stats * pprevious_stats, struct ieee80211_rx_stats * pcurrent_stats)
static u8 rtl819x_query_rxpwrpercentage(
char		antpower
)
static u8
rtl819x_evm_dbtopercentage(
char value
)
static long rtl819x_signal_scale_mapping(long currsig)
static void rtl8192_query_rxphystatus(
struct r8192_priv * priv,
struct ieee80211_rx_stats * pstats,
prx_desc_819x_pci  pdesc,
prx_fwinfo_819x_pci   pdrvinfo,
struct ieee80211_rx_stats * precord_stats,
bool bpacket_match_bssid,
bool bpacket_toself,
bool bPacketBeacon,
bool bToSelfBA
)
static void
rtl8192_record_rxdesc_forlateruse(
struct ieee80211_rx_stats * psrc_stats,
struct ieee80211_rx_stats * ptarget_stats
)
static void TranslateRxSignalStuff819xpci(struct r8192_priv *priv,
struct sk_buff *skb,
struct ieee80211_rx_stats * pstats,
prx_desc_819x_pci pdesc,
prx_fwinfo_819x_pci pdrvinfo)
static void rtl8192_tx_resume(struct r8192_priv *priv)
static void rtl8192_irq_tx_tasklet(unsigned long arg)
static void UpdateReceivedRateHistogramStatistics8190(
struct r8192_priv *priv,
struct ieee80211_rx_stats* pstats
)
static void rtl8192_rx(struct r8192_priv *priv)
static void rtl8192_irq_rx_tasklet(unsigned long arg)
static const struct net_device_ops rtl8192_netdev_ops = ;
static int __devinit rtl8192_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void rtl8192_cancel_deferred_work(struct r8192_priv* priv)
static void __devexit rtl8192_pci_disconnect(struct pci_dev *pdev)
extern int ieee80211_rtl_init(void);
extern void ieee80211_rtl_exit(void);
static int __init rtl8192_pci_module_init(void)
static void __exit rtl8192_pci_module_exit(void)
static irqreturn_t rtl8192_interrupt(int irq, void *param)
void EnableHWSecurityConfig8192(struct r8192_priv *priv)
#define TOTAL_CAM_ENTRY 32
void setKey(struct r8192_priv *priv, u8 EntryNo, u8 KeyIndex, u16 KeyType,
const u8 *MacAddr, u8 DefaultKey, u32 *KeyContent)
bool NicIFEnableNIC(struct r8192_priv *priv)
bool NicIFDisableNIC(struct r8192_priv *priv)
module_init(rtl8192_pci_module_init);
module_exit(rtl8192_pci_module_exit);
