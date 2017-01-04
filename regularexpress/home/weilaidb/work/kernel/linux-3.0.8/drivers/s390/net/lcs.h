#define LCS_DBF_TEXT(level, name, text) \
do  while (0)
#define LCS_DBF_HEX(level,name,addr,len) \
do  while (0)
static inline int lcs_dbf_passes(debug_info_t *dbf_grp, int level)
#define LCS_DBF_TEXT_(level,name,text...) \
do  while (0)
#define CARD_FROM_DEV(cdev) \
(struct lcs_card *) dev_get_drvdata( \
&((struct ccwgroup_device *)dev_get_drvdata(&cdev->dev))->dev);
enum lcs_channel_types ;
#define LCS_CCW_WRITE		0x01
#define LCS_CCW_READ		0x02
#define LCS_CCW_TRANSFER	0x08
#define LCS_CMD_STARTLAN	0x01
#define LCS_CMD_STOPLAN		0x02
#define LCS_CMD_LANSTAT		0x04
#define LCS_CMD_STARTUP		0x07
#define LCS_CMD_SHUTDOWN	0x08
#define LCS_CMD_QIPASSIST	0xb2
#define LCS_CMD_SETIPM		0xb4
#define LCS_CMD_DELIPM		0xb5
#define LCS_INITIATOR_TCPIP	0x00
#define LCS_INITIATOR_LGW	0x01
#define LCS_STD_CMD_SIZE	16
#define LCS_MULTICAST_CMD_SIZE	404
#define LCS_IPASS_ARP_PROCESSING	0x0001
#define LCS_IPASS_IN_CHECKSUM_SUPPORT	0x0002
#define LCS_IPASS_OUT_CHECKSUM_SUPPORT	0x0004
#define LCS_IPASS_IP_FRAG_REASSEMBLY	0x0008
#define LCS_IPASS_IP_FILTERING		0x0010
#define LCS_IPASS_IPV6_SUPPORT		0x0020
#define LCS_IPASS_MULTICAST_SUPPORT	0x0040
#define LCS_SENSE_BYTE_0 		0
#define LCS_SENSE_BYTE_1 		1
#define LCS_SENSE_BYTE_2 		2
#define LCS_SENSE_BYTE_3 		3
#define LCS_SENSE_INTERFACE_DISCONNECT	0x01
#define LCS_SENSE_EQUIPMENT_CHECK	0x10
#define LCS_SENSE_BUS_OUT_CHECK		0x20
#define LCS_SENSE_INTERVENTION_REQUIRED 0x40
#define LCS_SENSE_CMD_REJECT		0x80
#define LCS_SENSE_RESETTING_EVENT	0x80
#define LCS_SENSE_DEVICE_ONLINE		0x20
#define LCS_FRAME_TYPE_CONTROL		0
#define LCS_FRAME_TYPE_ENET		1
#define LCS_FRAME_TYPE_TR		2
#define LCS_FRAME_TYPE_FDDI		7
#define LCS_FRAME_TYPE_AUTO		-1
#define LCS_ILLEGAL_OFFSET		0xffff
#define LCS_IOBUFFERSIZE		0x5000
#define LCS_NUM_BUFFS			32
#define LCS_MAC_LENGTH			6
#define LCS_INVALID_PORT_NO		-1
#define LCS_LANCMD_TIMEOUT_DEFAULT      5
#define	 LCS_IPM_STATE_SET_REQUIRED	0
#define	 LCS_IPM_STATE_DEL_REQUIRED	1
#define	 LCS_IPM_STATE_ON_CARD		2
#define	 LCS_IPASS_ARP_PROCESSING	0x0001
#define	 LCS_IPASS_INBOUND_CSUM_SUPP	0x0002
#define	 LCS_IPASS_OUTBOUND_CSUM_SUPP	0x0004
#define	 LCS_IPASS_IP_FRAG_REASSEMBLY	0x0008
#define	 LCS_IPASS_IP_FILTERING		0x0010
#define	 LCS_IPASS_IPV6_SUPPORT		0x0020
#define	 LCS_IPASS_MULTICAST_SUPPORT	0x0040
enum lcs_buffer_states ;
enum lcs_channel_states ;
enum lcs_dev_states ;
enum lcs_threads ;
struct lcs_header   __attribute__ ((packed));
struct lcs_ip_mac_pair   __attribute__ ((packed));
struct lcs_ipm_list ;
struct lcs_cmd   __attribute__ ((packed));
struct lcs_card;
struct lcs_channel;
struct lcs_buffer ;
struct lcs_reply ;
struct lcs_channel ;
struct lcs_card   __attribute__ ((aligned(8)));
