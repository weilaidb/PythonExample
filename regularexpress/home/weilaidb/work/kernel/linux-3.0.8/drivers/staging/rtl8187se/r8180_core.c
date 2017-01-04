#undef RX_DONT_PASS_UL
#undef DUMMY_RX
static struct pci_device_id rtl8180_pci_id_tbl[] __devinitdata = ;
static char ifname[IFNAMSIZ] = "wlan%d";
static int hwseqnum = 0;
static int hwwep = 0;
static int channels = 0x3fff;
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, rtl8180_pci_id_tbl);
MODULE_AUTHOR("Andrea Merello <andreamrl@tiscali.it>");
MODULE_DESCRIPTION("Linux driver for Realtek RTL8180 / RTL8185 WiFi cards");
module_param_string(ifname, ifname, sizeof(ifname), S_IRUGO|S_IWUSR);
module_param(hwseqnum, int, S_IRUGO|S_IWUSR);
module_param(hwwep, int, S_IRUGO|S_IWUSR);
module_param(channels, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(devname, " Net interface name, wlan%d=default");
MODULE_PARM_DESC(hwseqnum, " Try to use hardware 802.11 header sequence numbers. Zero=default");
MODULE_PARM_DESC(hwwep, " Try to use hardware WEP support. Still broken and not available on all cards");
MODULE_PARM_DESC(channels, " Channel bitmask for specific locales. NYI");
static int __devinit rtl8180_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *id);
static void __devexit rtl8180_pci_remove(struct pci_dev *pdev);
static void rtl8180_shutdown(struct pci_dev *pdev)
static int rtl8180_suspend(struct pci_dev *pdev, pm_message_t state)
static int rtl8180_resume(struct pci_dev *pdev)
static struct pci_driver rtl8180_pci_driver = ;
u8 read_nic_byte(struct net_device *dev, int x)
u32 read_nic_dword(struct net_device *dev, int x)
u16 read_nic_word(struct net_device *dev, int x)
void write_nic_byte(struct net_device *dev, int x, u8 y)
void write_nic_dword(struct net_device *dev, int x, u32 y)
void write_nic_word(struct net_device *dev, int x, u16 y)
inline void force_pci_posting(struct net_device *dev)
irqreturn_t rtl8180_interrupt(int irq, void *netdev, struct pt_regs *regs);
void set_nic_rxring(struct net_device *dev);
void set_nic_txring(struct net_device *dev);
static struct net_device_stats *rtl8180_stats(struct net_device *dev);
void rtl8180_commit(struct net_device *dev);
void rtl8180_start_tx_beacon(struct net_device *dev);
static struct proc_dir_entry *rtl8180_proc = NULL;
static int proc_get_registers(char *page, char **start,
off_t offset, int count,
int *eof, void *data)
int get_curr_tx_free_desc(struct net_device *dev, int priority);
static int proc_get_stats_hw(char *page, char **start,
off_t offset, int count,
int *eof, void *data)
static int proc_get_stats_rx(char *page, char **start,
off_t offset, int count,
int *eof, void *data)
static int proc_get_stats_tx(char *page, char **start,
off_t offset, int count,
int *eof, void *data)
void rtl8180_proc_module_init(void)
void rtl8180_proc_module_remove(void)
void rtl8180_proc_remove_one(struct net_device *dev)
void rtl8180_proc_init_one(struct net_device *dev)
short buffer_add(struct buffer **buffer, u32 *buf, dma_addr_t dma,
struct buffer **bufferhead)
void buffer_free(struct net_device *dev, struct buffer **buffer, int len, short consistent)
void print_buffer(u32 *buffer, int len)
int get_curr_tx_free_desc(struct net_device *dev, int priority)
short check_nic_enought_desc(struct net_device *dev, int priority)
void fix_tx_fifo(struct net_device *dev)
void fix_rx_fifo(struct net_device *dev)
unsigned char QUALITY_MAP[] = ;
unsigned char STRENGTH_MAP[] = ;
void rtl8180_RSSI_calc(struct net_device *dev, u8 *rssi, u8 *qual)
void rtl8180_irq_enable(struct net_device *dev)
void rtl8180_irq_disable(struct net_device *dev)
void rtl8180_set_mode(struct net_device *dev, int mode)
void rtl8180_adapter_start(struct net_device *dev);
void rtl8180_beacon_tx_enable(struct net_device *dev);
void rtl8180_update_msr(struct net_device *dev)
void rtl8180_set_chan(struct net_device *dev, short ch)
void rtl8180_rx_enable(struct net_device *dev)
void set_nic_txring(struct net_device *dev)
void rtl8180_conttx_enable(struct net_device *dev)
void rtl8180_conttx_disable(struct net_device *dev)
void rtl8180_tx_enable(struct net_device *dev)
void rtl8180_beacon_tx_enable(struct net_device *dev)
void rtl8180_beacon_tx_disable(struct net_device *dev)
void rtl8180_rtx_disable(struct net_device *dev)
short alloc_tx_desc_ring(struct net_device *dev, int bufsize, int count,
int addr)
void free_tx_desc_rings(struct net_device *dev)
void free_rx_desc_ring(struct net_device *dev)
short alloc_rx_desc_ring(struct net_device *dev, u16 bufsize, int count)
void set_nic_rxring(struct net_device *dev)
void rtl8180_reset(struct net_device *dev)
inline u16 ieeerate2rtlrate(int rate)
static u16 rtl_rate[] = ;
inline u16 rtl8180_rate2rate(short rate)
inline u8 rtl8180_IsWirelessBMode(u16 rate)
u16 N_DBPSOfRate(u16 DataRate);
u16 ComputeTxTime(u16 FrameLength, u16 DataRate, u8 bManagementFrame,
u8 bShortPreamble)
u16 N_DBPSOfRate(u16 DataRate)
long NetgearSignalStrengthTranslate(long LastSS, long CurrSS)
long TranslateToDbm8185(u8 SignalStrengthIndex)
void PerformUndecoratedSignalSmoothing8185(struct r8180_priv *priv,
bool bCckRate)
void rtl8180_rx(struct net_device *dev)
void rtl8180_dma_kick(struct net_device *dev, int priority)
void rtl8180_data_hard_stop(struct net_device *dev)
void rtl8180_data_hard_resume(struct net_device *dev)
void rtl8180_hard_data_xmit(struct sk_buff *skb, struct net_device *dev, int
rate)
int rtl8180_hard_start_xmit(struct sk_buff *skb, struct net_device *dev)
u16 rtl8180_len2duration(u32 len, short rate, short *ext)
void rtl8180_prepare_beacon(struct net_device *dev)
short rtl8180_tx(struct net_device *dev, u8* txbuf, int len, int priority,
short morefrag, short descfrag, int rate)
void rtl8180_irq_rx_tasklet(struct r8180_priv *priv);
void rtl8180_link_change(struct net_device *dev)
void rtl8180_rq_tx_ack(struct net_device *dev)
short rtl8180_is_tx_queue_empty(struct net_device *dev)
#define HW_WAKE_DELAY 5
void rtl8180_hw_wakeup(struct net_device *dev)
void rtl8180_hw_sleep_down(struct net_device *dev)
void rtl8180_hw_sleep(struct net_device *dev, u32 th, u32 tl)
void rtl8180_wmm_param_update(struct work_struct *work)
void rtl8180_tx_irq_wq(struct work_struct *work);
void rtl8180_restart_wq(struct work_struct *work);
void rtl8180_watch_dog_wq(struct work_struct *work);
void rtl8180_hw_wakeup_wq(struct work_struct *work);
void rtl8180_hw_sleep_wq(struct work_struct *work);
void rtl8180_sw_antenna_wq(struct work_struct *work);
void rtl8180_watch_dog(struct net_device *dev);
void watch_dog_adaptive(unsigned long data)
static CHANNEL_LIST ChannelPlan[] =
void GPIOChangeRFWorkItemCallBack(struct work_struct *work);
static void rtl8180_statistics_init(struct Stats *pstats)
static void rtl8180_link_detect_init(plink_detect_t plink_detect)
static void rtl8187se_eeprom_register_read(struct eeprom_93cx6 *eeprom)
static void rtl8187se_eeprom_register_write(struct eeprom_93cx6 *eeprom)
short rtl8180_init(struct net_device *dev)
void rtl8180_no_hw_wep(struct net_device *dev)
void rtl8180_set_hw_wep(struct net_device *dev)
void rtl8185_rf_pins_enable(struct net_device *dev)
void rtl8185_set_anaparam2(struct net_device *dev, u32 a)
void rtl8180_set_anaparam(struct net_device *dev, u32 a)
void rtl8185_tx_antenna(struct net_device *dev, u8 ant)
void rtl8185_write_phy(struct net_device *dev, u8 adr, u32 data)
inline void write_phy_ofdm(struct net_device *dev, u8 adr, u32 data)
void write_phy_cck(struct net_device *dev, u8 adr, u32 data)
void rtl8185_set_rate(struct net_device *dev)
void rtl8180_adapter_start(struct net_device *dev)
void rtl8180_start_tx_beacon(struct net_device *dev)
static struct net_device_stats *rtl8180_stats(struct net_device *dev)
bool
MgntActSet_802_11_PowerSaveMode(
struct r8180_priv *priv,
RT_PS_MODE		rtPsMode
)
void LeisurePSEnter(struct r8180_priv *priv)
void LeisurePSLeave(struct r8180_priv *priv)
void rtl8180_hw_wakeup_wq(struct work_struct *work)
void rtl8180_hw_sleep_wq(struct work_struct *work)
static void MgntLinkKeepAlive(struct r8180_priv *priv)
static u8 read_acadapter_file(char *filename);
void rtl8180_watch_dog(struct net_device *dev)
int _rtl8180_up(struct net_device *dev)
int rtl8180_open(struct net_device *dev)
int rtl8180_up(struct net_device *dev)
int rtl8180_close(struct net_device *dev)
int rtl8180_down(struct net_device *dev)
void rtl8180_restart_wq(struct work_struct *work)
void rtl8180_restart(struct net_device *dev)
void rtl8180_commit(struct net_device *dev)
static void r8180_set_multicast(struct net_device *dev)
int r8180_set_mac_adr(struct net_device *dev, void *mac)
int rtl8180_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static const struct net_device_ops rtl8180_netdev_ops = ;
static int __devinit rtl8180_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit rtl8180_pci_remove(struct pci_dev *pdev)
extern int ieee80211_crypto_init(void);
extern void ieee80211_crypto_deinit(void);
extern int ieee80211_crypto_tkip_init(void);
extern void ieee80211_crypto_tkip_exit(void);
extern int ieee80211_crypto_ccmp_init(void);
extern void ieee80211_crypto_ccmp_exit(void);
extern int ieee80211_crypto_wep_init(void);
extern void ieee80211_crypto_wep_exit(void);
static int __init rtl8180_pci_module_init(void)
static void __exit rtl8180_pci_module_exit(void)
void rtl8180_try_wake_queue(struct net_device *dev, int pri)
void rtl8180_tx_isr(struct net_device *dev, int pri, short error)
void rtl8180_tx_irq_wq(struct work_struct *work)
irqreturn_t rtl8180_interrupt(int irq, void *netdev, struct pt_regs *regs)
void rtl8180_irq_rx_tasklet(struct r8180_priv *priv)
void GPIOChangeRFWorkItemCallBack(struct work_struct *work)
static u8 read_acadapter_file(char *filename)
module_init(rtl8180_pci_module_init);
module_exit(rtl8180_pci_module_exit);
