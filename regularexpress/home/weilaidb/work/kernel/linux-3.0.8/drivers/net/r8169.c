#define RTL8169_VERSION "2.3LK-NAPI"
#define MODULENAME "r8169"
#define PFX MODULENAME ": "
#define FIRMWARE_8168D_1	"rtl_nic/rtl8168d-1.fw"
#define FIRMWARE_8168D_2	"rtl_nic/rtl8168d-2.fw"
#define FIRMWARE_8168E_1	"rtl_nic/rtl8168e-1.fw"
#define FIRMWARE_8168E_2	"rtl_nic/rtl8168e-2.fw"
#define FIRMWARE_8105E_1	"rtl_nic/rtl8105e-1.fw"
#define assert(expr) \
if (!(expr))
#define dprintk(fmt, args...) \
do  while (0)
#define assert(expr) do  while (0)
#define dprintk(fmt, args...)	do  while (0)
#define R8169_MSG_DEFAULT \
(NETIF_MSG_DRV | NETIF_MSG_PROBE | NETIF_MSG_IFUP | NETIF_MSG_IFDOWN)
#define TX_BUFFS_AVAIL(tp) \
(tp->dirty_tx + NUM_TX_DESC - tp->cur_tx - 1)
static const int multicast_filter_limit = 32;
#define MAC_ADDR_LEN	6
#define MAX_READ_REQUEST_SHIFT	12
#define RX_FIFO_THRESH	7
#define RX_DMA_BURST	6
#define TX_DMA_BURST	6
#define SafeMtu		0x1c20
#define InterFrameGap	0x03
#define R8169_REGS_SIZE		256
#define R8169_NAPI_WEIGHT	64
#define NUM_TX_DESC	64
#define NUM_RX_DESC	256
#define RX_BUF_SIZE	1536
#define R8169_TX_RING_BYTES	(NUM_TX_DESC * sizeof(struct TxDesc))
#define R8169_RX_RING_BYTES	(NUM_RX_DESC * sizeof(struct RxDesc))
#define RTL8169_TX_TIMEOUT	(6*HZ)
#define RTL8169_PHY_TIMEOUT	(10*HZ)
#define RTL_EEPROM_SIG		cpu_to_le32(0x8129)
#define RTL_EEPROM_SIG_MASK	cpu_to_le32(0xffff)
#define RTL_EEPROM_SIG_ADDR	0x0000
#define RTL_W8(reg, val8)	writeb ((val8), ioaddr + (reg))
#define RTL_W16(reg, val16)	writew ((val16), ioaddr + (reg))
#define RTL_W32(reg, val32)	writel ((val32), ioaddr + (reg))
#define RTL_R8(reg)		readb (ioaddr + (reg))
#define RTL_R16(reg)		readw (ioaddr + (reg))
#define RTL_R32(reg)		readl (ioaddr + (reg))
enum mac_version ;
enum rtl_tx_desc_version ;
#define _R(NAME,TD,FW) \
static const struct  rtl_chip_infos[] = ;
#undef _R
enum cfg_version ;
static void rtl_hw_start_8169(struct net_device *);
static void rtl_hw_start_8168(struct net_device *);
static void rtl_hw_start_8101(struct net_device *);
static DEFINE_PCI_DEVICE_TABLE(rtl8169_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, rtl8169_pci_tbl);
static int rx_buf_sz = 16383;
static int use_dac;
static struct  debug = ;
enum rtl_registers ;
enum rtl8110_registers ;
enum rtl8168_8101_registers ;
enum rtl8168_registers ;
enum rtl_register_content ;
enum rtl_desc_bit ;
enum rtl_tx_desc_bit ;
enum rtl_tx_desc_bit_0 ;
enum rtl_tx_desc_bit_1 ;
static const struct rtl_tx_desc_info  tx_desc_info [] = ;
enum rtl_rx_desc_bit ;
#define RsvdMask	0x3fffc000
struct TxDesc ;
struct RxDesc ;
struct ring_info ;
enum features ;
struct rtl8169_counters ;
struct rtl8169_private ;
MODULE_AUTHOR("Realtek and the Linux r8169 crew <netdev@vger.kernel.org>");
MODULE_DESCRIPTION("RealTek RTL-8169 Gigabit Ethernet driver");
module_param(use_dac, int, 0);
MODULE_PARM_DESC(use_dac, "Enable PCI DAC. Unsafe on 32 bit PCI slot.");
module_param_named(debug, debug.msg_enable, int, 0);
MODULE_PARM_DESC(debug, "Debug verbosity level (0=none, ..., 16=all)");
MODULE_LICENSE("GPL");
MODULE_VERSION(RTL8169_VERSION);
MODULE_FIRMWARE(FIRMWARE_8168D_1);
MODULE_FIRMWARE(FIRMWARE_8168D_2);
MODULE_FIRMWARE(FIRMWARE_8168E_1);
MODULE_FIRMWARE(FIRMWARE_8168E_2);
MODULE_FIRMWARE(FIRMWARE_8105E_1);
static int rtl8169_open(struct net_device *dev);
static netdev_tx_t rtl8169_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static irqreturn_t rtl8169_interrupt(int irq, void *dev_instance);
static int rtl8169_init_ring(struct net_device *dev);
static void rtl_hw_start(struct net_device *dev);
static int rtl8169_close(struct net_device *dev);
static void rtl_set_rx_mode(struct net_device *dev);
static void rtl8169_tx_timeout(struct net_device *dev);
static struct net_device_stats *rtl8169_get_stats(struct net_device *dev);
static int rtl8169_rx_interrupt(struct net_device *, struct rtl8169_private *,
void __iomem *, u32 budget);
static int rtl8169_change_mtu(struct net_device *dev, int new_mtu);
static void rtl8169_down(struct net_device *dev);
static void rtl8169_rx_clear(struct rtl8169_private *tp);
static int rtl8169_poll(struct napi_struct *napi, int budget);
static const unsigned int rtl8169_rx_config =
(RX_FIFO_THRESH << RxCfgFIFOShift) | (RX_DMA_BURST << RxCfgDMAShift);
static u32 ocp_read(struct rtl8169_private *tp, u8 mask, u16 reg)
static void ocp_write(struct rtl8169_private *tp, u8 mask, u16 reg, u32 data)
static void rtl8168_oob_notify(struct rtl8169_private *tp, u8 cmd)
#define OOB_CMD_RESET		0x00
#define OOB_CMD_DRIVER_START	0x05
#define OOB_CMD_DRIVER_STOP	0x06
static u16 rtl8168_get_ocp_reg(struct rtl8169_private *tp)
static void rtl8168_driver_start(struct rtl8169_private *tp)
static void rtl8168_driver_stop(struct rtl8169_private *tp)
static int r8168dp_check_dash(struct rtl8169_private *tp)
static void r8169_mdio_write(void __iomem *ioaddr, int reg_addr, int value)
static int r8169_mdio_read(void __iomem *ioaddr, int reg_addr)
static void r8168dp_1_mdio_access(void __iomem *ioaddr, int reg_addr, u32 data)
static void r8168dp_1_mdio_write(void __iomem *ioaddr, int reg_addr, int value)
static int r8168dp_1_mdio_read(void __iomem *ioaddr, int reg_addr)
#define R8168DP_1_MDIO_ACCESS_BIT	0x00020000
static void r8168dp_2_mdio_start(void __iomem *ioaddr)
static void r8168dp_2_mdio_stop(void __iomem *ioaddr)
static void r8168dp_2_mdio_write(void __iomem *ioaddr, int reg_addr, int value)
static int r8168dp_2_mdio_read(void __iomem *ioaddr, int reg_addr)
static void rtl_writephy(struct rtl8169_private *tp, int location, u32 val)
static int rtl_readphy(struct rtl8169_private *tp, int location)
static void rtl_patchphy(struct rtl8169_private *tp, int reg_addr, int value)
static void rtl_w1w0_phy(struct rtl8169_private *tp, int reg_addr, int p, int m)
static void rtl_mdio_write(struct net_device *dev, int phy_id, int location,
int val)
static int rtl_mdio_read(struct net_device *dev, int phy_id, int location)
static void rtl_ephy_write(void __iomem *ioaddr, int reg_addr, int value)
static u16 rtl_ephy_read(void __iomem *ioaddr, int reg_addr)
static void rtl_csi_write(void __iomem *ioaddr, int addr, int value)
static u32 rtl_csi_read(void __iomem *ioaddr, int addr)
static u8 rtl8168d_efuse_read(void __iomem *ioaddr, int reg_addr)
static void rtl8169_irq_mask_and_ack(void __iomem *ioaddr)
static void rtl8169_asic_down(void __iomem *ioaddr)
static unsigned int rtl8169_tbi_reset_pending(struct rtl8169_private *tp)
static unsigned int rtl8169_xmii_reset_pending(struct rtl8169_private *tp)
static unsigned int rtl8169_tbi_link_ok(void __iomem *ioaddr)
static unsigned int rtl8169_xmii_link_ok(void __iomem *ioaddr)
static void rtl8169_tbi_reset_enable(struct rtl8169_private *tp)
static void rtl8169_xmii_reset_enable(struct rtl8169_private *tp)
static void __rtl8169_check_link_status(struct net_device *dev,
struct rtl8169_private *tp,
void __iomem *ioaddr, bool pm)
static void rtl8169_check_link_status(struct net_device *dev,
struct rtl8169_private *tp,
void __iomem *ioaddr)
#define WAKE_ANY (WAKE_PHY | WAKE_MAGIC | WAKE_UCAST | WAKE_BCAST | WAKE_MCAST)
static u32 __rtl8169_get_wol(struct rtl8169_private *tp)
static void rtl8169_get_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static void __rtl8169_set_wol(struct rtl8169_private *tp, u32 wolopts)
static int rtl8169_set_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static const char *rtl_lookup_firmware_name(struct rtl8169_private *tp)
static void rtl8169_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static int rtl8169_get_regs_len(struct net_device *dev)
static int rtl8169_set_speed_tbi(struct net_device *dev,
u8 autoneg, u16 speed, u8 duplex, u32 ignored)
static int rtl8169_set_speed_xmii(struct net_device *dev,
u8 autoneg, u16 speed, u8 duplex, u32 adv)
static int rtl8169_set_speed(struct net_device *dev,
u8 autoneg, u16 speed, u8 duplex, u32 advertising)
static int rtl8169_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static u32 rtl8169_fix_features(struct net_device *dev, u32 features)
static int rtl8169_set_features(struct net_device *dev, u32 features)
static inline u32 rtl8169_tx_vlan_tag(struct rtl8169_private *tp,
struct sk_buff *skb)
static void rtl8169_rx_vlan_tag(struct RxDesc *desc, struct sk_buff *skb)
static int rtl8169_gset_tbi(struct net_device *dev, struct ethtool_cmd *cmd)
static int rtl8169_gset_xmii(struct net_device *dev, struct ethtool_cmd *cmd)
static int rtl8169_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static void rtl8169_get_regs(struct net_device *dev, struct ethtool_regs *regs,
void *p)
static u32 rtl8169_get_msglevel(struct net_device *dev)
static void rtl8169_set_msglevel(struct net_device *dev, u32 value)
static const char rtl8169_gstrings[][ETH_GSTRING_LEN] = ;
static int rtl8169_get_sset_count(struct net_device *dev, int sset)
static void rtl8169_update_counters(struct net_device *dev)
static void rtl8169_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *stats, u64 *data)
static void rtl8169_get_strings(struct net_device *dev, u32 stringset, u8 *data)
static const struct ethtool_ops rtl8169_ethtool_ops = ;
static void rtl8169_get_mac_version(struct rtl8169_private *tp,
struct net_device *dev, u8 default_version)
static void rtl8169_print_mac_version(struct rtl8169_private *tp)
struct phy_reg ;
static void rtl_writephy_batch(struct rtl8169_private *tp,
const struct phy_reg *regs, int len)
#define PHY_READ		0x00000000
#define PHY_DATA_OR		0x10000000
#define PHY_DATA_AND		0x20000000
#define PHY_BJMPN		0x30000000
#define PHY_READ_EFUSE		0x40000000
#define PHY_READ_MAC_BYTE	0x50000000
#define PHY_WRITE_MAC_BYTE	0x60000000
#define PHY_CLEAR_READCOUNT	0x70000000
#define PHY_WRITE		0x80000000
#define PHY_READCOUNT_EQ_SKIP	0x90000000
#define PHY_COMP_EQ_SKIPN	0xa0000000
#define PHY_COMP_NEQ_SKIPN	0xb0000000
#define PHY_WRITE_PREVIOUS	0xc0000000
#define PHY_SKIPN		0xd0000000
#define PHY_DELAY_MS		0xe0000000
#define PHY_WRITE_ERI_WORD	0xf0000000
static void
rtl_phy_write_fw(struct rtl8169_private *tp, const struct firmware *fw)
static void rtl_release_firmware(struct rtl8169_private *tp)
static void rtl_apply_firmware(struct rtl8169_private *tp)
static void rtl_apply_firmware_cond(struct rtl8169_private *tp, u8 reg, u16 val)
static void rtl8169s_hw_phy_config(struct rtl8169_private *tp)
static void rtl8169sb_hw_phy_config(struct rtl8169_private *tp)
static void rtl8169scd_hw_phy_config_quirk(struct rtl8169_private *tp)
static void rtl8169scd_hw_phy_config(struct rtl8169_private *tp)
static void rtl8169sce_hw_phy_config(struct rtl8169_private *tp)
static void rtl8168bb_hw_phy_config(struct rtl8169_private *tp)
static void rtl8168bef_hw_phy_config(struct rtl8169_private *tp)
static void rtl8168cp_1_hw_phy_config(struct rtl8169_private *tp)
static void rtl8168cp_2_hw_phy_config(struct rtl8169_private *tp)
static void rtl8168c_1_hw_phy_config(struct rtl8169_private *tp)
static void rtl8168c_2_hw_phy_config(struct rtl8169_private *tp)
static void rtl8168c_3_hw_phy_config(struct rtl8169_private *tp)
static void rtl8168c_4_hw_phy_config(struct rtl8169_private *tp)
static void rtl8168d_1_hw_phy_config(struct rtl8169_private *tp)
static void rtl8168d_2_hw_phy_config(struct rtl8169_private *tp)
static void rtl8168d_3_hw_phy_config(struct rtl8169_private *tp)
static void rtl8168d_4_hw_phy_config(struct rtl8169_private *tp)
static void rtl8168e_hw_phy_config(struct rtl8169_private *tp)
static void rtl8102e_hw_phy_config(struct rtl8169_private *tp)
static void rtl8105e_hw_phy_config(struct rtl8169_private *tp)
static void rtl_hw_phy_config(struct net_device *dev)
static void rtl8169_phy_timer(unsigned long __opaque)
static void rtl8169_netpoll(struct net_device *dev)
static void rtl8169_release_board(struct pci_dev *pdev, struct net_device *dev,
void __iomem *ioaddr)
static void rtl8169_phy_reset(struct net_device *dev,
struct rtl8169_private *tp)
static void rtl8169_init_phy(struct net_device *dev, struct rtl8169_private *tp)
static void rtl_rar_set(struct rtl8169_private *tp, u8 *addr)
static int rtl_set_mac_address(struct net_device *dev, void *p)
static int rtl8169_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int rtl_xmii_ioctl(struct rtl8169_private *tp,
struct mii_ioctl_data *data, int cmd)
static int rtl_tbi_ioctl(struct rtl8169_private *tp, struct mii_ioctl_data *data, int cmd)
static const struct rtl_cfg_info  rtl_cfg_infos [] = ;
static unsigned rtl_try_msi(struct pci_dev *pdev, void __iomem *ioaddr,
const struct rtl_cfg_info *cfg)
static void rtl_disable_msi(struct pci_dev *pdev, struct rtl8169_private *tp)
static const struct net_device_ops rtl8169_netdev_ops = ;
static void __devinit rtl_init_mdio_ops(struct rtl8169_private *tp)
static void r810x_phy_power_down(struct rtl8169_private *tp)
static void r810x_phy_power_up(struct rtl8169_private *tp)
static void r810x_pll_power_down(struct rtl8169_private *tp)
static void r810x_pll_power_up(struct rtl8169_private *tp)
static void r8168_phy_power_up(struct rtl8169_private *tp)
static void r8168_phy_power_down(struct rtl8169_private *tp)
static void r8168_pll_power_down(struct rtl8169_private *tp)
static void r8168_pll_power_up(struct rtl8169_private *tp)
static void rtl_pll_power_op(struct rtl8169_private *tp,
void (*op)(struct rtl8169_private *))
static void rtl_pll_power_down(struct rtl8169_private *tp)
static void rtl_pll_power_up(struct rtl8169_private *tp)
static void __devinit rtl_init_pll_power_ops(struct rtl8169_private *tp)
static void rtl_hw_reset(struct rtl8169_private *tp)
static int __devinit
rtl8169_init_one(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit rtl8169_remove_one(struct pci_dev *pdev)
static void rtl_request_firmware(struct rtl8169_private *tp)
static int rtl8169_open(struct net_device *dev)
static void rtl8169_hw_reset(struct rtl8169_private *tp)
static void rtl_set_rx_tx_config_registers(struct rtl8169_private *tp)
static void rtl_hw_start(struct net_device *dev)
static void rtl_set_rx_tx_desc_registers(struct rtl8169_private *tp,
void __iomem *ioaddr)
static u16 rtl_rw_cpluscmd(void __iomem *ioaddr)
static void rtl_set_rx_max_size(void __iomem *ioaddr, unsigned int rx_buf_sz)
static void rtl8169_set_magic_reg(void __iomem *ioaddr, unsigned mac_version)
static void rtl_hw_start_8169(struct net_device *dev)
static void rtl_tx_performance_tweak(struct pci_dev *pdev, u16 force)
static void rtl_csi_access_enable(void __iomem *ioaddr, u32 bits)
static void rtl_csi_access_enable_1(void __iomem *ioaddr)
static void rtl_csi_access_enable_2(void __iomem *ioaddr)
struct ephy_info ;
static void rtl_ephy_init(void __iomem *ioaddr, const struct ephy_info *e, int len)
static void rtl_disable_clock_request(struct pci_dev *pdev)
static void rtl_enable_clock_request(struct pci_dev *pdev)
#define R8168_CPCMD_QUIRK_MASK (\
EnableBist | \
Mac_dbgo_oe | \
Force_half_dup | \
Force_rxflow_en | \
Force_txflow_en | \
Cxpl_dbg_sel | \
ASF | \
PktCntrDisable | \
Mac_dbgo_sel)
static void rtl_hw_start_8168bb(void __iomem *ioaddr, struct pci_dev *pdev)
static void rtl_hw_start_8168bef(void __iomem *ioaddr, struct pci_dev *pdev)
static void __rtl_hw_start_8168cp(void __iomem *ioaddr, struct pci_dev *pdev)
static void rtl_hw_start_8168cp_1(void __iomem *ioaddr, struct pci_dev *pdev)
static void rtl_hw_start_8168cp_2(void __iomem *ioaddr, struct pci_dev *pdev)
static void rtl_hw_start_8168cp_3(void __iomem *ioaddr, struct pci_dev *pdev)
static void rtl_hw_start_8168c_1(void __iomem *ioaddr, struct pci_dev *pdev)
static void rtl_hw_start_8168c_2(void __iomem *ioaddr, struct pci_dev *pdev)
static void rtl_hw_start_8168c_3(void __iomem *ioaddr, struct pci_dev *pdev)
static void rtl_hw_start_8168c_4(void __iomem *ioaddr, struct pci_dev *pdev)
static void rtl_hw_start_8168d(void __iomem *ioaddr, struct pci_dev *pdev)
static void rtl_hw_start_8168dp(void __iomem *ioaddr, struct pci_dev *pdev)
static void rtl_hw_start_8168d_4(void __iomem *ioaddr, struct pci_dev *pdev)
static void rtl_hw_start_8168e(void __iomem *ioaddr, struct pci_dev *pdev)
static void rtl_hw_start_8168(struct net_device *dev)
#define R810X_CPCMD_QUIRK_MASK (\
EnableBist | \
Mac_dbgo_oe | \
Force_half_dup | \
Force_rxflow_en | \
Force_txflow_en | \
Cxpl_dbg_sel | \
ASF | \
PktCntrDisable | \
Mac_dbgo_sel)
static void rtl_hw_start_8102e_1(void __iomem *ioaddr, struct pci_dev *pdev)
static void rtl_hw_start_8102e_2(void __iomem *ioaddr, struct pci_dev *pdev)
static void rtl_hw_start_8102e_3(void __iomem *ioaddr, struct pci_dev *pdev)
static void rtl_hw_start_8105e_1(void __iomem *ioaddr, struct pci_dev *pdev)
static void rtl_hw_start_8105e_2(void __iomem *ioaddr, struct pci_dev *pdev)
static void rtl_hw_start_8101(struct net_device *dev)
static int rtl8169_change_mtu(struct net_device *dev, int new_mtu)
static inline void rtl8169_make_unusable_by_asic(struct RxDesc *desc)
static void rtl8169_free_rx_databuff(struct rtl8169_private *tp,
void **data_buff, struct RxDesc *desc)
static inline void rtl8169_mark_to_asic(struct RxDesc *desc, u32 rx_buf_sz)
static inline void rtl8169_map_to_asic(struct RxDesc *desc, dma_addr_t mapping,
u32 rx_buf_sz)
static inline void *rtl8169_align(void *data)
static struct sk_buff *rtl8169_alloc_rx_data(struct rtl8169_private *tp,
struct RxDesc *desc)
static void rtl8169_rx_clear(struct rtl8169_private *tp)
static inline void rtl8169_mark_as_last_descriptor(struct RxDesc *desc)
static int rtl8169_rx_fill(struct rtl8169_private *tp)
static void rtl8169_init_ring_indexes(struct rtl8169_private *tp)
static int rtl8169_init_ring(struct net_device *dev)
static void rtl8169_unmap_tx_skb(struct device *d, struct ring_info *tx_skb,
struct TxDesc *desc)
static void rtl8169_tx_clear_range(struct rtl8169_private *tp, u32 start,
unsigned int n)
static void rtl8169_tx_clear(struct rtl8169_private *tp)
static void rtl8169_schedule_work(struct net_device *dev, work_func_t task)
static void rtl8169_wait_for_quiescence(struct net_device *dev)
static void rtl8169_reinit_task(struct work_struct *work)
static void rtl8169_reset_task(struct work_struct *work)
static void rtl8169_tx_timeout(struct net_device *dev)
static int rtl8169_xmit_frags(struct rtl8169_private *tp, struct sk_buff *skb,
u32 *opts)
static inline void rtl8169_tso_csum(struct rtl8169_private *tp,
struct sk_buff *skb, u32 *opts)
static netdev_tx_t rtl8169_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static void rtl8169_pcierr_interrupt(struct net_device *dev)
static void rtl8169_tx_interrupt(struct net_device *dev,
struct rtl8169_private *tp,
void __iomem *ioaddr)
static inline int rtl8169_fragmented_frame(u32 status)
static inline void rtl8169_rx_csum(struct sk_buff *skb, u32 opts1)
static struct sk_buff *rtl8169_try_rx_copy(void *data,
struct rtl8169_private *tp,
int pkt_size,
dma_addr_t addr)
static int rtl8169_rx_interrupt(struct net_device *dev,
struct rtl8169_private *tp,
void __iomem *ioaddr, u32 budget)
static irqreturn_t rtl8169_interrupt(int irq, void *dev_instance)
static int rtl8169_poll(struct napi_struct *napi, int budget)
static void rtl8169_rx_missed(struct net_device *dev, void __iomem *ioaddr)
static void rtl8169_down(struct net_device *dev)
static int rtl8169_close(struct net_device *dev)
static void rtl_set_rx_mode(struct net_device *dev)
static struct net_device_stats *rtl8169_get_stats(struct net_device *dev)
static void rtl8169_net_suspend(struct net_device *dev)
static int rtl8169_suspend(struct device *device)
static void __rtl8169_resume(struct net_device *dev)
static int rtl8169_resume(struct device *device)
static int rtl8169_runtime_suspend(struct device *device)
static int rtl8169_runtime_resume(struct device *device)
static int rtl8169_runtime_idle(struct device *device)
static const struct dev_pm_ops rtl8169_pm_ops = ;
#define RTL8169_PM_OPS	(&rtl8169_pm_ops)
#define RTL8169_PM_OPS	NULL
static void rtl_shutdown(struct pci_dev *pdev)
static struct pci_driver rtl8169_pci_driver = ;
static int __init rtl8169_init_module(void)
static void __exit rtl8169_cleanup_module(void)
module_init(rtl8169_init_module);
module_exit(rtl8169_cleanup_module);
