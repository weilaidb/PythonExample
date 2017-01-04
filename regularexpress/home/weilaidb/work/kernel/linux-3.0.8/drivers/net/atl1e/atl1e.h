#define _ATL1E_H_
#define PCI_REG_COMMAND	 0x04
#define CMD_IO_SPACE	 0x0001
#define CMD_MEMORY_SPACE 0x0002
#define CMD_BUS_MASTER   0x0004
#define BAR_0   0
#define BAR_1   1
#define BAR_5   5
#define AT_WUFC_LNKC 0x00000001
#define AT_WUFC_MAG  0x00000002
#define AT_WUFC_EX   0x00000004
#define AT_WUFC_MC   0x00000008
#define AT_WUFC_BC   0x00000010
#define SPEED_0		   0xffff
#define HALF_DUPLEX        1
#define FULL_DUPLEX        2
#define AT_ERR_EEPROM      1
#define AT_ERR_PHY         2
#define AT_ERR_CONFIG      3
#define AT_ERR_PARAM       4
#define AT_ERR_MAC_TYPE    5
#define AT_ERR_PHY_TYPE    6
#define AT_ERR_PHY_SPEED   7
#define AT_ERR_PHY_RES     8
#define AT_ERR_TIMEOUT     9
#define MAX_JUMBO_FRAME_SIZE 0x2000
#define AT_VLAN_TAG_TO_TPD_TAG(_vlan, _tpd)    \
_tpd = (((_vlan) << (4)) | (((_vlan) >> 13) & 7) |\
(((_vlan) >> 9) & 8))
#define AT_TPD_TAG_TO_VLAN_TAG(_tpd, _vlan)    \
_vlan = (((_tpd) >> 8) | (((_tpd) & 0x77) << 9) |\
(((_tdp) & 0x88) << 5))
#define AT_MAX_RECEIVE_QUEUE    4
#define AT_PAGE_NUM_PER_QUEUE   2
#define AT_DMA_HI_ADDR_MASK     0xffffffff00000000ULL
#define AT_DMA_LO_ADDR_MASK     0x00000000ffffffffULL
#define AT_TX_WATCHDOG  (5 * HZ)
#define AT_MAX_INT_WORK		10
#define AT_TWSI_EEPROM_TIMEOUT 	100
#define AT_HW_MAX_IDLE_DELAY 	10
#define AT_SUSPEND_LINK_TIMEOUT 28
#define AT_REGS_LEN	75
#define AT_EEPROM_LEN 	512
#define AT_ADV_MASK	(ADVERTISE_10_HALF  |\
ADVERTISE_10_FULL  |\
ADVERTISE_100_HALF |\
ADVERTISE_100_FULL |\
ADVERTISE_1000_FULL)
#define TPD_BUFLEN_MASK 	0x3FFF
#define TPD_BUFLEN_SHIFT        0
#define TPD_DMAINT_MASK		0x0001
#define TPD_DMAINT_SHIFT        14
#define TPD_PKTNT_MASK          0x0001
#define TPD_PKTINT_SHIFT        15
#define TPD_VLANTAG_MASK        0xFFFF
#define TPD_VLAN_SHIFT          16
#define TPD_EOP_MASK            0x0001
#define TPD_EOP_SHIFT           0
#define TPD_IP_VERSION_MASK	0x0001
#define TPD_IP_VERSION_SHIFT	1
#define TPD_INS_VL_TAG_MASK	0x0001
#define TPD_INS_VL_TAG_SHIFT	2
#define TPD_CC_SEGMENT_EN_MASK	0x0001
#define TPD_CC_SEGMENT_EN_SHIFT	3
#define TPD_SEGMENT_EN_MASK     0x0001
#define TPD_SEGMENT_EN_SHIFT    4
#define TPD_IP_CSUM_MASK        0x0001
#define TPD_IP_CSUM_SHIFT       5
#define TPD_TCP_CSUM_MASK       0x0001
#define TPD_TCP_CSUM_SHIFT      6
#define TPD_UDP_CSUM_MASK       0x0001
#define TPD_UDP_CSUM_SHIFT      7
#define TPD_V6_IPHLLO_MASK	0x0007
#define TPD_V6_IPHLLO_SHIFT	7
#define TPD_VL_TAGGED_MASK      0x0001
#define TPD_VL_TAGGED_SHIFT     8
#define TPD_ETHTYPE_MASK        0x0001
#define TPD_ETHTYPE_SHIFT       9
#define TDP_V4_IPHL_MASK	0x000F
#define TPD_V4_IPHL_SHIFT	10
#define TPD_V6_IPHLHI_MASK	0x000F
#define TPD_V6_IPHLHI_SHIFT	10
#define TPD_TCPHDRLEN_MASK      0x000F
#define TPD_TCPHDRLEN_SHIFT     14
#define TPD_HDRFLAG_MASK        0x0001
#define TPD_HDRFLAG_SHIFT       18
#define TPD_MSS_MASK            0x1FFF
#define TPD_MSS_SHIFT           19
#define TPD_PLOADOFFSET_MASK    0x00FF
#define TPD_PLOADOFFSET_SHIFT   16
#define TPD_CCSUMOFFSET_MASK    0x00FF
#define TPD_CCSUMOFFSET_SHIFT   24
struct atl1e_tpd_desc ;
#define MAX_TX_BUF_LEN      0x2000
#define MAX_TX_BUF_SHIFT    13
#define RRS_RX_CSUM_MASK	0xFFFF
#define RRS_RX_CSUM_SHIFT	0
#define RRS_PKT_SIZE_MASK	0x3FFF
#define RRS_PKT_SIZE_SHIFT	16
#define RRS_CPU_NUM_MASK	0x0003
#define	RRS_CPU_NUM_SHIFT	30
#define	RRS_IS_RSS_IPV4		0x0001
#define RRS_IS_RSS_IPV4_TCP	0x0002
#define RRS_IS_RSS_IPV6		0x0004
#define RRS_IS_RSS_IPV6_TCP	0x0008
#define RRS_IS_IPV6		0x0010
#define RRS_IS_IP_FRAG		0x0020
#define RRS_IS_IP_DF		0x0040
#define RRS_IS_802_3		0x0080
#define RRS_IS_VLAN_TAG		0x0100
#define RRS_IS_ERR_FRAME	0x0200
#define RRS_IS_IPV4		0x0400
#define RRS_IS_UDP		0x0800
#define RRS_IS_TCP		0x1000
#define RRS_IS_BCAST		0x2000
#define RRS_IS_MCAST		0x4000
#define RRS_IS_PAUSE		0x8000
#define RRS_ERR_BAD_CRC		0x0001
#define RRS_ERR_CODE		0x0002
#define RRS_ERR_DRIBBLE		0x0004
#define RRS_ERR_RUNT		0x0008
#define RRS_ERR_RX_OVERFLOW	0x0010
#define RRS_ERR_TRUNC		0x0020
#define RRS_ERR_IP_CSUM		0x0040
#define RRS_ERR_L4_CSUM		0x0080
#define RRS_ERR_LENGTH		0x0100
#define RRS_ERR_DES_ADDR	0x0200
struct atl1e_recv_ret_status ;
enum atl1e_dma_req_block ;
enum atl1e_rrs_type ;
enum atl1e_nic_type ;
struct atl1e_hw_stats ;
struct atl1e_hw ;
struct atl1e_tx_buffer ;
#define ATL1E_SET_PCIMAP_TYPE(tx_buff, type) do  while (0)
struct atl1e_rx_page ;
struct atl1e_rx_page_desc ;
struct atl1e_tx_ring ;
struct atl1e_rx_ring ;
struct atl1e_adapter ;
#define AT_WRITE_REG(a, reg, value) ( \
writel((value), ((a)->hw_addr + reg)))
#define AT_WRITE_FLUSH(a) (\
readl((a)->hw_addr))
#define AT_READ_REG(a, reg) ( \
readl((a)->hw_addr + reg))
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
extern char atl1e_driver_name[];
extern char atl1e_driver_version[];
extern void atl1e_check_options(struct atl1e_adapter *adapter);
extern int atl1e_up(struct atl1e_adapter *adapter);
extern void atl1e_down(struct atl1e_adapter *adapter);
extern void atl1e_reinit_locked(struct atl1e_adapter *adapter);
extern s32 atl1e_reset_hw(struct atl1e_hw *hw);
extern void atl1e_set_ethtool_ops(struct net_device *netdev);
