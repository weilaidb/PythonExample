#define _BNX2I_H_
#define BNX2_ISCSI_DRIVER_NAME		"bnx2i"
#define BNX2I_MAX_ADAPTERS		8
#define ISCSI_MAX_CONNS_PER_HBA		128
#define ISCSI_MAX_SESS_PER_HBA		ISCSI_MAX_CONNS_PER_HBA
#define ISCSI_MAX_CMDS_PER_SESS		128
#define ISCSI_MAX_CMDS_PER_HBA_5708	(28 * (ISCSI_MAX_CMDS_PER_SESS - 1))
#define ISCSI_MAX_CMDS_PER_HBA_5709	(128 * (ISCSI_MAX_CMDS_PER_SESS - 1))
#define ISCSI_MAX_CMDS_PER_HBA_57710	(256 * (ISCSI_MAX_CMDS_PER_SESS - 1))
#define ISCSI_MAX_BDS_PER_CMD		32
#define MAX_PAGES_PER_CTRL_STRUCT_POOL	8
#define BNX2I_RESERVED_SLOW_PATH_CMD_SLOTS	4
#define BNX2I_5771X_DBELL_PAGE_SIZE	128
#define MAX_BD_LENGTH			65535
#define BD_SPLIT_SIZE			32768
#define BNX2I_SQ_WQES_MIN		16
#define BNX2I_570X_SQ_WQES_MAX		128
#define BNX2I_5770X_SQ_WQES_MAX		512
#define BNX2I_570X_SQ_WQES_DEFAULT	128
#define BNX2I_5770X_SQ_WQES_DEFAULT	128
#define BNX2I_570X_CQ_WQES_MAX 		128
#define BNX2I_5770X_CQ_WQES_MAX 	512
#define BNX2I_RQ_WQES_MIN 		16
#define BNX2I_RQ_WQES_MAX 		32
#define BNX2I_RQ_WQES_DEFAULT 		16
#define BNX2I_CCELLS_MIN		16
#define BNX2I_CCELLS_MAX		96
#define BNX2I_CCELLS_DEFAULT		64
#define ITT_INVALID_SIGNATURE		0xFFFF
#define ISCSI_CMD_CLEANUP_TIMEOUT	100
#define BNX2I_CONN_CTX_BUF_SIZE		16384
#define BNX2I_SQ_WQE_SIZE		64
#define BNX2I_RQ_WQE_SIZE		256
#define BNX2I_CQE_SIZE			64
#define MB_KERNEL_CTX_SHIFT		8
#define MB_KERNEL_CTX_SIZE		(1 << MB_KERNEL_CTX_SHIFT)
#define CTX_SHIFT			7
#define GET_CID_NUM(cid_addr)		((cid_addr) >> CTX_SHIFT)
#define CTX_OFFSET 			0x10000
#define MAX_CID_CNT			0x4000
#define BNX2I_570X_PAGE_SIZE_DEFAULT	4096
#define BNX2_MQ_CONFIG2			0x00003d00
#define BNX2_MQ_CONFIG2_CONT_SZ		(0x7L<<4)
#define BNX2_MQ_CONFIG2_FIRST_L4L5	(0x1fL<<8)
#define BNX2X_DOORBELL_PCI_BAR		2
#define BNX2X_MAX_CQS			8
#define CNIC_ARM_CQE			1
#define CNIC_ARM_CQE_FP			2
#define CNIC_DISARM_CQE			0
#define REG_RD(__hba, offset)				\
readl(__hba->regview + offset)
#define REG_WR(__hba, offset, val)			\
writel(val, __hba->regview + offset)
struct generic_pdu_resc ;
struct bd_resc_page ;
struct io_bdt ;
struct bnx2i_cmd ;
struct bnx2i_conn ;
struct iscsi_cid_queue ;
struct bnx2i_hba ;
struct 	sqe ;
struct 	rqe ;
struct 	cqe ;
enum ;
struct bnx2x_iscsi_cq_pend_cmpl ;
struct bnx2i_5771x_cq_db ;
struct bnx2i_5771x_sq_rq_db ;
struct bnx2i_5771x_dbell_hdr ;
struct bnx2i_5771x_dbell ;
struct qp_info ;
struct ep_handles ;
enum ;
struct bnx2i_endpoint ;
extern unsigned int error_mask1, error_mask2;
extern u64 iscsi_error_mask;
extern unsigned int en_tcp_dack;
extern unsigned int event_coal_div;
extern unsigned int event_coal_min;
extern struct scsi_transport_template *bnx2i_scsi_xport_template;
extern struct iscsi_transport bnx2i_iscsi_transport;
extern struct cnic_ulp_ops bnx2i_cnic_cb;
extern unsigned int sq_size;
extern unsigned int rq_size;
extern struct device_attribute *bnx2i_dev_attributes[];
extern void bnx2i_identify_device(struct bnx2i_hba *hba);
extern void bnx2i_ulp_init(struct cnic_dev *dev);
extern void bnx2i_ulp_exit(struct cnic_dev *dev);
extern void bnx2i_start(void *handle);
extern void bnx2i_stop(void *handle);
extern struct bnx2i_hba *get_adapter_list_head(void);
struct bnx2i_conn *bnx2i_get_conn_from_id(struct bnx2i_hba *hba,
u16 iscsi_cid);
int bnx2i_alloc_ep_pool(void);
void bnx2i_release_ep_pool(void);
struct bnx2i_endpoint *bnx2i_ep_ofld_list_next(struct bnx2i_hba *hba);
struct bnx2i_endpoint *bnx2i_ep_destroy_list_next(struct bnx2i_hba *hba);
struct bnx2i_hba *bnx2i_find_hba_for_cnic(struct cnic_dev *cnic);
struct bnx2i_hba *bnx2i_alloc_hba(struct cnic_dev *cnic);
void bnx2i_free_hba(struct bnx2i_hba *hba);
void bnx2i_get_rq_buf(struct bnx2i_conn *conn, char *ptr, int len);
void bnx2i_put_rq_buf(struct bnx2i_conn *conn, int count);
void bnx2i_iscsi_unmap_sg_list(struct bnx2i_cmd *cmd);
void bnx2i_drop_session(struct iscsi_cls_session *session);
extern int bnx2i_send_fw_iscsi_init_msg(struct bnx2i_hba *hba);
extern int bnx2i_send_iscsi_login(struct bnx2i_conn *conn,
struct iscsi_task *mtask);
extern int bnx2i_send_iscsi_tmf(struct bnx2i_conn *conn,
struct iscsi_task *mtask);
extern int bnx2i_send_iscsi_text(struct bnx2i_conn *conn,
struct iscsi_task *mtask);
extern int bnx2i_send_iscsi_scsicmd(struct bnx2i_conn *conn,
struct bnx2i_cmd *cmnd);
extern int bnx2i_send_iscsi_nopout(struct bnx2i_conn *conn,
struct iscsi_task *mtask,
char *datap, int data_len, int unsol);
extern int bnx2i_send_iscsi_logout(struct bnx2i_conn *conn,
struct iscsi_task *mtask);
extern void bnx2i_send_cmd_cleanup_req(struct bnx2i_hba *hba,
struct bnx2i_cmd *cmd);
extern int bnx2i_send_conn_ofld_req(struct bnx2i_hba *hba,
struct bnx2i_endpoint *ep);
extern void bnx2i_update_iscsi_conn(struct iscsi_conn *conn);
extern int bnx2i_send_conn_destroy(struct bnx2i_hba *hba,
struct bnx2i_endpoint *ep);
extern int bnx2i_alloc_qp_resc(struct bnx2i_hba *hba,
struct bnx2i_endpoint *ep);
extern void bnx2i_free_qp_resc(struct bnx2i_hba *hba,
struct bnx2i_endpoint *ep);
extern void bnx2i_ep_ofld_timer(unsigned long data);
extern struct bnx2i_endpoint *bnx2i_find_ep_in_ofld_list(
struct bnx2i_hba *hba, u32 iscsi_cid);
extern struct bnx2i_endpoint *bnx2i_find_ep_in_destroy_list(
struct bnx2i_hba *hba, u32 iscsi_cid);
extern int bnx2i_map_ep_dbell_regs(struct bnx2i_endpoint *ep);
extern void bnx2i_arm_cq_event_coalescing(struct bnx2i_endpoint *ep, u8 action);
extern int bnx2i_hw_ep_disconnect(struct bnx2i_endpoint *bnx2i_ep);
extern void bnx2i_print_pend_cmd_queue(struct bnx2i_conn *conn);
extern void bnx2i_print_active_cmd_queue(struct bnx2i_conn *conn);
extern void bnx2i_print_xmit_pdu_queue(struct bnx2i_conn *conn);
extern void bnx2i_print_recv_state(struct bnx2i_conn *conn);
