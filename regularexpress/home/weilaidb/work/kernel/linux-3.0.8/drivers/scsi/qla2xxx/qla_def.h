#define __QLA_DEF_H
#define QLA2XXX_DRIVER_NAME	"qla2xxx"
#define QLA2XXX_APIDEV		"ql2xapidev"
#define MAILBOX_REGISTER_COUNT_2100	8
#define MAILBOX_REGISTER_COUNT		32
#define QLA2200A_RISC_ROM_VER	4
#define FPM_2300		6
#define FPM_2310		7
#define BIT_0	0x1
#define BIT_1	0x2
#define BIT_2	0x4
#define BIT_3	0x8
#define BIT_4	0x10
#define BIT_5	0x20
#define BIT_6	0x40
#define BIT_7	0x80
#define BIT_8	0x100
#define BIT_9	0x200
#define BIT_10	0x400
#define BIT_11	0x800
#define BIT_12	0x1000
#define BIT_13	0x2000
#define BIT_14	0x4000
#define BIT_15	0x8000
#define BIT_16	0x10000
#define BIT_17	0x20000
#define BIT_18	0x40000
#define BIT_19	0x80000
#define BIT_20	0x100000
#define BIT_21	0x200000
#define BIT_22	0x400000
#define BIT_23	0x800000
#define BIT_24	0x1000000
#define BIT_25	0x2000000
#define BIT_26	0x4000000
#define BIT_27	0x8000000
#define BIT_28	0x10000000
#define BIT_29	0x20000000
#define BIT_30	0x40000000
#define BIT_31	0x80000000
#define LSB(x)	((uint8_t)(x))
#define MSB(x)	((uint8_t)((uint16_t)(x) >> 8))
#define LSW(x)	((uint16_t)(x))
#define MSW(x)	((uint16_t)((uint32_t)(x) >> 16))
#define LSD(x)	((uint32_t)((uint64_t)(x)))
#define MSD(x)	((uint32_t)((((uint64_t)(x)) >> 16) >> 16))
#define MAKE_HANDLE(x, y) ((uint32_t)((((uint32_t)(x)) << 16) | (uint32_t)(y)))
#define RD_REG_BYTE(addr)		readb(addr)
#define RD_REG_WORD(addr)		readw(addr)
#define RD_REG_DWORD(addr)		readl(addr)
#define RD_REG_BYTE_RELAXED(addr)	readb_relaxed(addr)
#define RD_REG_WORD_RELAXED(addr)	readw_relaxed(addr)
#define RD_REG_DWORD_RELAXED(addr)	readl_relaxed(addr)
#define WRT_REG_BYTE(addr, data)	writeb(data,addr)
#define WRT_REG_WORD(addr, data)	writew(data,addr)
#define WRT_REG_DWORD(addr, data)	writel(data,addr)
#define RD_REG_WORD_PIO(addr)		(inw((unsigned long)addr))
#define WRT_REG_WORD_PIO(addr, data)	(outw(data,(unsigned long)addr))
#define WWN_SIZE		8
#define MAX_FIBRE_DEVICES	512
#define MAX_FIBRE_LUNS  	0xFFFF
#define	MAX_RSCN_COUNT		32
#define	MAX_HOST_COUNT		16
#define MAX_BUSES		1
#define MAX_TARGETS_2100	MAX_FIBRE_DEVICES
#define MAX_TARGETS_2200	MAX_FIBRE_DEVICES
#define MIN_LUNS		8
#define MAX_LUNS		MAX_FIBRE_LUNS
#define MAX_CMDS_PER_LUN	255
#define SNS_LAST_LOOP_ID_2100	0xfe
#define SNS_LAST_LOOP_ID_2300	0x7ff
#define LAST_LOCAL_LOOP_ID	0x7d
#define SNS_FL_PORT		0x7e
#define FABRIC_CONTROLLER	0x7f
#define SIMPLE_NAME_SERVER	0x80
#define SNS_FIRST_LOOP_ID	0x81
#define MANAGEMENT_SERVER	0xfe
#define BROADCAST		0xff
#define NPH_LAST_HANDLE		0x7ef
#define NPH_MGMT_SERVER		0x7fa
#define NPH_SNS			0x7fc
#define NPH_FABRIC_CONTROLLER	0x7fd
#define NPH_F_PORT		0x7fe
#define NPH_IP_BROADCAST	0x7ff
#define MAX_CMDSZ	16
#define PORT_RETRY_TIME			1
#define LOOP_DOWN_TIMEOUT		60
#define LOOP_DOWN_TIME			255
#define	LOOP_DOWN_RESET			(LOOP_DOWN_TIME - 30)
#define MAX_OUTSTANDING_COMMANDS	1024
#define REQUEST_ENTRY_CNT_2100		128
#define REQUEST_ENTRY_CNT_2200		2048
#define REQUEST_ENTRY_CNT_24XX		2048
#define RESPONSE_ENTRY_CNT_2100		64
#define RESPONSE_ENTRY_CNT_2300		512
#define RESPONSE_ENTRY_CNT_MQ		128
struct req_que;
struct sd_dif_tuple ;
typedef struct srb  srb_t;
#define SRB_DMA_VALID			BIT_0
#define SRB_FCP_CMND_DMA_VALID		BIT_12
#define SRB_CRC_CTX_DMA_VALID		BIT_2
#define SRB_CRC_PROT_DMA_VALID		BIT_4
#define SRB_CRC_CTX_DSD_VALID		BIT_5
#define IS_PROT_IO(sp)	(sp->flags & SRB_CRC_CTX_DSD_VALID)
struct srb_iocb ;
#define SRB_LOGIN_CMD	1
#define SRB_LOGOUT_CMD	2
#define SRB_ELS_CMD_RPT 3
#define SRB_ELS_CMD_HST 4
#define SRB_CT_CMD	5
#define SRB_ADISC_CMD	6
#define SRB_TM_CMD	7
struct srb_ctx ;
struct msg_echo_lb ;
struct device_reg_2xxx ;
struct device_reg_25xxmq ;
typedef union  device_reg_t;
#define ISP_REQ_Q_IN(ha, reg) \
(IS_QLA2100(ha) || IS_QLA2200(ha) ? \
&(reg)->u.isp2100.mailbox4 : \
&(reg)->u.isp2300.req_q_in)
#define ISP_REQ_Q_OUT(ha, reg) \
(IS_QLA2100(ha) || IS_QLA2200(ha) ? \
&(reg)->u.isp2100.mailbox4 : \
&(reg)->u.isp2300.req_q_out)
#define ISP_RSP_Q_IN(ha, reg) \
(IS_QLA2100(ha) || IS_QLA2200(ha) ? \
&(reg)->u.isp2100.mailbox5 : \
&(reg)->u.isp2300.rsp_q_in)
#define ISP_RSP_Q_OUT(ha, reg) \
(IS_QLA2100(ha) || IS_QLA2200(ha) ? \
&(reg)->u.isp2100.mailbox5 : \
&(reg)->u.isp2300.rsp_q_out)
#define MAILBOX_REG(ha, reg, num) \
(IS_QLA2100(ha) || IS_QLA2200(ha) ? \
(num < 8 ? \
&(reg)->u.isp2100.mailbox0 + (num) : \
&(reg)->u_end.isp2200.mailbox8 + (num) - 8) : \
&(reg)->u.isp2300.mailbox0 + (num))
#define RD_MAILBOX_REG(ha, reg, num) \
RD_REG_WORD(MAILBOX_REG(ha, reg, num))
#define WRT_MAILBOX_REG(ha, reg, num, data) \
WRT_REG_WORD(MAILBOX_REG(ha, reg, num), data)
#define FB_CMD_REG(ha, reg) \
(IS_QLA2100(ha) || IS_QLA2200(ha) ? \
&(reg)->fb_cmd_2100 : \
&(reg)->u.isp2300.fb_cmd)
#define RD_FB_CMD_REG(ha, reg) \
RD_REG_WORD(FB_CMD_REG(ha, reg))
#define WRT_FB_CMD_REG(ha, reg, data) \
WRT_REG_WORD(FB_CMD_REG(ha, reg), data)
typedef struct  mbx_cmd_t;
#define	MBX_TOV_SECONDS	30
#define PROD_ID_1		0x4953
#define PROD_ID_2		0x0000
#define PROD_ID_2a		0x5020
#define PROD_ID_3		0x2020
#define MBS_FRM_ALIVE		0
#define MBS_CHKSUM_ERR		1
#define MBS_BUSY		4
#define MBS_COMMAND_COMPLETE		0x4000
#define MBS_INVALID_COMMAND		0x4001
#define MBS_HOST_INTERFACE_ERROR	0x4002
#define MBS_TEST_FAILED			0x4003
#define MBS_COMMAND_ERROR		0x4005
#define MBS_COMMAND_PARAMETER_ERROR	0x4006
#define MBS_PORT_ID_USED		0x4007
#define MBS_LOOP_ID_USED		0x4008
#define MBS_ALL_IDS_IN_USE		0x4009
#define MBS_NOT_LOGGED_IN		0x400A
#define MBS_LINK_DOWN_ERROR		0x400B
#define MBS_DIAG_ECHO_TEST_ERROR	0x400C
#define MBA_ASYNC_EVENT		0x8000
#define MBA_RESET		0x8001
#define MBA_SYSTEM_ERR		0x8002
#define MBA_REQ_TRANSFER_ERR	0x8003
#define MBA_RSP_TRANSFER_ERR	0x8004
#define MBA_WAKEUP_THRES	0x8005
#define MBA_LIP_OCCURRED	0x8010
#define MBA_LOOP_UP		0x8011
#define MBA_LOOP_DOWN		0x8012
#define MBA_LIP_RESET		0x8013
#define MBA_PORT_UPDATE		0x8014
#define MBA_RSCN_UPDATE		0x8015
#define MBA_LIP_F8		0x8016
#define MBA_LOOP_INIT_ERR	0x8017
#define MBA_FABRIC_AUTH_REQ	0x801b
#define MBA_SCSI_COMPLETION	0x8020
#define MBA_CTIO_COMPLETION	0x8021
#define MBA_IP_COMPLETION	0x8022
#define MBA_IP_RECEIVE		0x8023
#define MBA_IP_BROADCAST	0x8024
#define MBA_IP_LOW_WATER_MARK	0x8025
#define MBA_IP_RCV_BUFFER_EMPTY 0x8026
#define MBA_IP_HDR_DATA_SPLIT	0x8027
#define MBA_TRACE_NOTIFICATION	0x8028
#define MBA_POINT_TO_POINT	0x8030
#define MBA_CMPLT_1_16BIT	0x8031
#define MBA_CMPLT_2_16BIT	0x8032
#define MBA_CMPLT_3_16BIT	0x8033
#define MBA_CMPLT_4_16BIT	0x8034
#define MBA_CMPLT_5_16BIT	0x8035
#define MBA_CHG_IN_CONNECTION	0x8036
#define MBA_RIO_RESPONSE	0x8040
#define MBA_ZIO_RESPONSE	0x8040
#define MBA_CMPLT_2_32BIT	0x8042
#define MBA_BYPASS_NOTIFICATION	0x8043
#define MBA_DISCARD_RND_FRAME	0x8048
#define MBA_REJECTED_FCP_CMD	0x8049
#define MBS_LB_RESET	0x17
#define FO1_AE_ON_LIPF8			BIT_0
#define FO1_AE_ALL_LIP_RESET		BIT_1
#define FO1_CTIO_RETRY			BIT_3
#define FO1_DISABLE_LIP_F7_SW		BIT_4
#define FO1_DISABLE_100MS_LOS_WAIT	BIT_5
#define FO1_DISABLE_GPIO6_7		BIT_6
#define FO1_AE_ON_LOOP_INIT_ERR		BIT_7
#define FO1_SET_EMPHASIS_SWING		BIT_8
#define FO1_AE_AUTO_BYPASS		BIT_9
#define FO1_ENABLE_PURE_IOCB		BIT_10
#define FO1_AE_PLOGI_RJT		BIT_11
#define FO1_ENABLE_ABORT_SEQUENCE	BIT_12
#define FO1_AE_QUEUE_FULL		BIT_13
#define FO2_ENABLE_ATIO_TYPE_3		BIT_0
#define FO2_REV_LOOPBACK		BIT_1
#define FO3_ENABLE_EMERG_IOCB		BIT_0
#define FO3_AE_RND_ERROR		BIT_1
#define ADD_FO_COUNT			3
#define ADD_FO1_DISABLE_GPIO_LED_CTRL	BIT_6
#define ADD_FO1_ENABLE_PUREX_IOCB	BIT_10
#define ADD_FO2_ENABLE_SEL_CLS2		BIT_5
#define ADD_FO3_NO_ABT_ON_LINK_DOWN	BIT_14
#define MBC_LOAD_RAM			1
#define MBC_EXECUTE_FIRMWARE		2
#define MBC_WRITE_RAM_WORD		4
#define MBC_READ_RAM_WORD		5
#define MBC_MAILBOX_REGISTER_TEST	6
#define MBC_VERIFY_CHECKSUM		7
#define MBC_GET_FIRMWARE_VERSION	8
#define MBC_LOAD_RISC_RAM		9
#define MBC_DUMP_RISC_RAM		0xa
#define MBC_LOAD_RISC_RAM_EXTENDED	0xb
#define MBC_DUMP_RISC_RAM_EXTENDED	0xc
#define MBC_WRITE_RAM_WORD_EXTENDED	0xd
#define MBC_READ_RAM_EXTENDED		0xf
#define MBC_IOCB_COMMAND		0x12
#define MBC_STOP_FIRMWARE		0x14
#define MBC_ABORT_COMMAND		0x15
#define MBC_ABORT_DEVICE		0x16
#define MBC_ABORT_TARGET		0x17
#define MBC_RESET			0x18
#define MBC_GET_ADAPTER_LOOP_ID		0x20
#define MBC_GET_RETRY_COUNT		0x22
#define MBC_DISABLE_VI			0x24
#define MBC_ENABLE_VI			0x25
#define MBC_GET_FIRMWARE_OPTION		0x28
#define MBC_SET_FIRMWARE_OPTION		0x38
#define MBC_LOOP_PORT_BYPASS		0x40
#define MBC_LOOP_PORT_ENABLE		0x41
#define MBC_GET_RESOURCE_COUNTS		0x42
#define MBC_NON_PARTICIPATE		0x43
#define MBC_DIAGNOSTIC_ECHO		0x44
#define MBC_DIAGNOSTIC_LOOP_BACK	0x45
#define MBC_ONLINE_SELF_TEST		0x46
#define MBC_ENHANCED_GET_PORT_DATABASE	0x47
#define MBC_RESET_LINK_STATUS		0x52
#define MBC_IOCB_COMMAND_A64		0x54
#define MBC_SEND_RNID_ELS		0x57
#define MBC_SET_RNID_PARAMS		0x59
#define MBC_GET_RNID_PARAMS		0x5a
#define MBC_DATA_RATE			0x5d
#define MBC_INITIALIZE_FIRMWARE		0x60
#define MBC_INITIATE_LIP		0x62
#define MBC_GET_FC_AL_POSITION_MAP	0x63
#define MBC_GET_PORT_DATABASE		0x64
#define MBC_CLEAR_ACA			0x65
#define MBC_TARGET_RESET		0x66
#define MBC_CLEAR_TASK_SET		0x67
#define MBC_ABORT_TASK_SET		0x68
#define MBC_GET_FIRMWARE_STATE		0x69
#define MBC_GET_PORT_NAME		0x6a
#define MBC_GET_LINK_STATUS		0x6b
#define MBC_LIP_RESET			0x6c
#define MBC_SEND_SNS_COMMAND		0x6e
#define MBC_LOGIN_FABRIC_PORT		0x6f
#define MBC_SEND_CHANGE_REQUEST		0x70
#define MBC_LOGOUT_FABRIC_PORT		0x71
#define MBC_LIP_FULL_LOGIN		0x72
#define MBC_LOGIN_LOOP_PORT		0x74
#define MBC_PORT_NODE_NAME_LIST		0x75
#define MBC_INITIALIZE_RECEIVE_QUEUE	0x77
#define MBC_UNLOAD_IP			0x79
#define MBC_GET_ID_LIST			0x7C
#define MBC_SEND_LFA_COMMAND		0x7D
#define MBC_LUN_RESET			0x7E
#define MBC_SERDES_PARAMS		0x10
#define MBC_GET_IOCB_STATUS		0x12
#define MBC_PORT_PARAMS			0x1A
#define MBC_GET_TIMEOUT_PARAMS		0x22
#define MBC_TRACE_CONTROL		0x27
#define MBC_GEN_SYSTEM_ERROR		0x2a
#define MBC_WRITE_SFP			0x30
#define MBC_READ_SFP			0x31
#define MBC_SET_TIMEOUT_PARAMS		0x32
#define MBC_MID_INITIALIZE_FIRMWARE	0x48
#define MBC_MID_GET_VP_DATABASE		0x49
#define MBC_MID_GET_VP_ENTRY		0x4a
#define MBC_HOST_MEMORY_COPY		0x53
#define MBC_SEND_RNFT_ELS		0x5e
#define MBC_GET_LINK_PRIV_STATS		0x6d
#define MBC_SET_VENDOR_ID		0x76
#define MBC_SET_PORT_CONFIG		0x122
#define MBC_GET_PORT_CONFIG		0x123
#define MBC_WRITE_MPI_REGISTER		0x01
#define FCAL_MAP_SIZE	128
#define	MBX_31		BIT_31
#define	MBX_30		BIT_30
#define	MBX_29		BIT_29
#define	MBX_28		BIT_28
#define	MBX_27		BIT_27
#define	MBX_26		BIT_26
#define	MBX_25		BIT_25
#define	MBX_24		BIT_24
#define	MBX_23		BIT_23
#define	MBX_22		BIT_22
#define	MBX_21		BIT_21
#define	MBX_20		BIT_20
#define	MBX_19		BIT_19
#define	MBX_18		BIT_18
#define	MBX_17		BIT_17
#define	MBX_16		BIT_16
#define	MBX_15		BIT_15
#define	MBX_14		BIT_14
#define	MBX_13		BIT_13
#define	MBX_12		BIT_12
#define	MBX_11		BIT_11
#define	MBX_10		BIT_10
#define	MBX_9		BIT_9
#define	MBX_8		BIT_8
#define	MBX_7		BIT_7
#define	MBX_6		BIT_6
#define	MBX_5		BIT_5
#define	MBX_4		BIT_4
#define	MBX_3		BIT_3
#define	MBX_2		BIT_2
#define	MBX_1		BIT_1
#define	MBX_0		BIT_0
#define FSTATE_CONFIG_WAIT      0
#define FSTATE_WAIT_AL_PA       1
#define FSTATE_WAIT_LOGIN       2
#define FSTATE_READY            3
#define FSTATE_LOSS_OF_SYNC     4
#define FSTATE_ERROR            5
#define FSTATE_REINIT           6
#define FSTATE_NON_PART         7
#define FSTATE_CONFIG_CORRECT      0
#define FSTATE_P2P_RCV_LIP         1
#define FSTATE_P2P_CHOOSE_LOOP     2
#define FSTATE_P2P_RCV_UNIDEN_LIP  3
#define FSTATE_FATAL_ERROR         4
#define FSTATE_LOOP_BACK_CONN      5
#define	PORT_DATABASE_SIZE	128
typedef struct  port_database_t;
#define PD_STATE_DISCOVERY			0
#define PD_STATE_WAIT_DISCOVERY_ACK		1
#define PD_STATE_PORT_LOGIN			2
#define PD_STATE_WAIT_PORT_LOGIN_ACK		3
#define PD_STATE_PROCESS_LOGIN			4
#define PD_STATE_WAIT_PROCESS_LOGIN_ACK		5
#define PD_STATE_PORT_LOGGED_IN			6
#define PD_STATE_PORT_UNAVAILABLE		7
#define PD_STATE_PROCESS_LOGOUT			8
#define PD_STATE_WAIT_PROCESS_LOGOUT_ACK	9
#define PD_STATE_PORT_LOGOUT			10
#define PD_STATE_WAIT_PORT_LOGOUT_ACK		11
#define QLA_ZIO_MODE_6		(BIT_2 | BIT_1)
#define QLA_ZIO_DISABLED	0
#define QLA_ZIO_DEFAULT_TIMER	2
#define	ICB_VERSION 1
typedef struct  init_cb_t;
#define GLSO_SEND_RPS	BIT_0
#define GLSO_USE_DID	BIT_3
struct link_statistics ;
#define NV_START_BIT            BIT_2
#define NV_WRITE_OP             (BIT_26+BIT_24)
#define NV_READ_OP              (BIT_26+BIT_25)
#define NV_ERASE_OP             (BIT_26+BIT_25+BIT_24)
#define NV_MASK_OP              (BIT_26+BIT_25+BIT_24)
#define NV_DELAY_COUNT          10
typedef struct  nvram_t;
typedef struct  response_t;
typedef union  target_id_t;
#define SET_TARGET_ID(ha, to, from)			\
do  while (0)
#define COMMAND_TYPE	0x11
typedef struct  cmd_entry_t;
#define COMMAND_A64_TYPE	0x19
typedef struct  cmd_a64_entry_t, request_t;
#define CONTINUE_TYPE		0x02
typedef struct  cont_entry_t;
#define CONTINUE_A64_TYPE	0x0A
typedef struct  cont_a64_entry_t;
#define PO_MODE_DIF_INSERT	0
#define PO_MODE_DIF_REMOVE	BIT_0
#define PO_MODE_DIF_PASS	BIT_1
#define PO_MODE_DIF_REPLACE	(BIT_0 + BIT_1)
#define PO_ENABLE_DIF_BUNDLING	BIT_8
#define PO_ENABLE_INCR_GUARD_SEED	BIT_3
#define PO_DISABLE_INCR_REF_TAG	BIT_5
#define PO_DISABLE_GUARD_CHECK	BIT_4
struct crc_context ;
#define CRC_CONTEXT_LEN_FW	(offsetof(struct crc_context, fcp_cmnd.lun))
#define CRC_CONTEXT_FCPCMND_OFF	(offsetof(struct crc_context, fcp_cmnd.lun))
#define	STATUS_TYPE	0x03
typedef struct  sts_entry_t;
#define RF_RQ_DMA_ERROR	BIT_6
#define RF_INV_E_ORDER	BIT_5
#define RF_INV_E_COUNT	BIT_4
#define RF_INV_E_PARAM	BIT_3
#define RF_INV_E_TYPE	BIT_2
#define RF_BUSY		BIT_1
#define RF_MASK		(RF_RQ_DMA_ERROR | RF_INV_E_ORDER | RF_INV_E_COUNT | \
RF_INV_E_PARAM | RF_INV_E_TYPE | RF_BUSY)
#define RF_MASK_24XX	(RF_INV_E_ORDER | RF_INV_E_COUNT | RF_INV_E_PARAM | \
RF_INV_E_TYPE)
#define SS_MASK				0xfff
#define SS_RESIDUAL_UNDER		BIT_11
#define SS_RESIDUAL_OVER		BIT_10
#define SS_SENSE_LEN_VALID		BIT_9
#define SS_RESPONSE_INFO_LEN_VALID	BIT_8
#define SS_RESERVE_CONFLICT		(BIT_4 | BIT_3)
#define SS_BUSY_CONDITION		BIT_3
#define SS_CONDITION_MET		BIT_2
#define SS_CHECK_CONDITION		BIT_1
#define CS_COMPLETE		0x0
#define CS_INCOMPLETE		0x1
#define CS_DMA			0x2
#define CS_TRANSPORT		0x3
#define CS_RESET		0x4
#define CS_ABORTED		0x5
#define CS_TIMEOUT		0x6
#define CS_DATA_OVERRUN		0x7
#define CS_DIF_ERROR		0xC
#define CS_DATA_UNDERRUN	0x15
#define CS_QUEUE_FULL		0x1C
#define CS_PORT_UNAVAILABLE	0x28
#define CS_PORT_LOGGED_OUT	0x29
#define CS_PORT_CONFIG_CHG	0x2A
#define CS_PORT_BUSY		0x2B
#define CS_COMPLETE_CHKCOND	0x30
#define CS_BAD_PAYLOAD		0x80
#define CS_UNKNOWN		0x81
#define CS_RETRY		0x82
#define CS_LOOP_DOWN_ABORT	0x83
#define SF_ABTS_TERMINATED	BIT_10
#define SF_LOGOUT_SENT		BIT_13
#define	STATUS_CONT_TYPE	0x10
typedef struct  sts_cont_entry_t;
#define	STATUS_TYPE_21 0x21
typedef struct  sts21_entry_t;
#define	STATUS_TYPE_22	0x22
typedef struct  sts22_entry_t;
#define MARKER_TYPE	0x04
typedef struct  mrk_entry_t;
#define MS_IOCB_TYPE		0x29
typedef struct  ms_iocb_entry_t;
#define MBX_IOCB_TYPE	0x39
struct mbx_entry ;
#define RESPONSE_ENTRY_SIZE	(sizeof(response_t))
#define REQUEST_ENTRY_SIZE	(sizeof(request_t))
typedef union  port_id_t;
#define INVALID_PORT_ID	0xFFFFFF
typedef struct  sw_info_t;
#define FC4_TYPE_FCP_SCSI	0x08
#define FC4_TYPE_OTHER		0x0
#define FC4_TYPE_UNKNOWN	0xff
typedef enum  fc_port_type_t;
typedef struct fc_port  fc_port_t;
#define FCS_UNCONFIGURED	1
#define FCS_DEVICE_DEAD		2
#define FCS_DEVICE_LOST		3
#define FCS_ONLINE		4
static const char * const port_state_str[] = ;
#define FCF_FABRIC_DEVICE	BIT_0
#define FCF_LOGIN_NEEDED	BIT_1
#define FCF_FCP2_DEVICE		BIT_2
#define FCF_ASYNC_SENT		BIT_3
#define FC_NO_LOOP_ID		0x1000
#define CT_REJECT_RESPONSE	0x8001
#define CT_ACCEPT_RESPONSE	0x8002
#define CT_REASON_INVALID_COMMAND_CODE	0x01
#define CT_REASON_CANNOT_PERFORM	0x09
#define CT_REASON_COMMAND_UNSUPPORTED	0x0b
#define CT_EXPL_ALREADY_REGISTERED	0x10
#define NS_N_PORT_TYPE	0x01
#define NS_NL_PORT_TYPE	0x02
#define NS_NX_PORT_TYPE	0x7F
#define	GA_NXT_CMD	0x100
#define	GA_NXT_REQ_SIZE	(16 + 4)
#define	GA_NXT_RSP_SIZE	(16 + 620)
#define	GID_PT_CMD	0x1A1
#define	GID_PT_REQ_SIZE	(16 + 4)
#define	GID_PT_RSP_SIZE	(16 + (MAX_FIBRE_DEVICES * 4))
#define	GPN_ID_CMD	0x112
#define	GPN_ID_REQ_SIZE	(16 + 4)
#define	GPN_ID_RSP_SIZE	(16 + 8)
#define	GNN_ID_CMD	0x113
#define	GNN_ID_REQ_SIZE	(16 + 4)
#define	GNN_ID_RSP_SIZE	(16 + 8)
#define	GFT_ID_CMD	0x117
#define	GFT_ID_REQ_SIZE	(16 + 4)
#define	GFT_ID_RSP_SIZE	(16 + 32)
#define	RFT_ID_CMD	0x217
#define	RFT_ID_REQ_SIZE	(16 + 4 + 32)
#define	RFT_ID_RSP_SIZE	16
#define	RFF_ID_CMD	0x21F
#define	RFF_ID_REQ_SIZE	(16 + 4 + 2 + 1 + 1)
#define	RFF_ID_RSP_SIZE	16
#define	RNN_ID_CMD	0x213
#define	RNN_ID_REQ_SIZE	(16 + 4 + 8)
#define	RNN_ID_RSP_SIZE	16
#define	RSNN_NN_CMD	 0x239
#define	RSNN_NN_REQ_SIZE (16 + 8 + 1 + 255)
#define	RSNN_NN_RSP_SIZE 16
#define	GFPN_ID_CMD	0x11C
#define	GFPN_ID_REQ_SIZE (16 + 4)
#define	GFPN_ID_RSP_SIZE (16 + 8)
#define	GPSC_CMD	0x127
#define	GPSC_REQ_SIZE	(16 + 8)
#define	GPSC_RSP_SIZE	(16 + 2 + 2)
#define GFF_ID_CMD	0x011F
#define GFF_ID_REQ_SIZE	(16 + 4)
#define GFF_ID_RSP_SIZE (16 + 128)
#define FDMI_HBA_ATTR_COUNT			9
#define FDMI_HBA_NODE_NAME			1
#define FDMI_HBA_MANUFACTURER			2
#define FDMI_HBA_SERIAL_NUMBER			3
#define FDMI_HBA_MODEL				4
#define FDMI_HBA_MODEL_DESCRIPTION		5
#define FDMI_HBA_HARDWARE_VERSION		6
#define FDMI_HBA_DRIVER_VERSION			7
#define FDMI_HBA_OPTION_ROM_VERSION		8
#define FDMI_HBA_FIRMWARE_VERSION		9
#define FDMI_HBA_OS_NAME_AND_VERSION		0xa
#define FDMI_HBA_MAXIMUM_CT_PAYLOAD_LENGTH	0xb
struct ct_fdmi_hba_attr ;
struct ct_fdmi_hba_attributes ;
#define FDMI_PORT_ATTR_COUNT		6
#define FDMI_PORT_FC4_TYPES		1
#define FDMI_PORT_SUPPORT_SPEED		2
#define FDMI_PORT_CURRENT_SPEED		3
#define FDMI_PORT_MAX_FRAME_SIZE	4
#define FDMI_PORT_OS_DEVICE_NAME	5
#define FDMI_PORT_HOST_NAME		6
#define FDMI_PORT_SPEED_1GB		0x1
#define FDMI_PORT_SPEED_2GB		0x2
#define FDMI_PORT_SPEED_10GB		0x4
#define FDMI_PORT_SPEED_4GB		0x8
#define FDMI_PORT_SPEED_8GB		0x10
#define FDMI_PORT_SPEED_16GB		0x20
#define FDMI_PORT_SPEED_UNKNOWN		0x8000
struct ct_fdmi_port_attr ;
struct ct_fdmi_port_attributes ;
#define GRHL_CMD	0x100
#define GHAT_CMD	0x101
#define GRPL_CMD	0x102
#define GPAT_CMD	0x110
#define RHBA_CMD	0x200
#define RHBA_RSP_SIZE	16
#define RHAT_CMD	0x201
#define RPRT_CMD	0x210
#define RPA_CMD		0x211
#define RPA_RSP_SIZE	16
#define DHBA_CMD	0x300
#define DHBA_REQ_SIZE	(16 + 8)
#define DHBA_RSP_SIZE	16
#define DHAT_CMD	0x301
#define DPRT_CMD	0x310
#define DPA_CMD		0x311
struct ct_cmd_hdr ;
struct ct_sns_req ;
struct ct_rsp_hdr ;
struct ct_sns_gid_pt_data ;
struct ct_sns_rsp ;
struct ct_sns_pkt ;
#define	RFT_ID_SNS_SCMD_LEN	22
#define	RFT_ID_SNS_CMD_SIZE	60
#define	RFT_ID_SNS_DATA_SIZE	16
#define	RNN_ID_SNS_SCMD_LEN	10
#define	RNN_ID_SNS_CMD_SIZE	36
#define	RNN_ID_SNS_DATA_SIZE	16
#define	GA_NXT_SNS_SCMD_LEN	6
#define	GA_NXT_SNS_CMD_SIZE	28
#define	GA_NXT_SNS_DATA_SIZE	(620 + 16)
#define	GID_PT_SNS_SCMD_LEN	6
#define	GID_PT_SNS_CMD_SIZE	28
#define	GID_PT_SNS_DATA_SIZE	(MAX_FIBRE_DEVICES * 4 + 16)
#define	GPN_ID_SNS_SCMD_LEN	6
#define	GPN_ID_SNS_CMD_SIZE	28
#define	GPN_ID_SNS_DATA_SIZE	(8 + 16)
#define	GNN_ID_SNS_SCMD_LEN	6
#define	GNN_ID_SNS_CMD_SIZE	28
#define	GNN_ID_SNS_DATA_SIZE	(8 + 16)
struct sns_cmd_pkt ;
struct fw_blob ;
struct gid_list_info ;
#define GID_LIST_SIZE (sizeof(struct gid_list_info) * MAX_FIBRE_DEVICES)
typedef struct vport_info  vport_info_t;
typedef struct vport_params  vport_params_t;
#define VP_RET_CODE_OK			0
#define VP_RET_CODE_FATAL		1
#define VP_RET_CODE_WRONG_ID		2
#define VP_RET_CODE_WWPN		3
#define VP_RET_CODE_RESOURCES		4
#define VP_RET_CODE_NO_MEM		5
#define VP_RET_CODE_NOT_FOUND		6
struct qla_hw_data;
struct rsp_que;
struct isp_operations ;
#define QLA_MSIX_CHIP_REV_24XX	3
#define QLA_MSIX_FW_MODE(m)	(((m) & (BIT_7|BIT_8|BIT_9)) >> 7)
#define QLA_MSIX_FW_MODE_1(m)	(QLA_MSIX_FW_MODE(m) == 1)
#define QLA_MSIX_DEFAULT	0x00
#define QLA_MSIX_RSP_Q		0x01
#define QLA_MIDX_DEFAULT	0
#define QLA_MIDX_RSP_Q		1
#define QLA_PCI_MSIX_CONTROL	0xa2
struct scsi_qla_host;
struct qla_msix_entry ;
#define	WATCH_INTERVAL		1
enum qla_work_type ;
struct qla_work_evt ;
struct qla_chip_state_84xx ;
struct qla_statistics ;
#define MBC_INITIALIZE_MULTIQ 0x1f
#define QLA_QUE_PAGE 0X1000
#define QLA_MQ_SIZE 32
#define QLA_MAX_QUEUES 256
#define ISP_QUE_REG(ha, id) \
((ha->mqenable) ? \
((void *)(ha->mqiobase) +\
(QLA_QUE_PAGE * id)) :\
((void *)(ha->iobase)))
#define QLA_REQ_QUE_ID(tag) \
((tag < QLA_MAX_QUEUES && tag > 0) ? tag : 0)
#define QLA_DEFAULT_QUE_QOS 5
#define QLA_PRECONFIG_VPORTS 32
#define QLA_MAX_VPORTS_QLA24XX	128
#define QLA_MAX_VPORTS_QLA25XX	256
struct rsp_que ;
struct req_que ;
struct qlfc_fw ;
struct qla_hw_data ;
typedef struct scsi_qla_host  scsi_qla_host_t;
#define LOOP_TRANSITION(ha) \
(test_bit(ISP_ABORT_NEEDED, &ha->dpc_flags) || \
test_bit(LOOP_RESYNC_NEEDED, &ha->dpc_flags) || \
atomic_read(&ha->loop_state) == LOOP_DOWN)
#define QLA_VHA_MARK_BUSY(__vha, __bail) do  while (0)
#define QLA_VHA_MARK_NOT_BUSY(__vha) do  while (0)
#define qla_printk(level, ha, format, arg...) \
dev_printk(level , &((ha)->pdev->dev) , format , ## arg)
#define MBS_MASK		0x3fff
#define QLA_SUCCESS		(MBS_COMMAND_COMPLETE & MBS_MASK)
#define QLA_INVALID_COMMAND	(MBS_INVALID_COMMAND & MBS_MASK)
#define QLA_INTERFACE_ERROR	(MBS_HOST_INTERFACE_ERROR & MBS_MASK)
#define QLA_TEST_FAILED		(MBS_TEST_FAILED & MBS_MASK)
#define QLA_COMMAND_ERROR	(MBS_COMMAND_ERROR & MBS_MASK)
#define QLA_PARAMETER_ERROR	(MBS_COMMAND_PARAMETER_ERROR & MBS_MASK)
#define QLA_PORT_ID_USED	(MBS_PORT_ID_USED & MBS_MASK)
#define QLA_LOOP_ID_USED	(MBS_LOOP_ID_USED & MBS_MASK)
#define QLA_ALL_IDS_IN_USE	(MBS_ALL_IDS_IN_USE & MBS_MASK)
#define QLA_NOT_LOGGED_IN	(MBS_NOT_LOGGED_IN & MBS_MASK)
#define QLA_FUNCTION_TIMEOUT		0x100
#define QLA_FUNCTION_PARAMETER_ERROR	0x101
#define QLA_FUNCTION_FAILED		0x102
#define QLA_MEMORY_ALLOC_FAILED		0x103
#define QLA_LOCK_TIMEOUT		0x104
#define QLA_ABORTED			0x105
#define QLA_SUSPENDED			0x106
#define QLA_BUSY			0x107
#define QLA_RSCNS_HANDLED		0x108
#define QLA_ALREADY_REGISTERED		0x109
#define NVRAM_DELAY()		udelay(10)
#define INVALID_HANDLE	(MAX_OUTSTANDING_COMMANDS+1)
#define OPTROM_SIZE_2300	0x20000
#define OPTROM_SIZE_2322	0x100000
#define OPTROM_SIZE_24XX	0x100000
#define OPTROM_SIZE_25XX	0x200000
#define OPTROM_SIZE_81XX	0x400000
#define OPTROM_SIZE_82XX	0x800000
#define OPTROM_BURST_SIZE	0x1000
#define OPTROM_BURST_DWORDS	(OPTROM_BURST_SIZE / 4)
#define	QLA_DSDS_PER_IOCB	37
#define CMD_SP(Cmnd)		((Cmnd)->SCp.ptr)
#define QLA_SG_ALL	1024
enum nexus_wait_type ;
