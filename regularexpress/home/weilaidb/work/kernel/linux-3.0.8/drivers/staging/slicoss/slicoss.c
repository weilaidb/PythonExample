#define KLUDGE_FOR_4GB_BOUNDARY         1
#define DEBUG_MICROCODE                 1
#define DBG                             1
#define SLIC_INTERRUPT_PROCESS_LIMIT	1
#define SLIC_OFFLOAD_IP_CHECKSUM		1
#define STATS_TIMER_INTERVAL			2
#define PING_TIMER_INTERVAL			    1
static uint slic_first_init = 1;
static char *slic_banner = "Alacritech SLIC Technology(tm) Server "\
"and Storage Accelerator (Non-Accelerated)";
static char *slic_proc_version = "2.0.351  2006/07/14 12:26:00";
static char *slic_product_name = "SLIC Technology(tm) Server "\
"and Storage Accelerator (Non-Accelerated)";
static char *slic_vendor = "Alacritech, Inc.";
static int slic_debug = 1;
static int debug = -1;
static struct net_device *head_netdevice;
static struct base_driver slic_global = ;
static int intagg_delay = 100;
static u32 dynamic_intagg;
static unsigned int rcv_count;
static struct dentry *slic_debugfs;
#define DRV_NAME          "slicoss"
#define DRV_VERSION       "2.0.1"
#define DRV_AUTHOR        "Alacritech, Inc. Engineering"
#define DRV_DESCRIPTION   "Alacritech SLIC Techonology(tm) "\
"Non-Accelerated Driver"
#define DRV_COPYRIGHT     "Copyright  2000-2006 Alacritech, Inc. "\
"All rights reserved."
#define PFX		   DRV_NAME " "
MODULE_AUTHOR(DRV_AUTHOR);
MODULE_DESCRIPTION(DRV_DESCRIPTION);
MODULE_LICENSE("Dual BSD/GPL");
module_param(dynamic_intagg, int, 0);
MODULE_PARM_DESC(dynamic_intagg, "Dynamic Interrupt Aggregation Setting");
module_param(intagg_delay, int, 0);
MODULE_PARM_DESC(intagg_delay, "uSec Interrupt Aggregation Delay");
static DEFINE_PCI_DEVICE_TABLE(slic_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, slic_pci_tbl);
#undef ASSERT
static void slic_assert_fail(void)
#define ASSERT(a) do  while (0)
#define SLIC_GET_SLIC_HANDLE(_adapter, _pslic_handle)                   \
#define SLIC_FREE_SLIC_HANDLE(_adapter, _pslic_handle)                  \
static inline void slic_reg32_write(void __iomem *reg, u32 value, bool flush)
static inline void slic_reg64_write(struct adapter *adapter, void __iomem *reg,
u32 value, void __iomem *regh, u32 paddrh,
bool flush)
static u32 slic_crc_table[256];
static u32 slic_crc_init;
static void slic_mcast_init_crc32(void)
static unsigned char slic_mcast_get_mac_hash(char *macaddr)
static void slic_mcast_set_bit(struct adapter *adapter, char *address)
static void slic_mcast_set_mask(struct adapter *adapter)
static void slic_timer_ping(ulong dev)
static void slic_unmap_mmio_space(struct adapter *adapter)
static void slic_link_config(struct adapter *adapter,
u32 linkspeed, u32 linkduplex)
static int slic_card_download_gbrcv(struct adapter *adapter)
MODULE_FIRMWARE("slicoss/oasisrcvucode.sys");
MODULE_FIRMWARE("slicoss/gbrcvucode.sys");
static int slic_card_download(struct adapter *adapter)
MODULE_FIRMWARE("slicoss/oasisdownload.sys");
MODULE_FIRMWARE("slicoss/gbdownload.sys");
static void slic_adapter_set_hwaddr(struct adapter *adapter)
static void slic_intagg_set(struct adapter *adapter, u32 value)
static void slic_soft_reset(struct adapter *adapter)
static void slic_mac_address_config(struct adapter *adapter)
static void slic_mac_config(struct adapter *adapter)
static void slic_config_set(struct adapter *adapter, bool linkchange)
static void slic_config_clear(struct adapter *adapter)
static bool slic_mac_filter(struct adapter *adapter,
struct ether_header *ether_frame)
static int slic_mac_set_address(struct net_device *dev, void *ptr)
static void slic_timer_load_check(ulong cardaddr)
static int slic_upr_queue_request(struct adapter *adapter,
u32 upr_request,
u32 upr_data,
u32 upr_data_h,
u32 upr_buffer, u32 upr_buffer_h)
static void slic_upr_start(struct adapter *adapter)
static int slic_upr_request(struct adapter *adapter,
u32 upr_request,
u32 upr_data,
u32 upr_data_h,
u32 upr_buffer, u32 upr_buffer_h)
static void slic_link_upr_complete(struct adapter *adapter, u32 isr)
static void slic_upr_request_complete(struct adapter *adapter, u32 isr)
static void slic_config_get(struct adapter *adapter, u32 config,
u32 config_h)
static ushort slic_eeprom_cksum(char *m, int len)
static void slic_rspqueue_free(struct adapter *adapter)
static int slic_rspqueue_init(struct adapter *adapter)
static struct slic_rspbuf *slic_rspqueue_getnext(struct adapter *adapter)
static void slic_cmdqmem_init(struct adapter *adapter)
static void slic_cmdqmem_free(struct adapter *adapter)
static u32 *slic_cmdqmem_addpage(struct adapter *adapter)
static void slic_cmdq_free(struct adapter *adapter)
static void slic_cmdq_addcmdpage(struct adapter *adapter, u32 *page)
static int slic_cmdq_init(struct adapter *adapter)
static void slic_cmdq_reset(struct adapter *adapter)
static void slic_cmdq_getdone(struct adapter *adapter)
static struct slic_hostcmd *slic_cmdq_getfree(struct adapter *adapter)
static void slic_cmdq_putdone_irq(struct adapter *adapter,
struct slic_hostcmd *cmd)
static int slic_rcvqueue_fill(struct adapter *adapter)
static void slic_rcvqueue_free(struct adapter *adapter)
static int slic_rcvqueue_init(struct adapter *adapter)
static struct sk_buff *slic_rcvqueue_getnext(struct adapter *adapter)
static u32 slic_rcvqueue_reinsert(struct adapter *adapter, struct sk_buff *skb)
static int slic_debug_card_show(struct seq_file *seq, void *v)
static int slic_debug_adapter_show(struct seq_file *seq, void *v)
static int slic_debug_adapter_open(struct inode *inode, struct file *file)
static int slic_debug_card_open(struct inode *inode, struct file *file)
static const struct file_operations slic_debug_adapter_fops = ;
static const struct file_operations slic_debug_card_fops = ;
static void slic_debug_adapter_create(struct adapter *adapter)
static void slic_debug_adapter_destroy(struct adapter *adapter)
static void slic_debug_card_create(struct sliccard *card)
static void slic_debug_card_destroy(struct sliccard *card)
static void slic_debug_init(void)
static void slic_debug_cleanup(void)
static void slic_link_event_handler(struct adapter *adapter)
static void slic_init_cleanup(struct adapter *adapter)
static int slic_mcast_add_list(struct adapter *adapter, char *address)
static void slic_mcast_set_list(struct net_device *dev)
#define  XMIT_FAIL_LINK_STATE               1
#define  XMIT_FAIL_ZERO_LENGTH              2
#define  XMIT_FAIL_HOSTCMD_FAIL             3
static void slic_xmit_build_request(struct adapter *adapter,
struct slic_hostcmd *hcmd, struct sk_buff *skb)
static void slic_xmit_fail(struct adapter *adapter,
struct sk_buff *skb,
void *cmd, u32 skbtype, u32 status)
static void slic_rcv_handle_error(struct adapter *adapter,
struct slic_rcvbuf *rcvbuf)
#define TCP_OFFLOAD_FRAME_PUSHFLAG  0x10000000
#define M_FAST_PATH                 0x0040
static void slic_rcv_handler(struct adapter *adapter)
static void slic_xmit_complete(struct adapter *adapter)
static irqreturn_t slic_interrupt(int irq, void *dev_id)
#define NORMAL_ETHFRAME     0
static netdev_tx_t slic_xmit_start(struct sk_buff *skb, struct net_device *dev)
static void slic_adapter_freeresources(struct adapter *adapter)
static int slic_adapter_allocresources(struct adapter *adapter)
static int slic_if_init(struct adapter *adapter)
static int slic_entry_open(struct net_device *dev)
static void slic_card_cleanup(struct sliccard *card)
static void __devexit slic_entry_remove(struct pci_dev *pcidev)
static int slic_entry_halt(struct net_device *dev)
static struct net_device_stats *slic_get_stats(struct net_device *dev)
static int slic_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static void slic_config_pci(struct pci_dev *pcidev)
static int slic_card_init(struct sliccard *card, struct adapter *adapter)
static void slic_init_driver(void)
static void slic_init_adapter(struct net_device *netdev,
struct pci_dev *pcidev,
const struct pci_device_id *pci_tbl_entry,
void __iomem *memaddr, int chip_idx)
static const struct net_device_ops slic_netdev_ops = ;
static u32 slic_card_locate(struct adapter *adapter)
static int __devinit slic_entry_probe(struct pci_dev *pcidev,
const struct pci_device_id *pci_tbl_entry)
static struct pci_driver slic_driver = ;
static int __init slic_module_init(void)
static void __exit slic_module_cleanup(void)
module_init(slic_module_init);
module_exit(slic_module_cleanup);
