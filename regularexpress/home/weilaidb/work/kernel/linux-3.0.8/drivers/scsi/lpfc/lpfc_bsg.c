struct lpfc_bsg_event ;
struct lpfc_bsg_iocb ;
struct lpfc_bsg_mbox ;
#define MENLO_DID 0x0000FC0E
struct lpfc_bsg_menlo ;
#define TYPE_EVT 	1
#define TYPE_IOCB	2
#define TYPE_MBOX	3
#define TYPE_MENLO	4
struct bsg_job_data ;
struct event_data ;
#define BUF_SZ_4K 4096
#define SLI_CT_ELX_LOOPBACK 0x10
enum ELX_LOOPBACK_CMD ;
#define ELX_LOOPBACK_HEADER_SZ \
(size_t)(&((struct lpfc_sli_ct_request *)NULL)->un)
struct lpfc_dmabufext ;
static void
lpfc_bsg_send_mgmt_cmd_cmp(struct lpfc_hba *phba,
struct lpfc_iocbq *cmdiocbq,
struct lpfc_iocbq *rspiocbq)
static int
lpfc_bsg_send_mgmt_cmd(struct fc_bsg_job *job)
static void
lpfc_bsg_rport_els_cmp(struct lpfc_hba *phba,
struct lpfc_iocbq *cmdiocbq,
struct lpfc_iocbq *rspiocbq)
static int
lpfc_bsg_rport_els(struct fc_bsg_job *job)
static void
lpfc_bsg_event_free(struct kref *kref)
static inline void
lpfc_bsg_event_ref(struct lpfc_bsg_event *evt)
static inline void
lpfc_bsg_event_unref(struct lpfc_bsg_event *evt)
static struct lpfc_bsg_event *
lpfc_bsg_event_new(uint32_t ev_mask, int ev_reg_id, uint32_t ev_req_id)
static int
diag_cmd_data_free(struct lpfc_hba *phba, struct lpfc_dmabufext *mlist)
int
lpfc_bsg_ct_unsol_event(struct lpfc_hba *phba, struct lpfc_sli_ring *pring,
struct lpfc_iocbq *piocbq)
static int
lpfc_bsg_hba_set_event(struct fc_bsg_job *job)
static int
lpfc_bsg_hba_get_event(struct fc_bsg_job *job)
static void
lpfc_issue_ct_rsp_cmp(struct lpfc_hba *phba,
struct lpfc_iocbq *cmdiocbq,
struct lpfc_iocbq *rspiocbq)
static int
lpfc_issue_ct_rsp(struct lpfc_hba *phba, struct fc_bsg_job *job, uint32_t tag,
struct lpfc_dmabuf *bmp, int num_entry)
static int
lpfc_bsg_send_mgmt_rsp(struct fc_bsg_job *job)
static int
lpfc_bsg_diag_mode_enter(struct lpfc_hba *phba)
static void
lpfc_bsg_diag_mode_exit(struct lpfc_hba *phba)
static int
lpfc_sli3_bsg_diag_loopback_mode(struct lpfc_hba *phba, struct fc_bsg_job *job)
static int
lpfc_sli4_bsg_set_link_diag_state(struct lpfc_hba *phba, uint32_t diag)
static int
lpfc_sli4_bsg_diag_loopback_mode(struct lpfc_hba *phba, struct fc_bsg_job *job)
static int
lpfc_bsg_diag_loopback_mode(struct fc_bsg_job *job)
static int
lpfc_sli4_bsg_diag_mode_end(struct fc_bsg_job *job)
static int
lpfc_sli4_bsg_link_diag_test(struct fc_bsg_job *job)
static int lpfcdiag_loop_self_reg(struct lpfc_hba *phba, uint16_t *rpi)
static int lpfcdiag_loop_self_unreg(struct lpfc_hba *phba, uint16_t rpi)
static int lpfcdiag_loop_get_xri(struct lpfc_hba *phba, uint16_t rpi,
uint16_t *txxri, uint16_t * rxxri)
static struct lpfc_dmabuf *
lpfc_bsg_dma_page_alloc(struct lpfc_hba *phba)
static void
lpfc_bsg_dma_page_free(struct lpfc_hba *phba, struct lpfc_dmabuf *dmabuf)
static void
lpfc_bsg_dma_page_list_free(struct lpfc_hba *phba,
struct list_head *dmabuf_list)
static struct lpfc_dmabufext *
diag_cmd_data_alloc(struct lpfc_hba *phba,
struct ulp_bde64 *bpl, uint32_t size,
int nocopydata)
static int lpfcdiag_loop_post_rxbufs(struct lpfc_hba *phba, uint16_t rxxri,
size_t len)
static int
lpfc_bsg_diag_loopback_run(struct fc_bsg_job *job)
static int
lpfc_bsg_get_dfc_rev(struct fc_bsg_job *job)
void
lpfc_bsg_issue_mbox_cmpl(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmboxq)
static int lpfc_bsg_check_cmd_access(struct lpfc_hba *phba,
MAILBOX_t *mb, struct lpfc_vport *vport)
static void
lpfc_bsg_mbox_ext_session_reset(struct lpfc_hba *phba)
static struct fc_bsg_job *
lpfc_bsg_issue_mbox_ext_handle_job(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmboxq)
static void
lpfc_bsg_issue_read_mbox_ext_cmpl(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmboxq)
static void
lpfc_bsg_issue_write_mbox_ext_cmpl(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmboxq)
static void
lpfc_bsg_sli_cfg_dma_desc_setup(struct lpfc_hba *phba, enum nemb_type nemb_tp,
uint32_t index, struct lpfc_dmabuf *mbx_dmabuf,
struct lpfc_dmabuf *ext_dmabuf)
static int
lpfc_bsg_sli_cfg_read_cmd_ext(struct lpfc_hba *phba, struct fc_bsg_job *job,
enum nemb_type nemb_tp,
struct lpfc_dmabuf *dmabuf)
static int
lpfc_bsg_sli_cfg_write_cmd_ext(struct lpfc_hba *phba, struct fc_bsg_job *job,
enum nemb_type nemb_tp,
struct lpfc_dmabuf *dmabuf)
static int
lpfc_bsg_handle_sli_cfg_mbox(struct lpfc_hba *phba, struct fc_bsg_job *job,
struct lpfc_dmabuf *dmabuf)
static void
lpfc_bsg_mbox_ext_abort(struct lpfc_hba *phba)
static int
lpfc_bsg_read_ebuf_get(struct lpfc_hba *phba, struct fc_bsg_job *job)
static int
lpfc_bsg_write_ebuf_set(struct lpfc_hba *phba, struct fc_bsg_job *job,
struct lpfc_dmabuf *dmabuf)
static int
lpfc_bsg_handle_sli_cfg_ebuf(struct lpfc_hba *phba, struct fc_bsg_job *job,
struct lpfc_dmabuf *dmabuf)
static int
lpfc_bsg_handle_sli_cfg_ext(struct lpfc_hba *phba, struct fc_bsg_job *job,
struct lpfc_dmabuf *dmabuf)
static uint32_t
lpfc_bsg_issue_mbox(struct lpfc_hba *phba, struct fc_bsg_job *job,
struct lpfc_vport *vport)
static int
lpfc_bsg_mbox_cmd(struct fc_bsg_job *job)
static void
lpfc_bsg_menlo_cmd_cmp(struct lpfc_hba *phba,
struct lpfc_iocbq *cmdiocbq,
struct lpfc_iocbq *rspiocbq)
static int
lpfc_menlo_cmd(struct fc_bsg_job *job)
static int
lpfc_bsg_hst_vendor(struct fc_bsg_job *job)
int
lpfc_bsg_request(struct fc_bsg_job *job)
int
lpfc_bsg_timeout(struct fc_bsg_job *job)
