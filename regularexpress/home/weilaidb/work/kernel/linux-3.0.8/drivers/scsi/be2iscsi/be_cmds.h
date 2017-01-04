#define BEISCSI_CMDS_H
struct be_sge ;
#define MCC_WRB_SGE_CNT_SHIFT 3
#define MCC_WRB_SGE_CNT_MASK 0x1F
struct be_mcc_wrb ;
#define CQE_FLAGS_VALID_MASK (1 << 31)
#define CQE_FLAGS_ASYNC_MASK (1 << 30)
#define CQE_FLAGS_COMPLETED_MASK	(1 << 28)
#define CQE_FLAGS_CONSUMED_MASK		(1 << 27)
#define MCC_STATUS_SUCCESS 0x0
#define CQE_STATUS_COMPL_MASK 0xFFFF
#define CQE_STATUS_COMPL_SHIFT 0
#define CQE_STATUS_EXTD_MASK 0xFFFF
#define CQE_STATUS_EXTD_SHIFT 16
struct be_mcc_compl ;
#define MPU_MAILBOX_DB_OFFSET	0x160
#define MPU_MAILBOX_DB_RDY_MASK	0x1
#define MPU_MAILBOX_DB_HI_MASK	0x2
#define MPU_EP_SEMAPHORE_OFFSET 0xac
#define EP_SEMAPHORE_POST_STAGE_MASK 0x0000FFFF
#define EP_SEMAPHORE_POST_ERR_MASK 0x1
#define EP_SEMAPHORE_POST_ERR_SHIFT 31
#define DB_MCCQ_OFFSET 0x140
#define DB_MCCQ_RING_ID_MASK 0x7FF
#define DB_MCCQ_NUM_POSTED_SHIFT 16
#define POST_STAGE_ARMFW_RDY		0xc000
#define ASYNC_TRAILER_EVENT_CODE_SHIFT	8
#define ASYNC_TRAILER_EVENT_CODE_MASK	0xFF
#define ASYNC_EVENT_CODE_LINK_STATE	0x1
struct be_async_event_trailer ;
enum ;
struct be_async_event_link_state  __packed;
struct be_mcc_mailbox ;
#define CMD_SUBSYSTEM_COMMON    0x1
#define CMD_SUBSYSTEM_ISCSI     0x2
#define CMD_SUBSYSTEM_ETH       0x3
#define CMD_SUBSYSTEM_ISCSI_INI 0x6
#define CMD_COMMON_TCP_UPLOAD   0x1
#define OPCODE_COMMON_CQ_CREATE				12
#define OPCODE_COMMON_EQ_CREATE				13
#define OPCODE_COMMON_MCC_CREATE			21
#define OPCODE_COMMON_GET_CNTL_ATTRIBUTES		32
#define OPCODE_COMMON_GET_FW_VERSION			35
#define OPCODE_COMMON_MODIFY_EQ_DELAY			41
#define OPCODE_COMMON_FIRMWARE_CONFIG			42
#define OPCODE_COMMON_MCC_DESTROY			53
#define OPCODE_COMMON_CQ_DESTROY			54
#define OPCODE_COMMON_EQ_DESTROY			55
#define OPCODE_COMMON_QUERY_FIRMWARE_CONFIG		58
#define OPCODE_COMMON_FUNCTION_RESET			61
#define OPCODE_COMMON_ISCSI_CFG_POST_SGL_PAGES		2
#define OPCODE_COMMON_ISCSI_CFG_REMOVE_SGL_PAGES        3
#define OPCODE_COMMON_ISCSI_NTWK_GET_NIC_CONFIG		7
#define OPCODE_COMMON_ISCSI_NTWK_SET_VLAN		14
#define OPCODE_COMMON_ISCSI_NTWK_CONFIGURE_STATELESS_IP_ADDR	17
#define OPCODE_COMMON_ISCSI_NTWK_MODIFY_IP_ADDR		21
#define OPCODE_COMMON_ISCSI_NTWK_GET_DEFAULT_GATEWAY	22
#define OPCODE_COMMON_ISCSI_NTWK_MODIFY_DEFAULT_GATEWAY 23
#define OPCODE_COMMON_ISCSI_NTWK_GET_ALL_IF_ID		24
#define OPCODE_COMMON_ISCSI_NTWK_GET_IF_INFO		25
#define OPCODE_COMMON_ISCSI_SET_FRAGNUM_BITS_FOR_SGL_CRA 61
#define OPCODE_COMMON_ISCSI_DEFQ_CREATE                 64
#define OPCODE_COMMON_ISCSI_DEFQ_DESTROY		65
#define OPCODE_COMMON_ISCSI_WRBQ_CREATE			66
#define OPCODE_COMMON_ISCSI_WRBQ_DESTROY		67
struct be_cmd_req_hdr ;
struct be_cmd_resp_hdr ;
struct phys_addr ;
struct amap_eq_context  __packed;
struct be_cmd_req_eq_create  __packed;
struct be_cmd_resp_eq_create  __packed;
struct mgmt_chap_format  __packed;
struct mgmt_auth_method_format  __packed;
struct mgmt_conn_login_options  __packed;
struct ip_address_format  __packed;
struct	mgmt_conn_info  __packed;
struct mgmt_session_login_options  __packed;
struct mgmt_session_info  __packed;
struct  be_cmd_req_get_session  __packed;
struct  be_cmd_resp_get_session  __packed;
struct mac_addr  __packed;
struct be_cmd_req_get_boot_target  __packed;
struct be_cmd_resp_get_boot_target ;
struct be_cmd_req_mac_query  __packed;
struct be_cmd_resp_mac_query ;
struct amap_cq_context  __packed;
struct be_cmd_req_cq_create  __packed;
struct be_cmd_resp_cq_create  __packed;
struct amap_mcc_context  __packed;
struct be_cmd_req_mcc_create  __packed;
struct be_cmd_resp_mcc_create  __packed;
enum ;
struct be_cmd_req_q_destroy  __packed;
struct macaddr ;
struct be_cmd_req_mcast_mac_config  __packed;
static inline void *embedded_payload(struct be_mcc_wrb *wrb)
static inline struct be_sge *nonembedded_sgl(struct be_mcc_wrb *wrb)
struct be_cmd_req_modify_eq_delay  __packed;
#define ETH_ALEN	6
struct be_cmd_req_get_mac_addr ;
struct be_cmd_resp_get_mac_addr ;
int beiscsi_cmd_eq_create(struct be_ctrl_info *ctrl,
struct be_queue_info *eq, int eq_delay);
int beiscsi_cmd_cq_create(struct be_ctrl_info *ctrl,
struct be_queue_info *cq, struct be_queue_info *eq,
bool sol_evts, bool no_delay,
int num_cqe_dma_coalesce);
int beiscsi_cmd_q_destroy(struct be_ctrl_info *ctrl, struct be_queue_info *q,
int type);
int beiscsi_cmd_mccq_create(struct beiscsi_hba *phba,
struct be_queue_info *mccq,
struct be_queue_info *cq);
int be_poll_mcc(struct be_ctrl_info *ctrl);
int mgmt_check_supported_fw(struct be_ctrl_info *ctrl,
struct beiscsi_hba *phba);
unsigned int be_cmd_get_mac_addr(struct beiscsi_hba *phba);
unsigned int beiscsi_get_boot_target(struct beiscsi_hba *phba);
unsigned int beiscsi_get_session_info(struct beiscsi_hba *phba,
u32 boot_session_handle,
struct be_dma_mem *nonemb_cmd);
void free_mcc_tag(struct be_ctrl_info *ctrl, unsigned int tag);
int be_cmd_fw_initialize(struct be_ctrl_info *ctrl);
struct be_mcc_wrb *wrb_from_mbox(struct be_dma_mem *mbox_mem);
struct be_mcc_wrb *wrb_from_mccq(struct beiscsi_hba *phba);
int be_mcc_notify_wait(struct beiscsi_hba *phba);
void be_mcc_notify(struct beiscsi_hba *phba);
unsigned int alloc_mcc_tag(struct beiscsi_hba *phba);
void beiscsi_async_link_state_process(struct beiscsi_hba *phba,
struct be_async_event_link_state *evt);
int be_mcc_compl_process_isr(struct be_ctrl_info *ctrl,
struct be_mcc_compl *compl);
int be_mbox_notify(struct be_ctrl_info *ctrl);
int be_cmd_create_default_pdu_queue(struct be_ctrl_info *ctrl,
struct be_queue_info *cq,
struct be_queue_info *dq, int length,
int entry_size);
int be_cmd_iscsi_post_sgl_pages(struct be_ctrl_info *ctrl,
struct be_dma_mem *q_mem, u32 page_offset,
u32 num_pages);
int be_cmd_wrbq_create(struct be_ctrl_info *ctrl, struct be_dma_mem *q_mem,
struct be_queue_info *wrbq);
bool is_link_state_evt(u32 trailer);
struct be_default_pdu_context  __packed;
struct amap_be_default_pdu_context  __packed;
struct be_defq_create_req  __packed;
struct be_defq_create_resp  __packed;
struct be_post_sgl_pages_req  __packed;
struct be_wrbq_create_req  __packed;
struct be_wrbq_create_resp  __packed;
#define SOL_CID_MASK		0x0000FFC0
#define SOL_CODE_MASK		0x0000003F
#define SOL_WRB_INDEX_MASK	0x00FF0000
#define SOL_CMD_WND_MASK	0xFF000000
#define SOL_RES_CNT_MASK	0x7FFFFFFF
#define SOL_EXP_CMD_SN_MASK	0xFFFFFFFF
#define SOL_HW_STS_MASK		0x000000FF
#define SOL_STS_MASK		0x0000FF00
#define SOL_RESP_MASK		0x00FF0000
#define SOL_FLAGS_MASK		0x7F000000
#define SOL_S_MASK		0x80000000
struct sol_cqe ;
struct amap_sol_cqe  __packed;
#define SOL_ICD_INDEX_MASK	0x0003FFC0
struct amap_sol_cqe_ring  __packed;
#define DB_WRB_POST_CID_MASK		0x3FF
#define DB_DEF_PDU_WRB_INDEX_MASK	0xFF
#define DB_DEF_PDU_WRB_INDEX_SHIFT	16
#define DB_DEF_PDU_NUM_POSTED_SHIFT	24
struct fragnum_bits_for_sgl_cra_in  __packed;
struct iscsi_cleanup_req  __packed;
struct eq_delay  __packed;
struct be_eq_delay_params_in  __packed;
struct tcp_connect_and_offload_in  __packed;
struct tcp_connect_and_offload_out  __packed;
struct be_mcc_wrb_context  __packed;
#define DB_DEF_PDU_RING_ID_MASK		0x3FF
#define DB_DEF_PDU_CQPROC_MASK		0x3FFF
#define DB_DEF_PDU_REARM_SHIFT		14
#define DB_DEF_PDU_EVENT_SHIFT		15
#define DB_DEF_PDU_CQPROC_SHIFT		16
struct dmsg_cqe  __packed;
struct tcp_upload_params_in  __packed;
struct tcp_upload_params_out  __packed;
union tcp_upload_params  __packed;
struct be_ulp_fw_cfg ;
struct be_fw_cfg  __packed;
struct be_all_if_id  __packed;
#define ISCSI_OPCODE_SCSI_DATA_OUT		5
#define OPCODE_COMMON_MODIFY_EQ_DELAY		41
#define OPCODE_COMMON_ISCSI_CLEANUP		59
#define	OPCODE_COMMON_TCP_UPLOAD		56
#define OPCODE_COMMON_ISCSI_TCP_CONNECT_AND_OFFLOAD 70
#define OPCODE_COMMON_ISCSI_ERROR_RECOVERY_INVALIDATE_COMMANDS 1
#define OPCODE_ISCSI_INI_CFG_GET_HBA_NAME	6
#define OPCODE_ISCSI_INI_CFG_SET_HBA_NAME	7
#define OPCODE_ISCSI_INI_SESSION_GET_A_SESSION  14
#define OPCODE_ISCSI_INI_DRIVER_OFFLOAD_SESSION 41
#define OPCODE_ISCSI_INI_DRIVER_INVALIDATE_CONNECTION 42
#define OPCODE_ISCSI_INI_BOOT_GET_BOOT_TARGET	52
#define CMD_ISCSI_COMMAND_INVALIDATE		1
#define CMD_ISCSI_CONNECTION_INVALIDATE		0x8001
#define CMD_ISCSI_CONNECTION_ISSUE_TCP_RST	0x8002
#define INI_WR_CMD			1
#define INI_TMF_CMD			2
#define INI_NOPOUT_CMD			3
#define INI_RD_CMD			5
#define TGT_CTX_UPDT_CMD		7
#define TGT_STS_CMD			8
#define TGT_DATAIN_CMD			9
#define TGT_SOS_PDU			10
#define TGT_DM_CMD			11
#define CMD_CONNECTION_CHUTE_0		1
#define CMD_CONNECTION_CHUTE_1		2
#define CMD_CONNECTION_CHUTE_2		3
#define EQ_MAJOR_CODE_COMPLETION	0
#define CMD_ISCSI_SESSION_DEL_CFG_FROM_FLASH 0
#define CMD_ISCSI_SESSION_SAVE_CFG_ON_FLASH 1
#define CONNECTION_UPLOAD_GRACEFUL      1
#define CONNECTION_UPLOAD_ABORT_RESET   2
#define CONNECTION_UPLOAD_ABORT		3
#define CONNECTION_UPLOAD_ABORT_WITH_SEQ 4
#define BE_NUMBER_OF_FIELD(_type_, _field_)	\
(FIELD_SIZEOF(_type_, _field_)/sizeof((((_type_ *)0)->_field_[0])))\
#define SOL_CMD_COMPLETE		1
#define SOL_CMD_KILLED_DATA_DIGEST_ERR  2
#define CXN_KILLED_PDU_SIZE_EXCEEDS_DSL 3
#define CXN_KILLED_BURST_LEN_MISMATCH   4
#define CXN_KILLED_AHS_RCVD		5
#define CXN_KILLED_HDR_DIGEST_ERR	6
#define CXN_KILLED_UNKNOWN_HDR		7
#define CXN_KILLED_STALE_ITT_TTT_RCVD	8
#define CXN_KILLED_INVALID_ITT_TTT_RCVD 9
#define CXN_KILLED_RST_RCVD		10
#define CXN_KILLED_TIMED_OUT		11
#define CXN_KILLED_RST_SENT		12
#define CXN_KILLED_FIN_RCVD		13
#define CXN_KILLED_BAD_UNSOL_PDU_RCVD	14
#define CXN_KILLED_BAD_WRB_INDEX_ERROR	15
#define CXN_KILLED_OVER_RUN_RESIDUAL	16
#define CXN_KILLED_UNDER_RUN_RESIDUAL	17
#define CMD_KILLED_INVALID_STATSN_RCVD	18
#define CMD_KILLED_INVALID_R2T_RCVD	19
#define CMD_CXN_KILLED_LUN_INVALID	20
#define CMD_CXN_KILLED_ICD_INVALID	21
#define CMD_CXN_KILLED_ITT_INVALID	22
#define CMD_CXN_KILLED_SEQ_OUTOFORDER	23
#define CMD_CXN_KILLED_INVALID_DATASN_RCVD 24
#define CXN_INVALIDATE_NOTIFY		25
#define CXN_INVALIDATE_INDEX_NOTIFY	26
#define CMD_INVALIDATED_NOTIFY		27
#define UNSOL_HDR_NOTIFY		28
#define UNSOL_DATA_NOTIFY		29
#define UNSOL_DATA_DIGEST_ERROR_NOTIFY	30
#define DRIVERMSG_NOTIFY		31
#define CXN_KILLED_CMND_DATA_NOT_ON_SAME_CONN 32
#define SOL_CMD_KILLED_DIF_ERR		33
#define CXN_KILLED_SYN_RCVD		34
#define CXN_KILLED_IMM_DATA_RCVD	35
int beiscsi_pci_soft_reset(struct beiscsi_hba *phba);
int be_chk_reset_complete(struct beiscsi_hba *phba);
void be_wrb_hdr_prepare(struct be_mcc_wrb *wrb, int payload_len,
bool embedded, u8 sge_cnt);
void be_cmd_hdr_prepare(struct be_cmd_req_hdr *req_hdr,
u8 subsystem, u8 opcode, int cmd_len);
