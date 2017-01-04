static int lpfc_els_retry(struct lpfc_hba *, struct lpfc_iocbq *,
struct lpfc_iocbq *);
static void lpfc_cmpl_fabric_iocb(struct lpfc_hba *, struct lpfc_iocbq *,
struct lpfc_iocbq *);
static void lpfc_fabric_abort_vport(struct lpfc_vport *vport);
static int lpfc_issue_els_fdisc(struct lpfc_vport *vport,
struct lpfc_nodelist *ndlp, uint8_t retry);
static int lpfc_issue_fabric_iocb(struct lpfc_hba *phba,
struct lpfc_iocbq *iocb);
static int lpfc_max_els_tries = 3;
int
lpfc_els_chk_latt(struct lpfc_vport *vport)
struct lpfc_iocbq *
lpfc_prep_els_iocb(struct lpfc_vport *vport, uint8_t expectRsp,
uint16_t cmdSize, uint8_t retry,
struct lpfc_nodelist *ndlp, uint32_t did,
uint32_t elscmd)
int
lpfc_issue_fabric_reglogin(struct lpfc_vport *vport)
static int
lpfc_issue_reg_vfi(struct lpfc_vport *vport)
static uint8_t
lpfc_check_clean_addr_bit(struct lpfc_vport *vport,
struct serv_parm *sp)
static int
lpfc_cmpl_els_flogi_fabric(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
struct serv_parm *sp, IOCB_t *irsp)
static int
lpfc_cmpl_els_flogi_nport(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
struct serv_parm *sp)
static void
lpfc_cmpl_els_flogi(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
static int
lpfc_issue_els_flogi(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
uint8_t retry)
int
lpfc_els_abort_flogi(struct lpfc_hba *phba)
int
lpfc_initial_flogi(struct lpfc_vport *vport)
int
lpfc_initial_fdisc(struct lpfc_vport *vport)
void
lpfc_more_plogi(struct lpfc_vport *vport)
static struct lpfc_nodelist *
lpfc_plogi_confirm_nport(struct lpfc_hba *phba, uint32_t *prsp,
struct lpfc_nodelist *ndlp)
void
lpfc_end_rscn(struct lpfc_vport *vport)
static void
lpfc_cmpl_els_rrq(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
static void
lpfc_cmpl_els_plogi(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
int
lpfc_issue_els_plogi(struct lpfc_vport *vport, uint32_t did, uint8_t retry)
static void
lpfc_cmpl_els_prli(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
int
lpfc_issue_els_prli(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
uint8_t retry)
static void
lpfc_rscn_disc(struct lpfc_vport *vport)
static void
lpfc_adisc_done(struct lpfc_vport *vport)
void
lpfc_more_adisc(struct lpfc_vport *vport)
static void
lpfc_cmpl_els_adisc(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
int
lpfc_issue_els_adisc(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
uint8_t retry)
static void
lpfc_cmpl_els_logo(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
int
lpfc_issue_els_logo(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
uint8_t retry)
static void
lpfc_cmpl_els_cmd(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
int
lpfc_issue_els_scr(struct lpfc_vport *vport, uint32_t nportid, uint8_t retry)
static int
lpfc_issue_els_farpr(struct lpfc_vport *vport, uint32_t nportid, uint8_t retry)
void
lpfc_cancel_retry_delay_tmo(struct lpfc_vport *vport, struct lpfc_nodelist *nlp)
void
lpfc_els_retry_delay(unsigned long ptr)
void
lpfc_els_retry_delay_handler(struct lpfc_nodelist *ndlp)
static int
lpfc_els_retry(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
static int
lpfc_els_free_data(struct lpfc_hba *phba, struct lpfc_dmabuf *buf_ptr1)
static int
lpfc_els_free_bpl(struct lpfc_hba *phba, struct lpfc_dmabuf *buf_ptr)
int
lpfc_els_free_iocb(struct lpfc_hba *phba, struct lpfc_iocbq *elsiocb)
static void
lpfc_cmpl_els_logo_acc(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
void
lpfc_mbx_cmpl_dflt_rpi(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmb)
static void
lpfc_cmpl_els_rsp(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
int
lpfc_els_rsp_acc(struct lpfc_vport *vport, uint32_t flag,
struct lpfc_iocbq *oldiocb, struct lpfc_nodelist *ndlp,
LPFC_MBOXQ_t *mbox)
int
lpfc_els_rsp_reject(struct lpfc_vport *vport, uint32_t rejectError,
struct lpfc_iocbq *oldiocb, struct lpfc_nodelist *ndlp,
LPFC_MBOXQ_t *mbox)
int
lpfc_els_rsp_adisc_acc(struct lpfc_vport *vport, struct lpfc_iocbq *oldiocb,
struct lpfc_nodelist *ndlp)
int
lpfc_els_rsp_prli_acc(struct lpfc_vport *vport, struct lpfc_iocbq *oldiocb,
struct lpfc_nodelist *ndlp)
static int
lpfc_els_rsp_rnid_acc(struct lpfc_vport *vport, uint8_t format,
struct lpfc_iocbq *oldiocb, struct lpfc_nodelist *ndlp)
static void
lpfc_els_clear_rrq(struct lpfc_vport *vport,
struct lpfc_iocbq *iocb, struct lpfc_nodelist *ndlp)
static int
lpfc_els_rsp_echo_acc(struct lpfc_vport *vport, uint8_t *data,
struct lpfc_iocbq *oldiocb, struct lpfc_nodelist *ndlp)
int
lpfc_els_disc_adisc(struct lpfc_vport *vport)
int
lpfc_els_disc_plogi(struct lpfc_vport *vport)
void
lpfc_els_flush_rscn(struct lpfc_vport *vport)
int
lpfc_rscn_payload_check(struct lpfc_vport *vport, uint32_t did)
static int
lpfc_rscn_recovery_check(struct lpfc_vport *vport)
static void
lpfc_send_rscn_event(struct lpfc_vport *vport,
struct lpfc_iocbq *cmdiocb)
static int
lpfc_els_rcv_rscn(struct lpfc_vport *vport, struct lpfc_iocbq *cmdiocb,
struct lpfc_nodelist *ndlp)
int
lpfc_els_handle_rscn(struct lpfc_vport *vport)
static int
lpfc_els_rcv_flogi(struct lpfc_vport *vport, struct lpfc_iocbq *cmdiocb,
struct lpfc_nodelist *ndlp)
static int
lpfc_els_rcv_rnid(struct lpfc_vport *vport, struct lpfc_iocbq *cmdiocb,
struct lpfc_nodelist *ndlp)
static int
lpfc_els_rcv_echo(struct lpfc_vport *vport, struct lpfc_iocbq *cmdiocb,
struct lpfc_nodelist *ndlp)
static int
lpfc_els_rcv_lirr(struct lpfc_vport *vport, struct lpfc_iocbq *cmdiocb,
struct lpfc_nodelist *ndlp)
static void
lpfc_els_rcv_rrq(struct lpfc_vport *vport, struct lpfc_iocbq *cmdiocb,
struct lpfc_nodelist *ndlp)
static void
lpfc_els_rsp_rls_acc(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmb)
static void
lpfc_els_rsp_rps_acc(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmb)
static int
lpfc_els_rcv_rls(struct lpfc_vport *vport, struct lpfc_iocbq *cmdiocb,
struct lpfc_nodelist *ndlp)
static int
lpfc_els_rcv_rtv(struct lpfc_vport *vport, struct lpfc_iocbq *cmdiocb,
struct lpfc_nodelist *ndlp)
static int
lpfc_els_rcv_rps(struct lpfc_vport *vport, struct lpfc_iocbq *cmdiocb,
struct lpfc_nodelist *ndlp)
static int
lpfc_issue_els_rrq(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
uint32_t did, struct lpfc_node_rrq *rrq)
int
lpfc_send_rrq(struct lpfc_hba *phba, struct lpfc_node_rrq *rrq)
static int
lpfc_els_rsp_rpl_acc(struct lpfc_vport *vport, uint16_t cmdsize,
struct lpfc_iocbq *oldiocb, struct lpfc_nodelist *ndlp)
static int
lpfc_els_rcv_rpl(struct lpfc_vport *vport, struct lpfc_iocbq *cmdiocb,
struct lpfc_nodelist *ndlp)
static int
lpfc_els_rcv_farp(struct lpfc_vport *vport, struct lpfc_iocbq *cmdiocb,
struct lpfc_nodelist *ndlp)
static int
lpfc_els_rcv_farpr(struct lpfc_vport *vport, struct lpfc_iocbq *cmdiocb,
struct lpfc_nodelist  *ndlp)
static int
lpfc_els_rcv_fan(struct lpfc_vport *vport, struct lpfc_iocbq *cmdiocb,
struct lpfc_nodelist *fan_ndlp)
void
lpfc_els_timeout(unsigned long ptr)
void
lpfc_els_timeout_handler(struct lpfc_vport *vport)
void
lpfc_els_flush_cmd(struct lpfc_vport *vport)
void
lpfc_els_flush_all_cmd(struct lpfc_hba  *phba)
void
lpfc_send_els_failure_event(struct lpfc_hba *phba,
struct lpfc_iocbq *cmdiocbp,
struct lpfc_iocbq *rspiocbp)
static void
lpfc_send_els_event(struct lpfc_vport *vport,
struct lpfc_nodelist *ndlp,
uint32_t *payload)
static void
lpfc_els_unsol_buffer(struct lpfc_hba *phba, struct lpfc_sli_ring *pring,
struct lpfc_vport *vport, struct lpfc_iocbq *elsiocb)
struct lpfc_vport *
lpfc_find_vport_by_vpid(struct lpfc_hba *phba, uint16_t vpi)
void
lpfc_els_unsol_event(struct lpfc_hba *phba, struct lpfc_sli_ring *pring,
struct lpfc_iocbq *elsiocb)
void
lpfc_do_scr_ns_plogi(struct lpfc_hba *phba, struct lpfc_vport *vport)
static void
lpfc_cmpl_reg_new_vport(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmb)
void
lpfc_register_new_vport(struct lpfc_hba *phba, struct lpfc_vport *vport,
struct lpfc_nodelist *ndlp)
void
lpfc_cancel_all_vport_retry_delay_timer(struct lpfc_hba *phba)
void
lpfc_retry_pport_discovery(struct lpfc_hba *phba)
static int
lpfc_fabric_login_reqd(struct lpfc_hba *phba,
struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
static void
lpfc_cmpl_els_fdisc(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
static int
lpfc_issue_els_fdisc(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
uint8_t retry)
static void
lpfc_cmpl_els_npiv_logo(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
int
lpfc_issue_els_npiv_logo(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp)
void
lpfc_fabric_block_timeout(unsigned long ptr)
static void
lpfc_resume_fabric_iocbs(struct lpfc_hba *phba)
void
lpfc_unblock_fabric_iocbs(struct lpfc_hba *phba)
static void
lpfc_block_fabric_iocbs(struct lpfc_hba *phba)
static void
lpfc_cmpl_fabric_iocb(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
static int
lpfc_issue_fabric_iocb(struct lpfc_hba *phba, struct lpfc_iocbq *iocb)
static void lpfc_fabric_abort_vport(struct lpfc_vport *vport)
void lpfc_fabric_abort_nport(struct lpfc_nodelist *ndlp)
void lpfc_fabric_abort_hba(struct lpfc_hba *phba)
void
lpfc_sli4_vport_delete_els_xri_aborted(struct lpfc_vport *vport)
void
lpfc_sli4_els_xri_aborted(struct lpfc_hba *phba,
struct sli4_wcqe_xri_aborted *axri)
