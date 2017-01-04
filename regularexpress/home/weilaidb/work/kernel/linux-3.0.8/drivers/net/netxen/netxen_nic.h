#define _NETXEN_NIC_H_
#define _NETXEN_NIC_LINUX_MAJOR 4
#define _NETXEN_NIC_LINUX_MINOR 0
#define _NETXEN_NIC_LINUX_SUBVERSION 75
#define NETXEN_NIC_LINUX_VERSIONID  "4.0.75"
#define NETXEN_VERSION_CODE(a, b, c)	(((a) << 24) + ((b) << 16) + (c))
#define _major(v)	(((v) >> 24) & 0xff)
#define _minor(v)	(((v) >> 16) & 0xff)
#define _build(v)	((v) & 0xffff)
#define NETXEN_DECODE_VERSION(v) \
NETXEN_VERSION_CODE(((v) & 0xff), (((v) >> 8) & 0xff), ((v) >> 16))
#define NETXEN_NUM_FLASH_SECTORS (64)
#define NETXEN_FLASH_SECTOR_SIZE (64 * 1024)
#define NETXEN_FLASH_TOTAL_SIZE  (NETXEN_NUM_FLASH_SECTORS \
* NETXEN_FLASH_SECTOR_SIZE)
#define RCV_DESC_RINGSIZE(rds_ring)	\
(sizeof(struct rcv_desc) * (rds_ring)->num_desc)
#define RCV_BUFF_RINGSIZE(rds_ring)	\
(sizeof(struct netxen_rx_buffer) * rds_ring->num_desc)
#define STATUS_DESC_RINGSIZE(sds_ring)	\
(sizeof(struct status_desc) * (sds_ring)->num_desc)
#define TX_BUFF_RINGSIZE(tx_ring)	\
(sizeof(struct netxen_cmd_buffer) * tx_ring->num_desc)
#define TX_DESC_RINGSIZE(tx_ring)	\
(sizeof(struct cmd_desc_type0) * tx_ring->num_desc)
#define find_diff_among(a,b,range) ((a)<(b)?((b)-(a)):((b)+(range)-(a)))
#define NETXEN_RCV_PRODUCER_OFFSET	0
#define NETXEN_RCV_PEG_DB_ID		2
#define NETXEN_HOST_DUMMY_DMA_SIZE 1024
#define FLASH_SUCCESS 0
#define ADDR_IN_WINDOW1(off)	\
((off > NETXEN_CRB_PCIX_HOST2) && (off < NETXEN_CRB_MAX)) ? 1 : 0
#define ADDR_IN_RANGE(addr, low, high)	\
(((addr) < (high)) && ((addr) >= (low)))
#define NETXEN_CRB_NORMAL(reg)	\
((reg) - NETXEN_CRB_PCIX_HOST2 + NETXEN_CRB_PCIX_HOST)
#define NETXEN_CRB_NORMALIZE(adapter, reg) \
pci_base_offset(adapter, NETXEN_CRB_NORMAL(reg))
#define DB_NORMALIZE(adapter, off) \
(adapter->ahw.db_base + (off))
#define NX_P2_C0		0x24
#define NX_P2_C1		0x25
#define NX_P3_A0		0x30
#define NX_P3_A2		0x30
#define NX_P3_B0		0x40
#define NX_P3_B1		0x41
#define NX_P3_B2		0x42
#define NX_P3P_A0		0x50
#define NX_IS_REVISION_P2(REVISION)     (REVISION <= NX_P2_C1)
#define NX_IS_REVISION_P3(REVISION)     (REVISION >= NX_P3_A0)
#define NX_IS_REVISION_P3P(REVISION)     (REVISION >= NX_P3P_A0)
#define FIRST_PAGE_GROUP_START	0
#define FIRST_PAGE_GROUP_END	0x100000
#define SECOND_PAGE_GROUP_START	0x6000000
#define SECOND_PAGE_GROUP_END	0x68BC000
#define THIRD_PAGE_GROUP_START	0x70E4000
#define THIRD_PAGE_GROUP_END	0x8000000
#define FIRST_PAGE_GROUP_SIZE  FIRST_PAGE_GROUP_END - FIRST_PAGE_GROUP_START
#define SECOND_PAGE_GROUP_SIZE SECOND_PAGE_GROUP_END - SECOND_PAGE_GROUP_START
#define THIRD_PAGE_GROUP_SIZE  THIRD_PAGE_GROUP_END - THIRD_PAGE_GROUP_START
#define P2_MAX_MTU                     (8000)
#define P3_MAX_MTU                     (9600)
#define NX_ETHERMTU                    1500
#define NX_MAX_ETHERHDR                32
#define NX_P2_RX_BUF_MAX_LEN           1760
#define NX_P3_RX_BUF_MAX_LEN           (NX_MAX_ETHERHDR + NX_ETHERMTU)
#define NX_P2_RX_JUMBO_BUF_MAX_LEN     (NX_MAX_ETHERHDR + P2_MAX_MTU)
#define NX_P3_RX_JUMBO_BUF_MAX_LEN     (NX_MAX_ETHERHDR + P3_MAX_MTU)
#define NX_CT_DEFAULT_RX_BUF_LEN	2048
#define NX_LRO_BUFFER_EXTRA		2048
#define NX_RX_LRO_BUFFER_LENGTH		(8060)
#define MAX_RING_CTX 1
#define TX_ETHER_PKT	0x01
#define TX_TCP_PKT	0x02
#define TX_UDP_PKT	0x03
#define TX_IP_PKT	0x04
#define TX_TCP_LSO	0x05
#define TX_TCP_LSO6	0x06
#define TX_IPSEC	0x07
#define TX_IPSEC_CMD	0x0a
#define TX_TCPV6_PKT	0x0b
#define TX_UDPV6_PKT	0x0c
#define NETXEN_CONTROL_OP	0x10
#define PEGNET_REQUEST		0x11
#define	MAX_NUM_CARDS		4
#define NETXEN_MAX_FRAGS_PER_TX	14
#define MAX_TSO_HEADER_DESC	2
#define MGMT_CMD_DESC_RESV	4
#define TX_STOP_THRESH		((MAX_SKB_FRAGS >> 2) + MAX_TSO_HEADER_DESC \
+ MGMT_CMD_DESC_RESV)
#define NX_MAX_TX_TIMEOUTS	2
#define PHAN_INITIALIZE_START		0xff00
#define PHAN_INITIALIZE_FAILED		0xffff
#define PHAN_INITIALIZE_COMPLETE	0xff01
#define PHAN_INITIALIZE_ACK	0xf00f
#define NUM_RCV_DESC_RINGS	3
#define NUM_STS_DESC_RINGS	4
#define RCV_RING_NORMAL	0
#define RCV_RING_JUMBO	1
#define RCV_RING_LRO	2
#define MIN_CMD_DESCRIPTORS		64
#define MIN_RCV_DESCRIPTORS		64
#define MIN_JUMBO_DESCRIPTORS		32
#define MAX_CMD_DESCRIPTORS		1024
#define MAX_RCV_DESCRIPTORS_1G		4096
#define MAX_RCV_DESCRIPTORS_10G		8192
#define MAX_JUMBO_RCV_DESCRIPTORS_1G	512
#define MAX_JUMBO_RCV_DESCRIPTORS_10G	1024
#define MAX_LRO_RCV_DESCRIPTORS		8
#define DEFAULT_RCV_DESCRIPTORS_1G	2048
#define DEFAULT_RCV_DESCRIPTORS_10G	4096
#define NETXEN_CTX_SIGNATURE	0xdee0
#define NETXEN_CTX_SIGNATURE_V2	0x0002dee0
#define NETXEN_CTX_RESET	0xbad0
#define NETXEN_CTX_D3_RESET	0xacc0
#define NETXEN_RCV_PRODUCER(ringid)	(ringid)
#define PHAN_PEG_RCV_INITIALIZED	0xff01
#define PHAN_PEG_RCV_START_INITIALIZE	0xff00
#define get_next_index(index, length)	\
(((index) + 1) & ((length) - 1))
#define get_index_range(index,length,count)	\
(((index) + (count)) & ((length) - 1))
#define MPORT_SINGLE_FUNCTION_MODE 0x1111
#define MPORT_MULTI_FUNCTION_MODE 0x2222
#define NX_MAX_PCI_FUNC		8
typedef u32 netxen_ctx_msg;
#define netxen_set_msg_peg_id(config_word, val)	\
((config_word) &= ~3, (config_word) |= val & 3)
#define netxen_set_msg_privid(config_word)	\
((config_word) |= 1 << 2)
#define netxen_set_msg_count(config_word, val)	\
((config_word) &= ~(0x7fff<<3), (config_word) |= (val & 0x7fff) << 3)
#define netxen_set_msg_ctxid(config_word, val)	\
((config_word) &= ~(0x3ff<<18), (config_word) |= (val & 0x3ff) << 18)
#define netxen_set_msg_opcode(config_word, val)	\
((config_word) &= ~(0xf<<28), (config_word) |= (val & 0xf) << 28)
struct netxen_rcv_ring ;
struct netxen_sts_ring  ;
struct netxen_ring_ctx  __attribute__ ((aligned(64)));
#define FLAGS_CHECKSUM_ENABLED	0x01
#define FLAGS_LSO_ENABLED	0x02
#define FLAGS_IPSEC_SA_ADD	0x04
#define FLAGS_IPSEC_SA_DELETE	0x08
#define FLAGS_VLAN_TAGGED	0x10
#define FLAGS_VLAN_OOB		0x40
#define netxen_set_tx_vlan_tci(cmd_desc, v)	\
(cmd_desc)->vlan_TCI = cpu_to_le16(v);
#define netxen_set_cmd_desc_port(cmd_desc, var)	\
((cmd_desc)->port_ctxid |= ((var) & 0x0F))
#define netxen_set_cmd_desc_ctxid(cmd_desc, var)	\
((cmd_desc)->port_ctxid |= ((var) << 4 & 0xF0))
#define netxen_set_tx_port(_desc, _port) \
(_desc)->port_ctxid = ((_port) & 0xf) | (((_port) << 4) & 0xf0)
#define netxen_set_tx_flags_opcode(_desc, _flags, _opcode) \
(_desc)->flags_opcode = \
cpu_to_le16(((_flags) & 0x7f) | (((_opcode) & 0x3f) << 7))
#define netxen_set_tx_frags_len(_desc, _frags, _len) \
(_desc)->nfrags__length = \
cpu_to_le32(((_frags) & 0xff) | (((_len) & 0xffffff) << 8))
struct cmd_desc_type0  __attribute__ ((aligned(64)));
struct rcv_desc ;
#define NETXEN_NIC_SYN_OFFLOAD  0x03
#define NETXEN_NIC_RXPKT_DESC  0x04
#define NETXEN_OLD_RXPKT_DESC  0x3f
#define NETXEN_NIC_RESPONSE_DESC 0x05
#define NETXEN_NIC_LRO_DESC  	0x12
#define STATUS_NEED_CKSUM	(1)
#define STATUS_CKSUM_OK		(2)
#define STATUS_OWNER_HOST	(0x1ULL << 56)
#define STATUS_OWNER_PHANTOM	(0x2ULL << 56)
#define netxen_get_sts_port(sts_data)	\
((sts_data) & 0x0F)
#define netxen_get_sts_status(sts_data)	\
(((sts_data) >> 4) & 0x0F)
#define netxen_get_sts_type(sts_data)	\
(((sts_data) >> 8) & 0x0F)
#define netxen_get_sts_totallength(sts_data)	\
(((sts_data) >> 12) & 0xFFFF)
#define netxen_get_sts_refhandle(sts_data)	\
(((sts_data) >> 28) & 0xFFFF)
#define netxen_get_sts_prot(sts_data)	\
(((sts_data) >> 44) & 0x0F)
#define netxen_get_sts_pkt_offset(sts_data)	\
(((sts_data) >> 48) & 0x1F)
#define netxen_get_sts_desc_cnt(sts_data)	\
(((sts_data) >> 53) & 0x7)
#define netxen_get_sts_opcode(sts_data)	\
(((sts_data) >> 58) & 0x03F)
#define netxen_get_lro_sts_refhandle(sts_data) 	\
((sts_data) & 0x0FFFF)
#define netxen_get_lro_sts_length(sts_data)	\
(((sts_data) >> 16) & 0x0FFFF)
#define netxen_get_lro_sts_l2_hdr_offset(sts_data)	\
(((sts_data) >> 32) & 0x0FF)
#define netxen_get_lro_sts_l4_hdr_offset(sts_data)	\
(((sts_data) >> 40) & 0x0FF)
#define netxen_get_lro_sts_timestamp(sts_data)	\
(((sts_data) >> 48) & 0x1)
#define netxen_get_lro_sts_type(sts_data)	\
(((sts_data) >> 49) & 0x7)
#define netxen_get_lro_sts_push_flag(sts_data)		\
(((sts_data) >> 52) & 0x1)
#define netxen_get_lro_sts_seq_number(sts_data)		\
((sts_data) & 0x0FFFFFFFF)
struct status_desc  __attribute__ ((aligned(16)));
#define NX_UNI_DIR_SECT_PRODUCT_TBL	0x0
#define NX_UNI_DIR_SECT_BOOTLD		0x6
#define NX_UNI_DIR_SECT_FW		0x7
#define NX_UNI_CHIP_REV_OFF		10
#define NX_UNI_FLAGS_OFF		11
#define NX_UNI_BIOS_VERSION_OFF 	12
#define NX_UNI_BOOTLD_IDX_OFF		27
#define NX_UNI_FIRMWARE_IDX_OFF 	29
struct uni_table_desc;
struct uni_data_desc;
#define	NETXEN_BDINFO_VERSION 1
#define	NETXEN_BDINFO_MAGIC 0x12345678
#define NETXEN_MAX_PORTS 4
#define NETXEN_BRDTYPE_P1_BD		0x0000
#define NETXEN_BRDTYPE_P1_SB		0x0001
#define NETXEN_BRDTYPE_P1_SMAX		0x0002
#define NETXEN_BRDTYPE_P1_SOCK		0x0003
#define NETXEN_BRDTYPE_P2_SOCK_31	0x0008
#define NETXEN_BRDTYPE_P2_SOCK_35	0x0009
#define NETXEN_BRDTYPE_P2_SB35_4G	0x000a
#define NETXEN_BRDTYPE_P2_SB31_10G	0x000b
#define NETXEN_BRDTYPE_P2_SB31_2G	0x000c
#define NETXEN_BRDTYPE_P2_SB31_10G_IMEZ		0x000d
#define NETXEN_BRDTYPE_P2_SB31_10G_HMEZ		0x000e
#define NETXEN_BRDTYPE_P2_SB31_10G_CX4		0x000f
#define NETXEN_BRDTYPE_P3_REF_QG	0x0021
#define NETXEN_BRDTYPE_P3_HMEZ		0x0022
#define NETXEN_BRDTYPE_P3_10G_CX4_LP	0x0023
#define NETXEN_BRDTYPE_P3_4_GB		0x0024
#define NETXEN_BRDTYPE_P3_IMEZ		0x0025
#define NETXEN_BRDTYPE_P3_10G_SFP_PLUS	0x0026
#define NETXEN_BRDTYPE_P3_10000_BASE_T	0x0027
#define NETXEN_BRDTYPE_P3_XG_LOM	0x0028
#define NETXEN_BRDTYPE_P3_4_GB_MM	0x0029
#define NETXEN_BRDTYPE_P3_10G_SFP_CT	0x002a
#define NETXEN_BRDTYPE_P3_10G_SFP_QT	0x002b
#define NETXEN_BRDTYPE_P3_10G_CX4	0x0031
#define NETXEN_BRDTYPE_P3_10G_XFP	0x0032
#define NETXEN_BRDTYPE_P3_10G_TP	0x0080
#define NETXEN_CRBINIT_START	0
#define NETXEN_BRDCFG_START	0x4000
#define NETXEN_INITCODE_START	0x6000
#define NETXEN_BOOTLD_START	0x10000
#define NETXEN_IMAGE_START	0x43000
#define NETXEN_SECONDARY_START	0x200000
#define NETXEN_PXE_START	0x3E0000
#define NETXEN_USER_START	0x3E8000
#define NETXEN_FIXED_START	0x3F0000
#define NETXEN_USER_START_OLD	NETXEN_PXE_START
#define NX_OLD_MAC_ADDR_OFFSET	(NETXEN_USER_START)
#define NX_FW_VERSION_OFFSET	(NETXEN_USER_START+0x408)
#define NX_FW_SIZE_OFFSET	(NETXEN_USER_START+0x40c)
#define NX_FW_MAC_ADDR_OFFSET	(NETXEN_USER_START+0x418)
#define NX_FW_SERIAL_NUM_OFFSET	(NETXEN_USER_START+0x81c)
#define NX_BIOS_VERSION_OFFSET	(NETXEN_USER_START+0x83c)
#define NX_HDR_VERSION_OFFSET	(NETXEN_BRDCFG_START)
#define NX_BRDTYPE_OFFSET	(NETXEN_BRDCFG_START+0x8)
#define NX_FW_MAGIC_OFFSET	(NETXEN_BRDCFG_START+0x128)
#define NX_FW_MIN_SIZE		(0x3fffff)
#define NX_P2_MN_ROMIMAGE	0
#define NX_P3_CT_ROMIMAGE	1
#define NX_P3_MN_ROMIMAGE	2
#define NX_UNIFIED_ROMIMAGE	3
#define NX_FLASH_ROMIMAGE	4
#define NX_UNKNOWN_ROMIMAGE	0xff
#define NX_P2_MN_ROMIMAGE_NAME		"nxromimg.bin"
#define NX_P3_CT_ROMIMAGE_NAME		"nx3fwct.bin"
#define NX_P3_MN_ROMIMAGE_NAME		"nx3fwmn.bin"
#define NX_UNIFIED_ROMIMAGE_NAME	"phanfw.bin"
#define NX_FLASH_ROMIMAGE_NAME		"flash"
extern char netxen_nic_driver_name[];
#define MAX_STATUS_HANDLE	(64)
struct netxen_skb_frag ;
struct netxen_recv_crb ;
#define	NETXEN_BUFFER_FREE	0
#define	NETXEN_BUFFER_BUSY	1
struct netxen_cmd_buffer ;
struct netxen_rx_buffer ;
#define	NETXEN_NIC_GBE	0x01
#define	NETXEN_NIC_XGBE	0x02
struct netxen_hardware_context ;
#define MINIMUM_ETHERNET_FRAME_SIZE	64
#define ETHERNET_FCS_SIZE		4
struct netxen_adapter_stats ;
struct nx_host_rds_ring ;
struct nx_host_sds_ring ;
struct nx_host_tx_ring ;
struct netxen_recv_context ;
#define NX_OS_CRB_RETRY_COUNT	4000
#define NX_CDRP_SIGNATURE_MAKE(pcifn, version) \
(((pcifn) & 0xff) | (((version) & 0xff) << 8) | (0xcafe << 16))
#define NX_CDRP_CLEAR		0x00000000
#define NX_CDRP_CMD_BIT		0x80000000
#define NX_CDRP_FORM_RSP(rsp)	(rsp)
#define NX_CDRP_IS_RSP(rsp)	(((rsp) & NX_CDRP_CMD_BIT) == 0)
#define NX_CDRP_RSP_OK		0x00000001
#define NX_CDRP_RSP_FAIL	0x00000002
#define NX_CDRP_RSP_TIMEOUT	0x00000003
#define NX_CDRP_FORM_CMD(cmd)	(NX_CDRP_CMD_BIT | (cmd))
#define NX_CDRP_IS_CMD(cmd)	(((cmd) & NX_CDRP_CMD_BIT) != 0)
#define NX_CDRP_CMD_SUBMIT_CAPABILITIES     0x00000001
#define NX_CDRP_CMD_READ_MAX_RDS_PER_CTX    0x00000002
#define NX_CDRP_CMD_READ_MAX_SDS_PER_CTX    0x00000003
#define NX_CDRP_CMD_READ_MAX_RULES_PER_CTX  0x00000004
#define NX_CDRP_CMD_READ_MAX_RX_CTX         0x00000005
#define NX_CDRP_CMD_READ_MAX_TX_CTX         0x00000006
#define NX_CDRP_CMD_CREATE_RX_CTX           0x00000007
#define NX_CDRP_CMD_DESTROY_RX_CTX          0x00000008
#define NX_CDRP_CMD_CREATE_TX_CTX           0x00000009
#define NX_CDRP_CMD_DESTROY_TX_CTX          0x0000000a
#define NX_CDRP_CMD_SETUP_STATISTICS        0x0000000e
#define NX_CDRP_CMD_GET_STATISTICS          0x0000000f
#define NX_CDRP_CMD_DELETE_STATISTICS       0x00000010
#define NX_CDRP_CMD_SET_MTU                 0x00000012
#define NX_CDRP_CMD_READ_PHY			0x00000013
#define NX_CDRP_CMD_WRITE_PHY			0x00000014
#define NX_CDRP_CMD_READ_HW_REG			0x00000015
#define NX_CDRP_CMD_GET_FLOW_CTL		0x00000016
#define NX_CDRP_CMD_SET_FLOW_CTL		0x00000017
#define NX_CDRP_CMD_READ_MAX_MTU		0x00000018
#define NX_CDRP_CMD_READ_MAX_LRO		0x00000019
#define NX_CDRP_CMD_CONFIGURE_TOE		0x0000001a
#define NX_CDRP_CMD_FUNC_ATTRIB			0x0000001b
#define NX_CDRP_CMD_READ_PEXQ_PARAMETERS	0x0000001c
#define NX_CDRP_CMD_GET_LIC_CAPABILITIES	0x0000001d
#define NX_CDRP_CMD_READ_MAX_LRO_PER_BOARD	0x0000001e
#define NX_CDRP_CMD_CONFIG_GBE_PORT		0x0000001f
#define NX_CDRP_CMD_MAX				0x00000020
#define NX_RCODE_SUCCESS		0
#define NX_RCODE_NO_HOST_MEM		1
#define NX_RCODE_NO_HOST_RESOURCE	2
#define NX_RCODE_NO_CARD_CRB		3
#define NX_RCODE_NO_CARD_MEM		4
#define NX_RCODE_NO_CARD_RESOURCE	5
#define NX_RCODE_INVALID_ARGS		6
#define NX_RCODE_INVALID_ACTION		7
#define NX_RCODE_INVALID_STATE		8
#define NX_RCODE_NOT_SUPPORTED		9
#define NX_RCODE_NOT_PERMITTED		10
#define NX_RCODE_NOT_READY		11
#define NX_RCODE_DOES_NOT_EXIST		12
#define NX_RCODE_ALREADY_EXISTS		13
#define NX_RCODE_BAD_SIGNATURE		14
#define NX_RCODE_CMD_NOT_IMPL		15
#define NX_RCODE_CMD_INVALID		16
#define NX_RCODE_TIMEOUT		17
#define NX_RCODE_CMD_FAILED		18
#define NX_RCODE_MAX_EXCEEDED		19
#define NX_RCODE_MAX			20
#define NX_DESTROY_CTX_RESET		0
#define NX_DESTROY_CTX_D3_RESET		1
#define NX_DESTROY_CTX_MAX		2
#define NX_CAP_BIT(class, bit)		(1 << bit)
#define NX_CAP0_LEGACY_CONTEXT		NX_CAP_BIT(0, 0)
#define NX_CAP0_MULTI_CONTEXT		NX_CAP_BIT(0, 1)
#define NX_CAP0_LEGACY_MN		NX_CAP_BIT(0, 2)
#define NX_CAP0_LEGACY_MS		NX_CAP_BIT(0, 3)
#define NX_CAP0_CUT_THROUGH		NX_CAP_BIT(0, 4)
#define NX_CAP0_LRO			NX_CAP_BIT(0, 5)
#define NX_CAP0_LSO			NX_CAP_BIT(0, 6)
#define NX_CAP0_JUMBO_CONTIGUOUS	NX_CAP_BIT(0, 7)
#define NX_CAP0_LRO_CONTIGUOUS		NX_CAP_BIT(0, 8)
#define NX_CAP0_HW_LRO			NX_CAP_BIT(0, 10)
#define NX_HOST_CTX_STATE_FREED		0
#define NX_HOST_CTX_STATE_ALLOCATED	1
#define NX_HOST_CTX_STATE_ACTIVE	2
#define NX_HOST_CTX_STATE_DISABLED	3
#define NX_HOST_CTX_STATE_QUIESCED	4
#define NX_HOST_CTX_STATE_MAX		5
typedef struct  nx_hostrq_sds_ring_t;
typedef struct  nx_hostrq_rds_ring_t;
typedef struct  nx_hostrq_rx_ctx_t;
typedef struct  nx_cardrsp_rds_ring_t;
typedef struct  nx_cardrsp_sds_ring_t;
typedef struct  nx_cardrsp_rx_ctx_t;
#define SIZEOF_HOSTRQ_RX(HOSTRQ_RX, rds_rings, sds_rings)	\
(sizeof(HOSTRQ_RX) + 					\
(rds_rings)*(sizeof(nx_hostrq_rds_ring_t)) +		\
(sds_rings)*(sizeof(nx_hostrq_sds_ring_t)))
#define SIZEOF_CARDRSP_RX(CARDRSP_RX, rds_rings, sds_rings) 	\
(sizeof(CARDRSP_RX) + 					\
(rds_rings)*(sizeof(nx_cardrsp_rds_ring_t)) + 		\
(sds_rings)*(sizeof(nx_cardrsp_sds_ring_t)))
typedef struct  nx_hostrq_cds_ring_t;
typedef struct  nx_hostrq_tx_ctx_t;
typedef struct  nx_cardrsp_cds_ring_t;
typedef struct  nx_cardrsp_tx_ctx_t;
#define SIZEOF_HOSTRQ_TX(HOSTRQ_TX)	(sizeof(HOSTRQ_TX))
#define SIZEOF_CARDRSP_TX(CARDRSP_TX)	(sizeof(CARDRSP_TX))
#define NX_HOST_RDS_CRB_MODE_UNIQUE	0
#define NX_HOST_RDS_CRB_MODE_SHARED	1
#define NX_HOST_RDS_CRB_MODE_CUSTOM	2
#define NX_HOST_RDS_CRB_MODE_MAX	3
#define NX_HOST_INT_CRB_MODE_UNIQUE	0
#define NX_HOST_INT_CRB_MODE_SHARED	1
#define NX_HOST_INT_CRB_MODE_NORX	2
#define NX_HOST_INT_CRB_MODE_NOTX	3
#define NX_HOST_INT_CRB_MODE_NORXTX	4
#define MC_COUNT_P2	16
#define MC_COUNT_P3	38
#define NETXEN_MAC_NOOP	0
#define NETXEN_MAC_ADD	1
#define NETXEN_MAC_DEL	2
typedef struct nx_mac_list_s  nx_mac_list_t;
#define NETXEN_DEFAULT_INTR_COALESCE_RX_TIME_US	3
#define NETXEN_DEFAULT_INTR_COALESCE_RX_PACKETS	256
#define NETXEN_DEFAULT_INTR_COALESCE_TX_PACKETS	64
#define NETXEN_DEFAULT_INTR_COALESCE_TX_TIME_US	4
#define NETXEN_NIC_INTR_DEFAULT			0x04
typedef union  nx_nic_intr_coalesce_data_t;
typedef struct  nx_nic_intr_coalesce_t;
#define NX_HOST_REQUEST		0x13
#define NX_NIC_REQUEST		0x14
#define NX_MAC_EVENT		0x1
#define NX_IP_UP		2
#define NX_IP_DOWN		3
#define NX_NIC_H2C_OPCODE_START				0
#define NX_NIC_H2C_OPCODE_CONFIG_RSS			1
#define NX_NIC_H2C_OPCODE_CONFIG_RSS_TBL		2
#define NX_NIC_H2C_OPCODE_CONFIG_INTR_COALESCE		3
#define NX_NIC_H2C_OPCODE_CONFIG_LED			4
#define NX_NIC_H2C_OPCODE_CONFIG_PROMISCUOUS		5
#define NX_NIC_H2C_OPCODE_CONFIG_L2_MAC			6
#define NX_NIC_H2C_OPCODE_LRO_REQUEST			7
#define NX_NIC_H2C_OPCODE_GET_SNMP_STATS		8
#define NX_NIC_H2C_OPCODE_PROXY_START_REQUEST		9
#define NX_NIC_H2C_OPCODE_PROXY_STOP_REQUEST		10
#define NX_NIC_H2C_OPCODE_PROXY_SET_MTU			11
#define NX_NIC_H2C_OPCODE_PROXY_SET_VPORT_MISS_MODE	12
#define NX_NIC_H2C_OPCODE_GET_FINGER_PRINT_REQUEST	13
#define NX_NIC_H2C_OPCODE_INSTALL_LICENSE_REQUEST	14
#define NX_NIC_H2C_OPCODE_GET_LICENSE_CAPABILITY_REQUEST	15
#define NX_NIC_H2C_OPCODE_GET_NET_STATS			16
#define NX_NIC_H2C_OPCODE_PROXY_UPDATE_P2V		17
#define NX_NIC_H2C_OPCODE_CONFIG_IPADDR			18
#define NX_NIC_H2C_OPCODE_CONFIG_LOOPBACK		19
#define NX_NIC_H2C_OPCODE_PROXY_STOP_DONE		20
#define NX_NIC_H2C_OPCODE_GET_LINKEVENT			21
#define NX_NIC_C2C_OPCODE				22
#define NX_NIC_H2C_OPCODE_CONFIG_BRIDGING               23
#define NX_NIC_H2C_OPCODE_CONFIG_HW_LRO			24
#define NX_NIC_H2C_OPCODE_LAST				25
#define NX_NIC_C2H_OPCODE_START				128
#define NX_NIC_C2H_OPCODE_CONFIG_RSS_RESPONSE		129
#define NX_NIC_C2H_OPCODE_CONFIG_RSS_TBL_RESPONSE	130
#define NX_NIC_C2H_OPCODE_CONFIG_MAC_RESPONSE		131
#define NX_NIC_C2H_OPCODE_CONFIG_PROMISCUOUS_RESPONSE	132
#define NX_NIC_C2H_OPCODE_CONFIG_L2_MAC_RESPONSE	133
#define NX_NIC_C2H_OPCODE_LRO_DELETE_RESPONSE		134
#define NX_NIC_C2H_OPCODE_LRO_ADD_FAILURE_RESPONSE	135
#define NX_NIC_C2H_OPCODE_GET_SNMP_STATS		136
#define NX_NIC_C2H_OPCODE_GET_FINGER_PRINT_REPLY	137
#define NX_NIC_C2H_OPCODE_INSTALL_LICENSE_REPLY		138
#define NX_NIC_C2H_OPCODE_GET_LICENSE_CAPABILITIES_REPLY 139
#define NX_NIC_C2H_OPCODE_GET_NET_STATS_RESPONSE	140
#define NX_NIC_C2H_OPCODE_GET_LINKEVENT_RESPONSE	141
#define NX_NIC_C2H_OPCODE_LAST				142
#define VPORT_MISS_MODE_DROP		0
#define VPORT_MISS_MODE_ACCEPT_ALL	1
#define VPORT_MISS_MODE_ACCEPT_MULTI	2
#define NX_NIC_LRO_REQUEST_FIRST		0
#define NX_NIC_LRO_REQUEST_ADD_FLOW		1
#define NX_NIC_LRO_REQUEST_DELETE_FLOW		2
#define NX_NIC_LRO_REQUEST_TIMER		3
#define NX_NIC_LRO_REQUEST_CLEANUP		4
#define NX_NIC_LRO_REQUEST_ADD_FLOW_SCHEDULED	5
#define NX_TOE_LRO_REQUEST_ADD_FLOW		6
#define NX_TOE_LRO_REQUEST_ADD_FLOW_RESPONSE	7
#define NX_TOE_LRO_REQUEST_DELETE_FLOW		8
#define NX_TOE_LRO_REQUEST_DELETE_FLOW_RESPONSE	9
#define NX_TOE_LRO_REQUEST_TIMER		10
#define NX_NIC_LRO_REQUEST_LAST			11
#define NX_FW_CAPABILITY_LINK_NOTIFICATION	(1 << 5)
#define NX_FW_CAPABILITY_SWITCHING		(1 << 6)
#define NX_FW_CAPABILITY_PEXQ			(1 << 7)
#define NX_FW_CAPABILITY_BDG			(1 << 8)
#define NX_FW_CAPABILITY_FVLANTX		(1 << 9)
#define NX_FW_CAPABILITY_HW_LRO			(1 << 10)
#define NX_FW_CAPABILITY_GBE_LINK_CFG		(1 << 11)
#define LINKEVENT_MODULE_NOT_PRESENT			1
#define LINKEVENT_MODULE_OPTICAL_UNKNOWN		2
#define LINKEVENT_MODULE_OPTICAL_SRLR			3
#define LINKEVENT_MODULE_OPTICAL_LRM			4
#define LINKEVENT_MODULE_OPTICAL_SFP_1G			5
#define LINKEVENT_MODULE_TWINAX_UNSUPPORTED_CABLE	6
#define LINKEVENT_MODULE_TWINAX_UNSUPPORTED_CABLELEN	7
#define LINKEVENT_MODULE_TWINAX				8
#define LINKSPEED_10GBPS	10000
#define LINKSPEED_1GBPS		1000
#define LINKSPEED_100MBPS	100
#define LINKSPEED_10MBPS	10
#define LINKSPEED_ENCODED_10MBPS	0
#define LINKSPEED_ENCODED_100MBPS	1
#define LINKSPEED_ENCODED_1GBPS		2
#define LINKEVENT_AUTONEG_DISABLED	0
#define LINKEVENT_AUTONEG_ENABLED	1
#define LINKEVENT_HALF_DUPLEX		0
#define LINKEVENT_FULL_DUPLEX		1
#define LINKEVENT_LINKSPEED_MBPS	0
#define LINKEVENT_LINKSPEED_ENCODED	1
#define AUTO_FW_RESET_ENABLED	0xEF10AF12
#define AUTO_FW_RESET_DISABLED	0xDCBAAF12
#define netxen_get_nic_msgtype(msg_hdr)	\
((msg_hdr >> 58) & 0x3F)
#define netxen_get_nic_msg_compid(msg_hdr)	\
((msg_hdr >> 40) & 0xFF)
#define netxen_get_nic_msg_opcode(msg_hdr)	\
((msg_hdr >> 32) & 0xFF)
#define netxen_get_nic_msg_errcode(msg_hdr)	\
((msg_hdr >> 16) & 0xFFFF)
typedef struct  nx_fw_msg_t;
typedef struct  nx_nic_req_t;
typedef struct  nx_mac_req_t;
#define MAX_PENDING_DESC_BLOCK_SIZE	64
#define NETXEN_NIC_MSI_ENABLED		0x02
#define NETXEN_NIC_MSIX_ENABLED		0x04
#define NETXEN_NIC_LRO_ENABLED		0x08
#define NETXEN_NIC_LRO_DISABLED		0x00
#define NETXEN_NIC_BRIDGE_ENABLED       0X10
#define NETXEN_NIC_DIAG_ENABLED		0x20
#define NETXEN_IS_MSI_FAMILY(adapter) \
((adapter)->flags & (NETXEN_NIC_MSI_ENABLED | NETXEN_NIC_MSIX_ENABLED))
#define MSIX_ENTRIES_PER_ADAPTER	NUM_STS_DESC_RINGS
#define NETXEN_MSIX_TBL_SPACE		8192
#define NETXEN_PCI_REG_MSIX_TBL		0x44
#define NETXEN_DB_MAPSIZE_BYTES    	0x1000
#define NETXEN_NETDEV_WEIGHT 128
#define NETXEN_ADAPTER_UP_MAGIC 777
#define NETXEN_NIC_PEG_TUNE 0
#define __NX_FW_ATTACHED		0
#define __NX_DEV_UP			1
#define __NX_RESETTING			2
struct netxen_dummy_dma ;
struct netxen_adapter ;
int nx_fw_cmd_query_phy(struct netxen_adapter *adapter, u32 reg, u32 *val);
int nx_fw_cmd_set_phy(struct netxen_adapter *adapter, u32 reg, u32 val);
#define NXRD32(adapter, off) \
(adapter->crb_read(adapter, off))
#define NXWR32(adapter, off, val) \
(adapter->crb_write(adapter, off, val))
#define NXRDIO(adapter, addr) \
(adapter->io_read(adapter, addr))
#define NXWRIO(adapter, addr, val) \
(adapter->io_write(adapter, addr, val))
int netxen_pcie_sem_lock(struct netxen_adapter *, int, u32);
void netxen_pcie_sem_unlock(struct netxen_adapter *, int);
#define netxen_rom_lock(a)	\
netxen_pcie_sem_lock((a), 2, NETXEN_ROM_LOCK_ID)
#define netxen_rom_unlock(a)	\
netxen_pcie_sem_unlock((a), 2)
#define netxen_phy_lock(a)	\
netxen_pcie_sem_lock((a), 3, NETXEN_PHY_LOCK_ID)
#define netxen_phy_unlock(a)	\
netxen_pcie_sem_unlock((a), 3)
#define netxen_api_lock(a)	\
netxen_pcie_sem_lock((a), 5, 0)
#define netxen_api_unlock(a)	\
netxen_pcie_sem_unlock((a), 5)
#define netxen_sw_lock(a)	\
netxen_pcie_sem_lock((a), 6, 0)
#define netxen_sw_unlock(a)	\
netxen_pcie_sem_unlock((a), 6)
#define crb_win_lock(a)	\
netxen_pcie_sem_lock((a), 7, NETXEN_CRB_WIN_LOCK_ID)
#define crb_win_unlock(a)	\
netxen_pcie_sem_unlock((a), 7)
int netxen_nic_get_board_info(struct netxen_adapter *adapter);
int netxen_nic_wol_supported(struct netxen_adapter *adapter);
int netxen_init_dummy_dma(struct netxen_adapter *adapter);
void netxen_free_dummy_dma(struct netxen_adapter *adapter);
int netxen_phantom_init(struct netxen_adapter *adapter, int pegtune_val);
int netxen_load_firmware(struct netxen_adapter *adapter);
int netxen_need_fw_reset(struct netxen_adapter *adapter);
void netxen_request_firmware(struct netxen_adapter *adapter);
void netxen_release_firmware(struct netxen_adapter *adapter);
int netxen_pinit_from_rom(struct netxen_adapter *adapter);
int netxen_rom_fast_read(struct netxen_adapter *adapter, int addr, int *valp);
int netxen_rom_fast_read_words(struct netxen_adapter *adapter, int addr,
u8 *bytes, size_t size);
int netxen_rom_fast_write_words(struct netxen_adapter *adapter, int addr,
u8 *bytes, size_t size);
int netxen_flash_unlock(struct netxen_adapter *adapter);
int netxen_backup_crbinit(struct netxen_adapter *adapter);
int netxen_flash_erase_secondary(struct netxen_adapter *adapter);
int netxen_flash_erase_primary(struct netxen_adapter *adapter);
void netxen_halt_pegs(struct netxen_adapter *adapter);
int netxen_rom_se(struct netxen_adapter *adapter, int addr);
int netxen_alloc_sw_resources(struct netxen_adapter *adapter);
void netxen_free_sw_resources(struct netxen_adapter *adapter);
void netxen_setup_hwops(struct netxen_adapter *adapter);
void __iomem *netxen_get_ioaddr(struct netxen_adapter *, u32);
int netxen_alloc_hw_resources(struct netxen_adapter *adapter);
void netxen_free_hw_resources(struct netxen_adapter *adapter);
void netxen_release_rx_buffers(struct netxen_adapter *adapter);
void netxen_release_tx_buffers(struct netxen_adapter *adapter);
int netxen_init_firmware(struct netxen_adapter *adapter);
void netxen_nic_clear_stats(struct netxen_adapter *adapter);
void netxen_watchdog_task(struct work_struct *work);
void netxen_post_rx_buffers(struct netxen_adapter *adapter, u32 ringid,
struct nx_host_rds_ring *rds_ring);
int netxen_process_cmd_ring(struct netxen_adapter *adapter);
int netxen_process_rcv_ring(struct nx_host_sds_ring *sds_ring, int max);
void netxen_p3_free_mac_list(struct netxen_adapter *adapter);
int netxen_config_intr_coalesce(struct netxen_adapter *adapter);
int netxen_config_rss(struct netxen_adapter *adapter, int enable);
int netxen_config_ipaddr(struct netxen_adapter *adapter, u32 ip, int cmd);
int netxen_linkevent_request(struct netxen_adapter *adapter, int enable);
void netxen_advert_link_change(struct netxen_adapter *adapter, int linkup);
void netxen_pci_camqm_read_2M(struct netxen_adapter *, u64, u64 *);
void netxen_pci_camqm_write_2M(struct netxen_adapter *, u64, u64);
int nx_fw_cmd_set_gbe_port(struct netxen_adapter *adapter,
u32 speed, u32 duplex, u32 autoneg);
int nx_fw_cmd_set_mtu(struct netxen_adapter *adapter, int mtu);
int netxen_nic_change_mtu(struct net_device *netdev, int new_mtu);
int netxen_config_hw_lro(struct netxen_adapter *adapter, int enable);
int netxen_config_bridged_mode(struct netxen_adapter *adapter, int enable);
int netxen_send_lro_cleanup(struct netxen_adapter *adapter);
void netxen_nic_update_cmd_producer(struct netxen_adapter *adapter,
struct nx_host_tx_ring *tx_ring);
int netxen_nic_reset_context(struct netxen_adapter *);
#define NETXEN_MAX_SHORT_NAME 32
struct netxen_brdinfo ;
static const struct netxen_brdinfo netxen_boards[] = ;
#define NUM_SUPPORTED_BOARDS ARRAY_SIZE(netxen_boards)
static inline void get_brd_name_by_type(u32 type, char *name)
static inline u32 netxen_tx_avail(struct nx_host_tx_ring *tx_ring)
int netxen_get_flash_mac_addr(struct netxen_adapter *adapter, u64 *mac);
int netxen_p3_get_mac_addr(struct netxen_adapter *adapter, u64 *mac);
extern void netxen_change_ringparam(struct netxen_adapter *adapter);
extern int netxen_rom_fast_read(struct netxen_adapter *adapter, int addr,
int *valp);
extern const struct ethtool_ops netxen_nic_ethtool_ops;
