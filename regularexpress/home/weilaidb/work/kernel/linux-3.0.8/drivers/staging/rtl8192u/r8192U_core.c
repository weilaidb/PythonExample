double __floatsidf (int i)
unsigned int __fixunsdfsi (double d)
double __adddf3(double a, double b)
double __addsf3(float a, float b)
double __subdf3(double a, double b)
double __extendsfdf2(float a)
#undef LOOP_TEST
#undef DUMP_RX
#undef DUMP_TX
#undef DEBUG_TX_DESC2
#undef RX_DONT_PASS_UL
#undef DEBUG_EPROM
#undef DEBUG_RX_VERBOSE
#undef DUMMY_RX
#undef DEBUG_ZERO_RX
#undef DEBUG_RX_SKB
#undef DEBUG_TX_FRAG
#undef DEBUG_RX_FRAG
#undef DEBUG_TX_FILLDESC
#undef DEBUG_TX
#undef DEBUG_IRQ
#undef DEBUG_RX
#undef DEBUG_RXALLOC
#undef DEBUG_REGISTERS
#undef DEBUG_RING
#undef DEBUG_IRQ_TASKLET
#undef DEBUG_TX_ALLOC
#undef DEBUG_TX_DESC
#define CONFIG_RTL8192_IO_MAP
u32 rt_global_debug_component = \
COMP_DOWN	|
COMP_SEC	|
COMP_ERR ;
#define TOTAL_CAM_ENTRY 32
#define CAM_CONTENT_COUNT 8
static const struct usb_device_id rtl8192_usb_id_tbl[] = ;
MODULE_LICENSE("GPL");
MODULE_VERSION("V 1.1");
MODULE_DEVICE_TABLE(usb, rtl8192_usb_id_tbl);
MODULE_DESCRIPTION("Linux driver for Realtek RTL8192 USB WiFi cards");
static char* ifname = "wlan%d";
static int hwwep = 1;
static int channels = 0x3fff;
module_param(ifname, charp, S_IRUGO|S_IWUSR );
module_param(hwwep,int, S_IRUGO|S_IWUSR);
module_param(channels,int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(ifname," Net interface name, wlan%d=default");
MODULE_PARM_DESC(hwwep," Try to use hardware security support. ");
MODULE_PARM_DESC(channels," Channel bitmask for specific locales. NYI");
static int __devinit rtl8192_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id);
static void __devexit rtl8192_usb_disconnect(struct usb_interface *intf);
static struct usb_driver rtl8192_usb_driver = ;
typedef struct _CHANNEL_LIST
CHANNEL_LIST, *PCHANNEL_LIST;
static CHANNEL_LIST ChannelPlan[] = ;
static void rtl819x_set_channel_map(u8 channel_plan, struct r8192_priv* priv)
#define 	rx_hal_is_cck_rate(_pdrvinfo)\
(_pdrvinfo->RxRate == DESC90_RATE1M ||\
_pdrvinfo->RxRate == DESC90_RATE2M ||\
_pdrvinfo->RxRate == DESC90_RATE5_5M ||\
_pdrvinfo->RxRate == DESC90_RATE11M) &&\
!_pdrvinfo->RxHT\
void CamResetAllEntry(struct net_device *dev)
void write_cam(struct net_device *dev, u8 addr, u32 data)
u32 read_cam(struct net_device *dev, u8 addr)
void write_nic_byte_E(struct net_device *dev, int indx, u8 data)
u8 read_nic_byte_E(struct net_device *dev, int indx)
void write_nic_byte(struct net_device *dev, int indx, u8 data)
void write_nic_word(struct net_device *dev, int indx, u16 data)
void write_nic_dword(struct net_device *dev, int indx, u32 data)
u8 read_nic_byte(struct net_device *dev, int indx)
u16 read_nic_word(struct net_device *dev, int indx)
u16 read_nic_word_E(struct net_device *dev, int indx)
u32 read_nic_dword(struct net_device *dev, int indx)
inline void force_pci_posting(struct net_device *dev)
static struct net_device_stats *rtl8192_stats(struct net_device *dev);
void rtl8192_commit(struct net_device *dev);
void rtl8192_restart(struct work_struct *work);
void watch_dog_timer_callback(unsigned long data);
static struct proc_dir_entry *rtl8192_proc;
static int proc_get_stats_ap(char *page, char **start, off_t offset, int count,
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
void rtl8192_proc_module_init(void)
void rtl8192_proc_module_remove(void)
void rtl8192_proc_remove_one(struct net_device *dev)
void rtl8192_proc_init_one(struct net_device *dev)
void print_buffer(u32 *buffer, int len)
short check_nic_enough_desc(struct net_device *dev,int queue_index)
void tx_timeout(struct net_device *dev)
void dump_eprom(struct net_device *dev)
void rtl8192_dump_reg(struct net_device *dev)
void rtl8192_set_mode(struct net_device *dev,int mode)
void rtl8192_update_msr(struct net_device *dev)
void rtl8192_set_chan(struct net_device *dev,short ch)
static void rtl8192_rx_isr(struct urb *urb);
u32 get_rxpacket_shiftbytes_819xusb(struct ieee80211_rx_stats *pstats)
static int rtl8192_rx_initiate(struct net_device*dev)
void rtl8192_set_rxconf(struct net_device *dev)
void rtl8192_rx_enable(struct net_device *dev)
void rtl8192_tx_enable(struct net_device *dev)
void rtl8192_rtx_disable(struct net_device *dev)
int alloc_tx_beacon_desc_ring(struct net_device *dev, int count)
inline u16 ieeerate2rtlrate(int rate)
static u16 rtl_rate[] = ;
inline u16 rtl8192_rate2rate(short rate)
static void rtl8192_rx_isr(struct urb *urb)
u32
rtl819xusb_rx_command_packet(
struct net_device *dev,
struct ieee80211_rx_stats *pstats
)
void rtl8192_data_hard_stop(struct net_device *dev)
void rtl8192_data_hard_resume(struct net_device *dev)
void rtl8192_hard_data_xmit(struct sk_buff *skb, struct net_device *dev, int rate)
int rtl8192_hard_start_xmit(struct sk_buff *skb,struct net_device *dev)
void rtl8192_try_wake_queue(struct net_device *dev, int pri);
u16 DrvAggr_PaddingAdd(struct net_device *dev, struct sk_buff *skb)
u8 MRateToHwRate8190Pci(u8 rate);
u8 QueryIsShort(u8 TxHT, u8 TxRate, cb_desc *tcb_desc);
u8 MapHwQueueToFirmwareQueue(u8 QueueID);
struct sk_buff *DrvAggr_Aggregation(struct net_device *dev, struct ieee80211_drv_agg_txb *pSendList)
u8 DrvAggr_GetAggregatibleList(struct net_device *dev, struct sk_buff *skb,
struct ieee80211_drv_agg_txb *pSendList)
static void rtl8192_tx_isr(struct urb *tx_urb)
void rtl8192_beacon_stop(struct net_device *dev)
void rtl8192_config_rate(struct net_device* dev, u16* rate_config)
#define SHORT_SLOT_TIME 9
#define NON_SHORT_SLOT_TIME 20
void rtl8192_update_cap(struct net_device* dev, u16 cap)
void rtl8192_net_update(struct net_device *dev)
void rtl819xusb_beacon_tx(struct net_device *dev,u16  tx_rate)
inline u8 rtl8192_IsWirelessBMode(u16 rate)
u16 N_DBPSOfRate(u16 DataRate);
u16 ComputeTxTime(
u16		FrameLength,
u16		DataRate,
u8		bManagementFrame,
u8		bShortPreamble
)
u16 N_DBPSOfRate(u16 DataRate)
void rtl819xU_cmd_isr(struct urb *tx_cmd_urb, struct pt_regs *regs)
unsigned int txqueue2outpipe(struct r8192_priv* priv,unsigned int tx_queue)
short rtl819xU_tx_cmd(struct net_device *dev, struct sk_buff *skb)
u8 MapHwQueueToFirmwareQueue(u8 QueueID)
u8 MRateToHwRate8190Pci(u8 rate)
u8 QueryIsShort(u8 TxHT, u8 TxRate, cb_desc *tcb_desc)
static void tx_zero_isr(struct urb *tx_urb)
short rtl8192_tx(struct net_device *dev, struct sk_buff* skb)
short rtl8192_usb_initendpoints(struct net_device *dev)
void rtl8192_usb_deleteendpoints(struct net_device *dev)
void rtl8192_usb_deleteendpoints(struct net_device *dev)
extern void rtl8192_update_ratr_table(struct net_device* dev);
void rtl8192_link_change(struct net_device *dev)
static struct ieee80211_qos_parameters def_qos_parameters = ;
void rtl8192_update_beacon(struct work_struct * work)
int WDCAPARA_ADD[] = ;
void rtl8192_qos_activate(struct work_struct * work)
static int rtl8192_qos_handle_probe_response(struct r8192_priv *priv,
int active_network,
struct ieee80211_network *network)
static int rtl8192_handle_beacon(struct net_device * dev,
struct ieee80211_beacon * beacon,
struct ieee80211_network * network)
static int rtl8192_qos_association_resp(struct r8192_priv *priv,
struct ieee80211_network *network)
static int rtl8192_handle_assoc_response(struct net_device *dev,
struct ieee80211_assoc_response_frame *resp,
struct ieee80211_network *network)
void rtl8192_update_ratr_table(struct net_device* dev)
static u8 ccmp_ie[4] = ;
static u8 ccmp_rsn_ie[4] = ;
bool GetNmodeSupportBySecCfg8192(struct net_device*dev)
bool GetHalfNmodeSupportByAPs819xUsb(struct net_device* dev)
void rtl8192_refresh_supportrate(struct r8192_priv* priv)
u8 rtl8192_getSupportedWireleeMode(struct net_device*dev)
void rtl8192_SetWirelessMode(struct net_device* dev, u8 wireless_mode)
static void rtl8192_init_priv_variable(struct net_device* dev)
static void rtl8192_init_priv_lock(struct r8192_priv* priv)
extern  void    rtl819x_watchdog_wqcallback(struct work_struct *work);
void rtl8192_irq_rx_tasklet(struct r8192_priv *priv);
#define DRV_NAME "wlan0"
static void rtl8192_init_priv_task(struct net_device* dev)
static void rtl8192_get_eeprom_size(struct net_device* dev)
static inline u16 endian_swap(u16* data)
static void rtl8192_read_eeprom_info(struct net_device* dev)
short rtl8192_get_channel_map(struct net_device * dev)
short rtl8192_init(struct net_device *dev)
void rtl8192_hwconfig(struct net_device* dev)
bool rtl8192_adapter_start(struct net_device *dev)
static struct net_device_stats *rtl8192_stats(struct net_device *dev)
bool
HalTxCheckStuck819xUsb(
struct net_device *dev
)
RESET_TYPE
TxCheckStuck(struct net_device *dev)
bool
HalRxCheckStuck819xUsb(struct net_device *dev)
RESET_TYPE
RxCheckStuck(struct net_device *dev)
RESET_TYPE
rtl819x_ifcheck_resetornot(struct net_device *dev)
void rtl8192_cancel_deferred_work(struct r8192_priv* priv);
int _rtl8192_up(struct net_device *dev);
int rtl8192_close(struct net_device *dev);
void
CamRestoreAllEntry(	struct net_device *dev)
void
rtl819x_ifsilentreset(struct net_device *dev)
void CAM_read_entry(
struct net_device *dev,
u32	 		iIndex
)
void rtl819x_update_rxcounts(
struct r8192_priv *priv,
u32* TotalRxBcnNum,
u32* TotalRxDataNum
)
extern	void	rtl819x_watchdog_wqcallback(struct work_struct *work)
void watch_dog_timer_callback(unsigned long data)
int _rtl8192_up(struct net_device *dev)
int rtl8192_open(struct net_device *dev)
int rtl8192_up(struct net_device *dev)
int rtl8192_close(struct net_device *dev)
int rtl8192_down(struct net_device *dev)
void rtl8192_commit(struct net_device *dev)
void rtl8192_restart(struct work_struct *work)
static void r8192_set_multicast(struct net_device *dev)
int r8192_set_mac_adr(struct net_device *dev, void *mac)
int rtl8192_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
u8 HwRateToMRate90(bool bIsHT, u8 rate)
void UpdateRxPktTimeStamp8190 (struct net_device *dev, struct ieee80211_rx_stats *stats)
long rtl819x_translate_todbm(u8 signal_strength_index	)
void rtl8192_process_phyinfo(struct r8192_priv * priv,u8* buffer, struct ieee80211_rx_stats * pprevious_stats, struct ieee80211_rx_stats * pcurrent_stats)
static u8 rtl819x_query_rxpwrpercentage(
char		antpower
)
static u8
rtl819x_evm_dbtopercentage(
char value
)
long
rtl819x_signal_scale_mapping(
long currsig
)
static void rtl8192_query_rxphystatus(
struct r8192_priv * priv,
struct ieee80211_rx_stats * pstats,
rx_drvinfo_819x_usb  * pdrvinfo,
struct ieee80211_rx_stats * precord_stats,
bool bpacket_match_bssid,
bool bpacket_toself,
bool bPacketBeacon,
bool bToSelfBA
)
void
rtl8192_record_rxdesc_forlateruse(
struct ieee80211_rx_stats *	psrc_stats,
struct ieee80211_rx_stats *	ptarget_stats
)
void TranslateRxSignalStuff819xUsb(struct sk_buff *skb,
struct ieee80211_rx_stats * pstats,
rx_drvinfo_819x_usb  *pdrvinfo)
void
UpdateReceivedRateHistogramStatistics8190(
struct net_device *dev,
struct ieee80211_rx_stats *stats
)
void query_rxdesc_status(struct sk_buff *skb, struct ieee80211_rx_stats *stats, bool bIsRxAggrSubframe)
u32 GetRxPacketShiftBytes819xUsb(struct ieee80211_rx_stats  *Status, bool bIsRxAggrSubframe)
void rtl8192_rx_nomal(struct sk_buff* skb)
void
rtl819xusb_process_received_packet(
struct net_device *dev,
struct ieee80211_rx_stats *pstats
)
void query_rx_cmdpkt_desc_status(struct sk_buff *skb, struct ieee80211_rx_stats *stats)
void rtl8192_rx_cmd(struct sk_buff *skb)
void rtl8192_irq_rx_tasklet(struct r8192_priv *priv)
static const struct net_device_ops rtl8192_netdev_ops = ;
static int __devinit rtl8192_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
void rtl8192_cancel_deferred_work(struct r8192_priv* priv)
static void __devexit rtl8192_usb_disconnect(struct usb_interface *intf)
extern int ieee80211_debug_init(void);
extern void ieee80211_debug_exit(void);
extern int ieee80211_crypto_init(void);
extern void ieee80211_crypto_deinit(void);
extern int ieee80211_crypto_tkip_init(void);
extern void ieee80211_crypto_tkip_exit(void);
extern int ieee80211_crypto_ccmp_init(void);
extern void ieee80211_crypto_ccmp_exit(void);
extern int ieee80211_crypto_wep_init(void);
extern void ieee80211_crypto_wep_exit(void);
static int __init rtl8192_usb_module_init(void)
static void __exit rtl8192_usb_module_exit(void)
void rtl8192_try_wake_queue(struct net_device *dev, int pri)
void EnableHWSecurityConfig8192(struct net_device *dev)
void setKey(	struct net_device *dev,
u8 EntryNo,
u8 KeyIndex,
u16 KeyType,
u8 *MacAddr,
u8 DefaultKey,
u32 *KeyContent )
module_init(rtl8192_usb_module_init);
module_exit(rtl8192_usb_module_exit);
