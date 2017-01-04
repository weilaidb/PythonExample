typedef enum _lpfc_iocb_type  lpfc_iocb_type;
static int lpfc_sli_issue_mbox_s4(struct lpfc_hba *, LPFC_MBOXQ_t *,
uint32_t);
static int lpfc_sli4_read_rev(struct lpfc_hba *, LPFC_MBOXQ_t *,
uint8_t *, uint32_t *);
static struct lpfc_iocbq *lpfc_sli4_els_wcqe_to_rspiocbq(struct lpfc_hba *,
struct lpfc_iocbq *);
static void lpfc_sli4_send_seq_to_ulp(struct lpfc_vport *,
struct hbq_dmabuf *);
static int lpfc_sli4_fp_handle_wcqe(struct lpfc_hba *, struct lpfc_queue *,
struct lpfc_cqe *);
static IOCB_t *
lpfc_get_iocb_from_iocbq(struct lpfc_iocbq *iocbq)
static uint32_t
lpfc_sli4_wq_put(struct lpfc_queue *q, union lpfc_wqe *wqe)
static uint32_t
lpfc_sli4_wq_release(struct lpfc_queue *q, uint32_t index)
static uint32_t
lpfc_sli4_mq_put(struct lpfc_queue *q, struct lpfc_mqe *mqe)
static uint32_t
lpfc_sli4_mq_release(struct lpfc_queue *q)
static struct lpfc_eqe *
lpfc_sli4_eq_get(struct lpfc_queue *q)
uint32_t
lpfc_sli4_eq_release(struct lpfc_queue *q, bool arm)
static struct lpfc_cqe *
lpfc_sli4_cq_get(struct lpfc_queue *q)
uint32_t
lpfc_sli4_cq_release(struct lpfc_queue *q, bool arm)
static int
lpfc_sli4_rq_put(struct lpfc_queue *hq, struct lpfc_queue *dq,
struct lpfc_rqe *hrqe, struct lpfc_rqe *drqe)
static uint32_t
lpfc_sli4_rq_release(struct lpfc_queue *hq, struct lpfc_queue *dq)
static inline IOCB_t *
lpfc_cmd_iocb(struct lpfc_hba *phba, struct lpfc_sli_ring *pring)
static inline IOCB_t *
lpfc_resp_iocb(struct lpfc_hba *phba, struct lpfc_sli_ring *pring)
static struct lpfc_iocbq *
__lpfc_sli_get_iocbq(struct lpfc_hba *phba)
static struct lpfc_sglq *
__lpfc_clear_active_sglq(struct lpfc_hba *phba, uint16_t xritag)
struct lpfc_sglq *
__lpfc_get_active_sglq(struct lpfc_hba *phba, uint16_t xritag)
static int
__lpfc_set_rrq_active(struct lpfc_hba *phba, struct lpfc_nodelist *ndlp,
uint16_t xritag, uint16_t rxid, uint16_t send_rrq)
void
lpfc_clr_rrq_active(struct lpfc_hba *phba,
uint16_t xritag,
struct lpfc_node_rrq *rrq)
void
lpfc_handle_rrq_active(struct lpfc_hba *phba)
struct lpfc_node_rrq *
lpfc_get_active_rrq(struct lpfc_vport *vport, uint16_t xri, uint32_t did)
void
lpfc_cleanup_vports_rrqs(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp)
void
lpfc_cleanup_wt_rrqs(struct lpfc_hba *phba)
int
lpfc_test_rrq_active(struct lpfc_hba *phba, struct lpfc_nodelist *ndlp,
uint16_t  xritag)
int
lpfc_set_rrq_active(struct lpfc_hba *phba, struct lpfc_nodelist *ndlp,
uint16_t xritag, uint16_t rxid, uint16_t send_rrq)
static struct lpfc_sglq *
__lpfc_sli_get_sglq(struct lpfc_hba *phba, struct lpfc_iocbq *piocbq)
struct lpfc_iocbq *
lpfc_sli_get_iocbq(struct lpfc_hba *phba)
static void
__lpfc_sli_release_iocbq_s4(struct lpfc_hba *phba, struct lpfc_iocbq *iocbq)
static void
__lpfc_sli_release_iocbq_s3(struct lpfc_hba *phba, struct lpfc_iocbq *iocbq)
static void
__lpfc_sli_release_iocbq(struct lpfc_hba *phba, struct lpfc_iocbq *iocbq)
void
lpfc_sli_release_iocbq(struct lpfc_hba *phba, struct lpfc_iocbq *iocbq)
void
lpfc_sli_cancel_iocbs(struct lpfc_hba *phba, struct list_head *iocblist,
uint32_t ulpstatus, uint32_t ulpWord4)
static lpfc_iocb_type
lpfc_sli_iocb_cmd_type(uint8_t iocb_cmnd)
static int
lpfc_sli_ring_map(struct lpfc_hba *phba)
static int
lpfc_sli_ringtxcmpl_put(struct lpfc_hba *phba, struct lpfc_sli_ring *pring,
struct lpfc_iocbq *piocb)
struct lpfc_iocbq *
lpfc_sli_ringtx_get(struct lpfc_hba *phba, struct lpfc_sli_ring *pring)
static IOCB_t *
lpfc_sli_next_iocb_slot (struct lpfc_hba *phba, struct lpfc_sli_ring *pring)
uint16_t
lpfc_sli_next_iotag(struct lpfc_hba *phba, struct lpfc_iocbq *iocbq)
static void
lpfc_sli_submit_iocb(struct lpfc_hba *phba, struct lpfc_sli_ring *pring,
IOCB_t *iocb, struct lpfc_iocbq *nextiocb)
static void
lpfc_sli_update_full_ring(struct lpfc_hba *phba, struct lpfc_sli_ring *pring)
static void
lpfc_sli_update_ring(struct lpfc_hba *phba, struct lpfc_sli_ring *pring)
static void
lpfc_sli_resume_iocb(struct lpfc_hba *phba, struct lpfc_sli_ring *pring)
static struct lpfc_hbq_entry *
lpfc_sli_next_hbq_slot(struct lpfc_hba *phba, uint32_t hbqno)
void
lpfc_sli_hbqbuf_free_all(struct lpfc_hba *phba)
static int
lpfc_sli_hbq_to_firmware(struct lpfc_hba *phba, uint32_t hbqno,
struct hbq_dmabuf *hbq_buf)
static int
lpfc_sli_hbq_to_firmware_s3(struct lpfc_hba *phba, uint32_t hbqno,
struct hbq_dmabuf *hbq_buf)
static int
lpfc_sli_hbq_to_firmware_s4(struct lpfc_hba *phba, uint32_t hbqno,
struct hbq_dmabuf *hbq_buf)
static struct lpfc_hbq_init lpfc_els_hbq = ;
static struct lpfc_hbq_init lpfc_extra_hbq = ;
struct lpfc_hbq_init *lpfc_hbq_defs[] = ;
static int
lpfc_sli_hbqbuf_fill_hbqs(struct lpfc_hba *phba, uint32_t hbqno, uint32_t count)
int
lpfc_sli_hbqbuf_add_hbqs(struct lpfc_hba *phba, uint32_t qno)
static int
lpfc_sli_hbqbuf_init_hbqs(struct lpfc_hba *phba, uint32_t qno)
static struct hbq_dmabuf *
lpfc_sli_hbqbuf_get(struct list_head *rb_list)
static struct hbq_dmabuf *
lpfc_sli_hbqbuf_find(struct lpfc_hba *phba, uint32_t tag)
void
lpfc_sli_free_hbq(struct lpfc_hba *phba, struct hbq_dmabuf *hbq_buffer)
static int
lpfc_sli_chk_mbx_command(uint8_t mbxCommand)
void
lpfc_sli_wake_mbox_wait(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmboxq)
void
lpfc_sli_def_mbox_cmpl(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmb)
int
lpfc_sli_handle_mb_event(struct lpfc_hba *phba)
static struct lpfc_dmabuf *
lpfc_sli_get_buff(struct lpfc_hba *phba,
struct lpfc_sli_ring *pring,
uint32_t tag)
static int
lpfc_complete_unsol_iocb(struct lpfc_hba *phba, struct lpfc_sli_ring *pring,
struct lpfc_iocbq *saveq, uint32_t fch_r_ctl,
uint32_t fch_type)
static int
lpfc_sli_process_unsol_iocb(struct lpfc_hba *phba, struct lpfc_sli_ring *pring,
struct lpfc_iocbq *saveq)
static struct lpfc_iocbq *
lpfc_sli_iocbq_lookup(struct lpfc_hba *phba,
struct lpfc_sli_ring *pring,
struct lpfc_iocbq *prspiocb)
static struct lpfc_iocbq *
lpfc_sli_iocbq_lookup_by_tag(struct lpfc_hba *phba,
struct lpfc_sli_ring *pring, uint16_t iotag)
static int
lpfc_sli_process_sol_iocb(struct lpfc_hba *phba, struct lpfc_sli_ring *pring,
struct lpfc_iocbq *saveq)
static void
lpfc_sli_rsp_pointers_error(struct lpfc_hba *phba, struct lpfc_sli_ring *pring)
void lpfc_poll_eratt(unsigned long ptr)
int
lpfc_sli_handle_fast_ring_event(struct lpfc_hba *phba,
struct lpfc_sli_ring *pring, uint32_t mask)
static struct lpfc_iocbq *
lpfc_sli_sp_handle_rspiocb(struct lpfc_hba *phba, struct lpfc_sli_ring *pring,
struct lpfc_iocbq *rspiocbp)
void
lpfc_sli_handle_slow_ring_event(struct lpfc_hba *phba,
struct lpfc_sli_ring *pring, uint32_t mask)
static void
lpfc_sli_handle_slow_ring_event_s3(struct lpfc_hba *phba,
struct lpfc_sli_ring *pring, uint32_t mask)
static void
lpfc_sli_handle_slow_ring_event_s4(struct lpfc_hba *phba,
struct lpfc_sli_ring *pring, uint32_t mask)
void
lpfc_sli_abort_iocb_ring(struct lpfc_hba *phba, struct lpfc_sli_ring *pring)
void
lpfc_sli_flush_fcp_rings(struct lpfc_hba *phba)
static int
lpfc_sli_brdready_s3(struct lpfc_hba *phba, uint32_t mask)
static int
lpfc_sli_brdready_s4(struct lpfc_hba *phba, uint32_t mask)
int
lpfc_sli_brdready(struct lpfc_hba *phba, uint32_t mask)
#define BARRIER_TEST_PATTERN (0xdeadbeef)
void lpfc_reset_barrier(struct lpfc_hba *phba)
int
lpfc_sli_brdkill(struct lpfc_hba *phba)
int
lpfc_sli_brdreset(struct lpfc_hba *phba)
int
lpfc_sli4_brdreset(struct lpfc_hba *phba)
static int
lpfc_sli_brdrestart_s3(struct lpfc_hba *phba)
static int
lpfc_sli_brdrestart_s4(struct lpfc_hba *phba)
int
lpfc_sli_brdrestart(struct lpfc_hba *phba)
static int
lpfc_sli_chipset_init(struct lpfc_hba *phba)
int
lpfc_sli_hbq_count(void)
static int
lpfc_sli_hbq_entry_count(void)
int
lpfc_sli_hbq_size(void)
static int
lpfc_sli_hbq_setup(struct lpfc_hba *phba)
static int
lpfc_sli4_rb_setup(struct lpfc_hba *phba)
int
lpfc_sli_config_port(struct lpfc_hba *phba, int sli_mode)
int
lpfc_sli_hba_setup(struct lpfc_hba *phba)
static int
lpfc_sli4_read_fcoe_params(struct lpfc_hba *phba,
LPFC_MBOXQ_t *mboxq)
static int
lpfc_sli4_read_rev(struct lpfc_hba *phba, LPFC_MBOXQ_t *mboxq,
uint8_t *vpd, uint32_t *vpd_size)
static void
lpfc_sli4_arm_cqeq_intr(struct lpfc_hba *phba)
static int
lpfc_sli4_get_avail_extnt_rsrc(struct lpfc_hba *phba, uint16_t type,
uint16_t *extnt_count, uint16_t *extnt_size)
static int
lpfc_sli4_chk_avail_extnt_rsrc(struct lpfc_hba *phba, uint16_t type)
static int
lpfc_sli4_cfg_post_extnts(struct lpfc_hba *phba, uint16_t *extnt_cnt,
uint16_t type, bool *emb, LPFC_MBOXQ_t *mbox)
static int
lpfc_sli4_alloc_extent(struct lpfc_hba *phba, uint16_t type)
static int
lpfc_sli4_dealloc_extent(struct lpfc_hba *phba, uint16_t type)
int
lpfc_sli4_alloc_resource_identifiers(struct lpfc_hba *phba)
int
lpfc_sli4_dealloc_resource_identifiers(struct lpfc_hba *phba)
int
lpfc_sli4_hba_setup(struct lpfc_hba *phba)
void
lpfc_mbox_timeout(unsigned long ptr)
void
lpfc_mbox_timeout_handler(struct lpfc_hba *phba)
static int
lpfc_sli_issue_mbox_s3(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmbox,
uint32_t flag)
static int
lpfc_sli4_async_mbox_block(struct lpfc_hba *phba)
static void
lpfc_sli4_async_mbox_unblock(struct lpfc_hba *phba)
static int
lpfc_sli4_post_sync_mbox(struct lpfc_hba *phba, LPFC_MBOXQ_t *mboxq)
static int
lpfc_sli_issue_mbox_s4(struct lpfc_hba *phba, LPFC_MBOXQ_t *mboxq,
uint32_t flag)
int
lpfc_sli4_post_async_mbox(struct lpfc_hba *phba)
int
lpfc_sli_issue_mbox(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmbox, uint32_t flag)
int
lpfc_mbox_api_table_setup(struct lpfc_hba *phba, uint8_t dev_grp)
void
__lpfc_sli_ringtx_put(struct lpfc_hba *phba, struct lpfc_sli_ring *pring,
struct lpfc_iocbq *piocb)
static struct lpfc_iocbq *
lpfc_sli_next_iocb(struct lpfc_hba *phba, struct lpfc_sli_ring *pring,
struct lpfc_iocbq **piocb)
static int
__lpfc_sli_issue_iocb_s3(struct lpfc_hba *phba, uint32_t ring_number,
struct lpfc_iocbq *piocb, uint32_t flag)
static uint16_t
lpfc_sli4_bpl2sgl(struct lpfc_hba *phba, struct lpfc_iocbq *piocbq,
struct lpfc_sglq *sglq)
static uint32_t
lpfc_sli4_scmd_to_wqidx_distr(struct lpfc_hba *phba)
static int
lpfc_sli4_iocb2wqe(struct lpfc_hba *phba, struct lpfc_iocbq *iocbq,
union lpfc_wqe *wqe)
static int
__lpfc_sli_issue_iocb_s4(struct lpfc_hba *phba, uint32_t ring_number,
struct lpfc_iocbq *piocb, uint32_t flag)
int
__lpfc_sli_issue_iocb(struct lpfc_hba *phba, uint32_t ring_number,
struct lpfc_iocbq *piocb, uint32_t flag)
int
lpfc_sli_api_table_setup(struct lpfc_hba *phba, uint8_t dev_grp)
int
lpfc_sli_issue_iocb(struct lpfc_hba *phba, uint32_t ring_number,
struct lpfc_iocbq *piocb, uint32_t flag)
static int
lpfc_extra_ring_setup( struct lpfc_hba *phba)
static void
lpfc_sli_async_event_handler(struct lpfc_hba * phba,
struct lpfc_sli_ring * pring, struct lpfc_iocbq * iocbq)
int
lpfc_sli_setup(struct lpfc_hba *phba)
int
lpfc_sli_queue_setup(struct lpfc_hba *phba)
static void
lpfc_sli_mbox_sys_flush(struct lpfc_hba *phba)
int
lpfc_sli_host_down(struct lpfc_vport *vport)
int
lpfc_sli_hba_down(struct lpfc_hba *phba)
void
lpfc_sli_pcimem_bcopy(void *srcp, void *destp, uint32_t cnt)
void
lpfc_sli_bemem_bcopy(void *srcp, void *destp, uint32_t cnt)
int
lpfc_sli_ringpostbuf_put(struct lpfc_hba *phba, struct lpfc_sli_ring *pring,
struct lpfc_dmabuf *mp)
uint32_t
lpfc_sli_get_buffer_tag(struct lpfc_hba *phba)
struct lpfc_dmabuf *
lpfc_sli_ring_taggedbuf_get(struct lpfc_hba *phba, struct lpfc_sli_ring *pring,
uint32_t tag)
struct lpfc_dmabuf *
lpfc_sli_ringpostbuf_get(struct lpfc_hba *phba, struct lpfc_sli_ring *pring,
dma_addr_t phys)
static void
lpfc_sli_abort_els_cmpl(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
static void
lpfc_ignore_els_cmpl(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
static int
lpfc_sli_abort_iotag_issue(struct lpfc_hba *phba, struct lpfc_sli_ring *pring,
struct lpfc_iocbq *cmdiocb)
int
lpfc_sli_issue_abort_iotag(struct lpfc_hba *phba, struct lpfc_sli_ring *pring,
struct lpfc_iocbq *cmdiocb)
static void
lpfc_sli_iocb_ring_abort(struct lpfc_hba *phba, struct lpfc_sli_ring *pring)
void
lpfc_sli_hba_iocb_abort(struct lpfc_hba *phba)
static int
lpfc_sli_validate_fcp_iocb(struct lpfc_iocbq *iocbq, struct lpfc_vport *vport,
uint16_t tgt_id, uint64_t lun_id,
lpfc_ctx_cmd ctx_cmd)
int
lpfc_sli_sum_iocb(struct lpfc_vport *vport, uint16_t tgt_id, uint64_t lun_id,
lpfc_ctx_cmd ctx_cmd)
void
lpfc_sli_abort_fcp_cmpl(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
int
lpfc_sli_abort_iocb(struct lpfc_vport *vport, struct lpfc_sli_ring *pring,
uint16_t tgt_id, uint64_t lun_id, lpfc_ctx_cmd abort_cmd)
static void
lpfc_sli_wake_iocb_wait(struct lpfc_hba *phba,
struct lpfc_iocbq *cmdiocbq,
struct lpfc_iocbq *rspiocbq)
static int
lpfc_chk_iocb_flg(struct lpfc_hba *phba,
struct lpfc_iocbq *piocbq, uint32_t flag)
int
lpfc_sli_issue_iocb_wait(struct lpfc_hba *phba,
uint32_t ring_number,
struct lpfc_iocbq *piocb,
struct lpfc_iocbq *prspiocbq,
uint32_t timeout)
int
lpfc_sli_issue_mbox_wait(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmboxq,
uint32_t timeout)
void
lpfc_sli_mbox_sys_shutdown(struct lpfc_hba *phba)
static int
lpfc_sli_eratt_read(struct lpfc_hba *phba)
static int
lpfc_sli4_eratt_read(struct lpfc_hba *phba)
int
lpfc_sli_check_eratt(struct lpfc_hba *phba)
static inline int
lpfc_intr_state_check(struct lpfc_hba *phba)
irqreturn_t
lpfc_sli_sp_intr_handler(int irq, void *dev_id)
irqreturn_t
lpfc_sli_fp_intr_handler(int irq, void *dev_id)
irqreturn_t
lpfc_sli_intr_handler(int irq, void *dev_id)
void lpfc_sli4_fcp_xri_abort_event_proc(struct lpfc_hba *phba)
void lpfc_sli4_els_xri_abort_event_proc(struct lpfc_hba *phba)
static void
lpfc_sli4_iocb_param_transfer(struct lpfc_hba *phba,
struct lpfc_iocbq *pIocbIn,
struct lpfc_iocbq *pIocbOut,
struct lpfc_wcqe_complete *wcqe)
static struct lpfc_iocbq *
lpfc_sli4_els_wcqe_to_rspiocbq(struct lpfc_hba *phba,
struct lpfc_iocbq *irspiocbq)
static bool
lpfc_sli4_sp_handle_async_event(struct lpfc_hba *phba, struct lpfc_mcqe *mcqe)
static bool
lpfc_sli4_sp_handle_mbox_event(struct lpfc_hba *phba, struct lpfc_mcqe *mcqe)
static bool
lpfc_sli4_sp_handle_mcqe(struct lpfc_hba *phba, struct lpfc_cqe *cqe)
static bool
lpfc_sli4_sp_handle_els_wcqe(struct lpfc_hba *phba,
struct lpfc_wcqe_complete *wcqe)
static void
lpfc_sli4_sp_handle_rel_wcqe(struct lpfc_hba *phba,
struct lpfc_wcqe_release *wcqe)
static bool
lpfc_sli4_sp_handle_abort_xri_wcqe(struct lpfc_hba *phba,
struct lpfc_queue *cq,
struct sli4_wcqe_xri_aborted *wcqe)
static bool
lpfc_sli4_sp_handle_rcqe(struct lpfc_hba *phba, struct lpfc_rcqe *rcqe)
static bool
lpfc_sli4_sp_handle_cqe(struct lpfc_hba *phba, struct lpfc_queue *cq,
struct lpfc_cqe *cqe)
static void
lpfc_sli4_sp_handle_eqe(struct lpfc_hba *phba, struct lpfc_eqe *eqe)
static void
lpfc_sli4_fp_handle_fcp_wcqe(struct lpfc_hba *phba,
struct lpfc_wcqe_complete *wcqe)
static void
lpfc_sli4_fp_handle_rel_wcqe(struct lpfc_hba *phba, struct lpfc_queue *cq,
struct lpfc_wcqe_release *wcqe)
static int
lpfc_sli4_fp_handle_wcqe(struct lpfc_hba *phba, struct lpfc_queue *cq,
struct lpfc_cqe *cqe)
static void
lpfc_sli4_fp_handle_eqe(struct lpfc_hba *phba, struct lpfc_eqe *eqe,
uint32_t fcp_cqidx)
static void
lpfc_sli4_eq_flush(struct lpfc_hba *phba, struct lpfc_queue *eq)
irqreturn_t
lpfc_sli4_sp_intr_handler(int irq, void *dev_id)
irqreturn_t
lpfc_sli4_fp_intr_handler(int irq, void *dev_id)
irqreturn_t
lpfc_sli4_intr_handler(int irq, void *dev_id)
void
lpfc_sli4_queue_free(struct lpfc_queue *queue)
struct lpfc_queue *
lpfc_sli4_queue_alloc(struct lpfc_hba *phba, uint32_t entry_size,
uint32_t entry_count)
uint32_t
lpfc_eq_create(struct lpfc_hba *phba, struct lpfc_queue *eq, uint16_t imax)
uint32_t
lpfc_cq_create(struct lpfc_hba *phba, struct lpfc_queue *cq,
struct lpfc_queue *eq, uint32_t type, uint32_t subtype)
static void
lpfc_mq_create_fb_init(struct lpfc_hba *phba, struct lpfc_queue *mq,
LPFC_MBOXQ_t *mbox, struct lpfc_queue *cq)
int32_t
lpfc_mq_create(struct lpfc_hba *phba, struct lpfc_queue *mq,
struct lpfc_queue *cq, uint32_t subtype)
uint32_t
lpfc_wq_create(struct lpfc_hba *phba, struct lpfc_queue *wq,
struct lpfc_queue *cq, uint32_t subtype)
uint32_t
lpfc_rq_create(struct lpfc_hba *phba, struct lpfc_queue *hrq,
struct lpfc_queue *drq, struct lpfc_queue *cq, uint32_t subtype)
uint32_t
lpfc_eq_destroy(struct lpfc_hba *phba, struct lpfc_queue *eq)
uint32_t
lpfc_cq_destroy(struct lpfc_hba *phba, struct lpfc_queue *cq)
uint32_t
lpfc_mq_destroy(struct lpfc_hba *phba, struct lpfc_queue *mq)
uint32_t
lpfc_wq_destroy(struct lpfc_hba *phba, struct lpfc_queue *wq)
uint32_t
lpfc_rq_destroy(struct lpfc_hba *phba, struct lpfc_queue *hrq,
struct lpfc_queue *drq)
int
lpfc_sli4_post_sgl(struct lpfc_hba *phba,
dma_addr_t pdma_phys_addr0,
dma_addr_t pdma_phys_addr1,
uint16_t xritag)
uint16_t
lpfc_sli4_alloc_xri(struct lpfc_hba *phba)
void
__lpfc_sli4_free_xri(struct lpfc_hba *phba, int xri)
void
lpfc_sli4_free_xri(struct lpfc_hba *phba, int xri)
uint16_t
lpfc_sli4_next_xritag(struct lpfc_hba *phba)
int
lpfc_sli4_post_els_sgl_list(struct lpfc_hba *phba)
int
lpfc_sli4_post_els_sgl_list_ext(struct lpfc_hba *phba)
int
lpfc_sli4_post_scsi_sgl_block(struct lpfc_hba *phba, struct list_head *sblist,
int cnt)
int
lpfc_sli4_post_scsi_sgl_blk_ext(struct lpfc_hba *phba, struct list_head *sblist,
int cnt)
static int
lpfc_fc_frame_check(struct lpfc_hba *phba, struct fc_frame_header *fc_hdr)
static uint32_t
lpfc_fc_hdr_get_vfi(struct fc_frame_header *fc_hdr)
static struct lpfc_vport *
lpfc_fc_frame_to_vport(struct lpfc_hba *phba, struct fc_frame_header *fc_hdr,
uint16_t fcfi)
void
lpfc_update_rcv_time_stamp(struct lpfc_vport *vport)
void
lpfc_cleanup_rcv_buffers(struct lpfc_vport *vport)
void
lpfc_rcv_seq_check_edtov(struct lpfc_vport *vport)
static struct hbq_dmabuf *
lpfc_fc_frame_add(struct lpfc_vport *vport, struct hbq_dmabuf *dmabuf)
static bool
lpfc_sli4_abort_partial_seq(struct lpfc_vport *vport,
struct hbq_dmabuf *dmabuf)
static void
lpfc_sli4_seq_abort_rsp_cmpl(struct lpfc_hba *phba,
struct lpfc_iocbq *cmd_iocbq,
struct lpfc_iocbq *rsp_iocbq)
uint16_t
lpfc_sli4_xri_inrange(struct lpfc_hba *phba,
uint16_t xri)
static void
lpfc_sli4_seq_abort_rsp(struct lpfc_hba *phba,
struct fc_frame_header *fc_hdr)
void
lpfc_sli4_handle_unsol_abort(struct lpfc_vport *vport,
struct hbq_dmabuf *dmabuf)
static int
lpfc_seq_complete(struct hbq_dmabuf *dmabuf)
static struct lpfc_iocbq *
lpfc_prep_seq(struct lpfc_vport *vport, struct hbq_dmabuf *seq_dmabuf)
static void
lpfc_sli4_send_seq_to_ulp(struct lpfc_vport *vport,
struct hbq_dmabuf *seq_dmabuf)
void
lpfc_sli4_handle_received_buffer(struct lpfc_hba *phba,
struct hbq_dmabuf *dmabuf)
int
lpfc_sli4_post_all_rpi_hdrs(struct lpfc_hba *phba)
int
lpfc_sli4_post_rpi_hdr(struct lpfc_hba *phba, struct lpfc_rpi_hdr *rpi_page)
int
lpfc_sli4_alloc_rpi(struct lpfc_hba *phba)
void
__lpfc_sli4_free_rpi(struct lpfc_hba *phba, int rpi)
void
lpfc_sli4_free_rpi(struct lpfc_hba *phba, int rpi)
void
lpfc_sli4_remove_rpis(struct lpfc_hba *phba)
int
lpfc_sli4_resume_rpi(struct lpfc_nodelist *ndlp)
int
lpfc_sli4_init_vpi(struct lpfc_vport *vport)
static void
lpfc_mbx_cmpl_add_fcf_record(struct lpfc_hba *phba, LPFC_MBOXQ_t *mboxq)
int
lpfc_sli4_add_fcf_record(struct lpfc_hba *phba, struct fcf_record *fcf_record)
void
lpfc_sli4_build_dflt_fcf_record(struct lpfc_hba *phba,
struct fcf_record *fcf_record,
uint16_t fcf_index)
int
lpfc_sli4_fcf_scan_read_fcf_rec(struct lpfc_hba *phba, uint16_t fcf_index)
int
lpfc_sli4_fcf_rr_read_fcf_rec(struct lpfc_hba *phba, uint16_t fcf_index)
int
lpfc_sli4_read_fcf_rec(struct lpfc_hba *phba, uint16_t fcf_index)
uint16_t
lpfc_sli4_fcf_rr_next_index_get(struct lpfc_hba *phba)
int
lpfc_sli4_fcf_rr_index_set(struct lpfc_hba *phba, uint16_t fcf_index)
void
lpfc_sli4_fcf_rr_index_clear(struct lpfc_hba *phba, uint16_t fcf_index)
void
lpfc_mbx_cmpl_redisc_fcf_table(struct lpfc_hba *phba, LPFC_MBOXQ_t *mbox)
int
lpfc_sli4_redisc_fcf_table(struct lpfc_hba *phba)
void
lpfc_sli4_fcf_dead_failthrough(struct lpfc_hba *phba)
void
lpfc_sli_read_link_ste(struct lpfc_hba *phba)
int
lpfc_wr_object(struct lpfc_hba *phba, struct list_head *dmabuf_list,
uint32_t size, uint32_t *offset)
void
lpfc_cleanup_pending_mbox(struct lpfc_vport *vport)
uint32_t
lpfc_drain_txq(struct lpfc_hba *phba)
