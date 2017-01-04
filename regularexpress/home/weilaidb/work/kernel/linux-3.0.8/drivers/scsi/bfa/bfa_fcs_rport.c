BFA_TRC_FILE(FCS, RPORT);
static u32
bfa_fcs_rport_del_timeout = BFA_FCS_RPORT_DEF_DEL_TIMEOUT * 1000;
static struct bfa_fcs_rport_s *bfa_fcs_rport_alloc(
struct bfa_fcs_lport_s *port, wwn_t pwwn, u32 rpid);
static void	bfa_fcs_rport_free(struct bfa_fcs_rport_s *rport);
static void	bfa_fcs_rport_hal_online(struct bfa_fcs_rport_s *rport);
static void	bfa_fcs_rport_online_action(struct bfa_fcs_rport_s *rport);
static void	bfa_fcs_rport_offline_action(struct bfa_fcs_rport_s *rport);
static void	bfa_fcs_rport_update(struct bfa_fcs_rport_s *rport,
struct fc_logi_s *plogi);
static void	bfa_fcs_rport_timeout(void *arg);
static void	bfa_fcs_rport_send_plogi(void *rport_cbarg,
struct bfa_fcxp_s *fcxp_alloced);
static void	bfa_fcs_rport_send_plogiacc(void *rport_cbarg,
struct bfa_fcxp_s *fcxp_alloced);
static void	bfa_fcs_rport_plogi_response(void *fcsarg,
struct bfa_fcxp_s *fcxp, void *cbarg,
bfa_status_t req_status, u32 rsp_len,
u32 resid_len, struct fchs_s *rsp_fchs);
static void	bfa_fcs_rport_send_adisc(void *rport_cbarg,
struct bfa_fcxp_s *fcxp_alloced);
static void	bfa_fcs_rport_adisc_response(void *fcsarg,
struct bfa_fcxp_s *fcxp, void *cbarg,
bfa_status_t req_status, u32 rsp_len,
u32 resid_len, struct fchs_s *rsp_fchs);
static void	bfa_fcs_rport_send_nsdisc(void *rport_cbarg,
struct bfa_fcxp_s *fcxp_alloced);
static void	bfa_fcs_rport_gidpn_response(void *fcsarg,
struct bfa_fcxp_s *fcxp, void *cbarg,
bfa_status_t req_status, u32 rsp_len,
u32 resid_len, struct fchs_s *rsp_fchs);
static void	bfa_fcs_rport_gpnid_response(void *fcsarg,
struct bfa_fcxp_s *fcxp, void *cbarg,
bfa_status_t req_status, u32 rsp_len,
u32 resid_len, struct fchs_s *rsp_fchs);
static void	bfa_fcs_rport_send_logo(void *rport_cbarg,
struct bfa_fcxp_s *fcxp_alloced);
static void	bfa_fcs_rport_send_logo_acc(void *rport_cbarg);
static void	bfa_fcs_rport_process_prli(struct bfa_fcs_rport_s *rport,
struct fchs_s *rx_fchs, u16 len);
static void	bfa_fcs_rport_send_ls_rjt(struct bfa_fcs_rport_s *rport,
struct fchs_s *rx_fchs, u8 reason_code,
u8 reason_code_expl);
static void	bfa_fcs_rport_process_adisc(struct bfa_fcs_rport_s *rport,
struct fchs_s *rx_fchs, u16 len);
static void bfa_fcs_rport_send_prlo_acc(struct bfa_fcs_rport_s *rport);
static void	bfa_fcs_rport_sm_uninit(struct bfa_fcs_rport_s *rport,
enum rport_event event);
static void	bfa_fcs_rport_sm_plogi_sending(struct bfa_fcs_rport_s *rport,
enum rport_event event);
static void	bfa_fcs_rport_sm_plogiacc_sending(struct bfa_fcs_rport_s *rport,
enum rport_event event);
static void	bfa_fcs_rport_sm_plogi_retry(struct bfa_fcs_rport_s *rport,
enum rport_event event);
static void	bfa_fcs_rport_sm_plogi(struct bfa_fcs_rport_s *rport,
enum rport_event event);
static void	bfa_fcs_rport_sm_hal_online(struct bfa_fcs_rport_s *rport,
enum rport_event event);
static void	bfa_fcs_rport_sm_online(struct bfa_fcs_rport_s *rport,
enum rport_event event);
static void	bfa_fcs_rport_sm_nsquery_sending(struct bfa_fcs_rport_s *rport,
enum rport_event event);
static void	bfa_fcs_rport_sm_nsquery(struct bfa_fcs_rport_s *rport,
enum rport_event event);
static void	bfa_fcs_rport_sm_adisc_sending(struct bfa_fcs_rport_s *rport,
enum rport_event event);
static void	bfa_fcs_rport_sm_adisc(struct bfa_fcs_rport_s *rport,
enum rport_event event);
static void	bfa_fcs_rport_sm_fc4_logorcv(struct bfa_fcs_rport_s *rport,
enum rport_event event);
static void	bfa_fcs_rport_sm_fc4_logosend(struct bfa_fcs_rport_s *rport,
enum rport_event event);
static void	bfa_fcs_rport_sm_fc4_offline(struct bfa_fcs_rport_s *rport,
enum rport_event event);
static void	bfa_fcs_rport_sm_hcb_offline(struct bfa_fcs_rport_s *rport,
enum rport_event event);
static void	bfa_fcs_rport_sm_hcb_logorcv(struct bfa_fcs_rport_s *rport,
enum rport_event event);
static void	bfa_fcs_rport_sm_hcb_logosend(struct bfa_fcs_rport_s *rport,
enum rport_event event);
static void	bfa_fcs_rport_sm_logo_sending(struct bfa_fcs_rport_s *rport,
enum rport_event event);
static void	bfa_fcs_rport_sm_offline(struct bfa_fcs_rport_s *rport,
enum rport_event event);
static void	bfa_fcs_rport_sm_nsdisc_sending(struct bfa_fcs_rport_s *rport,
enum rport_event event);
static void	bfa_fcs_rport_sm_nsdisc_retry(struct bfa_fcs_rport_s *rport,
enum rport_event event);
static void	bfa_fcs_rport_sm_nsdisc_sent(struct bfa_fcs_rport_s *rport,
enum rport_event event);
static void	bfa_fcs_rport_sm_nsdisc_sent(struct bfa_fcs_rport_s *rport,
enum rport_event event);
static struct bfa_sm_table_s rport_sm_table[] = ;
static void
bfa_fcs_rport_sm_uninit(struct bfa_fcs_rport_s *rport, enum rport_event event)
static void
bfa_fcs_rport_sm_plogi_sending(struct bfa_fcs_rport_s *rport,
enum rport_event event)
static void
bfa_fcs_rport_sm_plogiacc_sending(struct bfa_fcs_rport_s *rport,
enum rport_event event)
static void
bfa_fcs_rport_sm_plogi_retry(struct bfa_fcs_rport_s *rport,
enum rport_event event)
static void
bfa_fcs_rport_sm_plogi(struct bfa_fcs_rport_s *rport, enum rport_event event)
static void
bfa_fcs_rport_sm_hal_online(struct bfa_fcs_rport_s *rport,
enum rport_event event)
static void
bfa_fcs_rport_sm_online(struct bfa_fcs_rport_s *rport, enum rport_event event)
static void
bfa_fcs_rport_sm_nsquery_sending(struct bfa_fcs_rport_s *rport,
enum rport_event event)
static void
bfa_fcs_rport_sm_nsquery(struct bfa_fcs_rport_s *rport, enum rport_event event)
static void
bfa_fcs_rport_sm_adisc_sending(struct bfa_fcs_rport_s *rport,
enum rport_event event)
static void
bfa_fcs_rport_sm_adisc(struct bfa_fcs_rport_s *rport, enum rport_event event)
static void
bfa_fcs_rport_sm_fc4_logorcv(struct bfa_fcs_rport_s *rport,
enum rport_event event)
static void
bfa_fcs_rport_sm_fc4_logosend(struct bfa_fcs_rport_s *rport,
enum rport_event event)
static void
bfa_fcs_rport_sm_fc4_offline(struct bfa_fcs_rport_s *rport,
enum rport_event event)
static void
bfa_fcs_rport_sm_hcb_offline(struct bfa_fcs_rport_s *rport,
enum rport_event event)
static void
bfa_fcs_rport_sm_hcb_logorcv(struct bfa_fcs_rport_s *rport,
enum rport_event event)
static void
bfa_fcs_rport_sm_hcb_logosend(struct bfa_fcs_rport_s *rport,
enum rport_event event)
static void
bfa_fcs_rport_sm_logo_sending(struct bfa_fcs_rport_s *rport,
enum rport_event event)
static void
bfa_fcs_rport_sm_offline(struct bfa_fcs_rport_s *rport, enum rport_event event)
static void
bfa_fcs_rport_sm_nsdisc_sending(struct bfa_fcs_rport_s *rport,
enum rport_event event)
static void
bfa_fcs_rport_sm_nsdisc_retry(struct bfa_fcs_rport_s *rport,
enum rport_event event)
static void
bfa_fcs_rport_sm_nsdisc_sent(struct bfa_fcs_rport_s *rport,
enum rport_event event)
static void
bfa_fcs_rport_send_plogi(void *rport_cbarg, struct bfa_fcxp_s *fcxp_alloced)
static void
bfa_fcs_rport_plogi_response(void *fcsarg, struct bfa_fcxp_s *fcxp, void *cbarg,
bfa_status_t req_status, u32 rsp_len,
u32 resid_len, struct fchs_s *rsp_fchs)
static void
bfa_fcs_rport_send_plogiacc(void *rport_cbarg, struct bfa_fcxp_s *fcxp_alloced)
static void
bfa_fcs_rport_send_adisc(void *rport_cbarg, struct bfa_fcxp_s *fcxp_alloced)
static void
bfa_fcs_rport_adisc_response(void *fcsarg, struct bfa_fcxp_s *fcxp, void *cbarg,
bfa_status_t req_status, u32 rsp_len,
u32 resid_len, struct fchs_s *rsp_fchs)
static void
bfa_fcs_rport_send_nsdisc(void *rport_cbarg, struct bfa_fcxp_s *fcxp_alloced)
static void
bfa_fcs_rport_gidpn_response(void *fcsarg, struct bfa_fcxp_s *fcxp, void *cbarg,
bfa_status_t req_status, u32 rsp_len,
u32 resid_len, struct fchs_s *rsp_fchs)
static void
bfa_fcs_rport_gpnid_response(void *fcsarg, struct bfa_fcxp_s *fcxp, void *cbarg,
bfa_status_t req_status, u32 rsp_len,
u32 resid_len, struct fchs_s *rsp_fchs)
static void
bfa_fcs_rport_send_logo(void *rport_cbarg, struct bfa_fcxp_s *fcxp_alloced)
static void
bfa_fcs_rport_send_logo_acc(void *rport_cbarg)
static void
bfa_fcs_rport_timeout(void *arg)
static void
bfa_fcs_rport_process_prli(struct bfa_fcs_rport_s *rport,
struct fchs_s *rx_fchs, u16 len)
static void
bfa_fcs_rport_process_rpsc(struct bfa_fcs_rport_s *rport,
struct fchs_s *rx_fchs, u16 len)
static void
bfa_fcs_rport_process_adisc(struct bfa_fcs_rport_s *rport,
struct fchs_s *rx_fchs, u16 len)
static void
bfa_fcs_rport_hal_online(struct bfa_fcs_rport_s *rport)
static struct bfa_fcs_rport_s *
bfa_fcs_rport_alloc(struct bfa_fcs_lport_s *port, wwn_t pwwn, u32 rpid)
static void
bfa_fcs_rport_free(struct bfa_fcs_rport_s *rport)
static void
bfa_fcs_rport_online_action(struct bfa_fcs_rport_s *rport)
static void
bfa_fcs_rport_offline_action(struct bfa_fcs_rport_s *rport)
static void
bfa_fcs_rport_update(struct bfa_fcs_rport_s *rport, struct fc_logi_s *plogi)
static void
bfa_fcs_rport_process_logo(struct bfa_fcs_rport_s *rport, struct fchs_s *fchs)
struct bfa_fcs_rport_s *
bfa_fcs_rport_create(struct bfa_fcs_lport_s *port, u32 rpid)
struct bfa_fcs_rport_s *
bfa_fcs_rport_create_by_wwn(struct bfa_fcs_lport_s *port, wwn_t rpwwn)
void
bfa_fcs_rport_start(struct bfa_fcs_lport_s *port, struct fchs_s *fchs,
struct fc_logi_s *plogi)
void
bfa_fcs_rport_plogi_create(struct bfa_fcs_lport_s *port, struct fchs_s *fchs,
struct fc_logi_s *plogi)
static int
wwn_compare(wwn_t wwn1, wwn_t wwn2)
void
bfa_fcs_rport_plogi(struct bfa_fcs_rport_s *rport, struct fchs_s *rx_fchs,
struct fc_logi_s *plogi)
void
bfa_fcs_rport_scn(struct bfa_fcs_rport_s *rport)
void
bfa_cb_rport_online(void *cbarg)
void
bfa_cb_rport_offline(void *cbarg)
void
bfa_cb_rport_qos_scn_flowid(void *cbarg,
struct bfa_rport_qos_attr_s old_qos_attr,
struct bfa_rport_qos_attr_s new_qos_attr)
void
bfa_cb_rport_qos_scn_prio(void *cbarg,
struct bfa_rport_qos_attr_s old_qos_attr,
struct bfa_rport_qos_attr_s new_qos_attr)
void
bfa_fcs_rport_uf_recv(struct bfa_fcs_rport_s *rport,
struct fchs_s *fchs, u16 len)
static void
bfa_fcs_rport_send_prlo_acc(struct bfa_fcs_rport_s *rport)
static void
bfa_fcs_rport_send_ls_rjt(struct bfa_fcs_rport_s *rport, struct fchs_s *rx_fchs,
u8 reason_code, u8 reason_code_expl)
int
bfa_fcs_rport_get_state(struct bfa_fcs_rport_s *rport)
void
bfa_fcs_rport_set_del_timeout(u8 rport_tmo)
void
bfa_fcs_rport_prlo(struct bfa_fcs_rport_s *rport, __be16 ox_id)
struct bfa_fcs_rport_s *
bfa_fcs_rport_lookup(struct bfa_fcs_lport_s *port, wwn_t rpwwn)
struct bfa_fcs_rport_s *
bfa_fcs_rport_lookup_by_nwwn(struct bfa_fcs_lport_s *port, wwn_t rnwwn)
#define BFA_FCS_RPF_RETRIES	(3)
#define BFA_FCS_RPF_RETRY_TIMEOUT  (1000)
static void     bfa_fcs_rpf_send_rpsc2(void *rport_cbarg,
struct bfa_fcxp_s *fcxp_alloced);
static void     bfa_fcs_rpf_rpsc2_response(void *fcsarg,
struct bfa_fcxp_s *fcxp,
void *cbarg,
bfa_status_t req_status,
u32 rsp_len,
u32 resid_len,
struct fchs_s *rsp_fchs);
static void     bfa_fcs_rpf_timeout(void *arg);
enum rpf_event ;
static void	bfa_fcs_rpf_sm_uninit(struct bfa_fcs_rpf_s *rpf,
enum rpf_event event);
static void     bfa_fcs_rpf_sm_rpsc_sending(struct bfa_fcs_rpf_s *rpf,
enum rpf_event event);
static void     bfa_fcs_rpf_sm_rpsc(struct bfa_fcs_rpf_s *rpf,
enum rpf_event event);
static void	bfa_fcs_rpf_sm_rpsc_retry(struct bfa_fcs_rpf_s *rpf,
enum rpf_event event);
static void     bfa_fcs_rpf_sm_offline(struct bfa_fcs_rpf_s *rpf,
enum rpf_event event);
static void     bfa_fcs_rpf_sm_online(struct bfa_fcs_rpf_s *rpf,
enum rpf_event event);
static void
bfa_fcs_rpf_sm_uninit(struct bfa_fcs_rpf_s *rpf, enum rpf_event event)
static void
bfa_fcs_rpf_sm_rpsc_sending(struct bfa_fcs_rpf_s *rpf, enum rpf_event event)
static void
bfa_fcs_rpf_sm_rpsc(struct bfa_fcs_rpf_s *rpf, enum rpf_event event)
static void
bfa_fcs_rpf_sm_rpsc_retry(struct bfa_fcs_rpf_s *rpf, enum rpf_event event)
static void
bfa_fcs_rpf_sm_online(struct bfa_fcs_rpf_s *rpf, enum rpf_event event)
static void
bfa_fcs_rpf_sm_offline(struct bfa_fcs_rpf_s *rpf, enum rpf_event event)
void
bfa_fcs_rpf_init(struct bfa_fcs_rport_s *rport)
void
bfa_fcs_rpf_rport_online(struct bfa_fcs_rport_s *rport)
void
bfa_fcs_rpf_rport_offline(struct bfa_fcs_rport_s *rport)
static void
bfa_fcs_rpf_timeout(void *arg)
static void
bfa_fcs_rpf_send_rpsc2(void *rpf_cbarg, struct bfa_fcxp_s *fcxp_alloced)
static void
bfa_fcs_rpf_rpsc2_response(void *fcsarg, struct bfa_fcxp_s *fcxp, void *cbarg,
bfa_status_t req_status, u32 rsp_len,
u32 resid_len, struct fchs_s *rsp_fchs)
