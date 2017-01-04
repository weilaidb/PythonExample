BFA_TRC_FILE(FCS, FCS);
struct bfa_fcs_mod_s ;
#define BFA_FCS_MODULE(_mod)
static struct bfa_fcs_mod_s fcs_modules[] = ;
static void
bfa_fcs_exit_comp(void *fcs_cbarg)
void
bfa_fcs_attach(struct bfa_fcs_s *fcs, struct bfa_s *bfa, struct bfad_s *bfad,
bfa_boolean_t min_cfg)
void
bfa_fcs_init(struct bfa_fcs_s *fcs)
void
bfa_fcs_driver_info_init(struct bfa_fcs_s *fcs,
struct bfa_fcs_driver_info_s *driver_info)
void
bfa_fcs_exit(struct bfa_fcs_s *fcs)
#define BFA_FCS_FABRIC_RETRY_DELAY	(2000)
#define BFA_FCS_FABRIC_CLEANUP_DELAY	(10000)
#define bfa_fcs_fabric_set_opertype(__fabric) do  while (0)
static void bfa_fcs_fabric_init(struct bfa_fcs_fabric_s *fabric);
static void bfa_fcs_fabric_login(struct bfa_fcs_fabric_s *fabric);
static void bfa_fcs_fabric_notify_online(struct bfa_fcs_fabric_s *fabric);
static void bfa_fcs_fabric_notify_offline(struct bfa_fcs_fabric_s *fabric);
static void bfa_fcs_fabric_delay(void *cbarg);
static void bfa_fcs_fabric_delete(struct bfa_fcs_fabric_s *fabric);
static void bfa_fcs_fabric_delete_comp(void *cbarg);
static void bfa_fcs_fabric_process_uf(struct bfa_fcs_fabric_s *fabric,
struct fchs_s *fchs, u16 len);
static void bfa_fcs_fabric_process_flogi(struct bfa_fcs_fabric_s *fabric,
struct fchs_s *fchs, u16 len);
static void bfa_fcs_fabric_send_flogi_acc(struct bfa_fcs_fabric_s *fabric);
static void bfa_fcs_fabric_flogiacc_comp(void *fcsarg,
struct bfa_fcxp_s *fcxp, void *cbarg,
bfa_status_t status,
u32 rsp_len,
u32 resid_len,
struct fchs_s *rspfchs);
static void	bfa_fcs_fabric_sm_uninit(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event);
static void	bfa_fcs_fabric_sm_created(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event);
static void	bfa_fcs_fabric_sm_linkdown(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event);
static void	bfa_fcs_fabric_sm_flogi(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event);
static void	bfa_fcs_fabric_sm_flogi_retry(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event);
static void	bfa_fcs_fabric_sm_auth(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event);
static void	bfa_fcs_fabric_sm_nofabric(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event);
static void	bfa_fcs_fabric_sm_evfp(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event);
static void	bfa_fcs_fabric_sm_evfp_done(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event);
static void	bfa_fcs_fabric_sm_isolated(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event);
static void	bfa_fcs_fabric_sm_deleting(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event);
static void
bfa_fcs_fabric_sm_uninit(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event)
static void
bfa_fcs_fabric_sm_created(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event)
static void
bfa_fcs_fabric_sm_linkdown(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event)
static void
bfa_fcs_fabric_sm_flogi(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event)
static void
bfa_fcs_fabric_sm_flogi_retry(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event)
static void
bfa_fcs_fabric_sm_auth(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event)
void
bfa_fcs_fabric_sm_auth_failed(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event)
void
bfa_fcs_fabric_sm_loopback(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event)
static void
bfa_fcs_fabric_sm_nofabric(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event)
void
bfa_fcs_fabric_sm_online(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event)
static void
bfa_fcs_fabric_sm_evfp(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event)
static void
bfa_fcs_fabric_sm_evfp_done(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event)
static void
bfa_fcs_fabric_sm_isolated(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event)
static void
bfa_fcs_fabric_sm_deleting(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event)
static void
bfa_fcs_fabric_init(struct bfa_fcs_fabric_s *fabric)
void
bfa_fcs_fabric_psymb_init(struct bfa_fcs_fabric_s *fabric)
void
bfa_cb_lps_flogi_comp(void *bfad, void *uarg, bfa_status_t status)
static void
bfa_fcs_fabric_login(struct bfa_fcs_fabric_s *fabric)
static void
bfa_fcs_fabric_notify_online(struct bfa_fcs_fabric_s *fabric)
static void
bfa_fcs_fabric_notify_offline(struct bfa_fcs_fabric_s *fabric)
static void
bfa_fcs_fabric_delay(void *cbarg)
static void
bfa_fcs_fabric_delete(struct bfa_fcs_fabric_s *fabric)
static void
bfa_fcs_fabric_delete_comp(void *cbarg)
void
bfa_fcs_fabric_attach(struct bfa_fcs_s *fcs)
void
bfa_fcs_fabric_modinit(struct bfa_fcs_s *fcs)
void
bfa_fcs_fabric_modexit(struct bfa_fcs_s *fcs)
void
bfa_fcs_fabric_modstart(struct bfa_fcs_s *fcs)
void
bfa_fcs_fabric_link_up(struct bfa_fcs_fabric_s *fabric)
void
bfa_fcs_fabric_link_down(struct bfa_fcs_fabric_s *fabric)
void
bfa_fcs_fabric_addvport(struct bfa_fcs_fabric_s *fabric,
struct bfa_fcs_vport_s *vport)
void
bfa_fcs_fabric_delvport(struct bfa_fcs_fabric_s *fabric,
struct bfa_fcs_vport_s *vport)
struct bfa_fcs_vport_s *
bfa_fcs_fabric_vport_lookup(struct bfa_fcs_fabric_s *fabric, wwn_t pwwn)
u16
bfa_fcs_fabric_get_switch_oui(struct bfa_fcs_fabric_s *fabric)
void
bfa_fcs_fabric_uf_recv(struct bfa_fcs_fabric_s *fabric, struct fchs_s *fchs,
u16 len)
static void
bfa_fcs_fabric_process_uf(struct bfa_fcs_fabric_s *fabric, struct fchs_s *fchs,
u16 len)
static void
bfa_fcs_fabric_process_flogi(struct bfa_fcs_fabric_s *fabric,
struct fchs_s *fchs, u16 len)
static void
bfa_fcs_fabric_send_flogi_acc(struct bfa_fcs_fabric_s *fabric)
static void
bfa_fcs_fabric_flogiacc_comp(void *fcsarg, struct bfa_fcxp_s *fcxp, void *cbarg,
bfa_status_t status, u32 rsp_len,
u32 resid_len, struct fchs_s *rspfchs)
void
bfa_fcs_fabric_set_fabric_name(struct bfa_fcs_fabric_s *fabric,
wwn_t fabric_name)
bfa_fcs_vf_t   *
bfa_fcs_vf_lookup(struct bfa_fcs_s *fcs, u16 vf_id)
static void
bfa_fcs_port_event_handler(void *cbarg, enum bfa_port_linkstate event)
void
bfa_fcs_port_attach(struct bfa_fcs_s *fcs)
static void
bfa_fcs_uf_recv(void *cbarg, struct bfa_uf_s *uf)
void
bfa_fcs_uf_attach(struct bfa_fcs_s *fcs)
