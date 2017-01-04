#define __QETH_CORE_MPC_H__
#define IPA_PDU_HEADER_SIZE	0x40
#define QETH_IPA_PDU_LEN_TOTAL(buffer) (buffer + 0x0e)
#define QETH_IPA_PDU_LEN_PDU1(buffer) (buffer + 0x26)
#define QETH_IPA_PDU_LEN_PDU2(buffer) (buffer + 0x29)
#define QETH_IPA_PDU_LEN_PDU3(buffer) (buffer + 0x3a)
extern unsigned char IPA_PDU_HEADER[];
#define QETH_IPA_CMD_DEST_ADDR(buffer) (buffer + 0x2c)
#define IPA_CMD_LENGTH	(IPA_PDU_HEADER_SIZE + sizeof(struct qeth_ipa_cmd))
#define QETH_SEQ_NO_LENGTH	4
#define QETH_MPC_TOKEN_LENGTH	4
#define QETH_MCL_LENGTH		4
#define OSA_ADDR_LEN		6
#define QETH_TIMEOUT		(10 * HZ)
#define QETH_IPA_TIMEOUT	(45 * HZ)
#define QETH_IDX_COMMAND_SEQNO	0xffff0000
#define SR_INFO_LEN		16
#define QETH_CLEAR_CHANNEL_PARM	-10
#define QETH_HALT_CHANNEL_PARM	-11
#define QETH_RCD_PARM -12
#define IPA_CMD_INITIATOR_HOST  0x00
#define IPA_CMD_INITIATOR_OSA   0x01
#define IPA_CMD_INITIATOR_HOST_REPLY  0x80
#define IPA_CMD_INITIATOR_OSA_REPLY   0x81
#define IPA_CMD_PRIM_VERSION_NO 0x01
enum qeth_card_types ;
#define QETH_MPC_DIFINFO_LEN_INDICATES_LINK_TYPE 0x18
enum qeth_link_types ;
enum qeth_tr_macaddr_modes ;
enum qeth_tr_broadcast_modes ;
#define RESET_ROUTING_FLAG 0x10
enum qeth_routing_types ;
enum qeth_ipa_cmds ;
enum qeth_ip_ass_cmds ;
enum qeth_arp_process_subcmds ;
enum qeth_ipa_return_codes ;
#define IPA_RC_IP_ADDRESS_NOT_DEFINED	IPA_RC_PRIMARY_ALREADY_DEFINED
#define IPA_RC_INVALID_SUBCMD		IPA_RC_IP_TABLE_FULL
#define IPA_RC_HARDWARE_AUTH_ERROR	IPA_RC_UNKNOWN_ERROR
enum qeth_ipa_funcs ;
enum qeth_ipa_setdelip_flags ;
enum qeth_ipa_setadp_cmd ;
enum qeth_ipa_mac_ops ;
enum qeth_ipa_addr_ops ;
enum qeth_ipa_promisc_modes ;
enum qeth_ipa_isolation_modes ;
enum qeth_ipa_set_access_mode_rc ;
struct qeth_ipacmd_setdelip4  __attribute__ ((packed));
struct qeth_ipacmd_setdelip6  __attribute__ ((packed));
struct qeth_ipacmd_setdelipm  __attribute__ ((packed));
struct qeth_ipacmd_layer2setdelmac  __attribute__ ((packed));
struct qeth_ipacmd_layer2setdelvlan  __attribute__ ((packed));
struct qeth_ipacmd_setassparms_hdr  __attribute__((packed));
struct qeth_arp_query_data  __attribute__((packed));
struct qeth_arp_query_info ;
struct qeth_ipacmd_setassparms  __attribute__ ((packed));
struct qeth_set_routing ;
struct qeth_query_cmds_supp  __attribute__ ((packed));
struct qeth_change_addr  __attribute__ ((packed));
struct qeth_snmp_cmd  __attribute__ ((packed));
struct qeth_snmp_ureq_hdr  __attribute__ ((packed));
struct qeth_snmp_ureq  __attribute__((packed));
struct qeth_set_access_ctrl  __attribute__((packed));
struct qeth_ipacmd_setadpparms_hdr  __attribute__ ((packed));
struct qeth_ipacmd_setadpparms  __attribute__ ((packed));
struct qeth_create_destroy_address  __attribute__ ((packed));
enum qeth_diags_cmds ;
enum qeth_diags_trace_types ;
enum qeth_diags_trace_cmds ;
enum qeth_diags_trap_action ;
struct qeth_ipacmd_diagass  __attribute__ ((packed));
struct qeth_ipacmd_hdr  __attribute__ ((packed));
struct qeth_ipa_cmd  __attribute__ ((packed));
enum qeth_ipa_arp_return_codes ;
extern char *qeth_get_ipa_msg(enum qeth_ipa_return_codes rc);
extern char *qeth_get_ipa_cmd_name(enum qeth_ipa_cmds cmd);
#define QETH_SETASS_BASE_LEN (sizeof(struct qeth_ipacmd_hdr) + \
sizeof(struct qeth_ipacmd_setassparms_hdr))
#define QETH_IPA_ARP_DATA_POS(buffer) (buffer + IPA_PDU_HEADER_SIZE + \
QETH_SETASS_BASE_LEN)
#define QETH_SETADP_BASE_LEN (sizeof(struct qeth_ipacmd_hdr) + \
sizeof(struct qeth_ipacmd_setadpparms_hdr))
#define QETH_SNMP_SETADP_CMDLENGTH 16
#define QETH_ARP_DATA_SIZE 3968
#define QETH_ARP_CMD_LEN (QETH_ARP_DATA_SIZE + 8)
#define IS_IPA_REPLY(cmd) ((cmd->hdr.initiator == IPA_CMD_INITIATOR_HOST) || \
(cmd->hdr.initiator == IPA_CMD_INITIATOR_OSA_REPLY))
extern unsigned char WRITE_CCW[];
extern unsigned char READ_CCW[];
extern unsigned char CM_ENABLE[];
#define CM_ENABLE_SIZE 0x63
#define QETH_CM_ENABLE_ISSUER_RM_TOKEN(buffer) (buffer + 0x2c)
#define QETH_CM_ENABLE_FILTER_TOKEN(buffer) (buffer + 0x53)
#define QETH_CM_ENABLE_USER_DATA(buffer) (buffer + 0x5b)
#define QETH_CM_ENABLE_RESP_FILTER_TOKEN(buffer) \
(PDU_ENCAPSULATION(buffer) + 0x13)
extern unsigned char CM_SETUP[];
#define CM_SETUP_SIZE 0x64
#define QETH_CM_SETUP_DEST_ADDR(buffer) (buffer + 0x2c)
#define QETH_CM_SETUP_CONNECTION_TOKEN(buffer) (buffer + 0x51)
#define QETH_CM_SETUP_FILTER_TOKEN(buffer) (buffer + 0x5a)
#define QETH_CM_SETUP_RESP_DEST_ADDR(buffer) \
(PDU_ENCAPSULATION(buffer) + 0x1a)
extern unsigned char ULP_ENABLE[];
#define ULP_ENABLE_SIZE 0x6b
#define QETH_ULP_ENABLE_LINKNUM(buffer) (buffer + 0x61)
#define QETH_ULP_ENABLE_DEST_ADDR(buffer) (buffer + 0x2c)
#define QETH_ULP_ENABLE_FILTER_TOKEN(buffer) (buffer + 0x53)
#define QETH_ULP_ENABLE_PORTNAME_AND_LL(buffer) (buffer + 0x62)
#define QETH_ULP_ENABLE_RESP_FILTER_TOKEN(buffer) \
(PDU_ENCAPSULATION(buffer) + 0x13)
#define QETH_ULP_ENABLE_RESP_MAX_MTU(buffer) \
(PDU_ENCAPSULATION(buffer) + 0x1f)
#define QETH_ULP_ENABLE_RESP_DIFINFO_LEN(buffer) \
(PDU_ENCAPSULATION(buffer) + 0x17)
#define QETH_ULP_ENABLE_RESP_LINK_TYPE(buffer) \
(PDU_ENCAPSULATION(buffer) + 0x2b)
#define QETH_PROT_LAYER2 0x08
#define QETH_PROT_TCPIP  0x03
#define QETH_PROT_OSN2   0x0a
#define QETH_ULP_ENABLE_PROT_TYPE(buffer) (buffer + 0x50)
#define QETH_IPA_CMD_PROT_TYPE(buffer) (buffer + 0x19)
extern unsigned char ULP_SETUP[];
#define ULP_SETUP_SIZE 0x6c
#define QETH_ULP_SETUP_DEST_ADDR(buffer) (buffer + 0x2c)
#define QETH_ULP_SETUP_CONNECTION_TOKEN(buffer) (buffer + 0x51)
#define QETH_ULP_SETUP_FILTER_TOKEN(buffer) (buffer + 0x5a)
#define QETH_ULP_SETUP_CUA(buffer) (buffer + 0x68)
#define QETH_ULP_SETUP_REAL_DEVADDR(buffer) (buffer + 0x6a)
#define QETH_ULP_SETUP_RESP_CONNECTION_TOKEN(buffer) \
(PDU_ENCAPSULATION(buffer) + 0x1a)
extern unsigned char DM_ACT[];
#define DM_ACT_SIZE 0x55
#define QETH_DM_ACT_DEST_ADDR(buffer) (buffer + 0x2c)
#define QETH_DM_ACT_CONNECTION_TOKEN(buffer) (buffer + 0x51)
#define QETH_TRANSPORT_HEADER_SEQ_NO(buffer) (buffer + 4)
#define QETH_PDU_HEADER_SEQ_NO(buffer) (buffer + 0x1c)
#define QETH_PDU_HEADER_ACK_SEQ_NO(buffer) (buffer + 0x20)
extern unsigned char IDX_ACTIVATE_READ[];
extern unsigned char IDX_ACTIVATE_WRITE[];
#define IDX_ACTIVATE_SIZE	0x22
#define QETH_IDX_ACT_PNO(buffer) (buffer+0x0b)
#define QETH_IDX_ACT_ISSUER_RM_TOKEN(buffer) (buffer + 0x0c)
#define QETH_IDX_NO_PORTNAME_REQUIRED(buffer) ((buffer)[0x0b] & 0x80)
#define QETH_IDX_ACT_FUNC_LEVEL(buffer) (buffer + 0x10)
#define QETH_IDX_ACT_DATASET_NAME(buffer) (buffer + 0x16)
#define QETH_IDX_ACT_QDIO_DEV_CUA(buffer) (buffer + 0x1e)
#define QETH_IDX_ACT_QDIO_DEV_REALADDR(buffer) (buffer + 0x20)
#define QETH_IS_IDX_ACT_POS_REPLY(buffer) (((buffer)[0x08] & 3) == 2)
#define QETH_IDX_REPLY_LEVEL(buffer) (buffer + 0x12)
#define QETH_IDX_ACT_CAUSE_CODE(buffer) (buffer)[0x09]
#define QETH_IDX_ACT_ERR_EXCL		0x19
#define QETH_IDX_ACT_ERR_AUTH		0x1E
#define QETH_IDX_ACT_ERR_AUTH_USER	0x20
#define PDU_ENCAPSULATION(buffer) \
(buffer + *(buffer + (*(buffer + 0x0b)) + \
*(buffer + *(buffer + 0x0b) + 0x11) + 0x07))
#define IS_IPA(buffer) \
((buffer) && \
(*(buffer + ((*(buffer + 0x0b)) + 4)) == 0xc1))
#define ADDR_FRAME_TYPE_DIX 1
#define ADDR_FRAME_TYPE_802_3 2
#define ADDR_FRAME_TYPE_TR_WITHOUT_SR 0x10
#define ADDR_FRAME_TYPE_TR_WITH_SR 0x20
