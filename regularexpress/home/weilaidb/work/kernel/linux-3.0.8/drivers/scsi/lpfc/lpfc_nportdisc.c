static int
lpfc_check_adisc(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
struct lpfc_name *nn, struct lpfc_name *pn)
int
lpfc_check_sparm(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
struct serv_parm *sp, uint32_t class, int flogi)
static void *
lpfc_check_elscmpl_iocb(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
int
lpfc_els_abort(struct lpfc_hba *phba, struct lpfc_nodelist *ndlp)
static int
lpfc_rcv_plogi(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
struct lpfc_iocbq *cmdiocb)
static int
lpfc_rcv_padisc(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
struct lpfc_iocbq *cmdiocb)
static int
lpfc_rcv_logo(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
struct lpfc_iocbq *cmdiocb, uint32_t els_cmd)
static void
lpfc_rcv_prli(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
struct lpfc_iocbq *cmdiocb)
static uint32_t
lpfc_disc_set_adisc(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp)
void
lpfc_release_rpi(struct lpfc_hba *phba,
struct lpfc_vport *vport,
uint16_t rpi)
static uint32_t
lpfc_disc_illegal(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_cmpl_plogi_illegal(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_plogi_unused_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_els_unused_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_logo_unused_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_cmpl_logo_unused_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_device_rm_unused_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_plogi_plogi_issue(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_prli_plogi_issue(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_logo_plogi_issue(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_els_plogi_issue(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_cmpl_plogi_plogi_issue(struct lpfc_vport *vport,
struct lpfc_nodelist *ndlp,
void *arg,
uint32_t evt)
static uint32_t
lpfc_cmpl_logo_plogi_issue(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_cmpl_reglogin_plogi_issue(struct lpfc_vport *vport,
struct lpfc_nodelist *ndlp, void *arg, uint32_t evt)
static uint32_t
lpfc_device_rm_plogi_issue(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_device_recov_plogi_issue(struct lpfc_vport *vport,
struct lpfc_nodelist *ndlp,
void *arg,
uint32_t evt)
static uint32_t
lpfc_rcv_plogi_adisc_issue(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_prli_adisc_issue(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_logo_adisc_issue(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_padisc_adisc_issue(struct lpfc_vport *vport,
struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_prlo_adisc_issue(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_cmpl_adisc_adisc_issue(struct lpfc_vport *vport,
struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_device_rm_adisc_issue(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_device_recov_adisc_issue(struct lpfc_vport *vport,
struct lpfc_nodelist *ndlp,
void *arg,
uint32_t evt)
static uint32_t
lpfc_rcv_plogi_reglogin_issue(struct lpfc_vport *vport,
struct lpfc_nodelist *ndlp,
void *arg,
uint32_t evt)
static uint32_t
lpfc_rcv_prli_reglogin_issue(struct lpfc_vport *vport,
struct lpfc_nodelist *ndlp,
void *arg,
uint32_t evt)
static uint32_t
lpfc_rcv_logo_reglogin_issue(struct lpfc_vport *vport,
struct lpfc_nodelist *ndlp,
void *arg,
uint32_t evt)
static uint32_t
lpfc_rcv_padisc_reglogin_issue(struct lpfc_vport *vport,
struct lpfc_nodelist *ndlp,
void *arg,
uint32_t evt)
static uint32_t
lpfc_rcv_prlo_reglogin_issue(struct lpfc_vport *vport,
struct lpfc_nodelist *ndlp,
void *arg,
uint32_t evt)
static uint32_t
lpfc_cmpl_reglogin_reglogin_issue(struct lpfc_vport *vport,
struct lpfc_nodelist *ndlp,
void *arg,
uint32_t evt)
static uint32_t
lpfc_device_rm_reglogin_issue(struct lpfc_vport *vport,
struct lpfc_nodelist *ndlp,
void *arg,
uint32_t evt)
static uint32_t
lpfc_device_recov_reglogin_issue(struct lpfc_vport *vport,
struct lpfc_nodelist *ndlp,
void *arg,
uint32_t evt)
static uint32_t
lpfc_rcv_plogi_prli_issue(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_prli_prli_issue(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_logo_prli_issue(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_padisc_prli_issue(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_prlo_prli_issue(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_cmpl_prli_prli_issue(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_device_rm_prli_issue(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_device_recov_prli_issue(struct lpfc_vport *vport,
struct lpfc_nodelist *ndlp,
void *arg,
uint32_t evt)
static uint32_t
lpfc_rcv_plogi_unmap_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_prli_unmap_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_logo_unmap_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_padisc_unmap_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_prlo_unmap_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_device_recov_unmap_node(struct lpfc_vport *vport,
struct lpfc_nodelist *ndlp,
void *arg,
uint32_t evt)
static uint32_t
lpfc_rcv_plogi_mapped_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_prli_mapped_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_logo_mapped_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_padisc_mapped_node(struct lpfc_vport *vport,
struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_prlo_mapped_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_device_recov_mapped_node(struct lpfc_vport *vport,
struct lpfc_nodelist *ndlp,
void *arg,
uint32_t evt)
static uint32_t
lpfc_rcv_plogi_npr_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_prli_npr_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_logo_npr_node(struct lpfc_vport *vport,  struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_padisc_npr_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_rcv_prlo_npr_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_cmpl_plogi_npr_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_cmpl_prli_npr_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_cmpl_logo_npr_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_cmpl_adisc_npr_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_cmpl_reglogin_npr_node(struct lpfc_vport *vport,
struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_device_rm_npr_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t
lpfc_device_recov_npr_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
static uint32_t (*lpfc_disc_action[NLP_STE_MAX_STATE * NLP_EVT_MAX_EVENT])
(struct lpfc_vport *, struct lpfc_nodelist *, void *, uint32_t) = ;
int
lpfc_disc_state_machine(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
void *arg, uint32_t evt)
