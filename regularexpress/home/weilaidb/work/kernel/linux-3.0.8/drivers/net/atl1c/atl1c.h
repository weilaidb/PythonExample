#define _ATL1C_H_
#define AT_WUFC_LNKC 0x00000001
#define AT_WUFC_MAG  0x00000002
#define AT_WUFC_EX   0x00000004
#define AT_WUFC_MC   0x00000008
#define AT_WUFC_BC   0x00000010
#define AT_VLAN_TO_TAG(_vlan, _tag)	   \
_tag =  ((((_vlan) >> 8) & 0xFF)  |\
(((_vlan) & 0xFF) << 8))
#define AT_TAG_TO_VLAN(_tag, _vlan) 	 \
_vlan = ((((_tag) >> 8) & 0xFF) |\
(((_tag) & 0xFF) << 8))
#define SPEED_0		   0xffff
#define HALF_DUPLEX        1
#define FULL_DUPLEX        2
#define AT_RX_BUF_SIZE		(ETH_FRAME_LEN + VLAN_HLEN + ETH_FCS_LEN)
#define MAX_JUMBO_FRAME_SIZE	(6*1024)
#define MAX_TSO_FRAME_SIZE      (7*1024)
#define MAX_TX_OFFLOAD_THRESH	(9*1024)
#define AT_MAX_RECEIVE_QUEUE    4
#define AT_DEF_RECEIVE_QUEUE	1
#define AT_MAX_TRANSMIT_QUEUE	2
#define AT_DMA_HI_ADDR_MASK     0xffffffff00000000ULL
#define AT_DMA_LO_ADDR_MASK     0x00000000ffffffffULL
#define AT_TX_WATCHDOG  (5 * HZ)
#define AT_MAX_INT_WORK		5
#define AT_TWSI_EEPROM_TIMEOUT 	100
#define AT_HW_MAX_IDLE_DELAY 	10
#define AT_SUSPEND_LINK_TIMEOUT 100
#define AT_ASPM_L0S_TIMER	6
#define AT_ASPM_L1_TIMER	12
#define AT_LCKDET_TIMER		12
#define ATL1C_PCIE_L0S_L1_DISABLE 	0x01
#define ATL1C_PCIE_PHY_RESET		0x02
#define ATL1C_ASPM_L0s_ENABLE		0x0001
#define ATL1C_ASPM_L1_ENABLE		0x0002
#define AT_REGS_LEN	(75 * sizeof(u32))
#define AT_EEPROM_LEN 	512
#define ATL1C_GET_DESC(R, i, type)	(&(((type *)((R)->desc))[i]))
#define ATL1C_RFD_DESC(R, i)	ATL1C_GET_DESC(R, i, struct atl1c_rx_free_desc)
#define ATL1C_TPD_DESC(R, i)	ATL1C_GET_DESC(R, i, struct atl1c_tpd_desc)
#define ATL1C_RRD_DESC(R, i)	ATL1C_GET_DESC(R, i, struct atl1c_recv_ret_status)
#define TPD_L4HDR_OFFSET_MASK	0x00FF
#define TPD_L4HDR_OFFSET_SHIFT	0
#define TPD_TCPHDR_OFFSET_MASK	0x00FF
#define TPD_TCPHDR_OFFSET_SHIFT	0
#define TPD_PLOADOFFSET_MASK	0x00FF
#define TPD_PLOADOFFSET_SHIFT	0
#define TPD_CCSUM_EN_MASK	0x0001
#define TPD_CCSUM_EN_SHIFT	8
#define TPD_IP_CSUM_MASK	0x0001
#define TPD_IP_CSUM_SHIFT	9
#define TPD_TCP_CSUM_MASK	0x0001
#define TPD_TCP_CSUM_SHIFT	10
#define TPD_UDP_CSUM_MASK	0x0001
#define TPD_UDP_CSUM_SHIFT	11
#define TPD_LSO_EN_MASK		0x0001
#define TPD_LSO_EN_SHIFT	12
#define TPD_LSO_VER_MASK	0x0001
#define TPD_LSO_VER_SHIFT	13
#define TPD_CON_VTAG_MASK	0x0001
#define TPD_CON_VTAG_SHIFT	14
#define TPD_INS_VTAG_MASK	0x0001
#define TPD_INS_VTAG_SHIFT	15
#define TPD_IPV4_PACKET_MASK	0x0001
#define TPD_IPV4_PACKET_SHIFT	16
#define TPD_ETH_TYPE_MASK	0x0001
#define TPD_ETH_TYPE_SHIFT	17
#define TPD_CCSUM_OFFSET_MASK	0x00FF
#define TPD_CCSUM_OFFSET_SHIFT	18
#define TPD_CCSUM_EPAD_MASK	0x0001
#define TPD_CCSUM_EPAD_SHIFT	30
#define TPD_MSS_MASK            0x1FFF
#define TPD_MSS_SHIFT		18
#define TPD_EOP_MASK		0x0001
#define TPD_EOP_SHIFT		31
struct atl1c_tpd_desc ;
struct atl1c_tpd_ext_desc ;
#define RRS_RX_CSUM_MASK	0xFFFF
#define RRS_RX_CSUM_SHIFT	0
#define RRS_RX_RFD_CNT_MASK	0x000F
#define RRS_RX_RFD_CNT_SHIFT	16
#define RRS_RX_RFD_INDEX_MASK	0x0FFF
#define RRS_RX_RFD_INDEX_SHIFT	20
#define RRS_HEAD_LEN_MASK	0x00FF
#define RRS_HEAD_LEN_SHIFT	0
#define RRS_HDS_TYPE_MASK	0x0003
#define RRS_HDS_TYPE_SHIFT	8
#define RRS_CPU_NUM_MASK	0x0003
#define	RRS_CPU_NUM_SHIFT	10
#define RRS_HASH_FLG_MASK	0x000F
#define RRS_HASH_FLG_SHIFT	12
#define RRS_HDS_TYPE_HEAD	1
#define RRS_HDS_TYPE_DATA	2
#define RRS_IS_NO_HDS_TYPE(flag) \
((((flag) >> (RRS_HDS_TYPE_SHIFT)) & RRS_HDS_TYPE_MASK) == 0)
#define RRS_IS_HDS_HEAD(flag) \
((((flag) >> (RRS_HDS_TYPE_SHIFT)) & RRS_HDS_TYPE_MASK) == \
RRS_HDS_TYPE_HEAD)
#define RRS_IS_HDS_DATA(flag) \
((((flag) >> (RRS_HDS_TYPE_SHIFT)) & RRS_HDS_TYPE_MASK) == \
RRS_HDS_TYPE_DATA)
#define RRS_PKT_SIZE_MASK	0x3FFF
#define RRS_PKT_SIZE_SHIFT	0
#define RRS_ERR_L4_CSUM_MASK	0x0001
#define RRS_ERR_L4_CSUM_SHIFT	14
#define RRS_ERR_IP_CSUM_MASK	0x0001
#define RRS_ERR_IP_CSUM_SHIFT	15
#define RRS_VLAN_INS_MASK	0x0001
#define RRS_VLAN_INS_SHIFT	16
#define RRS_PROT_ID_MASK	0x0007
#define RRS_PROT_ID_SHIFT	17
#define RRS_RX_ERR_SUM_MASK	0x0001
#define RRS_RX_ERR_SUM_SHIFT	20
#define RRS_RX_ERR_CRC_MASK	0x0001
#define RRS_RX_ERR_CRC_SHIFT	21
#define RRS_RX_ERR_FAE_MASK	0x0001
#define RRS_RX_ERR_FAE_SHIFT	22
#define RRS_RX_ERR_TRUNC_MASK	0x0001
#define RRS_RX_ERR_TRUNC_SHIFT	23
#define RRS_RX_ERR_RUNC_MASK	0x0001
#define RRS_RX_ERR_RUNC_SHIFT	24
#define RRS_RX_ERR_ICMP_MASK	0x0001
#define RRS_RX_ERR_ICMP_SHIFT	25
#define RRS_PACKET_BCAST_MASK	0x0001
#define RRS_PACKET_BCAST_SHIFT	26
#define RRS_PACKET_MCAST_MASK	0x0001
#define RRS_PACKET_MCAST_SHIFT	27
#define RRS_PACKET_TYPE_MASK	0x0001
#define RRS_PACKET_TYPE_SHIFT	28
#define RRS_FIFO_FULL_MASK	0x0001
#define RRS_FIFO_FULL_SHIFT	29
#define RRS_802_3_LEN_ERR_MASK 	0x0001
#define RRS_802_3_LEN_ERR_SHIFT 30
#define RRS_RXD_UPDATED_MASK	0x0001
#define RRS_RXD_UPDATED_SHIFT	31
#define RRS_ERR_L4_CSUM         0x00004000
#define RRS_ERR_IP_CSUM         0x00008000
#define RRS_VLAN_INS            0x00010000
#define RRS_RX_ERR_SUM          0x00100000
#define RRS_RX_ERR_CRC          0x00200000
#define RRS_802_3_LEN_ERR	0x40000000
#define RRS_RXD_UPDATED		0x80000000
#define RRS_PACKET_TYPE_802_3  	1
#define RRS_PACKET_TYPE_ETH	0
#define RRS_PACKET_IS_ETH(word) \
((((word) >> RRS_PACKET_TYPE_SHIFT) & RRS_PACKET_TYPE_MASK) == \
RRS_PACKET_TYPE_ETH)
#define RRS_RXD_IS_VALID(word) \
((((word) >> RRS_RXD_UPDATED_SHIFT) & RRS_RXD_UPDATED_MASK) == 1)
#define RRS_PACKET_PROT_IS_IPV4_ONLY(word) \
((((word) >> RRS_PROT_ID_SHIFT) & RRS_PROT_ID_MASK) == 1)
#define RRS_PACKET_PROT_IS_IPV6_ONLY(word) \
((((word) >> RRS_PROT_ID_SHIFT) & RRS_PROT_ID_MASK) == 6)
struct atl1c_recv_ret_status ;
struct atl1c_rx_free_desc ;
enum atl1c_dma_order ;
enum atl1c_dma_rcb ;
enum atl1c_mac_speed ;
enum atl1c_dma_req_block ;
enum atl1c_rss_mode ;
enum atl1c_rss_type ;
enum atl1c_nic_type ;
enum atl1c_trans_queue ;
struct atl1c_hw_stats ;
struct atl1c_hw ;
struct atl1c_ring_header ;
struct atl1c_buffer ;
#define ATL1C_SET_BUFFER_STATE(buff, state) do  while (0)
#define ATL1C_SET_PCIMAP_TYPE(buff, type, direction) do  while (0)
struct atl1c_tpd_ring ;
struct atl1c_rfd_ring ;
struct atl1c_rrd_ring ;
struct atl1c_cmb ;
struct atl1c_smb ;
struct atl1c_adapter ;
#define AT_WRITE_REG(a, reg, value) ( \
writel((value), ((a)->hw_addr + reg)))
#define AT_WRITE_FLUSH(a) (\
readl((a)->hw_addr))
#define AT_READ_REG(a, reg, pdata) do  while (0)
#define AT_WRITE_REGB(a, reg, value) (\
writeb((value), ((a)->hw_addr + reg)))
#define AT_READ_REGB(a, reg) (\
readb((a)->hw_addr + reg))
#define AT_WRITE_REGW(a, reg, value) (\
writew((value), ((a)->hw_addr + reg)))
#define AT_READ_REGW(a, reg) (\
readw((a)->hw_addr + reg))
#define AT_WRITE_REG_ARRAY(a, reg, offset, value) ( \
writel((value), (((a)->hw_addr + reg) + ((offset) << 2))))
#define AT_READ_REG_ARRAY(a, reg, offset) ( \
readl(((a)->hw_addr + reg) + ((offset) << 2)))
extern char atl1c_driver_name[];
extern char atl1c_driver_version[];
extern void atl1c_reinit_locked(struct atl1c_adapter *adapter);
extern s32 atl1c_reset_hw(struct atl1c_hw *hw);
extern void atl1c_set_ethtool_ops(struct net_device *netdev);
