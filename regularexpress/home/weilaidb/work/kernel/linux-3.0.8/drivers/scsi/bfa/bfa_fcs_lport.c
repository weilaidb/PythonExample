BFA_TRC_FILE(FCS, PORT);
static void     bfa_fcs_lport_send_ls_rjt(struct bfa_fcs_lport_s *port,
struct fchs_s *rx_fchs, u8 reason_code,
u8 reason_code_expl);
static void     bfa_fcs_lport_plogi(struct bfa_fcs_lport_s *port,
struct fchs_s *rx_fchs, struct fc_logi_s *plogi);
static void     bfa_fcs_lport_online_actions(struct bfa_fcs_lport_s *port);
static void     bfa_fcs_lport_offline_actions(struct bfa_fcs_lport_s *port);
static void     bfa_fcs_lport_unknown_init(struct bfa_fcs_lport_s *port);
static void     bfa_fcs_lport_unknown_online(struct bfa_fcs_lport_s *port);
static void     bfa_fcs_lport_unknown_offline(struct bfa_fcs_lport_s *port);
static void     bfa_fcs_lport_deleted(struct bfa_fcs_lport_s *port);
static void     bfa_fcs_lport_echo(struct bfa_fcs_lport_s *port,
struct fchs_s *rx_fchs,
struct fc_echo_s *echo, u16 len);
static void     bfa_fcs_lport_rnid(struct bfa_fcs_lport_s *port,
struct fchs_s *rx_fchs,
struct fc_rnid_cmd_s *rnid, u16 len);
static void     bfa_fs_port_get_gen_topo_data(struct bfa_fcs_lport_s *port,
struct fc_rnid_general_topology_data_s *gen_topo_data);
static void	bfa_fcs_lport_fab_init(struct bfa_fcs_lport_s *port);
static void	bfa_fcs_lport_fab_online(struct bfa_fcs_lport_s *port);
static void	bfa_fcs_lport_fab_offline(struct bfa_fcs_lport_s *port);
static void	bfa_fcs_lport_n2n_init(struct bfa_fcs_lport_s *port);
static void	bfa_fcs_lport_n2n_online(struct bfa_fcs_lport_s *port);
static void	bfa_fcs_lport_n2n_offline(struct bfa_fcs_lport_s *port);
static struct  __port_action[] = ;
enum bfa_fcs_lport_event ;
static void     bfa_fcs_lport_sm_uninit(struct bfa_fcs_lport_s *port,
enum bfa_fcs_lport_event event);
static void     bfa_fcs_lport_sm_init(struct bfa_fcs_lport_s *port,
enum bfa_fcs_lport_event event);
static void     bfa_fcs_lport_sm_online(struct bfa_fcs_lport_s *port,
enum bfa_fcs_lport_event event);
static void     bfa_fcs_lport_sm_offline(struct bfa_fcs_lport_s *port,
enum bfa_fcs_lport_event event);
static void     bfa_fcs_lport_sm_deleting(struct bfa_fcs_lport_s *port,
enum bfa_fcs_lport_event event);
static void
bfa_fcs_lport_sm_uninit(
struct bfa_fcs_lport_s *port,
enum bfa_fcs_lport_event event)
static void
bfa_fcs_lport_sm_init(struct bfa_fcs_lport_s *port,
enum bfa_fcs_lport_event event)
static void
bfa_fcs_lport_sm_online(
struct bfa_fcs_lport_s *port,
enum bfa_fcs_lport_event event)
static void
bfa_fcs_lport_sm_offline(
struct bfa_fcs_lport_s *port,
enum bfa_fcs_lport_event event)
static void
bfa_fcs_lport_sm_deleting(
struct bfa_fcs_lport_s *port,
enum bfa_fcs_lport_event event)
static void
bfa_fcs_lport_send_ls_rjt(struct bfa_fcs_lport_s *port, struct fchs_s *rx_fchs,
u8 reason_code, u8 reason_code_expl)
static void
bfa_fcs_lport_plogi(struct bfa_fcs_lport_s *port,
struct fchs_s *rx_fchs, struct fc_logi_s *plogi)
static void
bfa_fcs_lport_echo(struct bfa_fcs_lport_s *port, struct fchs_s *rx_fchs,
struct fc_echo_s *echo, u16 rx_len)
static void
bfa_fcs_lport_rnid(struct bfa_fcs_lport_s *port, struct fchs_s *rx_fchs,
struct fc_rnid_cmd_s *rnid, u16 rx_len)
static void
bfa_fs_port_get_gen_topo_data(struct bfa_fcs_lport_s *port,
struct fc_rnid_general_topology_data_s *gen_topo_data)
static void
bfa_fcs_lport_online_actions(struct bfa_fcs_lport_s *port)
static void
bfa_fcs_lport_offline_actions(struct bfa_fcs_lport_s *port)
static void
bfa_fcs_lport_unknown_init(struct bfa_fcs_lport_s *port)
static void
bfa_fcs_lport_unknown_online(struct bfa_fcs_lport_s *port)
static void
bfa_fcs_lport_unknown_offline(struct bfa_fcs_lport_s *port)
static void
bfa_fcs_lport_abts_acc(struct bfa_fcs_lport_s *port, struct fchs_s *rx_fchs)
static void
bfa_fcs_lport_deleted(struct bfa_fcs_lport_s *port)
void
bfa_fcs_lport_uf_recv(struct bfa_fcs_lport_s *lport,
struct fchs_s *fchs, u16 len)
struct bfa_fcs_rport_s *
bfa_fcs_lport_get_rport_by_pid(struct bfa_fcs_lport_s *port, u32 pid)
struct bfa_fcs_rport_s *
bfa_fcs_lport_get_rport_by_pwwn(struct bfa_fcs_lport_s *port, wwn_t pwwn)
struct bfa_fcs_rport_s *
bfa_fcs_lport_get_rport_by_nwwn(struct bfa_fcs_lport_s *port, wwn_t nwwn)
void
bfa_fcs_lport_add_rport(
struct bfa_fcs_lport_s *port,
struct bfa_fcs_rport_s *rport)
void
bfa_fcs_lport_del_rport(
struct bfa_fcs_lport_s *port,
struct bfa_fcs_rport_s *rport)
void
bfa_fcs_lport_online(struct bfa_fcs_lport_s *port)
void
bfa_fcs_lport_offline(struct bfa_fcs_lport_s *port)
void
bfa_fcs_lport_delete(struct bfa_fcs_lport_s *port)
bfa_boolean_t
bfa_fcs_lport_is_online(struct bfa_fcs_lport_s *port)
void
bfa_fcs_lport_attach(struct bfa_fcs_lport_s *lport, struct bfa_fcs_s *fcs,
u16 vf_id, struct bfa_fcs_vport_s *vport)
void
bfa_fcs_lport_init(struct bfa_fcs_lport_s *lport,
struct bfa_lport_cfg_s *port_cfg)
void
bfa_fcs_lport_get_attr(
struct bfa_fcs_lport_s *port,
struct bfa_lport_attr_s *port_attr)
static void
bfa_fcs_lport_fab_init(struct bfa_fcs_lport_s *port)
static void
bfa_fcs_lport_fab_online(struct bfa_fcs_lport_s *port)
static void
bfa_fcs_lport_fab_offline(struct bfa_fcs_lport_s *port)
static void
bfa_fcs_lport_n2n_init(struct bfa_fcs_lport_s *port)
static void
bfa_fcs_lport_n2n_online(struct bfa_fcs_lport_s *port)
static void
bfa_fcs_lport_n2n_offline(struct bfa_fcs_lport_s *port)
#define BFA_FCS_FDMI_CMD_MAX_RETRIES 2
static void     bfa_fcs_lport_fdmi_send_rhba(void *fdmi_cbarg,
struct bfa_fcxp_s *fcxp_alloced);
static void     bfa_fcs_lport_fdmi_send_rprt(void *fdmi_cbarg,
struct bfa_fcxp_s *fcxp_alloced);
static void     bfa_fcs_lport_fdmi_send_rpa(void *fdmi_cbarg,
struct bfa_fcxp_s *fcxp_alloced);
static void     bfa_fcs_lport_fdmi_rhba_response(void *fcsarg,
struct bfa_fcxp_s *fcxp,
void *cbarg,
bfa_status_t req_status,
u32 rsp_len,
u32 resid_len,
struct fchs_s *rsp_fchs);
static void     bfa_fcs_lport_fdmi_rprt_response(void *fcsarg,
struct bfa_fcxp_s *fcxp,
void *cbarg,
bfa_status_t req_status,
u32 rsp_len,
u32 resid_len,
struct fchs_s *rsp_fchs);
static void     bfa_fcs_lport_fdmi_rpa_response(void *fcsarg,
struct bfa_fcxp_s *fcxp,
void *cbarg,
bfa_status_t req_status,
u32 rsp_len,
u32 resid_len,
struct fchs_s *rsp_fchs);
static void     bfa_fcs_lport_fdmi_timeout(void *arg);
static u16 bfa_fcs_lport_fdmi_build_rhba_pyld(struct bfa_fcs_lport_fdmi_s *fdmi,
u8 *pyld);
static u16 bfa_fcs_lport_fdmi_build_rprt_pyld(struct bfa_fcs_lport_fdmi_s *fdmi,
u8 *pyld);
static u16 bfa_fcs_lport_fdmi_build_rpa_pyld(struct bfa_fcs_lport_fdmi_s *fdmi,
u8 *pyld);
static u16 bfa_fcs_lport_fdmi_build_portattr_block(struct bfa_fcs_lport_fdmi_s *
fdmi, u8 *pyld);
static void	bfa_fcs_fdmi_get_hbaattr(struct bfa_fcs_lport_fdmi_s *fdmi,
struct bfa_fcs_fdmi_hba_attr_s *hba_attr);
static void	bfa_fcs_fdmi_get_portattr(struct bfa_fcs_lport_fdmi_s *fdmi,
struct bfa_fcs_fdmi_port_attr_s *port_attr);
enum port_fdmi_event ;
static void     bfa_fcs_lport_fdmi_sm_offline(struct bfa_fcs_lport_fdmi_s *fdmi,
enum port_fdmi_event event);
static void     bfa_fcs_lport_fdmi_sm_sending_rhba(
struct bfa_fcs_lport_fdmi_s *fdmi,
enum port_fdmi_event event);
static void     bfa_fcs_lport_fdmi_sm_rhba(struct bfa_fcs_lport_fdmi_s *fdmi,
enum port_fdmi_event event);
static void     bfa_fcs_lport_fdmi_sm_rhba_retry(
struct bfa_fcs_lport_fdmi_s *fdmi,
enum port_fdmi_event event);
static void     bfa_fcs_lport_fdmi_sm_sending_rprt(
struct bfa_fcs_lport_fdmi_s *fdmi,
enum port_fdmi_event event);
static void     bfa_fcs_lport_fdmi_sm_rprt(struct bfa_fcs_lport_fdmi_s *fdmi,
enum port_fdmi_event event);
static void     bfa_fcs_lport_fdmi_sm_rprt_retry(
struct bfa_fcs_lport_fdmi_s *fdmi,
enum port_fdmi_event event);
static void     bfa_fcs_lport_fdmi_sm_sending_rpa(
struct bfa_fcs_lport_fdmi_s *fdmi,
enum port_fdmi_event event);
static void     bfa_fcs_lport_fdmi_sm_rpa(struct bfa_fcs_lport_fdmi_s *fdmi,
enum port_fdmi_event event);
static void     bfa_fcs_lport_fdmi_sm_rpa_retry(
struct bfa_fcs_lport_fdmi_s *fdmi,
enum port_fdmi_event event);
static void     bfa_fcs_lport_fdmi_sm_online(struct bfa_fcs_lport_fdmi_s *fdmi,
enum port_fdmi_event event);
static void     bfa_fcs_lport_fdmi_sm_disabled(
struct bfa_fcs_lport_fdmi_s *fdmi,
enum port_fdmi_event event);
static void
bfa_fcs_lport_fdmi_sm_offline(struct bfa_fcs_lport_fdmi_s *fdmi,
enum port_fdmi_event event)
static void
bfa_fcs_lport_fdmi_sm_sending_rhba(struct bfa_fcs_lport_fdmi_s *fdmi,
enum port_fdmi_event event)
static void
bfa_fcs_lport_fdmi_sm_rhba(struct bfa_fcs_lport_fdmi_s *fdmi,
enum port_fdmi_event event)
static void
bfa_fcs_lport_fdmi_sm_rhba_retry(struct bfa_fcs_lport_fdmi_s *fdmi,
enum port_fdmi_event event)
static void
bfa_fcs_lport_fdmi_sm_sending_rprt(struct bfa_fcs_lport_fdmi_s *fdmi,
enum port_fdmi_event event)
static void
bfa_fcs_lport_fdmi_sm_rprt(struct bfa_fcs_lport_fdmi_s *fdmi,
enum port_fdmi_event event)
static void
bfa_fcs_lport_fdmi_sm_rprt_retry(struct bfa_fcs_lport_fdmi_s *fdmi,
enum port_fdmi_event event)
static void
bfa_fcs_lport_fdmi_sm_sending_rpa(struct bfa_fcs_lport_fdmi_s *fdmi,
enum port_fdmi_event event)
static void
bfa_fcs_lport_fdmi_sm_rpa(struct bfa_fcs_lport_fdmi_s *fdmi,
enum port_fdmi_event event)
static void
bfa_fcs_lport_fdmi_sm_rpa_retry(struct bfa_fcs_lport_fdmi_s *fdmi,
enum port_fdmi_event event)
static void
bfa_fcs_lport_fdmi_sm_online(struct bfa_fcs_lport_fdmi_s *fdmi,
enum port_fdmi_event event)
static void
bfa_fcs_lport_fdmi_sm_disabled(struct bfa_fcs_lport_fdmi_s *fdmi,
enum port_fdmi_event event)
static void
bfa_fcs_lport_fdmi_send_rhba(void *fdmi_cbarg, struct bfa_fcxp_s *fcxp_alloced)
static          u16
bfa_fcs_lport_fdmi_build_rhba_pyld(struct bfa_fcs_lport_fdmi_s *fdmi, u8 *pyld)
static void
bfa_fcs_lport_fdmi_rhba_response(void *fcsarg, struct bfa_fcxp_s *fcxp,
void *cbarg, bfa_status_t req_status,
u32 rsp_len, u32 resid_len,
struct fchs_s *rsp_fchs)
static void
bfa_fcs_lport_fdmi_send_rprt(void *fdmi_cbarg, struct bfa_fcxp_s *fcxp_alloced)
static          u16
bfa_fcs_lport_fdmi_build_portattr_block(struct bfa_fcs_lport_fdmi_s *fdmi,
u8 *pyld)
static          u16
bfa_fcs_lport_fdmi_build_rprt_pyld(struct bfa_fcs_lport_fdmi_s *fdmi, u8 *pyld)
static void
bfa_fcs_lport_fdmi_rprt_response(void *fcsarg, struct bfa_fcxp_s *fcxp,
void *cbarg, bfa_status_t req_status,
u32 rsp_len, u32 resid_len,
struct fchs_s *rsp_fchs)
static void
bfa_fcs_lport_fdmi_send_rpa(void *fdmi_cbarg, struct bfa_fcxp_s *fcxp_alloced)
static          u16
bfa_fcs_lport_fdmi_build_rpa_pyld(struct bfa_fcs_lport_fdmi_s *fdmi, u8 *pyld)
static void
bfa_fcs_lport_fdmi_rpa_response(void *fcsarg, struct bfa_fcxp_s *fcxp,
void *cbarg, bfa_status_t req_status, u32 rsp_len,
u32 resid_len, struct fchs_s *rsp_fchs)
static void
bfa_fcs_lport_fdmi_timeout(void *arg)
static void
bfa_fcs_fdmi_get_hbaattr(struct bfa_fcs_lport_fdmi_s *fdmi,
struct bfa_fcs_fdmi_hba_attr_s *hba_attr)
static void
bfa_fcs_fdmi_get_portattr(struct bfa_fcs_lport_fdmi_s *fdmi,
struct bfa_fcs_fdmi_port_attr_s *port_attr)
void
bfa_fcs_lport_fdmi_init(struct bfa_fcs_lport_ms_s *ms)
void
bfa_fcs_lport_fdmi_offline(struct bfa_fcs_lport_ms_s *ms)
void
bfa_fcs_lport_fdmi_online(struct bfa_fcs_lport_ms_s *ms)
#define BFA_FCS_MS_CMD_MAX_RETRIES  2
static void     bfa_fcs_lport_ms_send_plogi(void *ms_cbarg,
struct bfa_fcxp_s *fcxp_alloced);
static void     bfa_fcs_lport_ms_timeout(void *arg);
static void     bfa_fcs_lport_ms_plogi_response(void *fcsarg,
struct bfa_fcxp_s *fcxp,
void *cbarg,
bfa_status_t req_status,
u32 rsp_len,
u32 resid_len,
struct fchs_s *rsp_fchs);
static void	bfa_fcs_lport_ms_send_gmal(void *ms_cbarg,
struct bfa_fcxp_s *fcxp_alloced);
static void     bfa_fcs_lport_ms_gmal_response(void *fcsarg,
struct bfa_fcxp_s *fcxp,
void *cbarg,
bfa_status_t req_status,
u32 rsp_len,
u32 resid_len,
struct fchs_s *rsp_fchs);
static void	bfa_fcs_lport_ms_send_gfn(void *ms_cbarg,
struct bfa_fcxp_s *fcxp_alloced);
static void     bfa_fcs_lport_ms_gfn_response(void *fcsarg,
struct bfa_fcxp_s *fcxp,
void *cbarg,
bfa_status_t req_status,
u32 rsp_len,
u32 resid_len,
struct fchs_s *rsp_fchs);
enum port_ms_event ;
static void     bfa_fcs_lport_ms_sm_offline(struct bfa_fcs_lport_ms_s *ms,
enum port_ms_event event);
static void     bfa_fcs_lport_ms_sm_plogi_sending(struct bfa_fcs_lport_ms_s *ms,
enum port_ms_event event);
static void     bfa_fcs_lport_ms_sm_plogi(struct bfa_fcs_lport_ms_s *ms,
enum port_ms_event event);
static void     bfa_fcs_lport_ms_sm_plogi_retry(struct bfa_fcs_lport_ms_s *ms,
enum port_ms_event event);
static void     bfa_fcs_lport_ms_sm_gmal_sending(struct bfa_fcs_lport_ms_s *ms,
enum port_ms_event event);
static void     bfa_fcs_lport_ms_sm_gmal(struct bfa_fcs_lport_ms_s *ms,
enum port_ms_event event);
static void     bfa_fcs_lport_ms_sm_gmal_retry(struct bfa_fcs_lport_ms_s *ms,
enum port_ms_event event);
static void     bfa_fcs_lport_ms_sm_gfn_sending(struct bfa_fcs_lport_ms_s *ms,
enum port_ms_event event);
static void     bfa_fcs_lport_ms_sm_gfn(struct bfa_fcs_lport_ms_s *ms,
enum port_ms_event event);
static void     bfa_fcs_lport_ms_sm_gfn_retry(struct bfa_fcs_lport_ms_s *ms,
enum port_ms_event event);
static void     bfa_fcs_lport_ms_sm_online(struct bfa_fcs_lport_ms_s *ms,
enum port_ms_event event);
static void
bfa_fcs_lport_ms_sm_offline(struct bfa_fcs_lport_ms_s *ms,
enum port_ms_event event)
static void
bfa_fcs_lport_ms_sm_plogi_sending(struct bfa_fcs_lport_ms_s *ms,
enum port_ms_event event)
static void
bfa_fcs_lport_ms_sm_plogi(struct bfa_fcs_lport_ms_s *ms,
enum port_ms_event event)
static void
bfa_fcs_lport_ms_sm_plogi_retry(struct bfa_fcs_lport_ms_s *ms,
enum port_ms_event event)
static void
bfa_fcs_lport_ms_sm_online(struct bfa_fcs_lport_ms_s *ms,
enum port_ms_event event)
static void
bfa_fcs_lport_ms_sm_gmal_sending(struct bfa_fcs_lport_ms_s *ms,
enum port_ms_event event)
static void
bfa_fcs_lport_ms_sm_gmal(struct bfa_fcs_lport_ms_s *ms,
enum port_ms_event event)
static void
bfa_fcs_lport_ms_sm_gmal_retry(struct bfa_fcs_lport_ms_s *ms,
enum port_ms_event event)
static void
bfa_fcs_lport_ms_send_gmal(void *ms_cbarg, struct bfa_fcxp_s *fcxp_alloced)
static void
bfa_fcs_lport_ms_gmal_response(void *fcsarg, struct bfa_fcxp_s *fcxp,
void *cbarg, bfa_status_t req_status,
u32 rsp_len, u32 resid_len,
struct fchs_s *rsp_fchs)
static void
bfa_fcs_lport_ms_sm_gfn_sending(struct bfa_fcs_lport_ms_s *ms,
enum port_ms_event event)
static void
bfa_fcs_lport_ms_sm_gfn(struct bfa_fcs_lport_ms_s *ms,
enum port_ms_event event)
static void
bfa_fcs_lport_ms_sm_gfn_retry(struct bfa_fcs_lport_ms_s *ms,
enum port_ms_event event)
static void
bfa_fcs_lport_ms_send_gfn(void *ms_cbarg, struct bfa_fcxp_s *fcxp_alloced)
static void
bfa_fcs_lport_ms_gfn_response(void *fcsarg, struct bfa_fcxp_s *fcxp,
void *cbarg, bfa_status_t req_status, u32 rsp_len,
u32 resid_len, struct fchs_s *rsp_fchs)
static void
bfa_fcs_lport_ms_send_plogi(void *ms_cbarg, struct bfa_fcxp_s *fcxp_alloced)
static void
bfa_fcs_lport_ms_plogi_response(void *fcsarg, struct bfa_fcxp_s *fcxp,
void *cbarg, bfa_status_t req_status,
u32 rsp_len, u32 resid_len, struct fchs_s *rsp_fchs)
static void
bfa_fcs_lport_ms_timeout(void *arg)
void
bfa_fcs_lport_ms_init(struct bfa_fcs_lport_s *port)
void
bfa_fcs_lport_ms_offline(struct bfa_fcs_lport_s *port)
void
bfa_fcs_lport_ms_online(struct bfa_fcs_lport_s *port)
void
bfa_fcs_lport_ms_fabric_rscn(struct bfa_fcs_lport_s *port)
static void     bfa_fcs_lport_ns_send_plogi(void *ns_cbarg,
struct bfa_fcxp_s *fcxp_alloced);
static void     bfa_fcs_lport_ns_send_rspn_id(void *ns_cbarg,
struct bfa_fcxp_s *fcxp_alloced);
static void     bfa_fcs_lport_ns_send_rft_id(void *ns_cbarg,
struct bfa_fcxp_s *fcxp_alloced);
static void     bfa_fcs_lport_ns_send_rff_id(void *ns_cbarg,
struct bfa_fcxp_s *fcxp_alloced);
static void     bfa_fcs_lport_ns_send_gid_ft(void *ns_cbarg,
struct bfa_fcxp_s *fcxp_alloced);
static void     bfa_fcs_lport_ns_timeout(void *arg);
static void     bfa_fcs_lport_ns_plogi_response(void *fcsarg,
struct bfa_fcxp_s *fcxp,
void *cbarg,
bfa_status_t req_status,
u32 rsp_len,
u32 resid_len,
struct fchs_s *rsp_fchs);
static void     bfa_fcs_lport_ns_rspn_id_response(void *fcsarg,
struct bfa_fcxp_s *fcxp,
void *cbarg,
bfa_status_t req_status,
u32 rsp_len,
u32 resid_len,
struct fchs_s *rsp_fchs);
static void     bfa_fcs_lport_ns_rft_id_response(void *fcsarg,
struct bfa_fcxp_s *fcxp,
void *cbarg,
bfa_status_t req_status,
u32 rsp_len,
u32 resid_len,
struct fchs_s *rsp_fchs);
static void     bfa_fcs_lport_ns_rff_id_response(void *fcsarg,
struct bfa_fcxp_s *fcxp,
void *cbarg,
bfa_status_t req_status,
u32 rsp_len,
u32 resid_len,
struct fchs_s *rsp_fchs);
static void     bfa_fcs_lport_ns_gid_ft_response(void *fcsarg,
struct bfa_fcxp_s *fcxp,
void *cbarg,
bfa_status_t req_status,
u32 rsp_len,
u32 resid_len,
struct fchs_s *rsp_fchs);
static void     bfa_fcs_lport_ns_process_gidft_pids(
struct bfa_fcs_lport_s *port,
u32 *pid_buf, u32 n_pids);
static void bfa_fcs_lport_ns_boot_target_disc(bfa_fcs_lport_t *port);
enum vport_ns_event ;
static void     bfa_fcs_lport_ns_sm_offline(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event);
static void     bfa_fcs_lport_ns_sm_plogi_sending(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event);
static void     bfa_fcs_lport_ns_sm_plogi(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event);
static void     bfa_fcs_lport_ns_sm_plogi_retry(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event);
static void     bfa_fcs_lport_ns_sm_sending_rspn_id(
struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event);
static void     bfa_fcs_lport_ns_sm_rspn_id(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event);
static void     bfa_fcs_lport_ns_sm_rspn_id_retry(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event);
static void     bfa_fcs_lport_ns_sm_sending_rft_id(
struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event);
static void     bfa_fcs_lport_ns_sm_rft_id_retry(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event);
static void     bfa_fcs_lport_ns_sm_rft_id(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event);
static void     bfa_fcs_lport_ns_sm_sending_rff_id(
struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event);
static void     bfa_fcs_lport_ns_sm_rff_id_retry(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event);
static void     bfa_fcs_lport_ns_sm_rff_id(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event);
static void     bfa_fcs_lport_ns_sm_sending_gid_ft(
struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event);
static void     bfa_fcs_lport_ns_sm_gid_ft(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event);
static void     bfa_fcs_lport_ns_sm_gid_ft_retry(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event);
static void     bfa_fcs_lport_ns_sm_online(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event);
static void
bfa_fcs_lport_ns_sm_offline(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event)
static void
bfa_fcs_lport_ns_sm_plogi_sending(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event)
static void
bfa_fcs_lport_ns_sm_plogi(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event)
static void
bfa_fcs_lport_ns_sm_plogi_retry(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event)
static void
bfa_fcs_lport_ns_sm_sending_rspn_id(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event)
static void
bfa_fcs_lport_ns_sm_rspn_id(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event)
static void
bfa_fcs_lport_ns_sm_rspn_id_retry(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event)
static void
bfa_fcs_lport_ns_sm_sending_rft_id(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event)
static void
bfa_fcs_lport_ns_sm_rft_id(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event)
static void
bfa_fcs_lport_ns_sm_rft_id_retry(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event)
static void
bfa_fcs_lport_ns_sm_sending_rff_id(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event)
static void
bfa_fcs_lport_ns_sm_rff_id(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event)
static void
bfa_fcs_lport_ns_sm_rff_id_retry(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event)
static void
bfa_fcs_lport_ns_sm_sending_gid_ft(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event)
static void
bfa_fcs_lport_ns_sm_gid_ft(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event)
static void
bfa_fcs_lport_ns_sm_gid_ft_retry(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event)
static void
bfa_fcs_lport_ns_sm_online(struct bfa_fcs_lport_ns_s *ns,
enum vport_ns_event event)
static void
bfa_fcs_lport_ns_send_plogi(void *ns_cbarg, struct bfa_fcxp_s *fcxp_alloced)
static void
bfa_fcs_lport_ns_plogi_response(void *fcsarg, struct bfa_fcxp_s *fcxp,
void *cbarg, bfa_status_t req_status, u32 rsp_len,
u32 resid_len, struct fchs_s *rsp_fchs)
static void
bfa_fcs_lport_ns_send_rspn_id(void *ns_cbarg, struct bfa_fcxp_s *fcxp_alloced)
static void
bfa_fcs_lport_ns_rspn_id_response(void *fcsarg, struct bfa_fcxp_s *fcxp,
void *cbarg, bfa_status_t req_status,
u32 rsp_len, u32 resid_len,
struct fchs_s *rsp_fchs)
static void
bfa_fcs_lport_ns_send_rft_id(void *ns_cbarg, struct bfa_fcxp_s *fcxp_alloced)
static void
bfa_fcs_lport_ns_rft_id_response(void *fcsarg, struct bfa_fcxp_s *fcxp,
void *cbarg, bfa_status_t req_status,
u32 rsp_len, u32 resid_len,
struct fchs_s *rsp_fchs)
static void
bfa_fcs_lport_ns_send_rff_id(void *ns_cbarg, struct bfa_fcxp_s *fcxp_alloced)
static void
bfa_fcs_lport_ns_rff_id_response(void *fcsarg, struct bfa_fcxp_s *fcxp,
void *cbarg, bfa_status_t req_status,
u32 rsp_len, u32 resid_len,
struct fchs_s *rsp_fchs)
static void
bfa_fcs_lport_ns_send_gid_ft(void *ns_cbarg, struct bfa_fcxp_s *fcxp_alloced)
static void
bfa_fcs_lport_ns_gid_ft_response(void *fcsarg, struct bfa_fcxp_s *fcxp,
void *cbarg, bfa_status_t req_status,
u32 rsp_len, u32 resid_len,
struct fchs_s *rsp_fchs)
static void
bfa_fcs_lport_ns_timeout(void *arg)
static void
bfa_fcs_lport_ns_process_gidft_pids(struct bfa_fcs_lport_s *port, u32 *pid_buf,
u32 n_pids)
void
bfa_fcs_lport_ns_init(struct bfa_fcs_lport_s *port)
void
bfa_fcs_lport_ns_offline(struct bfa_fcs_lport_s *port)
void
bfa_fcs_lport_ns_online(struct bfa_fcs_lport_s *port)
void
bfa_fcs_lport_ns_query(struct bfa_fcs_lport_s *port)
static void
bfa_fcs_lport_ns_boot_target_disc(bfa_fcs_lport_t *port)
#define FC_QOS_RSCN_EVENT		0x0c
#define FC_FABRIC_NAME_RSCN_EVENT	0x0d
static void     bfa_fcs_lport_scn_send_scr(void *scn_cbarg,
struct bfa_fcxp_s *fcxp_alloced);
static void     bfa_fcs_lport_scn_scr_response(void *fcsarg,
struct bfa_fcxp_s *fcxp,
void *cbarg,
bfa_status_t req_status,
u32 rsp_len,
u32 resid_len,
struct fchs_s *rsp_fchs);
static void     bfa_fcs_lport_scn_send_ls_acc(struct bfa_fcs_lport_s *port,
struct fchs_s *rx_fchs);
static void     bfa_fcs_lport_scn_timeout(void *arg);
enum port_scn_event ;
static void     bfa_fcs_lport_scn_sm_offline(struct bfa_fcs_lport_scn_s *scn,
enum port_scn_event event);
static void     bfa_fcs_lport_scn_sm_sending_scr(
struct bfa_fcs_lport_scn_s *scn,
enum port_scn_event event);
static void     bfa_fcs_lport_scn_sm_scr(struct bfa_fcs_lport_scn_s *scn,
enum port_scn_event event);
static void     bfa_fcs_lport_scn_sm_scr_retry(struct bfa_fcs_lport_scn_s *scn,
enum port_scn_event event);
static void     bfa_fcs_lport_scn_sm_online(struct bfa_fcs_lport_scn_s *scn,
enum port_scn_event event);
static void
bfa_fcs_lport_scn_sm_offline(struct bfa_fcs_lport_scn_s *scn,
enum port_scn_event event)
static void
bfa_fcs_lport_scn_sm_sending_scr(struct bfa_fcs_lport_scn_s *scn,
enum port_scn_event event)
static void
bfa_fcs_lport_scn_sm_scr(struct bfa_fcs_lport_scn_s *scn,
enum port_scn_event event)
static void
bfa_fcs_lport_scn_sm_scr_retry(struct bfa_fcs_lport_scn_s *scn,
enum port_scn_event event)
static void
bfa_fcs_lport_scn_sm_online(struct bfa_fcs_lport_scn_s *scn,
enum port_scn_event event)
static void
bfa_fcs_lport_scn_send_scr(void *scn_cbarg, struct bfa_fcxp_s *fcxp_alloced)
static void
bfa_fcs_lport_scn_scr_response(void *fcsarg, struct bfa_fcxp_s *fcxp,
void *cbarg, bfa_status_t req_status, u32 rsp_len,
u32 resid_len, struct fchs_s *rsp_fchs)
static void
bfa_fcs_lport_scn_send_ls_acc(struct bfa_fcs_lport_s *port,
struct fchs_s *rx_fchs)
static void
bfa_fcs_lport_scn_timeout(void *arg)
void
bfa_fcs_lport_scn_init(struct bfa_fcs_lport_s *port)
void
bfa_fcs_lport_scn_offline(struct bfa_fcs_lport_s *port)
void
bfa_fcs_lport_scn_online(struct bfa_fcs_lport_s *port)
static void
bfa_fcs_lport_scn_portid_rscn(struct bfa_fcs_lport_s *port, u32 rpid)
#define __fc_pid_match(__c0, __c1, __fmt)		\
(((__fmt) == FC_RSCN_FORMAT_FABRIC) ||		\
(((__fmt) == FC_RSCN_FORMAT_DOMAIN) &&		\
((__c0)[0] == (__c1)[0])) ||				\
(((__fmt) == FC_RSCN_FORMAT_AREA) &&		\
((__c0)[0] == (__c1)[0]) &&				\
((__c0)[1] == (__c1)[1])))
static void
bfa_fcs_lport_scn_multiport_rscn(struct bfa_fcs_lport_s *port,
enum fc_rscn_format format,
u32 rscn_pid)
void
bfa_fcs_lport_scn_process_rscn(struct bfa_fcs_lport_s *port,
struct fchs_s *fchs, u32 len)
struct bfa_fcs_lport_s *
bfa_fcs_get_base_port(struct bfa_fcs_s *fcs)
wwn_t
bfa_fcs_lport_get_rport(struct bfa_fcs_lport_s *port, wwn_t wwn, int index,
int nrports, bfa_boolean_t bwwn)
void
bfa_fcs_lport_get_rports(struct bfa_fcs_lport_s *port,
wwn_t rport_wwns[], int *nrports)
bfa_port_speed_t
bfa_fcs_lport_get_rport_max_speed(bfa_fcs_lport_t *port)
struct bfa_fcs_lport_s *
bfa_fcs_lookup_port(struct bfa_fcs_s *fcs, u16 vf_id, wwn_t lpwwn)
void
bfa_fcs_lport_get_info(struct bfa_fcs_lport_s *port,
struct bfa_lport_info_s *port_info)
void
bfa_fcs_lport_get_stats(struct bfa_fcs_lport_s *fcs_port,
struct bfa_lport_stats_s *port_stats)
void
bfa_fcs_lport_clear_stats(struct bfa_fcs_lport_s *fcs_port)
#define __vport_fcs(__vp)       ((__vp)->lport.fcs)
#define __vport_pwwn(__vp)      ((__vp)->lport.port_cfg.pwwn)
#define __vport_nwwn(__vp)      ((__vp)->lport.port_cfg.nwwn)
#define __vport_bfa(__vp)       ((__vp)->lport.fcs->bfa)
#define __vport_fcid(__vp)      ((__vp)->lport.pid)
#define __vport_fabric(__vp)    ((__vp)->lport.fabric)
#define __vport_vfid(__vp)      ((__vp)->lport.fabric->vf_id)
#define BFA_FCS_VPORT_MAX_RETRIES  5
static void     bfa_fcs_vport_do_fdisc(struct bfa_fcs_vport_s *vport);
static void     bfa_fcs_vport_timeout(void *vport_arg);
static void     bfa_fcs_vport_do_logo(struct bfa_fcs_vport_s *vport);
static void     bfa_fcs_vport_free(struct bfa_fcs_vport_s *vport);
enum bfa_fcs_vport_event ;
static void     bfa_fcs_vport_sm_uninit(struct bfa_fcs_vport_s *vport,
enum bfa_fcs_vport_event event);
static void     bfa_fcs_vport_sm_created(struct bfa_fcs_vport_s *vport,
enum bfa_fcs_vport_event event);
static void     bfa_fcs_vport_sm_offline(struct bfa_fcs_vport_s *vport,
enum bfa_fcs_vport_event event);
static void     bfa_fcs_vport_sm_fdisc(struct bfa_fcs_vport_s *vport,
enum bfa_fcs_vport_event event);
static void     bfa_fcs_vport_sm_fdisc_retry(struct bfa_fcs_vport_s *vport,
enum bfa_fcs_vport_event event);
static void     bfa_fcs_vport_sm_online(struct bfa_fcs_vport_s *vport,
enum bfa_fcs_vport_event event);
static void     bfa_fcs_vport_sm_deleting(struct bfa_fcs_vport_s *vport,
enum bfa_fcs_vport_event event);
static void     bfa_fcs_vport_sm_cleanup(struct bfa_fcs_vport_s *vport,
enum bfa_fcs_vport_event event);
static void     bfa_fcs_vport_sm_logo(struct bfa_fcs_vport_s *vport,
enum bfa_fcs_vport_event event);
static void     bfa_fcs_vport_sm_error(struct bfa_fcs_vport_s *vport,
enum bfa_fcs_vport_event event);
static struct bfa_sm_table_s  vport_sm_table[] = ;
static void
bfa_fcs_vport_sm_uninit(struct bfa_fcs_vport_s *vport,
enum bfa_fcs_vport_event event)
static void
bfa_fcs_vport_sm_created(struct bfa_fcs_vport_s *vport,
enum bfa_fcs_vport_event event)
static void
bfa_fcs_vport_sm_offline(struct bfa_fcs_vport_s *vport,
enum bfa_fcs_vport_event event)
static void
bfa_fcs_vport_sm_fdisc(struct bfa_fcs_vport_s *vport,
enum bfa_fcs_vport_event event)
static void
bfa_fcs_vport_sm_fdisc_retry(struct bfa_fcs_vport_s *vport,
enum bfa_fcs_vport_event event)
static void
bfa_fcs_vport_sm_online(struct bfa_fcs_vport_s *vport,
enum bfa_fcs_vport_event event)
static void
bfa_fcs_vport_sm_deleting(struct bfa_fcs_vport_s *vport,
enum bfa_fcs_vport_event event)
static void
bfa_fcs_vport_sm_error(struct bfa_fcs_vport_s *vport,
enum bfa_fcs_vport_event event)
static void
bfa_fcs_vport_sm_cleanup(struct bfa_fcs_vport_s *vport,
enum bfa_fcs_vport_event event)
static void
bfa_fcs_vport_sm_logo(struct bfa_fcs_vport_s *vport,
enum bfa_fcs_vport_event event)
static void
bfa_fcs_vport_do_fdisc(struct bfa_fcs_vport_s *vport)
static void
bfa_fcs_vport_fdisc_rejected(struct bfa_fcs_vport_s *vport)
static void
bfa_fcs_vport_do_logo(struct bfa_fcs_vport_s *vport)
static void
bfa_fcs_vport_timeout(void *vport_arg)
static void
bfa_fcs_vport_free(struct bfa_fcs_vport_s *vport)
void
bfa_fcs_vport_online(struct bfa_fcs_vport_s *vport)
void
bfa_fcs_vport_offline(struct bfa_fcs_vport_s *vport)
void
bfa_fcs_vport_cleanup(struct bfa_fcs_vport_s *vport)
void
bfa_fcs_vport_fcs_delete(struct bfa_fcs_vport_s *vport)
void
bfa_fcs_vport_delete_comp(struct bfa_fcs_vport_s *vport)
bfa_status_t
bfa_fcs_vport_create(struct bfa_fcs_vport_s *vport, struct bfa_fcs_s *fcs,
u16 vf_id, struct bfa_lport_cfg_s *vport_cfg,
struct bfad_vport_s *vport_drv)
bfa_status_t
bfa_fcs_pbc_vport_create(struct bfa_fcs_vport_s *vport, struct bfa_fcs_s *fcs,
u16 vf_id, struct bfa_lport_cfg_s *vport_cfg,
struct bfad_vport_s *vport_drv)
bfa_boolean_t
bfa_fcs_is_pbc_vport(struct bfa_fcs_vport_s *vport)
bfa_status_t
bfa_fcs_vport_start(struct bfa_fcs_vport_s *vport)
bfa_status_t
bfa_fcs_vport_stop(struct bfa_fcs_vport_s *vport)
bfa_status_t
bfa_fcs_vport_delete(struct bfa_fcs_vport_s *vport)
void
bfa_fcs_vport_get_attr(struct bfa_fcs_vport_s *vport,
struct bfa_vport_attr_s *attr)
struct bfa_fcs_vport_s *
bfa_fcs_vport_lookup(struct bfa_fcs_s *fcs, u16 vf_id, wwn_t vpwwn)
void
bfa_cb_lps_fdisc_comp(void *bfad, void *uarg, bfa_status_t status)
void
bfa_cb_lps_fdisclogo_comp(void *bfad, void *uarg)
void
bfa_cb_lps_cvl_event(void *bfad, void *uarg)
