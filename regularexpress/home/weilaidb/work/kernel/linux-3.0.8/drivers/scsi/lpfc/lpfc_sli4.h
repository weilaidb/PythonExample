#define LPFC_ACTIVE_MBOX_WAIT_CNT               100
#define LPFC_XRI_EXCH_BUSY_WAIT_TMO		10000
#define LPFC_XRI_EXCH_BUSY_WAIT_T1   		10
#define LPFC_XRI_EXCH_BUSY_WAIT_T2              30000
#define LPFC_RELEASE_NOTIFICATION_INTERVAL	32
#define LPFC_GET_QE_REL_INT			32
#define LPFC_RPI_LOW_WATER_MARK			10
#define LPFC_UNREG_FCF                          1
#define LPFC_SKIP_UNREG_FCF                     0
#define LPFC_FCF_REDISCOVER_WAIT_TMO		2000
#define LPFC_NEMBED_MBOX_SGL_CNT		254
#define LPFC_FN_EQN_MAX       8
#define LPFC_SP_EQN_DEF       1
#define LPFC_FP_EQN_DEF       4
#define LPFC_FP_EQN_MIN       1
#define LPFC_FP_EQN_MAX       (LPFC_FN_EQN_MAX - LPFC_SP_EQN_DEF)
#define LPFC_FN_WQN_MAX       32
#define LPFC_SP_WQN_DEF       1
#define LPFC_FP_WQN_DEF       4
#define LPFC_FP_WQN_MIN       1
#define LPFC_FP_WQN_MAX       (LPFC_FN_WQN_MAX - LPFC_SP_WQN_DEF)
#define LPFC_FCOE_FCF_DEF_INDEX	0
#define LPFC_FCOE_FCF_GET_FIRST	0xFFFF
#define LPFC_FCOE_FCF_NEXT_NONE	0xFFFF
#define LPFC_FCOE_NULL_VID	0xFFF
#define LPFC_FCOE_IGNORE_VID	0xFFFF
#define LPFC_FCOE_FCF_MAC3	0xFF
#define LPFC_FCOE_FCF_MAC4	0xFF
#define LPFC_FCOE_FCF_MAC5	0xFE
#define LPFC_FCOE_FCF_MAP0	0x0E
#define LPFC_FCOE_FCF_MAP1	0xFC
#define LPFC_FCOE_FCF_MAP2	0x00
#define LPFC_FCOE_MAX_RCV_SIZE	0x800
#define LPFC_FCOE_FKA_ADV_PER	0
#define LPFC_FCOE_FIP_PRIORITY	0x80
#define sli4_sid_from_fc_hdr(fc_hdr)  \
((fc_hdr)->fh_s_id[0] << 16 | \
(fc_hdr)->fh_s_id[1] <<  8 | \
(fc_hdr)->fh_s_id[2])
#define sli4_fctl_from_fc_hdr(fc_hdr)  \
((fc_hdr)->fh_f_ctl[0] << 16 | \
(fc_hdr)->fh_f_ctl[1] <<  8 | \
(fc_hdr)->fh_f_ctl[2])
#define LPFC_FW_RESET_MAXIMUM_WAIT_10MS_CNT 12000
enum lpfc_sli4_queue_type ;
enum lpfc_sli4_queue_subtype ;
union sli4_qe ;
struct lpfc_queue ;
struct lpfc_sli4_link ;
struct lpfc_fcf_rec ;
struct lpfc_fcf ;
#define LPFC_SLI4_FCF_TBL_INDX_MAX	32
#define LPFC_REGION23_SIGNATURE "RG23"
#define LPFC_REGION23_VERSION	1
#define LPFC_REGION23_LAST_REC  0xff
#define DRIVER_SPECIFIC_TYPE	0xA2
#define LINUX_DRIVER_ID		0x20
#define PORT_STE_TYPE		0x1
struct lpfc_fip_param_hdr ;
struct lpfc_fcoe_params ;
struct lpfc_fcf_conn_hdr ;
struct lpfc_fcf_conn_rec ;
struct lpfc_fcf_conn_entry ;
struct lpfc_bmbx ;
#define LPFC_EQE_SIZE LPFC_EQE_SIZE_4
#define LPFC_EQE_SIZE_4B 	4
#define LPFC_EQE_SIZE_16B	16
#define LPFC_CQE_SIZE		16
#define LPFC_WQE_SIZE		64
#define LPFC_MQE_SIZE		256
#define LPFC_RQE_SIZE		8
#define LPFC_EQE_DEF_COUNT	1024
#define LPFC_CQE_DEF_COUNT      256
#define LPFC_WQE_DEF_COUNT      256
#define LPFC_MQE_DEF_COUNT      16
#define LPFC_RQE_DEF_COUNT	512
#define LPFC_QUEUE_NOARM	false
#define LPFC_QUEUE_REARM	true
#define SLI4_CT_RPI 0
#define SLI4_CT_VPI 1
#define SLI4_CT_VFI 2
#define SLI4_CT_FCFI 3
#define LPFC_SLI4_FL1_MAX_SEGMENT_SIZE	0x10000
#define LPFC_SLI4_FL1_MAX_BUF_SIZE	0X2000
#define LPFC_SLI4_MIN_BUF_SIZE		0x400
#define LPFC_SLI4_MAX_BUF_SIZE		0x20000
struct lpfc_max_cfg_param ;
struct lpfc_hba;
struct lpfc_fcp_eq_hdl ;
struct lpfc_pc_sli4_params ;
struct lpfc_iov ;
struct lpfc_sli4_hba ;
enum lpfc_sge_type ;
enum lpfc_sgl_state ;
struct lpfc_sglq ;
struct lpfc_rpi_hdr ;
struct lpfc_rsrc_blks ;
int lpfc_pci_function_reset(struct lpfc_hba *);
int lpfc_sli4_hba_setup(struct lpfc_hba *);
int lpfc_sli4_config(struct lpfc_hba *, struct lpfcMboxq *, uint8_t,
uint8_t, uint32_t, bool);
void lpfc_sli4_mbox_cmd_free(struct lpfc_hba *, struct lpfcMboxq *);
void lpfc_sli4_mbx_sge_set(struct lpfcMboxq *, uint32_t, dma_addr_t, uint32_t);
void lpfc_sli4_mbx_sge_get(struct lpfcMboxq *, uint32_t,
struct lpfc_mbx_sge *);
int lpfc_sli4_mbx_read_fcf_rec(struct lpfc_hba *, struct lpfcMboxq *,
uint16_t);
void lpfc_sli4_hba_reset(struct lpfc_hba *);
struct lpfc_queue *lpfc_sli4_queue_alloc(struct lpfc_hba *, uint32_t,
uint32_t);
void lpfc_sli4_queue_free(struct lpfc_queue *);
uint32_t lpfc_eq_create(struct lpfc_hba *, struct lpfc_queue *, uint16_t);
uint32_t lpfc_cq_create(struct lpfc_hba *, struct lpfc_queue *,
struct lpfc_queue *, uint32_t, uint32_t);
int32_t lpfc_mq_create(struct lpfc_hba *, struct lpfc_queue *,
struct lpfc_queue *, uint32_t);
uint32_t lpfc_wq_create(struct lpfc_hba *, struct lpfc_queue *,
struct lpfc_queue *, uint32_t);
uint32_t lpfc_rq_create(struct lpfc_hba *, struct lpfc_queue *,
struct lpfc_queue *, struct lpfc_queue *, uint32_t);
uint32_t lpfc_eq_destroy(struct lpfc_hba *, struct lpfc_queue *);
uint32_t lpfc_cq_destroy(struct lpfc_hba *, struct lpfc_queue *);
uint32_t lpfc_mq_destroy(struct lpfc_hba *, struct lpfc_queue *);
uint32_t lpfc_wq_destroy(struct lpfc_hba *, struct lpfc_queue *);
uint32_t lpfc_rq_destroy(struct lpfc_hba *, struct lpfc_queue *,
struct lpfc_queue *);
int lpfc_sli4_queue_setup(struct lpfc_hba *);
void lpfc_sli4_queue_unset(struct lpfc_hba *);
int lpfc_sli4_post_sgl(struct lpfc_hba *, dma_addr_t, dma_addr_t, uint16_t);
int lpfc_sli4_repost_scsi_sgl_list(struct lpfc_hba *);
uint16_t lpfc_sli4_next_xritag(struct lpfc_hba *);
int lpfc_sli4_post_async_mbox(struct lpfc_hba *);
int lpfc_sli4_post_els_sgl_list(struct lpfc_hba *phba);
int lpfc_sli4_post_els_sgl_list_ext(struct lpfc_hba *phba);
int lpfc_sli4_post_scsi_sgl_block(struct lpfc_hba *, struct list_head *, int);
int lpfc_sli4_post_scsi_sgl_blk_ext(struct lpfc_hba *, struct list_head *,
int);
struct lpfc_cq_event *__lpfc_sli4_cq_event_alloc(struct lpfc_hba *);
struct lpfc_cq_event *lpfc_sli4_cq_event_alloc(struct lpfc_hba *);
void __lpfc_sli4_cq_event_release(struct lpfc_hba *, struct lpfc_cq_event *);
void lpfc_sli4_cq_event_release(struct lpfc_hba *, struct lpfc_cq_event *);
int lpfc_sli4_init_rpi_hdrs(struct lpfc_hba *);
int lpfc_sli4_post_rpi_hdr(struct lpfc_hba *, struct lpfc_rpi_hdr *);
int lpfc_sli4_post_all_rpi_hdrs(struct lpfc_hba *);
struct lpfc_rpi_hdr *lpfc_sli4_create_rpi_hdr(struct lpfc_hba *);
void lpfc_sli4_remove_rpi_hdrs(struct lpfc_hba *);
int lpfc_sli4_alloc_rpi(struct lpfc_hba *);
void lpfc_sli4_free_rpi(struct lpfc_hba *, int);
void lpfc_sli4_remove_rpis(struct lpfc_hba *);
void lpfc_sli4_async_event_proc(struct lpfc_hba *);
void lpfc_sli4_fcf_redisc_event_proc(struct lpfc_hba *);
int lpfc_sli4_resume_rpi(struct lpfc_nodelist *);
void lpfc_sli4_fcp_xri_abort_event_proc(struct lpfc_hba *);
void lpfc_sli4_els_xri_abort_event_proc(struct lpfc_hba *);
void lpfc_sli4_fcp_xri_aborted(struct lpfc_hba *,
struct sli4_wcqe_xri_aborted *);
void lpfc_sli4_els_xri_aborted(struct lpfc_hba *,
struct sli4_wcqe_xri_aborted *);
void lpfc_sli4_vport_delete_els_xri_aborted(struct lpfc_vport *);
void lpfc_sli4_vport_delete_fcp_xri_aborted(struct lpfc_vport *);
int lpfc_sli4_brdreset(struct lpfc_hba *);
int lpfc_sli4_add_fcf_record(struct lpfc_hba *, struct fcf_record *);
void lpfc_sli_remove_dflt_fcf(struct lpfc_hba *);
int lpfc_sli4_get_els_iocb_cnt(struct lpfc_hba *);
int lpfc_sli4_init_vpi(struct lpfc_vport *);
uint32_t lpfc_sli4_cq_release(struct lpfc_queue *, bool);
uint32_t lpfc_sli4_eq_release(struct lpfc_queue *, bool);
void lpfc_sli4_fcfi_unreg(struct lpfc_hba *, uint16_t);
int lpfc_sli4_fcf_scan_read_fcf_rec(struct lpfc_hba *, uint16_t);
int lpfc_sli4_fcf_rr_read_fcf_rec(struct lpfc_hba *, uint16_t);
int lpfc_sli4_read_fcf_rec(struct lpfc_hba *, uint16_t);
void lpfc_mbx_cmpl_fcf_scan_read_fcf_rec(struct lpfc_hba *, LPFC_MBOXQ_t *);
void lpfc_mbx_cmpl_fcf_rr_read_fcf_rec(struct lpfc_hba *, LPFC_MBOXQ_t *);
void lpfc_mbx_cmpl_read_fcf_rec(struct lpfc_hba *, LPFC_MBOXQ_t *);
int lpfc_sli4_unregister_fcf(struct lpfc_hba *);
int lpfc_sli4_post_status_check(struct lpfc_hba *);
uint8_t lpfc_sli4_mbox_opcode_get(struct lpfc_hba *, struct lpfcMboxq *);
