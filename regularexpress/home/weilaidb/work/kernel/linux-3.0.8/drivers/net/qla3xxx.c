#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME	"qla3xxx"
#define DRV_STRING	"QLogic ISP3XXX Network Driver"
#define DRV_VERSION	"v2.03.00-k5"
static const char ql3xxx_driver_name[] = DRV_NAME;
static const char ql3xxx_driver_version[] = DRV_VERSION;
#define TIMED_OUT_MSG							\
"Timed out waiting for management port to get free before issuing command\n"
MODULE_AUTHOR("QLogic Corporation");
MODULE_DESCRIPTION("QLogic ISP3XXX Network Driver " DRV_VERSION " ");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
static const u32 default_msg
= NETIF_MSG_DRV | NETIF_MSG_PROBE | NETIF_MSG_LINK
| NETIF_MSG_IFUP | NETIF_MSG_IFDOWN;
static int debug = -1;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Debug level (0=none,...,16=all)");
static int msi;
module_param(msi, int, 0);
MODULE_PARM_DESC(msi, "Turn on Message Signaled Interrupts.");
static DEFINE_PCI_DEVICE_TABLE(ql3xxx_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, ql3xxx_pci_tbl);
enum PHY_DEVICE_TYPE ;
struct PHY_DEVICE_INFO ;
static const struct PHY_DEVICE_INFO PHY_DEVICES[] = ;
static int ql_sem_spinlock(struct ql3_adapter *qdev,
u32 sem_mask, u32 sem_bits)
static void ql_sem_unlock(struct ql3_adapter *qdev, u32 sem_mask)
static int ql_sem_lock(struct ql3_adapter *qdev, u32 sem_mask, u32 sem_bits)
static int ql_wait_for_drvr_lock(struct ql3_adapter *qdev)
static void ql_set_register_page(struct ql3_adapter *qdev, u32 page)
static u32 ql_read_common_reg_l(struct ql3_adapter *qdev, u32 __iomem *reg)
static u32 ql_read_common_reg(struct ql3_adapter *qdev, u32 __iomem *reg)
static u32 ql_read_page0_reg_l(struct ql3_adapter *qdev, u32 __iomem *reg)
static u32 ql_read_page0_reg(struct ql3_adapter *qdev, u32 __iomem *reg)
static void ql_write_common_reg_l(struct ql3_adapter *qdev,
u32 __iomem *reg, u32 value)
static void ql_write_common_reg(struct ql3_adapter *qdev,
u32 __iomem *reg, u32 value)
static void ql_write_nvram_reg(struct ql3_adapter *qdev,
u32 __iomem *reg, u32 value)
static void ql_write_page0_reg(struct ql3_adapter *qdev,
u32 __iomem *reg, u32 value)
static void ql_write_page1_reg(struct ql3_adapter *qdev,
u32 __iomem *reg, u32 value)
static void ql_write_page2_reg(struct ql3_adapter *qdev,
u32 __iomem *reg, u32 value)
static void ql_disable_interrupts(struct ql3_adapter *qdev)
static void ql_enable_interrupts(struct ql3_adapter *qdev)
static void ql_release_to_lrg_buf_free_list(struct ql3_adapter *qdev,
struct ql_rcv_buf_cb *lrg_buf_cb)
static struct ql_rcv_buf_cb *ql_get_from_lrg_buf_free_list(struct ql3_adapter
*qdev)
static u32 addrBits = EEPROM_NO_ADDR_BITS;
static u32 dataBits = EEPROM_NO_DATA_BITS;
static void fm93c56a_deselect(struct ql3_adapter *qdev);
static void eeprom_readword(struct ql3_adapter *qdev, u32 eepromAddr,
unsigned short *value);
static void fm93c56a_select(struct ql3_adapter *qdev)
static void fm93c56a_cmd(struct ql3_adapter *qdev, u32 cmd, u32 eepromAddr)
static void fm93c56a_deselect(struct ql3_adapter *qdev)
static void fm93c56a_datain(struct ql3_adapter *qdev, unsigned short *value)
static void eeprom_readword(struct ql3_adapter *qdev,
u32 eepromAddr, unsigned short *value)
static void ql_set_mac_addr(struct net_device *ndev, u16 *addr)
static int ql_get_nvram_params(struct ql3_adapter *qdev)
static const u32 PHYAddr[2] = ;
static int ql_wait_for_mii_ready(struct ql3_adapter *qdev)
static void ql_mii_enable_scan_mode(struct ql3_adapter *qdev)
static u8 ql_mii_disable_scan_mode(struct ql3_adapter *qdev)
static int ql_mii_write_reg_ex(struct ql3_adapter *qdev,
u16 regAddr, u16 value, u32 phyAddr)
static int ql_mii_read_reg_ex(struct ql3_adapter *qdev, u16 regAddr,
u16 *value, u32 phyAddr)
static int ql_mii_write_reg(struct ql3_adapter *qdev, u16 regAddr, u16 value)
static int ql_mii_read_reg(struct ql3_adapter *qdev, u16 regAddr, u16 *value)
static void ql_petbi_reset(struct ql3_adapter *qdev)
static void ql_petbi_start_neg(struct ql3_adapter *qdev)
static void ql_petbi_reset_ex(struct ql3_adapter *qdev)
static void ql_petbi_start_neg_ex(struct ql3_adapter *qdev)
static void ql_petbi_init(struct ql3_adapter *qdev)
static void ql_petbi_init_ex(struct ql3_adapter *qdev)
static int ql_is_petbi_neg_pause(struct ql3_adapter *qdev)
static void phyAgereSpecificInit(struct ql3_adapter *qdev, u32 miiAddr)
static enum PHY_DEVICE_TYPE getPhyType(struct ql3_adapter *qdev,
u16 phyIdReg0, u16 phyIdReg1)
static int ql_phy_get_speed(struct ql3_adapter *qdev)
static int ql_is_full_dup(struct ql3_adapter *qdev)
static int ql_is_phy_neg_pause(struct ql3_adapter *qdev)
static int PHY_Setup(struct ql3_adapter *qdev)
static void ql_mac_enable(struct ql3_adapter *qdev, u32 enable)
static void ql_mac_cfg_soft_reset(struct ql3_adapter *qdev, u32 enable)
static void ql_mac_cfg_gig(struct ql3_adapter *qdev, u32 enable)
static void ql_mac_cfg_full_dup(struct ql3_adapter *qdev, u32 enable)
static void ql_mac_cfg_pause(struct ql3_adapter *qdev, u32 enable)
static int ql_is_fiber(struct ql3_adapter *qdev)
static int ql_is_auto_cfg(struct ql3_adapter *qdev)
static int ql_is_auto_neg_complete(struct ql3_adapter *qdev)
static int ql_is_neg_pause(struct ql3_adapter *qdev)
static int ql_auto_neg_error(struct ql3_adapter *qdev)
static u32 ql_get_link_speed(struct ql3_adapter *qdev)
static int ql_is_link_full_dup(struct ql3_adapter *qdev)
static int ql_link_down_detect(struct ql3_adapter *qdev)
static int ql_link_down_detect_clear(struct ql3_adapter *qdev)
static int ql_this_adapter_controls_port(struct ql3_adapter *qdev)
static void ql_phy_reset_ex(struct ql3_adapter *qdev)
static void ql_phy_start_neg_ex(struct ql3_adapter *qdev)
static void ql_phy_init_ex(struct ql3_adapter *qdev)
static u32 ql_get_link_state(struct ql3_adapter *qdev)
static int ql_port_start(struct ql3_adapter *qdev)
static int ql_finish_auto_neg(struct ql3_adapter *qdev)
static void ql_link_state_machine_work(struct work_struct *work)
static void ql_get_phy_owner(struct ql3_adapter *qdev)
static void ql_init_scan_mode(struct ql3_adapter *qdev)
static int ql_mii_setup(struct ql3_adapter *qdev)
#define SUPPORTED_OPTICAL_MODES	(SUPPORTED_1000baseT_Full |	\
SUPPORTED_FIBRE |		\
SUPPORTED_Autoneg)
#define SUPPORTED_TP_MODES	(SUPPORTED_10baseT_Half |	\
SUPPORTED_10baseT_Full |	\
SUPPORTED_100baseT_Half |	\
SUPPORTED_100baseT_Full |	\
SUPPORTED_1000baseT_Half |	\
SUPPORTED_1000baseT_Full |	\
SUPPORTED_Autoneg |		\
SUPPORTED_TP);			\
static u32 ql_supported_modes(struct ql3_adapter *qdev)
static int ql_get_auto_cfg_status(struct ql3_adapter *qdev)
static u32 ql_get_speed(struct ql3_adapter *qdev)
static int ql_get_full_dup(struct ql3_adapter *qdev)
static int ql_get_settings(struct net_device *ndev, struct ethtool_cmd *ecmd)
static void ql_get_drvinfo(struct net_device *ndev,
struct ethtool_drvinfo *drvinfo)
static u32 ql_get_msglevel(struct net_device *ndev)
static void ql_set_msglevel(struct net_device *ndev, u32 value)
static void ql_get_pauseparam(struct net_device *ndev,
struct ethtool_pauseparam *pause)
static const struct ethtool_ops ql3xxx_ethtool_ops = ;
static int ql_populate_free_queue(struct ql3_adapter *qdev)
static void ql_update_small_bufq_prod_index(struct ql3_adapter *qdev)
static void ql_update_lrg_bufq_prod_index(struct ql3_adapter *qdev)
static void ql_process_mac_tx_intr(struct ql3_adapter *qdev,
struct ob_mac_iocb_rsp *mac_rsp)
static void ql_get_sbuf(struct ql3_adapter *qdev)
static struct ql_rcv_buf_cb *ql_get_lbuf(struct ql3_adapter *qdev)
static void ql_process_mac_rx_intr(struct ql3_adapter *qdev,
struct ib_mac_iocb_rsp *ib_mac_rsp_ptr)
static void ql_process_macip_rx_intr(struct ql3_adapter *qdev,
struct ib_ip_iocb_rsp *ib_ip_rsp_ptr)
static int ql_tx_rx_clean(struct ql3_adapter *qdev,
int *tx_cleaned, int *rx_cleaned, int work_to_do)
static int ql_poll(struct napi_struct *napi, int budget)
static irqreturn_t ql3xxx_isr(int irq, void *dev_id)
static int ql_get_seg_count(struct ql3_adapter *qdev, unsigned short frags)
static void ql_hw_csum_setup(const struct sk_buff *skb,
struct ob_mac_iocb_req *mac_iocb_ptr)
static int ql_send_map(struct ql3_adapter *qdev,
struct ob_mac_iocb_req *mac_iocb_ptr,
struct ql_tx_buf_cb *tx_cb,
struct sk_buff *skb)
static netdev_tx_t ql3xxx_send(struct sk_buff *skb,
struct net_device *ndev)
static int ql_alloc_net_req_rsp_queues(struct ql3_adapter *qdev)
static void ql_free_net_req_rsp_queues(struct ql3_adapter *qdev)
static int ql_alloc_buffer_queues(struct ql3_adapter *qdev)
static void ql_free_buffer_queues(struct ql3_adapter *qdev)
static int ql_alloc_small_buffers(struct ql3_adapter *qdev)
static void ql_free_small_buffers(struct ql3_adapter *qdev)
static void ql_free_large_buffers(struct ql3_adapter *qdev)
static void ql_init_large_buffers(struct ql3_adapter *qdev)
static int ql_alloc_large_buffers(struct ql3_adapter *qdev)
static void ql_free_send_free_list(struct ql3_adapter *qdev)
static int ql_create_send_free_list(struct ql3_adapter *qdev)
static int ql_alloc_mem_resources(struct ql3_adapter *qdev)
static void ql_free_mem_resources(struct ql3_adapter *qdev)
static int ql_init_misc_registers(struct ql3_adapter *qdev)
static int ql_adapter_initialize(struct ql3_adapter *qdev)
static int ql_adapter_reset(struct ql3_adapter *qdev)
static void ql_set_mac_info(struct ql3_adapter *qdev)
static void ql_display_dev_info(struct net_device *ndev)
static int ql_adapter_down(struct ql3_adapter *qdev, int do_reset)
static int ql_adapter_up(struct ql3_adapter *qdev)
static int ql_cycle_adapter(struct ql3_adapter *qdev, int reset)
static int ql3xxx_close(struct net_device *ndev)
static int ql3xxx_open(struct net_device *ndev)
static int ql3xxx_set_mac_address(struct net_device *ndev, void *p)
static void ql3xxx_tx_timeout(struct net_device *ndev)
static void ql_reset_work(struct work_struct *work)
static void ql_tx_timeout_work(struct work_struct *work)
static void ql_get_board_info(struct ql3_adapter *qdev)
static void ql3xxx_timer(unsigned long ptr)
static const struct net_device_ops ql3xxx_netdev_ops = ;
static int __devinit ql3xxx_probe(struct pci_dev *pdev,
const struct pci_device_id *pci_entry)
static void __devexit ql3xxx_remove(struct pci_dev *pdev)
static struct pci_driver ql3xxx_driver = ;
static int __init ql3xxx_init_module(void)
static void __exit ql3xxx_exit(void)
module_init(ql3xxx_init_module);
module_exit(ql3xxx_exit);
