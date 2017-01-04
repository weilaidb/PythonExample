#define _ATL2_H_
#define _ATL2_HW_H_
#define _ATL2_OSDEP_H_
extern int ethtool_ioctl(struct ifreq *ifr);
#define PCI_COMMAND_REGISTER	PCI_COMMAND
#define CMD_MEM_WRT_INVALIDATE	PCI_COMMAND_INVALIDATE
#define ETH_ADDR_LEN		ETH_ALEN
#define ATL2_WRITE_REG(a, reg, value) (iowrite32((value), \
((a)->hw_addr + (reg))))
#define ATL2_WRITE_FLUSH(a) (ioread32((a)->hw_addr))
#define ATL2_READ_REG(a, reg) (ioread32((a)->hw_addr + (reg)))
#define ATL2_WRITE_REGB(a, reg, value) (iowrite8((value), \
((a)->hw_addr + (reg))))
#define ATL2_READ_REGB(a, reg) (ioread8((a)->hw_addr + (reg)))
#define ATL2_WRITE_REGW(a, reg, value) (iowrite16((value), \
((a)->hw_addr + (reg))))
#define ATL2_READ_REGW(a, reg) (ioread16((a)->hw_addr + (reg)))
#define ATL2_WRITE_REG_ARRAY(a, reg, offset, value) \
(iowrite32((value), (((a)->hw_addr + (reg)) + ((offset) << 2))))
#define ATL2_READ_REG_ARRAY(a, reg, offset) \
(ioread32(((a)->hw_addr + (reg)) + ((offset) << 2)))
struct atl2_adapter;
struct atl2_hw;
static s32 atl2_reset_hw(struct atl2_hw *hw);
static s32 atl2_read_mac_addr(struct atl2_hw *hw);
static s32 atl2_init_hw(struct atl2_hw *hw);
static s32 atl2_get_speed_and_duplex(struct atl2_hw *hw, u16 *speed,
u16 *duplex);
static u32 atl2_hash_mc_addr(struct atl2_hw *hw, u8 *mc_addr);
static void atl2_hash_set(struct atl2_hw *hw, u32 hash_value);
static s32 atl2_read_phy_reg(struct atl2_hw *hw, u16 reg_addr, u16 *phy_data);
static s32 atl2_write_phy_reg(struct atl2_hw *hw, u32 reg_addr, u16 phy_data);
static void atl2_read_pci_cfg(struct atl2_hw *hw, u32 reg, u16 *value);
static void atl2_write_pci_cfg(struct atl2_hw *hw, u32 reg, u16 *value);
static void atl2_set_mac_addr(struct atl2_hw *hw);
static bool atl2_read_eeprom(struct atl2_hw *hw, u32 Offset, u32 *pValue);
static bool atl2_write_eeprom(struct atl2_hw *hw, u32 offset, u32 value);
static s32 atl2_phy_init(struct atl2_hw *hw);
static int atl2_check_eeprom_exist(struct atl2_hw *hw);
static void atl2_force_ps(struct atl2_hw *hw);
#define IDLE_STATUS_RXMAC	1
#define IDLE_STATUS_TXMAC	2
#define IDLE_STATUS_DMAR	8
#define IDLE_STATUS_DMAW	4
#define MDIO_WAIT_TIMES		10
#define MAC_CTRL_DBG_TX_BKPRESURE	0x100000
#define MAC_CTRL_MACLP_CLK_PHY		0x8000000
#define MAC_CTRL_HALF_LEFT_BUF_SHIFT	28
#define MAC_CTRL_HALF_LEFT_BUF_MASK	0xF
#define REG_SRAM_TXRAM_END	0x1500
#define REG_SRAM_RXRAM_END	0x1502
#define REG_TXD_BASE_ADDR_LO	0x1544
#define REG_TXD_MEM_SIZE	0x1548
#define REG_TXS_BASE_ADDR_LO	0x154C
#define REG_TXS_MEM_SIZE	0x1550
#define REG_RXD_BASE_ADDR_LO	0x1554
#define REG_RXD_BUF_NUM		0x1558
#define REG_DMAR	0x1580
#define     DMAR_EN	0x1
#define REG_TX_CUT_THRESH	0x1590
#define REG_DMAW	0x15A0
#define     DMAW_EN	0x1
#define REG_PAUSE_ON_TH		0x15A8
#define REG_PAUSE_OFF_TH	0x15AA
#define REG_MB_TXD_WR_IDX	0x15f0
#define REG_MB_RXD_RD_IDX	0x15F4
#define ISR_TIMER	1
#define ISR_MANUAL	2
#define ISR_RXF_OV	4
#define ISR_TXF_UR	8
#define ISR_TXS_OV	0x10
#define ISR_RXS_OV	0x20
#define ISR_LINK_CHG	0x40
#define ISR_HOST_TXD_UR	0x80
#define ISR_HOST_RXD_OV	0x100
#define ISR_DMAR_TO_RST	0x200
#define ISR_DMAW_TO_RST	0x400
#define ISR_PHY		0x800
#define ISR_TS_UPDATE	0x10000
#define ISR_RS_UPDATE	0x20000
#define ISR_TX_EARLY	0x40000
#define ISR_TX_EVENT (ISR_TXF_UR | ISR_TXS_OV | ISR_HOST_TXD_UR |\
ISR_TS_UPDATE | ISR_TX_EARLY)
#define ISR_RX_EVENT (ISR_RXF_OV | ISR_RXS_OV | ISR_HOST_RXD_OV |\
ISR_RS_UPDATE)
#define IMR_NORMAL_MASK		(\\
ISR_MANUAL		|\
ISR_DMAR_TO_RST		|\
ISR_DMAW_TO_RST		|\
ISR_PHY			|\
ISR_PHY_LINKDOWN	|\
ISR_TS_UPDATE		|\
ISR_RS_UPDATE)
#define REG_STS_RX_PAUSE	0x1700
#define REG_STS_RXD_OV		0x1704
#define REG_STS_RXS_OV		0x1708
#define REG_STS_RX_FILTER	0x170C
#define MII_SMARTSPEED	0x14
#define MII_DBG_ADDR	0x1D
#define MII_DBG_DATA	0x1E
#define PCI_REG_COMMAND		0x04
#define CMD_IO_SPACE		0x0001
#define CMD_MEMORY_SPACE	0x0002
#define CMD_BUS_MASTER		0x0004
#define MEDIA_TYPE_100M_FULL	1
#define MEDIA_TYPE_100M_HALF	2
#define MEDIA_TYPE_10M_FULL	3
#define MEDIA_TYPE_10M_HALF	4
#define AUTONEG_ADVERTISE_SPEED_DEFAULT	0x000F
#define ENET_HEADER_SIZE		14
#define MAXIMUM_ETHERNET_FRAME_SIZE	1518
#define MINIMUM_ETHERNET_FRAME_SIZE	64
#define ETHERNET_FCS_SIZE		4
#define MAX_JUMBO_FRAME_SIZE		0x2000
#define VLAN_SIZE                                               4
struct tx_pkt_header ;
#define TX_PKT_HEADER_SIZE_MASK		0x7FF
#define TX_PKT_HEADER_SIZE_SHIFT	0
#define TX_PKT_HEADER_INS_VLAN_MASK	0x1
#define TX_PKT_HEADER_INS_VLAN_SHIFT	15
#define TX_PKT_HEADER_VLAN_TAG_MASK	0xFFFF
#define TX_PKT_HEADER_VLAN_TAG_SHIFT	16
struct tx_pkt_status ;
#define TX_PKT_STATUS_SIZE_MASK		0x7FF
#define TX_PKT_STATUS_SIZE_SHIFT	0
#define TX_PKT_STATUS_OK_MASK		0x1
#define TX_PKT_STATUS_OK_SHIFT		16
#define TX_PKT_STATUS_BCAST_MASK	0x1
#define TX_PKT_STATUS_BCAST_SHIFT	17
#define TX_PKT_STATUS_MCAST_MASK	0x1
#define TX_PKT_STATUS_MCAST_SHIFT	18
#define TX_PKT_STATUS_PAUSE_MASK	0x1
#define TX_PKT_STATUS_PAUSE_SHIFT	19
#define TX_PKT_STATUS_CTRL_MASK		0x1
#define TX_PKT_STATUS_CTRL_SHIFT	20
#define TX_PKT_STATUS_DEFER_MASK	0x1
#define TX_PKT_STATUS_DEFER_SHIFT	21
#define TX_PKT_STATUS_EXC_DEFER_MASK	0x1
#define TX_PKT_STATUS_EXC_DEFER_SHIFT	22
#define TX_PKT_STATUS_SINGLE_COL_MASK	0x1
#define TX_PKT_STATUS_SINGLE_COL_SHIFT	23
#define TX_PKT_STATUS_MULTI_COL_MASK	0x1
#define TX_PKT_STATUS_MULTI_COL_SHIFT	24
#define TX_PKT_STATUS_LATE_COL_MASK	0x1
#define TX_PKT_STATUS_LATE_COL_SHIFT	25
#define TX_PKT_STATUS_ABORT_COL_MASK	0x1
#define TX_PKT_STATUS_ABORT_COL_SHIFT	26
#define TX_PKT_STATUS_UNDERRUN_MASK	0x1
#define TX_PKT_STATUS_UNDERRUN_SHIFT	27
#define TX_PKT_STATUS_UPDATE_MASK	0x1
#define TX_PKT_STATUS_UPDATE_SHIFT	31
struct rx_pkt_status ;
#define RX_PKT_STATUS_SIZE_MASK		0x7FF
#define RX_PKT_STATUS_SIZE_SHIFT	0
#define RX_PKT_STATUS_OK_MASK		0x1
#define RX_PKT_STATUS_OK_SHIFT		16
#define RX_PKT_STATUS_BCAST_MASK	0x1
#define RX_PKT_STATUS_BCAST_SHIFT	17
#define RX_PKT_STATUS_MCAST_MASK	0x1
#define RX_PKT_STATUS_MCAST_SHIFT	18
#define RX_PKT_STATUS_PAUSE_MASK	0x1
#define RX_PKT_STATUS_PAUSE_SHIFT	19
#define RX_PKT_STATUS_CTRL_MASK		0x1
#define RX_PKT_STATUS_CTRL_SHIFT	20
#define RX_PKT_STATUS_CRC_MASK		0x1
#define RX_PKT_STATUS_CRC_SHIFT		21
#define RX_PKT_STATUS_CODE_MASK		0x1
#define RX_PKT_STATUS_CODE_SHIFT	22
#define RX_PKT_STATUS_RUNT_MASK		0x1
#define RX_PKT_STATUS_RUNT_SHIFT	23
#define RX_PKT_STATUS_FRAG_MASK		0x1
#define RX_PKT_STATUS_FRAG_SHIFT	24
#define RX_PKT_STATUS_TRUNK_MASK	0x1
#define RX_PKT_STATUS_TRUNK_SHIFT	25
#define RX_PKT_STATUS_ALIGN_MASK	0x1
#define RX_PKT_STATUS_ALIGN_SHIFT	26
#define RX_PKT_STATUS_VLAN_MASK		0x1
#define RX_PKT_STATUS_VLAN_SHIFT	27
#define RX_PKT_STATUS_UPDATE_MASK	0x1
#define RX_PKT_STATUS_UPDATE_SHIFT	31
#define RX_PKT_STATUS_VLAN_TAG_MASK	0xFFFF
#define RX_PKT_STATUS_VLAN_TAG_SHIFT	32
struct rx_desc ;
enum atl2_speed_duplex ;
struct atl2_spi_flash_dev ;
struct atl2_hw ;
struct atl2_ring_header ;
struct atl2_adapter ;
enum atl2_state_t ;
