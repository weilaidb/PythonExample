#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME		"e100"
#define DRV_EXT			"-NAPI"
#define DRV_VERSION		"3.5.24-k2"DRV_EXT
#define DRV_DESCRIPTION		"Intel(R) PRO/100 Network Driver"
#define DRV_COPYRIGHT		"Copyright(c) 1999-2006 Intel Corporation"
#define E100_WATCHDOG_PERIOD	(2 * HZ)
#define E100_NAPI_WEIGHT	16
#define FIRMWARE_D101M		"e100/d101m_ucode.bin"
#define FIRMWARE_D101S		"e100/d101s_ucode.bin"
#define FIRMWARE_D102E		"e100/d102e_ucode.bin"
MODULE_DESCRIPTION(DRV_DESCRIPTION);
MODULE_AUTHOR(DRV_COPYRIGHT);
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
MODULE_FIRMWARE(FIRMWARE_D101M);
MODULE_FIRMWARE(FIRMWARE_D101S);
MODULE_FIRMWARE(FIRMWARE_D102E);
static int debug = 3;
static int eeprom_bad_csum_allow = 0;
static int use_io = 0;
module_param(debug, int, 0);
module_param(eeprom_bad_csum_allow, int, 0);
module_param(use_io, int, 0);
MODULE_PARM_DESC(debug, "Debug level (0=none,...,16=all)");
MODULE_PARM_DESC(eeprom_bad_csum_allow, "Allow bad eeprom checksums");
MODULE_PARM_DESC(use_io, "Force use of i/o access mode");
#define INTEL_8255X_ETHERNET_DEVICE(device_id, ich)
static DEFINE_PCI_DEVICE_TABLE(e100_id_table) = ;
MODULE_DEVICE_TABLE(pci, e100_id_table);
enum mac ;
enum phy ;
struct csr ;
enum scb_status ;
enum ru_state  ;
enum scb_stat_ack ;
enum scb_cmd_hi ;
enum scb_cmd_lo ;
enum cuc_dump ;
enum port ;
enum eeprom_ctrl_lo ;
enum mdi_ctrl ;
enum eeprom_op ;
enum eeprom_offsets ;
enum eeprom_cnfg_mdix ;
enum eeprom_phy_iface ;
enum eeprom_id ;
enum eeprom_config_asf ;
enum cb_status ;
enum cb_command ;
struct rfd ;
struct rx ;
#if defined(__BIG_ENDIAN_BITFIELD)
#define X(a,b)	b,a
#define X(a,b)	a,b
struct config ;
#define E100_MAX_MULTICAST_ADDRS	64
struct multi ;
#define UCODE_SIZE			134
struct cb ;
enum loopback ;
struct stats ;
struct mem ;
struct param_range ;
struct params ;
struct nic ;
static inline void e100_write_flush(struct nic *nic)
static void e100_enable_irq(struct nic *nic)
static void e100_disable_irq(struct nic *nic)
static void e100_hw_reset(struct nic *nic)
static int e100_self_test(struct nic *nic)
static void e100_eeprom_write(struct nic *nic, u16 addr_len, u16 addr, __le16 data)
;
static __le16 e100_eeprom_read(struct nic *nic, u16 *addr_len, u16 addr)
;
static int e100_eeprom_load(struct nic *nic)
static int e100_eeprom_save(struct nic *nic, u16 start, u16 count)
#define E100_WAIT_SCB_TIMEOUT 20000
#define E100_WAIT_SCB_FAST 20
static int e100_exec_cmd(struct nic *nic, u8 cmd, dma_addr_t dma_addr)
static int e100_exec_cb(struct nic *nic, struct sk_buff *skb,
void (*cb_prepare)(struct nic *, struct cb *, struct sk_buff *))
static int mdio_read(struct net_device *netdev, int addr, int reg)
static void mdio_write(struct net_device *netdev, int addr, int reg, int data)
static u16 mdio_ctrl_hw(struct nic *nic, u32 addr, u32 dir, u32 reg, u16 data)
static u16 mdio_ctrl_phy_82552_v(struct nic *nic,
u32 addr,
u32 dir,
u32 reg,
u16 data)
static u16 mdio_ctrl_phy_mii_emulated(struct nic *nic,
u32 addr,
u32 dir,
u32 reg,
u16 data)
static inline int e100_phy_supports_mii(struct nic *nic)
static void e100_get_defaults(struct nic *nic)
static void e100_configure(struct nic *nic, struct cb *cb, struct sk_buff *skb)
#define BUNDLESMALL 1
#define BUNDLEMAX (u16)6
#define INTDELAY (u16)1536
static const struct firmware *e100_request_firmware(struct nic *nic)
static void e100_setup_ucode(struct nic *nic, struct cb *cb,
struct sk_buff *skb)
static inline int e100_load_ucode_wait(struct nic *nic)
static void e100_setup_iaaddr(struct nic *nic, struct cb *cb,
struct sk_buff *skb)
static void e100_dump(struct nic *nic, struct cb *cb, struct sk_buff *skb)
static int e100_phy_check_without_mii(struct nic *nic)
#define NCONFIG_AUTO_SWITCH	0x0080
#define MII_NSC_CONG		MII_RESV1
#define NSC_CONG_ENABLE		0x0100
#define NSC_CONG_TXREADY	0x0400
#define ADVERTISE_FC_SUPPORTED	0x0400
static int e100_phy_init(struct nic *nic)
static int e100_hw_init(struct nic *nic)
static void e100_multi(struct nic *nic, struct cb *cb, struct sk_buff *skb)
static void e100_set_multicast_list(struct net_device *netdev)
static void e100_update_stats(struct nic *nic)
static void e100_adjust_adaptive_ifs(struct nic *nic, int speed, int duplex)
static void e100_watchdog(unsigned long data)
static void e100_xmit_prepare(struct nic *nic, struct cb *cb,
struct sk_buff *skb)
static netdev_tx_t e100_xmit_frame(struct sk_buff *skb,
struct net_device *netdev)
static int e100_tx_clean(struct nic *nic)
static void e100_clean_cbs(struct nic *nic)
static int e100_alloc_cbs(struct nic *nic)
static inline void e100_start_receiver(struct nic *nic, struct rx *rx)
#define RFD_BUF_LEN (sizeof(struct rfd) + VLAN_ETH_FRAME_LEN)
static int e100_rx_alloc_skb(struct nic *nic, struct rx *rx)
static int e100_rx_indicate(struct nic *nic, struct rx *rx,
unsigned int *work_done, unsigned int work_to_do)
static void e100_rx_clean(struct nic *nic, unsigned int *work_done,
unsigned int work_to_do)
static void e100_rx_clean_list(struct nic *nic)
static int e100_rx_alloc_list(struct nic *nic)
static irqreturn_t e100_intr(int irq, void *dev_id)
static int e100_poll(struct napi_struct *napi, int budget)
static void e100_netpoll(struct net_device *netdev)
static int e100_set_mac_address(struct net_device *netdev, void *p)
static int e100_change_mtu(struct net_device *netdev, int new_mtu)
static int e100_asf(struct nic *nic)
static int e100_up(struct nic *nic)
static void e100_down(struct nic *nic)
static void e100_tx_timeout(struct net_device *netdev)
static void e100_tx_timeout_task(struct work_struct *work)
static int e100_loopback_test(struct nic *nic, enum loopback loopback_mode)
#define MII_LED_CONTROL	0x1B
#define E100_82552_LED_OVERRIDE 0x19
#define E100_82552_LED_ON       0x000F
#define E100_82552_LED_OFF      0x000A
static int e100_get_settings(struct net_device *netdev, struct ethtool_cmd *cmd)
static int e100_set_settings(struct net_device *netdev, struct ethtool_cmd *cmd)
static void e100_get_drvinfo(struct net_device *netdev,
struct ethtool_drvinfo *info)
#define E100_PHY_REGS 0x1C
static int e100_get_regs_len(struct net_device *netdev)
static void e100_get_regs(struct net_device *netdev,
struct ethtool_regs *regs, void *p)
static void e100_get_wol(struct net_device *netdev, struct ethtool_wolinfo *wol)
static int e100_set_wol(struct net_device *netdev, struct ethtool_wolinfo *wol)
static u32 e100_get_msglevel(struct net_device *netdev)
static void e100_set_msglevel(struct net_device *netdev, u32 value)
static int e100_nway_reset(struct net_device *netdev)
static u32 e100_get_link(struct net_device *netdev)
static int e100_get_eeprom_len(struct net_device *netdev)
#define E100_EEPROM_MAGIC	0x1234
static int e100_get_eeprom(struct net_device *netdev,
struct ethtool_eeprom *eeprom, u8 *bytes)
static int e100_set_eeprom(struct net_device *netdev,
struct ethtool_eeprom *eeprom, u8 *bytes)
static void e100_get_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ring)
static int e100_set_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ring)
static const char e100_gstrings_test[][ETH_GSTRING_LEN] = ;
#define E100_TEST_LEN	ARRAY_SIZE(e100_gstrings_test)
static void e100_diag_test(struct net_device *netdev,
struct ethtool_test *test, u64 *data)
static int e100_set_phys_id(struct net_device *netdev,
enum ethtool_phys_id_state state)
static const char e100_gstrings_stats[][ETH_GSTRING_LEN] = ;
#define E100_NET_STATS_LEN	21
#define E100_STATS_LEN	ARRAY_SIZE(e100_gstrings_stats)
static int e100_get_sset_count(struct net_device *netdev, int sset)
static void e100_get_ethtool_stats(struct net_device *netdev,
struct ethtool_stats *stats, u64 *data)
static void e100_get_strings(struct net_device *netdev, u32 stringset, u8 *data)
static const struct ethtool_ops e100_ethtool_ops = ;
static int e100_do_ioctl(struct net_device *netdev, struct ifreq *ifr, int cmd)
static int e100_alloc(struct nic *nic)
static void e100_free(struct nic *nic)
static int e100_open(struct net_device *netdev)
static int e100_close(struct net_device *netdev)
static const struct net_device_ops e100_netdev_ops = ;
static int __devinit e100_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit e100_remove(struct pci_dev *pdev)
#define E100_82552_SMARTSPEED   0x14
#define E100_82552_REV_ANEG     0x0200
#define E100_82552_ANEG_NOW     0x0400
static void __e100_shutdown(struct pci_dev *pdev, bool *enable_wake)
static int __e100_power_off(struct pci_dev *pdev, bool wake)
static int e100_suspend(struct pci_dev *pdev, pm_message_t state)
static int e100_resume(struct pci_dev *pdev)
static void e100_shutdown(struct pci_dev *pdev)
static pci_ers_result_t e100_io_error_detected(struct pci_dev *pdev, pci_channel_state_t state)
static pci_ers_result_t e100_io_slot_reset(struct pci_dev *pdev)
static void e100_io_resume(struct pci_dev *pdev)
static struct pci_error_handlers e100_err_handler = ;
static struct pci_driver e100_driver = ;
static int __init e100_init_module(void)
static void __exit e100_cleanup_module(void)
module_init(e100_init_module);
module_exit(e100_cleanup_module);
