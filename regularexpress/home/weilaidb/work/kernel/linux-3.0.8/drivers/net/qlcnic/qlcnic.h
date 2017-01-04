#define _QLCNIC_H_
#define _QLCNIC_LINUX_MAJOR 5
#define _QLCNIC_LINUX_MINOR 0
#define _QLCNIC_LINUX_SUBVERSION 18
#define QLCNIC_LINUX_VERSIONID  "5.0.18"
#define QLCNIC_DRV_IDC_VER  0x01
#define QLCNIC_DRIVER_VERSION  ((_QLCNIC_LINUX_MAJOR << 16) |\
(_QLCNIC_LINUX_MINOR << 8) | (_QLCNIC_LINUX_SUBVERSION))
#define QLCNIC_VERSION_CODE(a, b, c)	(((a) << 24) + ((b) << 16) + (c))
#define _major(v)	(((v) >> 24) & 0xff)
#define _minor(v)	(((v) >> 16) & 0xff)
#define _build(v)	((v) & 0xffff)
#define QLCNIC_DECODE_VERSION(v) \
QLCNIC_VERSION_CODE(((v) & 0xff), (((v) >> 8) & 0xff), ((v) >> 16))
#define QLCNIC_MIN_FW_VERSION     QLCNIC_VERSION_CODE(4, 4, 2)
#define QLCNIC_NUM_FLASH_SECTORS (64)
#define QLCNIC_FLASH_SECTOR_SIZE (64 * 1024)
#define QLCNIC_FLASH_TOTAL_SIZE  (QLCNIC_NUM_FLASH_SECTORS \
* QLCNIC_FLASH_SECTOR_SIZE)
#define RCV_DESC_RINGSIZE(rds_ring)	\
(sizeof(struct rcv_desc) * (rds_ring)->num_desc)
#define RCV_BUFF_RINGSIZE(rds_ring)	\
(sizeof(struct qlcnic_rx_buffer) * rds_ring->num_desc)
#define STATUS_DESC_RINGSIZE(sds_ring)	\
(sizeof(struct status_desc) * (sds_ring)->num_desc)
#define TX_BUFF_RINGSIZE(tx_ring)	\
(sizeof(struct qlcnic_cmd_buffer) * tx_ring->num_desc)
#define TX_DESC_RINGSIZE(tx_ring)	\
(sizeof(struct cmd_desc_type0) * tx_ring->num_desc)
#define QLCNIC_P3P_A0		0x50
#define QLCNIC_IS_REVISION_P3P(REVISION)     (REVISION >= QLCNIC_P3P_A0)
#define FIRST_PAGE_GROUP_START	0
#define FIRST_PAGE_GROUP_END	0x100000
#define P3P_MAX_MTU                     (9600)
#define P3P_MIN_MTU                     (68)
#define QLCNIC_MAX_ETHERHDR                32
#define QLCNIC_P3P_RX_BUF_MAX_LEN         (QLCNIC_MAX_ETHERHDR + ETH_DATA_LEN)
#define QLCNIC_P3P_RX_JUMBO_BUF_MAX_LEN   (QLCNIC_MAX_ETHERHDR + P3P_MAX_MTU)
#define QLCNIC_CT_DEFAULT_RX_BUF_LEN	2048
#define QLCNIC_LRO_BUFFER_EXTRA		2048
#define TX_ETHER_PKT	0x01
#define TX_TCP_PKT	0x02
#define TX_UDP_PKT	0x03
#define TX_IP_PKT	0x04
#define TX_TCP_LSO	0x05
#define TX_TCP_LSO6	0x06
#define TX_TCPV6_PKT	0x0b
#define TX_UDPV6_PKT	0x0c
#define QLCNIC_MAX_FRAGS_PER_TX	14
#define MAX_TSO_HEADER_DESC	2
#define MGMT_CMD_DESC_RESV	4
#define TX_STOP_THRESH		((MAX_SKB_FRAGS >> 2) + MAX_TSO_HEADER_DESC \
+ MGMT_CMD_DESC_RESV)
#define QLCNIC_MAX_TX_TIMEOUTS	2
#define PHAN_INITIALIZE_FAILED		0xffff
#define PHAN_INITIALIZE_COMPLETE	0xff01
#define PHAN_INITIALIZE_ACK		0xf00f
#define PHAN_PEG_RCV_INITIALIZED	0xff01
#define NUM_RCV_DESC_RINGS	3
#define RCV_RING_NORMAL 0
#define RCV_RING_JUMBO	1
#define MIN_CMD_DESCRIPTORS		64
#define MIN_RCV_DESCRIPTORS		64
#define MIN_JUMBO_DESCRIPTORS		32
#define MAX_CMD_DESCRIPTORS		1024
#define MAX_RCV_DESCRIPTORS_1G		4096
#define MAX_RCV_DESCRIPTORS_10G 	8192
#define MAX_RCV_DESCRIPTORS_VF		2048
#define MAX_JUMBO_RCV_DESCRIPTORS_1G	512
#define MAX_JUMBO_RCV_DESCRIPTORS_10G	1024
#define DEFAULT_RCV_DESCRIPTORS_1G	2048
#define DEFAULT_RCV_DESCRIPTORS_10G	4096
#define DEFAULT_RCV_DESCRIPTORS_VF	1024
#define MAX_RDS_RINGS                   2
#define get_next_index(index, length)	\
(((index) + 1) & ((length) - 1))
#define FLAGS_VLAN_TAGGED	0x10
#define FLAGS_VLAN_OOB		0x40
#define qlcnic_set_tx_vlan_tci(cmd_desc, v)	\
(cmd_desc)->vlan_TCI = cpu_to_le16(v);
#define qlcnic_set_cmd_desc_port(cmd_desc, var)	\
((cmd_desc)->port_ctxid |= ((var) & 0x0F))
#define qlcnic_set_cmd_desc_ctxid(cmd_desc, var)	\
((cmd_desc)->port_ctxid |= ((var) << 4 & 0xF0))
#define qlcnic_set_tx_port(_desc, _port) \
((_desc)->port_ctxid = ((_port) & 0xf) | (((_port) << 4) & 0xf0))
#define qlcnic_set_tx_flags_opcode(_desc, _flags, _opcode) \
((_desc)->flags_opcode |= \
cpu_to_le16(((_flags) & 0x7f) | (((_opcode) & 0x3f) << 7)))
#define qlcnic_set_tx_frags_len(_desc, _frags, _len) \
((_desc)->nfrags__length = \
cpu_to_le32(((_frags) & 0xff) | (((_len) & 0xffffff) << 8)))
struct cmd_desc_type0  __attribute__ ((aligned(64)));
struct rcv_desc  __packed;
#define QLCNIC_SYN_OFFLOAD	0x03
#define QLCNIC_RXPKT_DESC  	0x04
#define QLCNIC_OLD_RXPKT_DESC	0x3f
#define QLCNIC_RESPONSE_DESC	0x05
#define QLCNIC_LRO_DESC  	0x12
#define STATUS_CKSUM_LOOP	0
#define STATUS_CKSUM_OK		2
#define STATUS_OWNER_HOST	(0x1ULL << 56)
#define STATUS_OWNER_PHANTOM	(0x2ULL << 56)
#define qlcnic_get_sts_port(sts_data)	\
((sts_data) & 0x0F)
#define qlcnic_get_sts_status(sts_data)	\
(((sts_data) >> 4) & 0x0F)
#define qlcnic_get_sts_type(sts_data)	\
(((sts_data) >> 8) & 0x0F)
#define qlcnic_get_sts_totallength(sts_data)	\
(((sts_data) >> 12) & 0xFFFF)
#define qlcnic_get_sts_refhandle(sts_data)	\
(((sts_data) >> 28) & 0xFFFF)
#define qlcnic_get_sts_prot(sts_data)	\
(((sts_data) >> 44) & 0x0F)
#define qlcnic_get_sts_pkt_offset(sts_data)	\
(((sts_data) >> 48) & 0x1F)
#define qlcnic_get_sts_desc_cnt(sts_data)	\
(((sts_data) >> 53) & 0x7)
#define qlcnic_get_sts_opcode(sts_data)	\
(((sts_data) >> 58) & 0x03F)
#define qlcnic_get_lro_sts_refhandle(sts_data) 	\
((sts_data) & 0x0FFFF)
#define qlcnic_get_lro_sts_length(sts_data)	\
(((sts_data) >> 16) & 0x0FFFF)
#define qlcnic_get_lro_sts_l2_hdr_offset(sts_data)	\
(((sts_data) >> 32) & 0x0FF)
#define qlcnic_get_lro_sts_l4_hdr_offset(sts_data)	\
(((sts_data) >> 40) & 0x0FF)
#define qlcnic_get_lro_sts_timestamp(sts_data)	\
(((sts_data) >> 48) & 0x1)
#define qlcnic_get_lro_sts_type(sts_data)	\
(((sts_data) >> 49) & 0x7)
#define qlcnic_get_lro_sts_push_flag(sts_data)		\
(((sts_data) >> 52) & 0x1)
#define qlcnic_get_lro_sts_seq_number(sts_data)		\
((sts_data) & 0x0FFFFFFFF)
struct status_desc  __attribute__ ((aligned(16)));
#define QLCNIC_UNI_FW_MIN_SIZE		0xc8000
#define QLCNIC_UNI_DIR_SECT_PRODUCT_TBL	0x0
#define QLCNIC_UNI_DIR_SECT_BOOTLD	0x6
#define QLCNIC_UNI_DIR_SECT_FW		0x7
#define QLCNIC_UNI_CHIP_REV_OFF		10
#define QLCNIC_UNI_FLAGS_OFF		11
#define QLCNIC_UNI_BIOS_VERSION_OFF 	12
#define QLCNIC_UNI_BOOTLD_IDX_OFF	27
#define QLCNIC_UNI_FIRMWARE_IDX_OFF 	29
struct uni_table_desc;
struct uni_data_desc;
#define QLCNIC_FLT_LOCATION	0x3F1000
#define QLCNIC_FW_IMAGE_REGION	0x74
#define QLCNIC_BOOTLD_REGION    0X72
struct qlcnic_flt_header ;
struct qlcnic_flt_entry ;
#define	QLCNIC_BDINFO_MAGIC 0x12345678
#define QLCNIC_BRDTYPE_P3P_REF_QG	0x0021
#define QLCNIC_BRDTYPE_P3P_HMEZ		0x0022
#define QLCNIC_BRDTYPE_P3P_10G_CX4_LP	0x0023
#define QLCNIC_BRDTYPE_P3P_4_GB		0x0024
#define QLCNIC_BRDTYPE_P3P_IMEZ		0x0025
#define QLCNIC_BRDTYPE_P3P_10G_SFP_PLUS	0x0026
#define QLCNIC_BRDTYPE_P3P_10000_BASE_T	0x0027
#define QLCNIC_BRDTYPE_P3P_XG_LOM	0x0028
#define QLCNIC_BRDTYPE_P3P_4_GB_MM	0x0029
#define QLCNIC_BRDTYPE_P3P_10G_SFP_CT	0x002a
#define QLCNIC_BRDTYPE_P3P_10G_SFP_QT	0x002b
#define QLCNIC_BRDTYPE_P3P_10G_CX4	0x0031
#define QLCNIC_BRDTYPE_P3P_10G_XFP	0x0032
#define QLCNIC_BRDTYPE_P3P_10G_TP	0x0080
#define QLCNIC_MSIX_TABLE_OFFSET	0x44
#define QLCNIC_BRDCFG_START	0x4000
#define QLCNIC_BOOTLD_START	0x10000
#define QLCNIC_IMAGE_START	0x43000
#define QLCNIC_USER_START	0x3E8000
#define QLCNIC_FW_VERSION_OFFSET	(QLCNIC_USER_START+0x408)
#define QLCNIC_FW_SIZE_OFFSET		(QLCNIC_USER_START+0x40c)
#define QLCNIC_FW_SERIAL_NUM_OFFSET	(QLCNIC_USER_START+0x81c)
#define QLCNIC_BIOS_VERSION_OFFSET	(QLCNIC_USER_START+0x83c)
#define QLCNIC_BRDTYPE_OFFSET		(QLCNIC_BRDCFG_START+0x8)
#define QLCNIC_FW_MAGIC_OFFSET		(QLCNIC_BRDCFG_START+0x128)
#define QLCNIC_FW_MIN_SIZE		(0x3fffff)
#define QLCNIC_UNIFIED_ROMIMAGE  	0
#define QLCNIC_FLASH_ROMIMAGE		1
#define QLCNIC_UNKNOWN_ROMIMAGE		0xff
#define QLCNIC_UNIFIED_ROMIMAGE_NAME	"phanfw.bin"
#define QLCNIC_FLASH_ROMIMAGE_NAME	"flash"
extern char qlcnic_driver_name[];
#define MAX_STATUS_HANDLE	(64)
struct qlcnic_skb_frag ;
#define	QLCNIC_BUFFER_FREE	0
#define	QLCNIC_BUFFER_BUSY	1
struct qlcnic_cmd_buffer ;
struct qlcnic_rx_buffer ;
#define	QLCNIC_GBE	0x01
#define	QLCNIC_XGBE	0x02
#define QLCNIC_DEFAULT_INTR_COALESCE_RX_TIME_US	3
#define QLCNIC_DEFAULT_INTR_COALESCE_RX_PACKETS	256
#define QLCNIC_INTR_DEFAULT			0x04
#define QLCNIC_CONFIG_INTR_COALESCE		3
struct qlcnic_nic_intr_coalesce ;
struct qlcnic_dump_template_hdr ;
struct qlcnic_fw_dump ;
struct qlcnic_hardware_context ;
struct qlcnic_adapter_stats ;
struct qlcnic_host_rds_ring  ____cacheline_internodealigned_in_smp;
struct qlcnic_host_sds_ring  ____cacheline_internodealigned_in_smp;
struct qlcnic_host_tx_ring  ____cacheline_internodealigned_in_smp;
struct qlcnic_recv_context ;
#define QLCNIC_OS_CRB_RETRY_COUNT	4000
#define QLCNIC_CDRP_SIGNATURE_MAKE(pcifn, version) \
(((pcifn) & 0xff) | (((version) & 0xff) << 8) | (0xcafe << 16))
#define QLCNIC_CDRP_CMD_BIT		0x80000000
#define QLCNIC_CDRP_FORM_RSP(rsp)	(rsp)
#define QLCNIC_CDRP_IS_RSP(rsp)	(((rsp) & QLCNIC_CDRP_CMD_BIT) == 0)
#define QLCNIC_CDRP_RSP_OK		0x00000001
#define QLCNIC_CDRP_RSP_FAIL		0x00000002
#define QLCNIC_CDRP_RSP_TIMEOUT 	0x00000003
#define QLCNIC_CDRP_FORM_CMD(cmd)	(QLCNIC_CDRP_CMD_BIT | (cmd))
#define QLCNIC_CDRP_IS_CMD(cmd)	(((cmd) & QLCNIC_CDRP_CMD_BIT) != 0)
#define QLCNIC_CDRP_CMD_SUBMIT_CAPABILITIES     0x00000001
#define QLCNIC_CDRP_CMD_READ_MAX_RDS_PER_CTX    0x00000002
#define QLCNIC_CDRP_CMD_READ_MAX_SDS_PER_CTX    0x00000003
#define QLCNIC_CDRP_CMD_READ_MAX_RULES_PER_CTX  0x00000004
#define QLCNIC_CDRP_CMD_READ_MAX_RX_CTX         0x00000005
#define QLCNIC_CDRP_CMD_READ_MAX_TX_CTX         0x00000006
#define QLCNIC_CDRP_CMD_CREATE_RX_CTX           0x00000007
#define QLCNIC_CDRP_CMD_DESTROY_RX_CTX          0x00000008
#define QLCNIC_CDRP_CMD_CREATE_TX_CTX           0x00000009
#define QLCNIC_CDRP_CMD_DESTROY_TX_CTX          0x0000000a
#define QLCNIC_CDRP_CMD_SET_MTU                 0x00000012
#define QLCNIC_CDRP_CMD_READ_PHY		0x00000013
#define QLCNIC_CDRP_CMD_WRITE_PHY		0x00000014
#define QLCNIC_CDRP_CMD_READ_HW_REG		0x00000015
#define QLCNIC_CDRP_CMD_GET_FLOW_CTL		0x00000016
#define QLCNIC_CDRP_CMD_SET_FLOW_CTL		0x00000017
#define QLCNIC_CDRP_CMD_READ_MAX_MTU		0x00000018
#define QLCNIC_CDRP_CMD_READ_MAX_LRO		0x00000019
#define QLCNIC_CDRP_CMD_MAC_ADDRESS		0x0000001f
#define QLCNIC_CDRP_CMD_GET_PCI_INFO		0x00000020
#define QLCNIC_CDRP_CMD_GET_NIC_INFO		0x00000021
#define QLCNIC_CDRP_CMD_SET_NIC_INFO		0x00000022
#define QLCNIC_CDRP_CMD_GET_ESWITCH_CAPABILITY	0x00000024
#define QLCNIC_CDRP_CMD_TOGGLE_ESWITCH		0x00000025
#define QLCNIC_CDRP_CMD_GET_ESWITCH_STATUS	0x00000026
#define QLCNIC_CDRP_CMD_SET_PORTMIRRORING	0x00000027
#define QLCNIC_CDRP_CMD_CONFIGURE_ESWITCH	0x00000028
#define QLCNIC_CDRP_CMD_GET_ESWITCH_PORT_CONFIG	0x00000029
#define QLCNIC_CDRP_CMD_GET_ESWITCH_STATS	0x0000002a
#define QLCNIC_CDRP_CMD_CONFIG_PORT		0x0000002E
#define QLCNIC_CDRP_CMD_TEMP_SIZE		0x0000002f
#define QLCNIC_CDRP_CMD_GET_TEMP_HDR		0x00000030
#define QLCNIC_RCODE_SUCCESS		0
#define QLCNIC_RCODE_NOT_SUPPORTED	9
#define QLCNIC_RCODE_TIMEOUT		17
#define QLCNIC_DESTROY_CTX_RESET	0
#define QLCNIC_CAP0_LEGACY_CONTEXT	(1)
#define QLCNIC_CAP0_LEGACY_MN		(1 << 2)
#define QLCNIC_CAP0_LSO 		(1 << 6)
#define QLCNIC_CAP0_JUMBO_CONTIGUOUS	(1 << 7)
#define QLCNIC_CAP0_LRO_CONTIGUOUS	(1 << 8)
#define QLCNIC_CAP0_VALIDOFF		(1 << 11)
#define QLCNIC_HOST_CTX_STATE_FREED	0
#define QLCNIC_HOST_CTX_STATE_ACTIVE	2
struct qlcnic_hostrq_sds_ring  __packed;
struct qlcnic_hostrq_rds_ring  __packed;
struct qlcnic_hostrq_rx_ctx  __packed;
struct qlcnic_cardrsp_rds_ring __packed;
struct qlcnic_cardrsp_sds_ring  __packed;
struct qlcnic_cardrsp_rx_ctx  __packed;
#define SIZEOF_HOSTRQ_RX(HOSTRQ_RX, rds_rings, sds_rings)	\
(sizeof(HOSTRQ_RX) + 					\
(rds_rings)*(sizeof(struct qlcnic_hostrq_rds_ring)) +		\
(sds_rings)*(sizeof(struct qlcnic_hostrq_sds_ring)))
#define SIZEOF_CARDRSP_RX(CARDRSP_RX, rds_rings, sds_rings) 	\
(sizeof(CARDRSP_RX) + 					\
(rds_rings)*(sizeof(struct qlcnic_cardrsp_rds_ring)) + 		\
(sds_rings)*(sizeof(struct qlcnic_cardrsp_sds_ring)))
struct qlcnic_hostrq_cds_ring  __packed;
struct qlcnic_hostrq_tx_ctx  __packed;
struct qlcnic_cardrsp_cds_ring  __packed;
struct qlcnic_cardrsp_tx_ctx  __packed;
#define SIZEOF_HOSTRQ_TX(HOSTRQ_TX)	(sizeof(HOSTRQ_TX))
#define SIZEOF_CARDRSP_TX(CARDRSP_TX)	(sizeof(CARDRSP_TX))
#define QLCNIC_HOST_RDS_CRB_MODE_UNIQUE	0
#define QLCNIC_HOST_RDS_CRB_MODE_SHARED	1
#define QLCNIC_HOST_RDS_CRB_MODE_CUSTOM	2
#define QLCNIC_HOST_RDS_CRB_MODE_MAX	3
#define QLCNIC_HOST_INT_CRB_MODE_UNIQUE	0
#define QLCNIC_HOST_INT_CRB_MODE_SHARED	1
#define QLCNIC_HOST_INT_CRB_MODE_NORX	2
#define QLCNIC_HOST_INT_CRB_MODE_NOTX	3
#define QLCNIC_HOST_INT_CRB_MODE_NORXTX	4
#define MC_COUNT_P3P	38
#define QLCNIC_MAC_NOOP	0
#define QLCNIC_MAC_ADD	1
#define QLCNIC_MAC_DEL	2
#define QLCNIC_MAC_VLAN_ADD	3
#define QLCNIC_MAC_VLAN_DEL	4
struct qlcnic_mac_list_s ;
#define QLCNIC_HOST_REQUEST	0x13
#define QLCNIC_REQUEST		0x14
#define QLCNIC_MAC_EVENT	0x1
#define QLCNIC_IP_UP		2
#define QLCNIC_IP_DOWN		3
#define QLCNIC_H2C_OPCODE_CONFIG_RSS			0x1
#define QLCNIC_H2C_OPCODE_CONFIG_INTR_COALESCE		0x3
#define QLCNIC_H2C_OPCODE_CONFIG_LED			0x4
#define QLCNIC_H2C_OPCODE_LRO_REQUEST			0x7
#define QLCNIC_H2C_OPCODE_SET_MAC_RECEIVE_MODE		0xc
#define QLCNIC_H2C_OPCODE_CONFIG_IPADDR		0x12
#define QLCNIC_H2C_OPCODE_GET_LINKEVENT		0x15
#define QLCNIC_H2C_OPCODE_CONFIG_BRIDGING		0x17
#define QLCNIC_H2C_OPCODE_CONFIG_HW_LRO		0x18
#define QLCNIC_C2H_OPCODE_GET_LINKEVENT_RESPONSE	141
#define VPORT_MISS_MODE_DROP		0
#define VPORT_MISS_MODE_ACCEPT_ALL	1
#define VPORT_MISS_MODE_ACCEPT_MULTI	2
#define QLCNIC_LRO_REQUEST_CLEANUP	4
#define QLCNIC_FW_CAPABILITY_TSO		BIT_1
#define QLCNIC_FW_CAPABILITY_BDG		BIT_8
#define QLCNIC_FW_CAPABILITY_FVLANTX		BIT_9
#define QLCNIC_FW_CAPABILITY_HW_LRO		BIT_10
#define LINKEVENT_MODULE_NOT_PRESENT			1
#define LINKEVENT_MODULE_OPTICAL_UNKNOWN		2
#define LINKEVENT_MODULE_OPTICAL_SRLR			3
#define LINKEVENT_MODULE_OPTICAL_LRM			4
#define LINKEVENT_MODULE_OPTICAL_SFP_1G 		5
#define LINKEVENT_MODULE_TWINAX_UNSUPPORTED_CABLE	6
#define LINKEVENT_MODULE_TWINAX_UNSUPPORTED_CABLELEN	7
#define LINKEVENT_MODULE_TWINAX 			8
#define LINKSPEED_10GBPS	10000
#define LINKSPEED_1GBPS 	1000
#define LINKSPEED_100MBPS	100
#define LINKSPEED_10MBPS	10
#define LINKSPEED_ENCODED_10MBPS	0
#define LINKSPEED_ENCODED_100MBPS	1
#define LINKSPEED_ENCODED_1GBPS 	2
#define LINKEVENT_AUTONEG_DISABLED	0
#define LINKEVENT_AUTONEG_ENABLED	1
#define LINKEVENT_HALF_DUPLEX		0
#define LINKEVENT_FULL_DUPLEX		1
#define LINKEVENT_LINKSPEED_MBPS	0
#define LINKEVENT_LINKSPEED_ENCODED	1
#define qlcnic_get_nic_msg_opcode(msg_hdr)	\
((msg_hdr >> 32) & 0xFF)
struct qlcnic_fw_msg ;
struct qlcnic_nic_req  __packed;
struct qlcnic_mac_req ;
struct qlcnic_vlan_req  __packed;
struct qlcnic_ipaddr ;
#define QLCNIC_MSI_ENABLED		0x02
#define QLCNIC_MSIX_ENABLED		0x04
#define QLCNIC_LRO_ENABLED		0x08
#define QLCNIC_LRO_DISABLED		0x00
#define QLCNIC_BRIDGE_ENABLED       	0X10
#define QLCNIC_DIAG_ENABLED		0x20
#define QLCNIC_ESWITCH_ENABLED		0x40
#define QLCNIC_ADAPTER_INITIALIZED	0x80
#define QLCNIC_TAGGING_ENABLED		0x100
#define QLCNIC_MACSPOOF			0x200
#define QLCNIC_MAC_OVERRIDE_DISABLED	0x400
#define QLCNIC_PROMISC_DISABLED		0x800
#define QLCNIC_NEED_FLR			0x1000
#define QLCNIC_IS_MSI_FAMILY(adapter) \
((adapter)->flags & (QLCNIC_MSI_ENABLED | QLCNIC_MSIX_ENABLED))
#define QLCNIC_DEF_NUM_STS_DESC_RINGS	4
#define QLCNIC_MIN_NUM_RSS_RINGS	2
#define QLCNIC_MSIX_TBL_SPACE		8192
#define QLCNIC_PCI_REG_MSIX_TBL 	0x44
#define QLCNIC_MSIX_TBL_PGSIZE		4096
#define QLCNIC_NETDEV_WEIGHT	128
#define QLCNIC_ADAPTER_UP_MAGIC 777
#define __QLCNIC_FW_ATTACHED		0
#define __QLCNIC_DEV_UP 		1
#define __QLCNIC_RESETTING		2
#define __QLCNIC_START_FW 		4
#define __QLCNIC_AER			5
#define __QLCNIC_DIAG_RES_ALLOC		6
#define QLCNIC_INTERRUPT_TEST		1
#define QLCNIC_LOOPBACK_TEST		2
#define QLCNIC_LED_TEST		3
#define QLCNIC_FILTER_AGE	80
#define QLCNIC_READD_AGE	20
#define QLCNIC_LB_MAX_FILTERS	64
struct qlcnic_filter ;
struct qlcnic_filter_hash ;
struct qlcnic_adapter ;
struct qlcnic_info  __packed;
struct qlcnic_pci_info  __packed;
struct qlcnic_npar_info ;
struct qlcnic_eswitch ;
#define QL_STATUS_INVALID_PARAM	-1
#define MAX_BW			100
#define MAX_VLAN_ID		4095
#define MIN_VLAN_ID		2
#define DEFAULT_MAC_LEARN	1
#define IS_VALID_VLAN(vlan)	(vlan >= MIN_VLAN_ID && vlan < MAX_VLAN_ID)
#define IS_VALID_BW(bw)		(bw <= MAX_BW)
struct qlcnic_pci_func_cfg ;
struct qlcnic_npar_func_cfg ;
struct qlcnic_pm_func_cfg ;
struct qlcnic_esw_func_cfg ;
#define QLCNIC_STATS_VERSION		1
#define QLCNIC_STATS_PORT		1
#define QLCNIC_STATS_ESWITCH		2
#define QLCNIC_QUERY_RX_COUNTER		0
#define QLCNIC_QUERY_TX_COUNTER		1
#define QLCNIC_ESW_STATS_NOT_AVAIL	0xffffffffffffffffULL
#define QLCNIC_ADD_ESW_STATS(VAL1, VAL2)\
do  while (0)
struct __qlcnic_esw_statistics  __packed;
struct qlcnic_esw_statistics ;
struct qlcnic_common_entry_hdr  __packed;
struct __crb  __packed;
struct __ctrl  __packed;
struct __cache  __packed;
struct __ocm  __packed;
struct __mem  __packed;
struct __mux  __packed;
struct __queue  __packed;
struct qlcnic_dump_entry  __packed;
enum op_codes ;
#define QLCNIC_DUMP_WCRB	BIT_0
#define QLCNIC_DUMP_RWCRB	BIT_1
#define QLCNIC_DUMP_ANDCRB	BIT_2
#define QLCNIC_DUMP_ORCRB	BIT_3
#define QLCNIC_DUMP_POLLCRB	BIT_4
#define QLCNIC_DUMP_RD_SAVE	BIT_5
#define QLCNIC_DUMP_WRT_SAVED	BIT_6
#define QLCNIC_DUMP_MOD_SAVE_ST	BIT_7
#define QLCNIC_DUMP_SKIP	BIT_7
#define QLCNIC_DUMP_MASK_MIN		3
#define QLCNIC_DUMP_MASK_DEF		0x0f
#define QLCNIC_DUMP_MASK_MAX		0xff
#define QLCNIC_FORCE_FW_DUMP_KEY	0xdeadfeed
struct qlcnic_dump_operations ;
int qlcnic_fw_cmd_get_minidump_temp(struct qlcnic_adapter *adapter);
int qlcnic_fw_cmd_set_port(struct qlcnic_adapter *adapter, u32 config);
u32 qlcnic_hw_read_wx_2M(struct qlcnic_adapter *adapter, ulong off);
int qlcnic_hw_write_wx_2M(struct qlcnic_adapter *, ulong off, u32 data);
int qlcnic_pci_mem_write_2M(struct qlcnic_adapter *, u64 off, u64 data);
int qlcnic_pci_mem_read_2M(struct qlcnic_adapter *, u64 off, u64 *data);
void qlcnic_pci_camqm_read_2M(struct qlcnic_adapter *, u64, u64 *);
void qlcnic_pci_camqm_write_2M(struct qlcnic_adapter *, u64, u64);
#define ADDR_IN_RANGE(addr, low, high)	\
(((addr) < (high)) && ((addr) >= (low)))
#define QLCRD32(adapter, off) \
(qlcnic_hw_read_wx_2M(adapter, off))
#define QLCWR32(adapter, off, val) \
(qlcnic_hw_write_wx_2M(adapter, off, val))
int qlcnic_pcie_sem_lock(struct qlcnic_adapter *, int, u32);
void qlcnic_pcie_sem_unlock(struct qlcnic_adapter *, int);
#define qlcnic_rom_lock(a)	\
qlcnic_pcie_sem_lock((a), 2, QLCNIC_ROM_LOCK_ID)
#define qlcnic_rom_unlock(a)	\
qlcnic_pcie_sem_unlock((a), 2)
#define qlcnic_phy_lock(a)	\
qlcnic_pcie_sem_lock((a), 3, QLCNIC_PHY_LOCK_ID)
#define qlcnic_phy_unlock(a)	\
qlcnic_pcie_sem_unlock((a), 3)
#define qlcnic_api_lock(a)	\
qlcnic_pcie_sem_lock((a), 5, 0)
#define qlcnic_api_unlock(a)	\
qlcnic_pcie_sem_unlock((a), 5)
#define qlcnic_sw_lock(a)	\
qlcnic_pcie_sem_lock((a), 6, 0)
#define qlcnic_sw_unlock(a)	\
qlcnic_pcie_sem_unlock((a), 6)
#define crb_win_lock(a)	\
qlcnic_pcie_sem_lock((a), 7, QLCNIC_CRB_WIN_LOCK_ID)
#define crb_win_unlock(a)	\
qlcnic_pcie_sem_unlock((a), 7)
int qlcnic_get_board_info(struct qlcnic_adapter *adapter);
int qlcnic_wol_supported(struct qlcnic_adapter *adapter);
int qlcnic_config_led(struct qlcnic_adapter *adapter, u32 state, u32 rate);
void qlcnic_prune_lb_filters(struct qlcnic_adapter *adapter);
void qlcnic_delete_lb_filters(struct qlcnic_adapter *adapter);
int qlcnic_dump_fw(struct qlcnic_adapter *);
int qlcnic_load_firmware(struct qlcnic_adapter *adapter);
int qlcnic_need_fw_reset(struct qlcnic_adapter *adapter);
void qlcnic_request_firmware(struct qlcnic_adapter *adapter);
void qlcnic_release_firmware(struct qlcnic_adapter *adapter);
int qlcnic_pinit_from_rom(struct qlcnic_adapter *adapter);
int qlcnic_setup_idc_param(struct qlcnic_adapter *adapter);
int qlcnic_check_flash_fw_ver(struct qlcnic_adapter *adapter);
int qlcnic_rom_fast_read(struct qlcnic_adapter *adapter, u32 addr, u32 *valp);
int qlcnic_rom_fast_read_words(struct qlcnic_adapter *adapter, int addr,
u8 *bytes, size_t size);
int qlcnic_alloc_sw_resources(struct qlcnic_adapter *adapter);
void qlcnic_free_sw_resources(struct qlcnic_adapter *adapter);
void __iomem *qlcnic_get_ioaddr(struct qlcnic_adapter *, u32);
int qlcnic_alloc_hw_resources(struct qlcnic_adapter *adapter);
void qlcnic_free_hw_resources(struct qlcnic_adapter *adapter);
int qlcnic_fw_create_ctx(struct qlcnic_adapter *adapter);
void qlcnic_fw_destroy_ctx(struct qlcnic_adapter *adapter);
void qlcnic_reset_rx_buffers_list(struct qlcnic_adapter *adapter);
void qlcnic_release_rx_buffers(struct qlcnic_adapter *adapter);
void qlcnic_release_tx_buffers(struct qlcnic_adapter *adapter);
int qlcnic_check_fw_status(struct qlcnic_adapter *adapter);
void qlcnic_watchdog_task(struct work_struct *work);
void qlcnic_post_rx_buffers(struct qlcnic_adapter *adapter,
struct qlcnic_host_rds_ring *rds_ring);
int qlcnic_process_rcv_ring(struct qlcnic_host_sds_ring *sds_ring, int max);
void qlcnic_set_multi(struct net_device *netdev);
void qlcnic_free_mac_list(struct qlcnic_adapter *adapter);
int qlcnic_nic_set_promisc(struct qlcnic_adapter *adapter, u32);
int qlcnic_config_intr_coalesce(struct qlcnic_adapter *adapter);
int qlcnic_config_rss(struct qlcnic_adapter *adapter, int enable);
int qlcnic_config_ipaddr(struct qlcnic_adapter *adapter, __be32 ip, int cmd);
int qlcnic_linkevent_request(struct qlcnic_adapter *adapter, int enable);
void qlcnic_advert_link_change(struct qlcnic_adapter *adapter, int linkup);
int qlcnic_fw_cmd_set_mtu(struct qlcnic_adapter *adapter, int mtu);
int qlcnic_change_mtu(struct net_device *netdev, int new_mtu);
u32 qlcnic_fix_features(struct net_device *netdev, u32 features);
int qlcnic_set_features(struct net_device *netdev, u32 features);
int qlcnic_config_hw_lro(struct qlcnic_adapter *adapter, int enable);
int qlcnic_config_bridged_mode(struct qlcnic_adapter *adapter, u32 enable);
int qlcnic_send_lro_cleanup(struct qlcnic_adapter *adapter);
void qlcnic_update_cmd_producer(struct qlcnic_adapter *adapter,
struct qlcnic_host_tx_ring *tx_ring);
void qlcnic_fetch_mac(struct qlcnic_adapter *, u32, u32, u8, u8 *);
int qlcnic_reset_context(struct qlcnic_adapter *);
u32 qlcnic_issue_cmd(struct qlcnic_adapter *adapter,
u32 pci_fn, u32 version, u32 arg1, u32 arg2, u32 arg3, u32 cmd);
void qlcnic_diag_free_res(struct net_device *netdev, int max_sds_rings);
int qlcnic_diag_alloc_res(struct net_device *netdev, int test);
netdev_tx_t qlcnic_xmit_frame(struct sk_buff *skb, struct net_device *netdev);
int qlcnic_validate_max_rss(struct net_device *netdev, u8 max_hw, u8 val);
int qlcnic_set_max_rss(struct qlcnic_adapter *adapter, u8 data);
void qlcnic_dev_request_reset(struct qlcnic_adapter *);
int qlcnic_get_mac_address(struct qlcnic_adapter *, u8*);
int qlcnic_get_nic_info(struct qlcnic_adapter *, struct qlcnic_info *, u8);
int qlcnic_set_nic_info(struct qlcnic_adapter *, struct qlcnic_info *);
int qlcnic_get_pci_info(struct qlcnic_adapter *, struct qlcnic_pci_info*);
int qlcnic_config_switch_port(struct qlcnic_adapter *,
struct qlcnic_esw_func_cfg *);
int qlcnic_get_eswitch_port_config(struct qlcnic_adapter *,
struct qlcnic_esw_func_cfg *);
int qlcnic_config_port_mirroring(struct qlcnic_adapter *, u8, u8, u8);
int qlcnic_get_port_stats(struct qlcnic_adapter *, const u8, const u8,
struct __qlcnic_esw_statistics *);
int qlcnic_get_eswitch_stats(struct qlcnic_adapter *, const u8, u8,
struct __qlcnic_esw_statistics *);
int qlcnic_clear_esw_stats(struct qlcnic_adapter *adapter, u8, u8, u8);
extern int qlcnic_config_tso;
#define QLCNIC_MAX_BOARD_NAME_LEN 100
struct qlcnic_brdinfo ;
static const struct qlcnic_brdinfo qlcnic_boards[] = ;
#define NUM_SUPPORTED_BOARDS ARRAY_SIZE(qlcnic_boards)
static inline u32 qlcnic_tx_avail(struct qlcnic_host_tx_ring *tx_ring)
extern const struct ethtool_ops qlcnic_ethtool_ops;
struct qlcnic_nic_template ;
#define QLCDB(adapter, lvl, _fmt, _args...) do  while (0)
