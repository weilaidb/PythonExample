#define _LINUX_ETHTOOL_H
struct ethtool_cmd ;
static inline void ethtool_cmd_speed_set(struct ethtool_cmd *ep,
__u32 speed)
static inline __u32 ethtool_cmd_speed(const struct ethtool_cmd *ep)
#define ETHTOOL_FWVERS_LEN	32
#define ETHTOOL_BUSINFO_LEN	32
struct ethtool_drvinfo ;
#define SOPASS_MAX	6
struct ethtool_wolinfo ;
struct ethtool_value ;
struct ethtool_regs ;
struct ethtool_eeprom ;
struct ethtool_coalesce ;
struct ethtool_ringparam ;
struct ethtool_channels ;
struct ethtool_pauseparam ;
#define ETH_GSTRING_LEN		32
enum ethtool_stringset ;
struct ethtool_gstrings ;
struct ethtool_sset_info ;
enum ethtool_test_flags ;
struct ethtool_test ;
struct ethtool_stats ;
struct ethtool_perm_addr ;
enum ethtool_flags ;
struct ethtool_tcpip4_spec ;
struct ethtool_ah_espip4_spec ;
#define	ETH_RX_NFC_IP4	1
struct ethtool_usrip4_spec ;
union ethtool_flow_union ;
struct ethtool_flow_ext ;
struct ethtool_rx_flow_spec ;
struct ethtool_rxnfc ;
struct compat_ethtool_rx_flow_spec ;
struct compat_ethtool_rxnfc ;
struct ethtool_rxfh_indir ;
struct ethtool_rx_ntuple_flow_spec ;
struct ethtool_rx_ntuple ;
#define ETHTOOL_FLASH_MAX_FILENAME	128
enum ethtool_flash_op_type ;
struct ethtool_flash ;
struct ethtool_dump ;
struct ethtool_get_features_block ;
struct ethtool_gfeatures ;
struct ethtool_set_features_block ;
struct ethtool_sfeatures ;
enum ethtool_sfeatures_retval_bits ;
#define ETHTOOL_F_UNSUPPORTED   (1 << ETHTOOL_F_UNSUPPORTED__BIT)
#define ETHTOOL_F_WISH          (1 << ETHTOOL_F_WISH__BIT)
#define ETHTOOL_F_COMPAT        (1 << ETHTOOL_F_COMPAT__BIT)
extern int __ethtool_set_flags(struct net_device *dev, u32 flags);
struct ethtool_rx_ntuple_flow_spec_container ;
struct ethtool_rx_ntuple_list ;
enum ethtool_phys_id_state ;
struct net_device;
u32 ethtool_op_get_link(struct net_device *dev);
u32 ethtool_op_get_tx_csum(struct net_device *dev);
int ethtool_op_set_tx_csum(struct net_device *dev, u32 data);
int ethtool_op_set_tx_hw_csum(struct net_device *dev, u32 data);
int ethtool_op_set_tx_ipv6_csum(struct net_device *dev, u32 data);
u32 ethtool_op_get_sg(struct net_device *dev);
int ethtool_op_set_sg(struct net_device *dev, u32 data);
u32 ethtool_op_get_tso(struct net_device *dev);
int ethtool_op_set_tso(struct net_device *dev, u32 data);
u32 ethtool_op_get_ufo(struct net_device *dev);
int ethtool_op_set_ufo(struct net_device *dev, u32 data);
u32 ethtool_op_get_flags(struct net_device *dev);
int ethtool_op_set_flags(struct net_device *dev, u32 data, u32 supported);
void ethtool_ntuple_flush(struct net_device *dev);
bool ethtool_invalid_flags(struct net_device *dev, u32 data, u32 supported);
struct ethtool_ops ;
#define ETHTOOL_GSET		0x00000001
#define ETHTOOL_SSET		0x00000002
#define ETHTOOL_GDRVINFO	0x00000003
#define ETHTOOL_GREGS		0x00000004
#define ETHTOOL_GWOL		0x00000005
#define ETHTOOL_SWOL		0x00000006
#define ETHTOOL_GMSGLVL		0x00000007
#define ETHTOOL_SMSGLVL		0x00000008
#define ETHTOOL_NWAY_RST	0x00000009
#define ETHTOOL_GLINK		0x0000000a
#define ETHTOOL_GEEPROM		0x0000000b
#define ETHTOOL_SEEPROM		0x0000000c
#define ETHTOOL_GCOALESCE	0x0000000e
#define ETHTOOL_SCOALESCE	0x0000000f
#define ETHTOOL_GRINGPARAM	0x00000010
#define ETHTOOL_SRINGPARAM	0x00000011
#define ETHTOOL_GPAUSEPARAM	0x00000012
#define ETHTOOL_SPAUSEPARAM	0x00000013
#define ETHTOOL_GRXCSUM		0x00000014
#define ETHTOOL_SRXCSUM		0x00000015
#define ETHTOOL_GTXCSUM		0x00000016
#define ETHTOOL_STXCSUM		0x00000017
#define ETHTOOL_GSG		0x00000018
#define ETHTOOL_SSG		0x00000019
#define ETHTOOL_TEST		0x0000001a
#define ETHTOOL_GSTRINGS	0x0000001b
#define ETHTOOL_PHYS_ID		0x0000001c
#define ETHTOOL_GSTATS		0x0000001d
#define ETHTOOL_GTSO		0x0000001e
#define ETHTOOL_STSO		0x0000001f
#define ETHTOOL_GPERMADDR	0x00000020
#define ETHTOOL_GUFO		0x00000021
#define ETHTOOL_SUFO		0x00000022
#define ETHTOOL_GGSO		0x00000023
#define ETHTOOL_SGSO		0x00000024
#define ETHTOOL_GFLAGS		0x00000025
#define ETHTOOL_SFLAGS		0x00000026
#define ETHTOOL_GPFLAGS		0x00000027
#define ETHTOOL_SPFLAGS		0x00000028
#define ETHTOOL_GRXFH		0x00000029
#define ETHTOOL_SRXFH		0x0000002a
#define ETHTOOL_GGRO		0x0000002b
#define ETHTOOL_SGRO		0x0000002c
#define ETHTOOL_GRXRINGS	0x0000002d
#define ETHTOOL_GRXCLSRLCNT	0x0000002e
#define ETHTOOL_GRXCLSRULE	0x0000002f
#define ETHTOOL_GRXCLSRLALL	0x00000030
#define ETHTOOL_SRXCLSRLDEL	0x00000031
#define ETHTOOL_SRXCLSRLINS	0x00000032
#define ETHTOOL_FLASHDEV	0x00000033
#define ETHTOOL_RESET		0x00000034
#define ETHTOOL_SRXNTUPLE	0x00000035
#define ETHTOOL_GRXNTUPLE	0x00000036
#define ETHTOOL_GSSET_INFO	0x00000037
#define ETHTOOL_GRXFHINDIR	0x00000038
#define ETHTOOL_SRXFHINDIR	0x00000039
#define ETHTOOL_GFEATURES	0x0000003a
#define ETHTOOL_SFEATURES	0x0000003b
#define ETHTOOL_GCHANNELS	0x0000003c
#define ETHTOOL_SCHANNELS	0x0000003d
#define ETHTOOL_SET_DUMP	0x0000003e
#define ETHTOOL_GET_DUMP_FLAG	0x0000003f
#define ETHTOOL_GET_DUMP_DATA	0x00000040
#define SPARC_ETH_GSET		ETHTOOL_GSET
#define SPARC_ETH_SSET		ETHTOOL_SSET
#define SUPPORTED_10baseT_Half		(1 << 0)
#define SUPPORTED_10baseT_Full		(1 << 1)
#define SUPPORTED_100baseT_Half		(1 << 2)
#define SUPPORTED_100baseT_Full		(1 << 3)
#define SUPPORTED_1000baseT_Half	(1 << 4)
#define SUPPORTED_1000baseT_Full	(1 << 5)
#define SUPPORTED_Autoneg		(1 << 6)
#define SUPPORTED_TP			(1 << 7)
#define SUPPORTED_AUI			(1 << 8)
#define SUPPORTED_MII			(1 << 9)
#define SUPPORTED_FIBRE			(1 << 10)
#define SUPPORTED_BNC			(1 << 11)
#define SUPPORTED_10000baseT_Full	(1 << 12)
#define SUPPORTED_Pause			(1 << 13)
#define SUPPORTED_Asym_Pause		(1 << 14)
#define SUPPORTED_2500baseX_Full	(1 << 15)
#define SUPPORTED_Backplane		(1 << 16)
#define SUPPORTED_1000baseKX_Full	(1 << 17)
#define SUPPORTED_10000baseKX4_Full	(1 << 18)
#define SUPPORTED_10000baseKR_Full	(1 << 19)
#define SUPPORTED_10000baseR_FEC	(1 << 20)
#define SUPPORTED_20000baseMLD2_Full	(1 << 21)
#define SUPPORTED_20000baseKR2_Full	(1 << 22)
#define ADVERTISED_10baseT_Half		(1 << 0)
#define ADVERTISED_10baseT_Full		(1 << 1)
#define ADVERTISED_100baseT_Half	(1 << 2)
#define ADVERTISED_100baseT_Full	(1 << 3)
#define ADVERTISED_1000baseT_Half	(1 << 4)
#define ADVERTISED_1000baseT_Full	(1 << 5)
#define ADVERTISED_Autoneg		(1 << 6)
#define ADVERTISED_TP			(1 << 7)
#define ADVERTISED_AUI			(1 << 8)
#define ADVERTISED_MII			(1 << 9)
#define ADVERTISED_FIBRE		(1 << 10)
#define ADVERTISED_BNC			(1 << 11)
#define ADVERTISED_10000baseT_Full	(1 << 12)
#define ADVERTISED_Pause		(1 << 13)
#define ADVERTISED_Asym_Pause		(1 << 14)
#define ADVERTISED_2500baseX_Full	(1 << 15)
#define ADVERTISED_Backplane		(1 << 16)
#define ADVERTISED_1000baseKX_Full	(1 << 17)
#define ADVERTISED_10000baseKX4_Full	(1 << 18)
#define ADVERTISED_10000baseKR_Full	(1 << 19)
#define ADVERTISED_10000baseR_FEC	(1 << 20)
#define ADVERTISED_20000baseMLD2_Full	(1 << 21)
#define ADVERTISED_20000baseKR2_Full	(1 << 22)
#define SPEED_10		10
#define SPEED_100		100
#define SPEED_1000		1000
#define SPEED_2500		2500
#define SPEED_10000		10000
#define DUPLEX_HALF		0x00
#define DUPLEX_FULL		0x01
#define PORT_TP			0x00
#define PORT_AUI		0x01
#define PORT_MII		0x02
#define PORT_FIBRE		0x03
#define PORT_BNC		0x04
#define PORT_DA			0x05
#define PORT_NONE		0xef
#define PORT_OTHER		0xff
#define XCVR_INTERNAL		0x00
#define XCVR_EXTERNAL		0x01
#define XCVR_DUMMY1		0x02
#define XCVR_DUMMY2		0x03
#define XCVR_DUMMY3		0x04
#define AUTONEG_DISABLE		0x00
#define AUTONEG_ENABLE		0x01
#define ETH_TP_MDI_INVALID	0x00
#define ETH_TP_MDI		0x01
#define ETH_TP_MDI_X		0x02
#define WAKE_PHY		(1 << 0)
#define WAKE_UCAST		(1 << 1)
#define WAKE_MCAST		(1 << 2)
#define WAKE_BCAST		(1 << 3)
#define WAKE_ARP		(1 << 4)
#define WAKE_MAGIC		(1 << 5)
#define WAKE_MAGICSECURE	(1 << 6)
#define	TCP_V4_FLOW	0x01
#define	UDP_V4_FLOW	0x02
#define	SCTP_V4_FLOW	0x03
#define	AH_ESP_V4_FLOW	0x04
#define	TCP_V6_FLOW	0x05
#define	UDP_V6_FLOW	0x06
#define	SCTP_V6_FLOW	0x07
#define	AH_ESP_V6_FLOW	0x08
#define	AH_V4_FLOW	0x09
#define	ESP_V4_FLOW	0x0a
#define	AH_V6_FLOW	0x0b
#define	ESP_V6_FLOW	0x0c
#define	IP_USER_FLOW	0x0d
#define	IPV4_FLOW	0x10
#define	IPV6_FLOW	0x11
#define	ETHER_FLOW	0x12
#define	FLOW_EXT	0x80000000
#define	RXH_L2DA	(1 << 1)
#define	RXH_VLAN	(1 << 2)
#define	RXH_L3_PROTO	(1 << 3)
#define	RXH_IP_SRC	(1 << 4)
#define	RXH_IP_DST	(1 << 5)
#define	RXH_L4_B_0_1	(1 << 6)
#define	RXH_L4_B_2_3	(1 << 7)
#define	RXH_DISCARD	(1 << 31)
#define	RX_CLS_FLOW_DISC	0xffffffffffffffffULL
enum ethtool_reset_flags ;
#define ETH_RESET_SHARED_SHIFT	16
