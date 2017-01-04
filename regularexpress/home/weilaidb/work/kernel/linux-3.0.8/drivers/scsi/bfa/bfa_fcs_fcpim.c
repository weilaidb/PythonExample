BFA_TRC_FILE(FCS, FCPIM);
static void	bfa_fcs_itnim_timeout(void *arg);
static void	bfa_fcs_itnim_free(struct bfa_fcs_itnim_s *itnim);
static void	bfa_fcs_itnim_send_prli(void *itnim_cbarg,
struct bfa_fcxp_s *fcxp_alloced);
static void	bfa_fcs_itnim_prli_response(void *fcsarg,
struct bfa_fcxp_s *fcxp, void *cbarg,
bfa_status_t req_status, u32 rsp_len,
u32 resid_len, struct fchs_s *rsp_fchs);
enum bfa_fcs_itnim_event ;
static void	bfa_fcs_itnim_sm_offline(struct bfa_fcs_itnim_s *itnim,
enum bfa_fcs_itnim_event event);
static void	bfa_fcs_itnim_sm_prli_send(struct bfa_fcs_itnim_s *itnim,
enum bfa_fcs_itnim_event event);
static void	bfa_fcs_itnim_sm_prli(struct bfa_fcs_itnim_s *itnim,
enum bfa_fcs_itnim_event event);
static void	bfa_fcs_itnim_sm_prli_retry(struct bfa_fcs_itnim_s *itnim,
enum bfa_fcs_itnim_event event);
static void	bfa_fcs_itnim_sm_hcb_online(struct bfa_fcs_itnim_s *itnim,
enum bfa_fcs_itnim_event event);
static void	bfa_fcs_itnim_sm_online(struct bfa_fcs_itnim_s *itnim,
enum bfa_fcs_itnim_event event);
static void	bfa_fcs_itnim_sm_hcb_offline(struct bfa_fcs_itnim_s *itnim,
enum bfa_fcs_itnim_event event);
static void	bfa_fcs_itnim_sm_initiator(struct bfa_fcs_itnim_s *itnim,
enum bfa_fcs_itnim_event event);
static struct bfa_sm_table_s itnim_sm_table[] = ;
static void
bfa_fcs_itnim_sm_offline(struct bfa_fcs_itnim_s *itnim,
enum bfa_fcs_itnim_event event)
static void
bfa_fcs_itnim_sm_prli_send(struct bfa_fcs_itnim_s *itnim,
enum bfa_fcs_itnim_event event)
static void
bfa_fcs_itnim_sm_prli(struct bfa_fcs_itnim_s *itnim,
enum bfa_fcs_itnim_event event)
static void
bfa_fcs_itnim_sm_prli_retry(struct bfa_fcs_itnim_s *itnim,
enum bfa_fcs_itnim_event event)
static void
bfa_fcs_itnim_sm_hcb_online(struct bfa_fcs_itnim_s *itnim,
enum bfa_fcs_itnim_event event)
static void
bfa_fcs_itnim_sm_online(struct bfa_fcs_itnim_s *itnim,
enum bfa_fcs_itnim_event event)
static void
bfa_fcs_itnim_sm_hcb_offline(struct bfa_fcs_itnim_s *itnim,
enum bfa_fcs_itnim_event event)
static void
bfa_fcs_itnim_sm_initiator(struct bfa_fcs_itnim_s *itnim,
enum bfa_fcs_itnim_event event)
static void
bfa_fcs_itnim_send_prli(void *itnim_cbarg, struct bfa_fcxp_s *fcxp_alloced)
static void
bfa_fcs_itnim_prli_response(void *fcsarg, struct bfa_fcxp_s *fcxp, void *cbarg,
bfa_status_t req_status, u32 rsp_len,
u32 resid_len, struct fchs_s *rsp_fchs)
static void
bfa_fcs_itnim_timeout(void *arg)
static void
bfa_fcs_itnim_free(struct bfa_fcs_itnim_s *itnim)
struct bfa_fcs_itnim_s *
bfa_fcs_itnim_create(struct bfa_fcs_rport_s *rport)
void
bfa_fcs_itnim_delete(struct bfa_fcs_itnim_s *itnim)
void
bfa_fcs_itnim_rport_online(struct bfa_fcs_itnim_s *itnim)
void
bfa_fcs_itnim_rport_offline(struct bfa_fcs_itnim_s *itnim)
void
bfa_fcs_itnim_is_initiator(struct bfa_fcs_itnim_s *itnim)
bfa_status_t
bfa_fcs_itnim_get_online_state(struct bfa_fcs_itnim_s *itnim)
void
bfa_cb_itnim_online(void *cbarg)
void
bfa_cb_itnim_offline(void *cb_arg)
void
bfa_cb_itnim_tov_begin(void *cb_arg)
void
bfa_cb_itnim_tov(void *cb_arg)
void
bfa_cb_itnim_sler(void *cb_arg)
struct bfa_fcs_itnim_s *
bfa_fcs_itnim_lookup(struct bfa_fcs_lport_s *port, wwn_t rpwwn)
bfa_status_t
bfa_fcs_itnim_attr_get(struct bfa_fcs_lport_s *port, wwn_t rpwwn,
struct bfa_itnim_attr_s *attr)
bfa_status_t
bfa_fcs_itnim_stats_get(struct bfa_fcs_lport_s *port, wwn_t rpwwn,
struct bfa_itnim_stats_s *stats)
bfa_status_t
bfa_fcs_itnim_stats_clear(struct bfa_fcs_lport_s *port, wwn_t rpwwn)
void
bfa_fcs_fcpim_uf_recv(struct bfa_fcs_itnim_s *itnim,
struct fchs_s *fchs, u16 len)
