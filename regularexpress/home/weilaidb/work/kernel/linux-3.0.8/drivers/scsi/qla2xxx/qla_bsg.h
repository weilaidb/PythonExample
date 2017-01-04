#define __QLA_BSG_H
#define QL_VND_LOOPBACK		0x01
#define QL_VND_A84_RESET	0x02
#define QL_VND_A84_UPDATE_FW	0x03
#define QL_VND_A84_MGMT_CMD	0x04
#define QL_VND_IIDMA		0x05
#define QL_VND_FCP_PRIO_CFG_CMD	0x06
#define QL_VND_READ_FLASH	0x07
#define QL_VND_UPDATE_FLASH	0x08
#define INT_DEF_LB_LOOPBACK_CMD         0
#define INT_DEF_LB_ECHO_CMD             1
#define EXTERNAL_LOOPBACK		0xF2
#define ENABLE_INTERNAL_LOOPBACK	0x02
#define INTERNAL_LOOPBACK_MASK		0x000E
#define MAX_ELS_FRAME_PAYLOAD		252
#define ELS_OPCODE_BYTE			0x10
#define A84_ISSUE_WRITE_TYPE_CMD        0
#define A84_ISSUE_READ_TYPE_CMD         1
#define A84_CLEANUP_CMD                 2
#define A84_ISSUE_RESET_OP_FW           3
#define A84_ISSUE_RESET_DIAG_FW         4
#define A84_ISSUE_UPDATE_OPFW_CMD       5
#define A84_ISSUE_UPDATE_DIAGFW_CMD     6
struct qla84_mgmt_param ;
struct qla84_msg_mgmt ;
struct qla_bsg_a84_mgmt  __attribute__ ((packed));
struct qla_scsi_addr  __attribute__ ((packed));
struct qla_ext_dest_addr  __attribute__ ((packed));
struct qla_port_param  __attribute__ ((packed));
