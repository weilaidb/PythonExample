#define ATL1_H
#define ATLX_DRIVER_NAME "atl1"
MODULE_DESCRIPTION("Atheros L1 Gigabit Ethernet Driver");
#define atlx_adapter		atl1_adapter
#define atlx_check_for_link	atl1_check_for_link
#define atlx_check_link		atl1_check_link
#define atlx_hash_mc_addr	atl1_hash_mc_addr
#define atlx_hash_set		atl1_hash_set
#define atlx_hw			atl1_hw
#define atlx_mii_ioctl		atl1_mii_ioctl
#define atlx_read_phy_reg	atl1_read_phy_reg
#define atlx_set_mac		atl1_set_mac
#define atlx_set_mac_addr	atl1_set_mac_addr
struct atl1_adapter;
struct atl1_hw;
static u32 atl1_hash_mc_addr(struct atl1_hw *hw, u8 *mc_addr);
static void atl1_hash_set(struct atl1_hw *hw, u32 hash_value);
static void atl1_set_mac_addr(struct atl1_hw *hw);
static int atl1_mii_ioctl(struct net_device *netdev, struct ifreq *ifr,
int cmd);
static u32 atl1_check_link(struct atl1_adapter *adapter);
#define IDLE_STATUS_RXMAC			0x1
#define IDLE_STATUS_TXMAC			0x2
#define IDLE_STATUS_RXQ				0x4
#define IDLE_STATUS_TXQ				0x8
#define IDLE_STATUS_DMAR			0x10
#define IDLE_STATUS_DMAW			0x20
#define IDLE_STATUS_SMB				0x40
#define IDLE_STATUS_CMB				0x80
#define MDIO_WAIT_TIMES				30
#define MAC_CTRL_TX_PAUSE			0x10000
#define MAC_CTRL_SCNT				0x20000
#define MAC_CTRL_SRST_TX			0x40000
#define MAC_CTRL_TX_SIMURST			0x80000
#define MAC_CTRL_SPEED_SHIFT			20
#define MAC_CTRL_SPEED_MASK			0x300000
#define MAC_CTRL_SPEED_1000			0x2
#define MAC_CTRL_SPEED_10_100			0x1
#define MAC_CTRL_DBG_TX_BKPRESURE		0x400000
#define MAC_CTRL_TX_HUGE			0x800000
#define MAC_CTRL_RX_CHKSUM_EN			0x1000000
#define MAC_CTRL_DBG				0x8000000
#define WOL_CLK_SWITCH_EN			0x8000
#define WOL_PT5_EN				0x200000
#define WOL_PT6_EN				0x400000
#define WOL_PT5_MATCH				0x8000000
#define WOL_PT6_MATCH				0x10000000
#define REG_WOL_PATTERN_LEN			0x14A4
#define WOL_PT_LEN_MASK				0x7F
#define WOL_PT0_LEN_SHIFT			0
#define WOL_PT1_LEN_SHIFT			8
#define WOL_PT2_LEN_SHIFT			16
#define WOL_PT3_LEN_SHIFT			24
#define WOL_PT4_LEN_SHIFT			0
#define WOL_PT5_LEN_SHIFT			8
#define WOL_PT6_LEN_SHIFT			16
#define REG_SRAM_RFD_LEN			0x1504
#define REG_SRAM_RRD_ADDR			0x1508
#define REG_SRAM_RRD_LEN			0x150C
#define REG_SRAM_TPD_ADDR			0x1510
#define REG_SRAM_TPD_LEN			0x1514
#define REG_SRAM_TRD_ADDR			0x1518
#define REG_SRAM_TRD_LEN			0x151C
#define REG_SRAM_RXF_ADDR			0x1520
#define REG_SRAM_RXF_LEN			0x1524
#define REG_SRAM_TXF_ADDR			0x1528
#define REG_SRAM_TXF_LEN			0x152C
#define REG_SRAM_TCPH_PATH_ADDR			0x1530
#define SRAM_TCPH_ADDR_MASK			0xFFF
#define SRAM_TCPH_ADDR_SHIFT			0
#define SRAM_PATH_ADDR_MASK			0xFFF
#define SRAM_PATH_ADDR_SHIFT			16
#define REG_LOAD_PTR				0x1534
#define REG_DESC_RFD_ADDR_LO			0x1544
#define REG_DESC_RRD_ADDR_LO			0x1548
#define REG_DESC_TPD_ADDR_LO			0x154C
#define REG_DESC_CMB_ADDR_LO			0x1550
#define REG_DESC_SMB_ADDR_LO			0x1554
#define REG_DESC_RFD_RRD_RING_SIZE		0x1558
#define DESC_RFD_RING_SIZE_MASK			0x7FF
#define DESC_RFD_RING_SIZE_SHIFT		0
#define DESC_RRD_RING_SIZE_MASK			0x7FF
#define DESC_RRD_RING_SIZE_SHIFT		16
#define REG_DESC_TPD_RING_SIZE			0x155C
#define DESC_TPD_RING_SIZE_MASK			0x3FF
#define DESC_TPD_RING_SIZE_SHIFT		0
#define REG_TXQ_CTRL				0x1580
#define TXQ_CTRL_TPD_BURST_NUM_SHIFT		0
#define TXQ_CTRL_TPD_BURST_NUM_MASK		0x1F
#define TXQ_CTRL_EN				0x20
#define TXQ_CTRL_ENH_MODE			0x40
#define TXQ_CTRL_TPD_FETCH_TH_SHIFT		8
#define TXQ_CTRL_TPD_FETCH_TH_MASK		0x3F
#define TXQ_CTRL_TXF_BURST_NUM_SHIFT		16
#define TXQ_CTRL_TXF_BURST_NUM_MASK		0xFFFF
#define REG_TX_JUMBO_TASK_TH_TPD_IPG		0x1584
#define TX_JUMBO_TASK_TH_MASK			0x7FF
#define TX_JUMBO_TASK_TH_SHIFT			0
#define TX_TPD_MIN_IPG_MASK			0x1F
#define TX_TPD_MIN_IPG_SHIFT			16
#define REG_RXQ_CTRL				0x15A0
#define RXQ_CTRL_RFD_BURST_NUM_SHIFT		0
#define RXQ_CTRL_RFD_BURST_NUM_MASK		0xFF
#define RXQ_CTRL_RRD_BURST_THRESH_SHIFT		8
#define RXQ_CTRL_RRD_BURST_THRESH_MASK		0xFF
#define RXQ_CTRL_RFD_PREF_MIN_IPG_SHIFT		16
#define RXQ_CTRL_RFD_PREF_MIN_IPG_MASK		0x1F
#define RXQ_CTRL_CUT_THRU_EN			0x40000000
#define RXQ_CTRL_EN				0x80000000
#define REG_RXQ_JMBOSZ_RRDTIM			0x15A4
#define RXQ_JMBOSZ_TH_MASK			0x7FF
#define RXQ_JMBOSZ_TH_SHIFT			0
#define RXQ_JMBO_LKAH_MASK			0xF
#define RXQ_JMBO_LKAH_SHIFT			11
#define RXQ_RRD_TIMER_MASK			0xFFFF
#define RXQ_RRD_TIMER_SHIFT			16
#define REG_RXQ_RXF_PAUSE_THRESH		0x15A8
#define RXQ_RXF_PAUSE_TH_HI_SHIFT		16
#define RXQ_RXF_PAUSE_TH_HI_MASK		0xFFF
#define RXQ_RXF_PAUSE_TH_LO_SHIFT		0
#define RXQ_RXF_PAUSE_TH_LO_MASK		0xFFF
#define REG_RXQ_RRD_PAUSE_THRESH		0x15AC
#define RXQ_RRD_PAUSE_TH_HI_SHIFT		0
#define RXQ_RRD_PAUSE_TH_HI_MASK		0xFFF
#define RXQ_RRD_PAUSE_TH_LO_SHIFT		16
#define RXQ_RRD_PAUSE_TH_LO_MASK		0xFFF
#define REG_DMA_CTRL				0x15C0
#define DMA_CTRL_DMAR_IN_ORDER			0x1
#define DMA_CTRL_DMAR_ENH_ORDER			0x2
#define DMA_CTRL_DMAR_OUT_ORDER			0x4
#define DMA_CTRL_RCB_VALUE			0x8
#define DMA_CTRL_DMAR_BURST_LEN_SHIFT		4
#define DMA_CTRL_DMAR_BURST_LEN_MASK		7
#define DMA_CTRL_DMAW_BURST_LEN_SHIFT		7
#define DMA_CTRL_DMAW_BURST_LEN_MASK		7
#define DMA_CTRL_DMAR_EN			0x400
#define DMA_CTRL_DMAW_EN			0x800
#define REG_CSMB_CTRL				0x15D0
#define CSMB_CTRL_CMB_NOW			1
#define CSMB_CTRL_SMB_NOW			2
#define CSMB_CTRL_CMB_EN			4
#define CSMB_CTRL_SMB_EN			8
#define REG_CMB_WRITE_TH			0x15D4
#define CMB_RRD_TH_SHIFT			0
#define CMB_RRD_TH_MASK				0x7FF
#define CMB_TPD_TH_SHIFT			16
#define CMB_TPD_TH_MASK				0x7FF
#define REG_CMB_WRITE_TIMER			0x15D8
#define CMB_RX_TM_SHIFT				0
#define CMB_RX_TM_MASK				0xFFFF
#define CMB_TX_TM_SHIFT				16
#define CMB_TX_TM_MASK				0xFFFF
#define REG_CMB_RX_PKT_CNT			0x15DC
#define REG_CMB_TX_PKT_CNT			0x15E0
#define REG_SMB_TIMER				0x15E4
#define REG_MAILBOX				0x15F0
#define MB_RFD_PROD_INDX_SHIFT			0
#define MB_RFD_PROD_INDX_MASK			0x7FF
#define MB_RRD_CONS_INDX_SHIFT			11
#define MB_RRD_CONS_INDX_MASK			0x7FF
#define MB_TPD_PROD_INDX_SHIFT			22
#define MB_TPD_PROD_INDX_MASK			0x3FF
#define ISR_SMB					0x1
#define ISR_TIMER				0x2
#define ISR_MANUAL				0x4
#define ISR_RXF_OV				0x8
#define ISR_RFD_UNRUN				0x10
#define ISR_RRD_OV				0x20
#define ISR_TXF_UNRUN				0x40
#define ISR_LINK				0x80
#define ISR_HOST_RFD_UNRUN			0x100
#define ISR_HOST_RRD_OV				0x200
#define ISR_DMAR_TO_RST				0x400
#define ISR_DMAW_TO_RST				0x800
#define ISR_GPHY				0x1000
#define ISR_RX_PKT				0x10000
#define ISR_TX_PKT				0x20000
#define ISR_TX_DMA				0x40000
#define ISR_RX_DMA				0x80000
#define ISR_CMB_RX				0x100000
#define ISR_CMB_TX				0x200000
#define ISR_MAC_RX				0x400000
#define ISR_MAC_TX				0x800000
#define ISR_DIS_SMB				0x20000000
#define ISR_DIS_DMA				0x40000000
#define IMR_NORMAL_MASK	(\
ISR_SMB		|\
ISR_GPHY	|\
ISR_PHY_LINKDOWN|\
ISR_DMAR_TO_RST	|\
ISR_DMAW_TO_RST	|\
ISR_CMB_TX	|\
ISR_CMB_RX)
#define IMR_DEBUG_MASK	(\
ISR_SMB		|\
ISR_TIMER	|\
ISR_MANUAL	|\
ISR_RXF_OV	|\
ISR_RFD_UNRUN	|\
ISR_RRD_OV	|\
ISR_TXF_UNRUN	|\
ISR_LINK	|\
ISR_CMB_TX	|\
ISR_CMB_RX	|\
ISR_RX_PKT	|\
ISR_TX_PKT	|\
ISR_MAC_RX	|\
ISR_MAC_TX)
#define MEDIA_TYPE_1000M_FULL			1
#define MEDIA_TYPE_100M_FULL			2
#define MEDIA_TYPE_100M_HALF			3
#define MEDIA_TYPE_10M_FULL			4
#define MEDIA_TYPE_10M_HALF			5
#define AUTONEG_ADVERTISE_SPEED_DEFAULT		0x002F
#define MAX_JUMBO_FRAME_SIZE			10240
#define ATL1_EEDUMP_LEN				48
struct stats_msg_block ;
struct coals_msg_block ;
struct rx_return_desc ;
#define PACKET_FLAG_ETH_TYPE	0x0080
#define PACKET_FLAG_VLAN_INS	0x0100
#define PACKET_FLAG_ERR		0x0200
#define PACKET_FLAG_IPV4	0x0400
#define PACKET_FLAG_UDP		0x0800
#define PACKET_FLAG_TCP		0x1000
#define PACKET_FLAG_BCAST	0x2000
#define PACKET_FLAG_MCAST	0x4000
#define PACKET_FLAG_PAUSE	0x8000
#define ERR_FLAG_CRC		0x0001
#define ERR_FLAG_CODE		0x0002
#define ERR_FLAG_DRIBBLE	0x0004
#define ERR_FLAG_RUNT		0x0008
#define ERR_FLAG_OV		0x0010
#define ERR_FLAG_TRUNC		0x0020
#define ERR_FLAG_IP_CHKSUM	0x0040
#define ERR_FLAG_L4_CHKSUM	0x0080
#define ERR_FLAG_LEN		0x0100
#define ERR_FLAG_DES_ADDR	0x0200
struct rx_free_desc  __packed;
#define TPD_BUFLEN_MASK		0x3FFF
#define TPD_BUFLEN_SHIFT	0
#define TPD_DMAINT_MASK		0x0001
#define TPD_DMAINT_SHIFT	14
#define TPD_PKTNT_MASK		0x0001
#define TPD_PKTINT_SHIFT	15
#define TPD_VLANTAG_MASK	0xFFFF
#define TPD_VLANTAG_SHIFT	16
#define TPD_EOP_MASK		0x0001
#define TPD_EOP_SHIFT		0
#define TPD_COALESCE_MASK	0x0001
#define TPD_COALESCE_SHIFT	1
#define TPD_INS_VL_TAG_MASK	0x0001
#define TPD_INS_VL_TAG_SHIFT	2
#define TPD_CUST_CSUM_EN_MASK	0x0001
#define TPD_CUST_CSUM_EN_SHIFT	3
#define TPD_SEGMENT_EN_MASK	0x0001
#define TPD_SEGMENT_EN_SHIFT	4
#define TPD_IP_CSUM_MASK	0x0001
#define TPD_IP_CSUM_SHIFT	5
#define TPD_TCP_CSUM_MASK	0x0001
#define TPD_TCP_CSUM_SHIFT	6
#define TPD_UDP_CSUM_MASK	0x0001
#define TPD_UDP_CSUM_SHIFT	7
#define TPD_VL_TAGGED_MASK	0x0001
#define TPD_VL_TAGGED_SHIFT	8
#define TPD_ETHTYPE_MASK	0x0001
#define TPD_ETHTYPE_SHIFT	9
#define TPD_IPHL_MASK		0x000F
#define TPD_IPHL_SHIFT		10
#define TPD_TCPHDRLEN_MASK	0x000F
#define TPD_TCPHDRLEN_SHIFT	14
#define TPD_HDRFLAG_MASK	0x0001
#define TPD_HDRFLAG_SHIFT	18
#define TPD_MSS_MASK		0x1FFF
#define TPD_MSS_SHIFT		19
#define TPD_PLOADOFFSET_MASK	0x00FF
#define TPD_PLOADOFFSET_SHIFT	16
#define TPD_CCSUMOFFSET_MASK	0x00FF
#define TPD_CCSUMOFFSET_SHIFT	24
struct tx_packet_desc ;
enum atl1_dma_order ;
enum atl1_dma_rcb ;
enum atl1_dma_req_block ;
#define ATL1_MAX_INTR		3
#define ATL1_MAX_TX_BUF_LEN	0x3000
#define ATL1_DEFAULT_TPD	256
#define ATL1_MAX_TPD		1024
#define ATL1_MIN_TPD		64
#define ATL1_DEFAULT_RFD	512
#define ATL1_MIN_RFD		128
#define ATL1_MAX_RFD		2048
#define ATL1_REG_COUNT		1538
#define ATL1_GET_DESC(R, i, type)	(&(((type *)((R)->desc))[i]))
#define ATL1_RFD_DESC(R, i)	ATL1_GET_DESC(R, i, struct rx_free_desc)
#define ATL1_TPD_DESC(R, i)	ATL1_GET_DESC(R, i, struct tx_packet_desc)
#define ATL1_RRD_DESC(R, i)	ATL1_GET_DESC(R, i, struct rx_return_desc)
struct atl1_ring_header ;
struct atl1_buffer ;
struct atl1_tpd_ring ;
struct atl1_rfd_ring ;
struct atl1_rrd_ring ;
struct atl1_cmb ;
struct atl1_smb ;
struct atl1_sft_stats ;
struct atl1_hw ;
struct atl1_adapter ;
