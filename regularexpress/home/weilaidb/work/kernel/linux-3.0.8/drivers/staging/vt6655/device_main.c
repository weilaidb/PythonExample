#undef __NO_VERSION__
static int          msglevel                =   MSG_LEVEL_INFO;
MODULE_AUTHOR("VIA Networking Technologies, Inc., <lyndonchen@vntek.com.tw>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("VIA Networking Solomon-A/B/G Wireless LAN Adapter Driver");
static int mlme_kill;
#define DEVICE_PARAM(N,D)
#define RX_DESC_MIN0     16
#define RX_DESC_MAX0     128
#define RX_DESC_DEF0     32
DEVICE_PARAM(RxDescriptors0,"Number of receive descriptors0");
#define RX_DESC_MIN1     16
#define RX_DESC_MAX1     128
#define RX_DESC_DEF1     32
DEVICE_PARAM(RxDescriptors1,"Number of receive descriptors1");
#define TX_DESC_MIN0     16
#define TX_DESC_MAX0     128
#define TX_DESC_DEF0     32
DEVICE_PARAM(TxDescriptors0,"Number of transmit descriptors0");
#define TX_DESC_MIN1     16
#define TX_DESC_MAX1     128
#define TX_DESC_DEF1     64
DEVICE_PARAM(TxDescriptors1,"Number of transmit descriptors1");
#define IP_ALIG_DEF     0
DEVICE_PARAM(IP_byte_align,"Enable IP header dword aligned");
#define INT_WORKS_DEF   20
#define INT_WORKS_MIN   10
#define INT_WORKS_MAX   64
DEVICE_PARAM(int_works,"Number of packets per interrupt services");
#define CHANNEL_MIN     1
#define CHANNEL_MAX     14
#define CHANNEL_DEF     6
DEVICE_PARAM(Channel, "Channel number");
#define PREAMBLE_TYPE_DEF     1
DEVICE_PARAM(PreambleType, "Preamble Type");
#define RTS_THRESH_MIN     512
#define RTS_THRESH_MAX     2347
#define RTS_THRESH_DEF     2347
DEVICE_PARAM(RTSThreshold, "RTS threshold");
#define FRAG_THRESH_MIN     256
#define FRAG_THRESH_MAX     2346
#define FRAG_THRESH_DEF     2346
DEVICE_PARAM(FragThreshold, "Fragmentation threshold");
#define DATA_RATE_MIN     0
#define DATA_RATE_MAX     13
#define DATA_RATE_DEF     13
DEVICE_PARAM(ConnectionRate, "Connection data rate");
#define OP_MODE_DEF     0
DEVICE_PARAM(OPMode, "Infrastruct, adhoc, AP mode ");
#define PS_MODE_DEF     0
DEVICE_PARAM(PSMode, "Power saving mode");
#define SHORT_RETRY_MIN     0
#define SHORT_RETRY_MAX     31
#define SHORT_RETRY_DEF     8
DEVICE_PARAM(ShortRetryLimit, "Short frame retry limits");
#define LONG_RETRY_MIN     0
#define LONG_RETRY_MAX     15
#define LONG_RETRY_DEF     4
DEVICE_PARAM(LongRetryLimit, "long frame retry limits");
#define BBP_TYPE_MIN     0
#define BBP_TYPE_MAX     2
#define BBP_TYPE_DEF     2
DEVICE_PARAM(BasebandType, "baseband type");
#define X80211h_MODE_DEF     0
DEVICE_PARAM(b80211hEnable, "802.11h mode");
#define DIVERSITY_ANT_DEF     0
DEVICE_PARAM(bDiversityANTEnable, "ANT diversity mode");
static int          device_nics             =0;
static PSDevice     pDevice_Infos           =NULL;
static struct net_device *root_device_dev = NULL;
static CHIP_INFO chip_info_table[]= ;
DEFINE_PCI_DEVICE_TABLE(vt6655_pci_id_table) = ;
static int  vt6655_probe(struct pci_dev *pcid, const struct pci_device_id *ent);
static bool vt6655_init_info(struct pci_dev* pcid, PSDevice* ppDevice, PCHIP_INFO);
static void device_free_info(PSDevice pDevice);
static bool device_get_pci_info(PSDevice, struct pci_dev* pcid);
static void device_print_info(PSDevice pDevice);
static struct net_device_stats *device_get_stats(struct net_device *dev);
static void device_init_diversity_timer(PSDevice pDevice);
static int  device_open(struct net_device *dev);
static int  device_xmit(struct sk_buff *skb, struct net_device *dev);
static  irqreturn_t  device_intr(int irq,  void*dev_instance);
static void device_set_multi(struct net_device *dev);
static int  device_close(struct net_device *dev);
static int  device_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static int device_notify_reboot(struct notifier_block *, unsigned long event, void *ptr);
static int viawget_suspend(struct pci_dev *pcid, pm_message_t state);
static int viawget_resume(struct pci_dev *pcid);
struct notifier_block device_notifier = ;
static void device_init_rd0_ring(PSDevice pDevice);
static void device_init_rd1_ring(PSDevice pDevice);
static void device_init_defrag_cb(PSDevice pDevice);
static void device_init_td0_ring(PSDevice pDevice);
static void device_init_td1_ring(PSDevice pDevice);
static int  device_dma0_tx_80211(struct sk_buff *skb, struct net_device *dev);
static bool device_release_WPADEV(PSDevice pDevice);
static int  ethtool_ioctl(struct net_device *dev, void *useraddr);
static int  device_rx_srv(PSDevice pDevice, unsigned int uIdx);
static int  device_tx_srv(PSDevice pDevice, unsigned int uIdx);
static bool device_alloc_rx_buf(PSDevice pDevice, PSRxDesc pDesc);
static void device_init_registers(PSDevice pDevice, DEVICE_INIT_TYPE InitType);
static void device_free_tx_buf(PSDevice pDevice, PSTxDesc pDesc);
static void device_free_td0_ring(PSDevice pDevice);
static void device_free_td1_ring(PSDevice pDevice);
static void device_free_rd0_ring(PSDevice pDevice);
static void device_free_rd1_ring(PSDevice pDevice);
static void device_free_rings(PSDevice pDevice);
static void device_free_frag_buf(PSDevice pDevice);
static int Config_FileGetParameter(unsigned char *string,
unsigned char *dest, unsigned char *source);
static char* get_chip_name(int chip_id)
static void __devexit vt6655_remove(struct pci_dev *pcid)
static void
device_get_options(PSDevice pDevice, int index, char* devname)
static void
device_set_options(PSDevice pDevice)
static void s_vCompleteCurrentMeasure (PSDevice pDevice, unsigned char byResult)
static void device_init_registers(PSDevice pDevice, DEVICE_INIT_TYPE InitType)
pMgmt->eScanType = WMAC_SCAN_PASSIVE;
SROMvReadEtherAddress(pDevice->PortOffset, pDevice->abyCurrentNetAddr);
DBG_PRT(MSG_LEVEL_DEBUG, KERN_INFO"Network address = %02x-%02x-%02x=%02x-%02x-%02x\n",
pDevice->abyCurrentNetAddr[0],
pDevice->abyCurrentNetAddr[1],
pDevice->abyCurrentNetAddr[2],
pDevice->abyCurrentNetAddr[3],
pDevice->abyCurrentNetAddr[4],
pDevice->abyCurrentNetAddr[5]);
CARDvSafeResetRx(pDevice);
CARDvSafeResetTx(pDevice);
if (pDevice->byLocalID <= REV_ID_VT3253_A1)
pDevice->eEncryptionStatus = Ndis802_11EncryptionDisabled;
MACvReceive0(pDevice->PortOffset);
MACvReceive1(pDevice->PortOffset);
MACvStart(pDevice->PortOffset);
netif_stop_queue(pDevice->dev);
}
static void device_init_diversity_timer(PSDevice pDevice)
static bool device_release_WPADEV(PSDevice pDevice)
static const struct net_device_ops device_netdev_ops = ;
static int __devinit
vt6655_probe(struct pci_dev *pcid, const struct pci_device_id *ent)
static void device_print_info(PSDevice pDevice)
static bool __devinit vt6655_init_info(struct pci_dev* pcid, PSDevice* ppDevice,
PCHIP_INFO pChip_info)
static bool device_get_pci_info(PSDevice pDevice, struct pci_dev* pcid)
static void device_free_info(PSDevice pDevice)
static bool device_init_rings(PSDevice pDevice)
static void device_free_rings(PSDevice pDevice)
static void device_init_rd0_ring(PSDevice pDevice)
static void device_init_rd1_ring(PSDevice pDevice)
static void device_init_defrag_cb(PSDevice pDevice)
static void device_free_rd0_ring(PSDevice pDevice)
static void device_free_rd1_ring(PSDevice pDevice)
static void device_free_frag_buf(PSDevice pDevice)
static void device_init_td0_ring(PSDevice pDevice)
static void device_init_td1_ring(PSDevice pDevice)
static void device_free_td0_ring(PSDevice pDevice)
static void device_free_td1_ring(PSDevice pDevice)
static int device_rx_srv(PSDevice pDevice, unsigned int uIdx)
static bool device_alloc_rx_buf(PSDevice pDevice, PSRxDesc pRD)
bool device_alloc_frag_buf(PSDevice pDevice, PSDeFragControlBlock pDeF)
static int device_tx_srv(PSDevice pDevice, unsigned int uIdx)
static void device_error(PSDevice pDevice, unsigned short status)
static void device_free_tx_buf(PSDevice pDevice, PSTxDesc pDesc)
void	InitRxManagementQueue(PSDevice  pDevice)
int MlmeThread(
void * Context)
static int  device_open(struct net_device *dev)
static int  device_close(struct net_device *dev)
static int device_dma0_tx_80211(struct sk_buff *skb, struct net_device *dev)
bool device_dma0_xmit(PSDevice pDevice, struct sk_buff *skb, unsigned int uNodeIndex)
static int  device_xmit(struct sk_buff *skb, struct net_device *dev)
static  irqreturn_t  device_intr(int irq,  void *dev_instance)
static unsigned const ethernet_polynomial = 0x04c11db7U;
static inline u32 ether_crc(int length, unsigned char *data)
static int Config_FileGetParameter(unsigned char *string,
unsigned char *dest, unsigned char *source)
int Config_FileOperation(PSDevice pDevice,bool fwrite,unsigned char *Parameter)
static void device_set_multi(struct net_device *dev)
static struct net_device_stats *device_get_stats(struct net_device *dev)
static int  device_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static int ethtool_ioctl(struct net_device *dev, void *useraddr)
MODULE_DEVICE_TABLE(pci, vt6655_pci_id_table);
static struct pci_driver device_driver = ;
static int __init vt6655_init_module(void)
static void __exit vt6655_cleanup_module(void)
module_init(vt6655_init_module);
module_exit(vt6655_cleanup_module);
static int
device_notify_reboot(struct notifier_block *nb, unsigned long event, void *p)
static int
viawget_suspend(struct pci_dev *pcid, pm_message_t state)
static int
viawget_resume(struct pci_dev *pcid)
