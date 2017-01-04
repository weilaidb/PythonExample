BFA_TRC_FILE(HAL, FCXP);
BFA_MODULE(fcxp);
BFA_MODULE(sgpg);
BFA_MODULE(lps);
BFA_MODULE(fcport);
BFA_MODULE(rport);
BFA_MODULE(uf);
#define BFA_LPS_MIN_LPORTS      (1)
#define BFA_LPS_MAX_LPORTS      (256)
#define BFA_LPS_MAX_VPORTS_SUPP_CB  255
#define BFA_LPS_MAX_VPORTS_SUPP_CT  190
#define BFA_PORT_IS_DISABLED(bfa) \
((bfa_fcport_is_disabled(bfa) == BFA_TRUE) || \
(bfa_ioc_is_disabled(&bfa->ioc) == BFA_TRUE))
enum bfa_fcport_sm_event ;
enum bfa_fcport_ln_sm_event ;
#define bfa_rport_offline_cb(__rp) do  while (0)
#define bfa_rport_online_cb(__rp) do  while (0)
static void	__bfa_fcxp_send_cbfn(void *cbarg, bfa_boolean_t complete);
static void	hal_fcxp_rx_plog(struct bfa_s *bfa, struct bfa_fcxp_s *fcxp,
struct bfi_fcxp_send_rsp_s *fcxp_rsp);
static void	hal_fcxp_tx_plog(struct bfa_s *bfa, u32 reqlen,
struct bfa_fcxp_s *fcxp, struct fchs_s *fchs);
static void	bfa_fcxp_qresume(void *cbarg);
static void	bfa_fcxp_queue(struct bfa_fcxp_s *fcxp,
struct bfi_fcxp_send_req_s *send_req);
static void bfa_lps_meminfo(struct bfa_iocfc_cfg_s *cfg, u32 *ndm_len,
u32 *dm_len);
static void bfa_lps_attach(struct bfa_s *bfa, void *bfad,
struct bfa_iocfc_cfg_s *cfg,
struct bfa_meminfo_s *meminfo,
struct bfa_pcidev_s *pcidev);
static void bfa_lps_detach(struct bfa_s *bfa);
static void bfa_lps_start(struct bfa_s *bfa);
static void bfa_lps_stop(struct bfa_s *bfa);
static void bfa_lps_iocdisable(struct bfa_s *bfa);
static void bfa_lps_login_rsp(struct bfa_s *bfa,
struct bfi_lps_login_rsp_s *rsp);
static void bfa_lps_logout_rsp(struct bfa_s *bfa,
struct bfi_lps_logout_rsp_s *rsp);
static void bfa_lps_reqq_resume(void *lps_arg);
static void bfa_lps_free(struct bfa_lps_s *lps);
static void bfa_lps_send_login(struct bfa_lps_s *lps);
static void bfa_lps_send_logout(struct bfa_lps_s *lps);
static void bfa_lps_send_set_n2n_pid(struct bfa_lps_s *lps);
static void bfa_lps_login_comp(struct bfa_lps_s *lps);
static void bfa_lps_logout_comp(struct bfa_lps_s *lps);
static void bfa_lps_cvl_event(struct bfa_lps_s *lps);
static void bfa_lps_sm_init(struct bfa_lps_s *lps, enum bfa_lps_event event);
static void bfa_lps_sm_login(struct bfa_lps_s *lps, enum bfa_lps_event event);
static void bfa_lps_sm_loginwait(struct bfa_lps_s *lps, enum bfa_lps_event
event);
static void bfa_lps_sm_online(struct bfa_lps_s *lps, enum bfa_lps_event event);
static void bfa_lps_sm_online_n2n_pid_wait(struct bfa_lps_s *lps,
enum bfa_lps_event event);
static void bfa_lps_sm_logout(struct bfa_lps_s *lps, enum bfa_lps_event event);
static void bfa_lps_sm_logowait(struct bfa_lps_s *lps, enum bfa_lps_event
event);
static bfa_boolean_t bfa_fcport_send_enable(struct bfa_fcport_s *fcport);
static bfa_boolean_t bfa_fcport_send_disable(struct bfa_fcport_s *fcport);
static void bfa_fcport_update_linkinfo(struct bfa_fcport_s *fcport);
static void bfa_fcport_reset_linkinfo(struct bfa_fcport_s *fcport);
static void bfa_fcport_set_wwns(struct bfa_fcport_s *fcport);
static void __bfa_cb_fcport_event(void *cbarg, bfa_boolean_t complete);
static void bfa_fcport_scn(struct bfa_fcport_s *fcport,
enum bfa_port_linkstate event, bfa_boolean_t trunk);
static void bfa_fcport_queue_cb(struct bfa_fcport_ln_s *ln,
enum bfa_port_linkstate event);
static void __bfa_cb_fcport_stats_clr(void *cbarg, bfa_boolean_t complete);
static void bfa_fcport_stats_get_timeout(void *cbarg);
static void bfa_fcport_stats_clr_timeout(void *cbarg);
static void bfa_trunk_iocdisable(struct bfa_s *bfa);
static void     bfa_fcport_sm_uninit(struct bfa_fcport_s *fcport,
enum bfa_fcport_sm_event event);
static void     bfa_fcport_sm_enabling_qwait(struct bfa_fcport_s *fcport,
enum bfa_fcport_sm_event event);
static void     bfa_fcport_sm_enabling(struct bfa_fcport_s *fcport,
enum bfa_fcport_sm_event event);
static void     bfa_fcport_sm_linkdown(struct bfa_fcport_s *fcport,
enum bfa_fcport_sm_event event);
static void     bfa_fcport_sm_linkup(struct bfa_fcport_s *fcport,
enum bfa_fcport_sm_event event);
static void     bfa_fcport_sm_disabling(struct bfa_fcport_s *fcport,
enum bfa_fcport_sm_event event);
static void     bfa_fcport_sm_disabling_qwait(struct bfa_fcport_s *fcport,
enum bfa_fcport_sm_event event);
static void     bfa_fcport_sm_toggling_qwait(struct bfa_fcport_s *fcport,
enum bfa_fcport_sm_event event);
static void     bfa_fcport_sm_disabled(struct bfa_fcport_s *fcport,
enum bfa_fcport_sm_event event);
static void     bfa_fcport_sm_stopped(struct bfa_fcport_s *fcport,
enum bfa_fcport_sm_event event);
static void     bfa_fcport_sm_iocdown(struct bfa_fcport_s *fcport,
enum bfa_fcport_sm_event event);
static void     bfa_fcport_sm_iocfail(struct bfa_fcport_s *fcport,
enum bfa_fcport_sm_event event);
static void     bfa_fcport_ln_sm_dn(struct bfa_fcport_ln_s *ln,
enum bfa_fcport_ln_sm_event event);
static void     bfa_fcport_ln_sm_dn_nf(struct bfa_fcport_ln_s *ln,
enum bfa_fcport_ln_sm_event event);
static void     bfa_fcport_ln_sm_dn_up_nf(struct bfa_fcport_ln_s *ln,
enum bfa_fcport_ln_sm_event event);
static void     bfa_fcport_ln_sm_up(struct bfa_fcport_ln_s *ln,
enum bfa_fcport_ln_sm_event event);
static void     bfa_fcport_ln_sm_up_nf(struct bfa_fcport_ln_s *ln,
enum bfa_fcport_ln_sm_event event);
static void     bfa_fcport_ln_sm_up_dn_nf(struct bfa_fcport_ln_s *ln,
enum bfa_fcport_ln_sm_event event);
static void     bfa_fcport_ln_sm_up_dn_up_nf(struct bfa_fcport_ln_s *ln,
enum bfa_fcport_ln_sm_event event);
static struct bfa_sm_table_s hal_port_sm_table[] = ;
static struct bfa_rport_s *bfa_rport_alloc(struct bfa_rport_mod_s *rp_mod);
static void		bfa_rport_free(struct bfa_rport_s *rport);
static bfa_boolean_t	bfa_rport_send_fwcreate(struct bfa_rport_s *rp);
static bfa_boolean_t	bfa_rport_send_fwdelete(struct bfa_rport_s *rp);
static bfa_boolean_t	bfa_rport_send_fwspeed(struct bfa_rport_s *rp);
static void		__bfa_cb_rport_online(void *cbarg,
bfa_boolean_t complete);
static void		__bfa_cb_rport_offline(void *cbarg,
bfa_boolean_t complete);
static void     bfa_rport_sm_uninit(struct bfa_rport_s *rp,
enum bfa_rport_event event);
static void     bfa_rport_sm_created(struct bfa_rport_s *rp,
enum bfa_rport_event event);
static void     bfa_rport_sm_fwcreate(struct bfa_rport_s *rp,
enum bfa_rport_event event);
static void     bfa_rport_sm_online(struct bfa_rport_s *rp,
enum bfa_rport_event event);
static void     bfa_rport_sm_fwdelete(struct bfa_rport_s *rp,
enum bfa_rport_event event);
static void     bfa_rport_sm_offline(struct bfa_rport_s *rp,
enum bfa_rport_event event);
static void     bfa_rport_sm_deleting(struct bfa_rport_s *rp,
enum bfa_rport_event event);
static void     bfa_rport_sm_offline_pending(struct bfa_rport_s *rp,
enum bfa_rport_event event);
static void     bfa_rport_sm_delete_pending(struct bfa_rport_s *rp,
enum bfa_rport_event event);
static void     bfa_rport_sm_iocdisable(struct bfa_rport_s *rp,
enum bfa_rport_event event);
static void     bfa_rport_sm_fwcreate_qfull(struct bfa_rport_s *rp,
enum bfa_rport_event event);
static void     bfa_rport_sm_fwdelete_qfull(struct bfa_rport_s *rp,
enum bfa_rport_event event);
static void     bfa_rport_sm_deleting_qfull(struct bfa_rport_s *rp,
enum bfa_rport_event event);
static int
plkd_validate_logrec(struct bfa_plog_rec_s *pl_rec)
static u64
bfa_get_log_time(void)
static void
bfa_plog_add(struct bfa_plog_s *plog, struct bfa_plog_rec_s *pl_rec)
void
bfa_plog_init(struct bfa_plog_s *plog)
void
bfa_plog_str(struct bfa_plog_s *plog, enum bfa_plog_mid mid,
enum bfa_plog_eid event,
u16 misc, char *log_str)
void
bfa_plog_intarr(struct bfa_plog_s *plog, enum bfa_plog_mid mid,
enum bfa_plog_eid event,
u16 misc, u32 *intarr, u32 num_ints)
void
bfa_plog_fchdr(struct bfa_plog_s *plog, enum bfa_plog_mid mid,
enum bfa_plog_eid event,
u16 misc, struct fchs_s *fchdr)
void
bfa_plog_fchdr_and_pl(struct bfa_plog_s *plog, enum bfa_plog_mid mid,
enum bfa_plog_eid event, u16 misc, struct fchs_s *fchdr,
u32 pld_w0)
static void
claim_fcxp_req_rsp_mem(struct bfa_fcxp_mod_s *mod, struct bfa_meminfo_s *mi)
static void
claim_fcxps_mem(struct bfa_fcxp_mod_s *mod, struct bfa_meminfo_s *mi)
static void
bfa_fcxp_meminfo(struct bfa_iocfc_cfg_s *cfg, u32 *ndm_len,
u32 *dm_len)
static void
bfa_fcxp_attach(struct bfa_s *bfa, void *bfad, struct bfa_iocfc_cfg_s *cfg,
struct bfa_meminfo_s *meminfo, struct bfa_pcidev_s *pcidev)
static void
bfa_fcxp_detach(struct bfa_s *bfa)
static void
bfa_fcxp_start(struct bfa_s *bfa)
static void
bfa_fcxp_stop(struct bfa_s *bfa)
static void
bfa_fcxp_iocdisable(struct bfa_s *bfa)
static struct bfa_fcxp_s *
bfa_fcxp_get(struct bfa_fcxp_mod_s *fm)
static void
bfa_fcxp_init_reqrsp(struct bfa_fcxp_s *fcxp,
struct bfa_s *bfa,
u8 *use_ibuf,
u32 *nr_sgles,
bfa_fcxp_get_sgaddr_t *r_sga_cbfn,
bfa_fcxp_get_sglen_t *r_sglen_cbfn,
struct list_head *r_sgpg_q,
int n_sgles,
bfa_fcxp_get_sgaddr_t sga_cbfn,
bfa_fcxp_get_sglen_t sglen_cbfn)
static void
bfa_fcxp_init(struct bfa_fcxp_s *fcxp,
void *caller, struct bfa_s *bfa, int nreq_sgles,
int nrsp_sgles, bfa_fcxp_get_sgaddr_t req_sga_cbfn,
bfa_fcxp_get_sglen_t req_sglen_cbfn,
bfa_fcxp_get_sgaddr_t rsp_sga_cbfn,
bfa_fcxp_get_sglen_t rsp_sglen_cbfn)
static void
bfa_fcxp_put(struct bfa_fcxp_s *fcxp)
static void
bfa_fcxp_null_comp(void *bfad_fcxp, struct bfa_fcxp_s *fcxp, void *cbarg,
bfa_status_t req_status, u32 rsp_len,
u32 resid_len, struct fchs_s *rsp_fchs)
static void
__bfa_fcxp_send_cbfn(void *cbarg, bfa_boolean_t complete)
static void
hal_fcxp_send_comp(struct bfa_s *bfa, struct bfi_fcxp_send_rsp_s *fcxp_rsp)
static void
hal_fcxp_set_local_sges(struct bfi_sge_s *sge, u32 reqlen, u64 req_pa)
static void
hal_fcxp_tx_plog(struct bfa_s *bfa, u32 reqlen, struct bfa_fcxp_s *fcxp,
struct fchs_s *fchs)
static void
hal_fcxp_rx_plog(struct bfa_s *bfa, struct bfa_fcxp_s *fcxp,
struct bfi_fcxp_send_rsp_s *fcxp_rsp)
static void
bfa_fcxp_qresume(void *cbarg)
static void
bfa_fcxp_queue(struct bfa_fcxp_s *fcxp, struct bfi_fcxp_send_req_s *send_req)
struct bfa_fcxp_s *
bfa_fcxp_alloc(void *caller, struct bfa_s *bfa, int nreq_sgles,
int nrsp_sgles, bfa_fcxp_get_sgaddr_t req_sga_cbfn,
bfa_fcxp_get_sglen_t req_sglen_cbfn,
bfa_fcxp_get_sgaddr_t rsp_sga_cbfn,
bfa_fcxp_get_sglen_t rsp_sglen_cbfn)
void *
bfa_fcxp_get_reqbuf(struct bfa_fcxp_s *fcxp)
u32
bfa_fcxp_get_reqbufsz(struct bfa_fcxp_s *fcxp)
void *
bfa_fcxp_get_rspbuf(struct bfa_fcxp_s *fcxp)
void
bfa_fcxp_free(struct bfa_fcxp_s *fcxp)
void
bfa_fcxp_send(struct bfa_fcxp_s *fcxp, struct bfa_rport_s *rport,
u16 vf_id, u8 lp_tag, bfa_boolean_t cts, enum fc_cos cos,
u32 reqlen, struct fchs_s *fchs, bfa_cb_fcxp_send_t cbfn,
void *cbarg, u32 rsp_maxlen, u8 rsp_timeout)
bfa_status_t
bfa_fcxp_abort(struct bfa_fcxp_s *fcxp)
void
bfa_fcxp_alloc_wait(struct bfa_s *bfa, struct bfa_fcxp_wqe_s *wqe,
bfa_fcxp_alloc_cbfn_t alloc_cbfn, void *alloc_cbarg,
void *caller, int nreq_sgles,
int nrsp_sgles, bfa_fcxp_get_sgaddr_t req_sga_cbfn,
bfa_fcxp_get_sglen_t req_sglen_cbfn,
bfa_fcxp_get_sgaddr_t rsp_sga_cbfn,
bfa_fcxp_get_sglen_t rsp_sglen_cbfn)
void
bfa_fcxp_walloc_cancel(struct bfa_s *bfa, struct bfa_fcxp_wqe_s *wqe)
void
bfa_fcxp_discard(struct bfa_fcxp_s *fcxp)
void
bfa_fcxp_isr(struct bfa_s *bfa, struct bfi_msg_s *msg)
u32
bfa_fcxp_get_maxrsp(struct bfa_s *bfa)
static void
bfa_lps_sm_init(struct bfa_lps_s *lps, enum bfa_lps_event event)
static void
bfa_lps_sm_login(struct bfa_lps_s *lps, enum bfa_lps_event event)
static void
bfa_lps_sm_loginwait(struct bfa_lps_s *lps, enum bfa_lps_event event)
static void
bfa_lps_sm_online(struct bfa_lps_s *lps, enum bfa_lps_event event)
static void
bfa_lps_sm_online_n2n_pid_wait(struct bfa_lps_s *lps, enum bfa_lps_event event)
static void
bfa_lps_sm_logout(struct bfa_lps_s *lps, enum bfa_lps_event event)
static void
bfa_lps_sm_logowait(struct bfa_lps_s *lps, enum bfa_lps_event event)
static void
bfa_lps_meminfo(struct bfa_iocfc_cfg_s *cfg, u32 *ndm_len,
u32 *dm_len)
static void
bfa_lps_attach(struct bfa_s *bfa, void *bfad, struct bfa_iocfc_cfg_s *cfg,
struct bfa_meminfo_s *meminfo, struct bfa_pcidev_s *pcidev)
static void
bfa_lps_detach(struct bfa_s *bfa)
static void
bfa_lps_start(struct bfa_s *bfa)
static void
bfa_lps_stop(struct bfa_s *bfa)
static void
bfa_lps_iocdisable(struct bfa_s *bfa)
static void
bfa_lps_login_rsp(struct bfa_s *bfa, struct bfi_lps_login_rsp_s *rsp)
static void
bfa_lps_logout_rsp(struct bfa_s *bfa, struct bfi_lps_logout_rsp_s *rsp)
static void
bfa_lps_rx_cvl_event(struct bfa_s *bfa, struct bfi_lps_cvl_event_s *cvl)
static void
bfa_lps_reqq_resume(void *lps_arg)
static void
bfa_lps_free(struct bfa_lps_s *lps)
static void
bfa_lps_send_login(struct bfa_lps_s *lps)
static void
bfa_lps_send_logout(struct bfa_lps_s *lps)
static void
bfa_lps_send_set_n2n_pid(struct bfa_lps_s *lps)
static void
bfa_lps_login_comp_cb(void *arg, bfa_boolean_t complete)
static void
bfa_lps_login_comp(struct bfa_lps_s *lps)
static void
bfa_lps_logout_comp_cb(void *arg, bfa_boolean_t complete)
static void
bfa_lps_logout_comp(struct bfa_lps_s *lps)
static void
bfa_lps_cvl_event_cb(void *arg, bfa_boolean_t complete)
static void
bfa_lps_cvl_event(struct bfa_lps_s *lps)
u32
bfa_lps_get_max_vport(struct bfa_s *bfa)
struct bfa_lps_s  *
bfa_lps_alloc(struct bfa_s *bfa)
void
bfa_lps_delete(struct bfa_lps_s *lps)
void
bfa_lps_flogi(struct bfa_lps_s *lps, void *uarg, u8 alpa, u16 pdusz,
wwn_t pwwn, wwn_t nwwn, bfa_boolean_t auth_en)
void
bfa_lps_fdisc(struct bfa_lps_s *lps, void *uarg, u16 pdusz, wwn_t pwwn,
wwn_t nwwn)
void
bfa_lps_fdisclogo(struct bfa_lps_s *lps)
u8
bfa_lps_get_tag_from_pid(struct bfa_s *bfa, u32 pid)
u32
bfa_lps_get_base_pid(struct bfa_s *bfa)
void
bfa_lps_set_n2n_pid(struct bfa_lps_s *lps, uint32_t n2n_pid)
void
bfa_lps_isr(struct bfa_s *bfa, struct bfi_msg_s *m)
static void
bfa_fcport_sm_uninit(struct bfa_fcport_s *fcport,
enum bfa_fcport_sm_event event)
static void
bfa_fcport_sm_enabling_qwait(struct bfa_fcport_s *fcport,
enum bfa_fcport_sm_event event)
static void
bfa_fcport_sm_enabling(struct bfa_fcport_s *fcport,
enum bfa_fcport_sm_event event)
static void
bfa_fcport_sm_linkdown(struct bfa_fcport_s *fcport,
enum bfa_fcport_sm_event event)
static void
bfa_fcport_sm_linkup(struct bfa_fcport_s *fcport,
enum bfa_fcport_sm_event event)
static void
bfa_fcport_sm_disabling_qwait(struct bfa_fcport_s *fcport,
enum bfa_fcport_sm_event event)
static void
bfa_fcport_sm_toggling_qwait(struct bfa_fcport_s *fcport,
enum bfa_fcport_sm_event event)
static void
bfa_fcport_sm_disabling(struct bfa_fcport_s *fcport,
enum bfa_fcport_sm_event event)
static void
bfa_fcport_sm_disabled(struct bfa_fcport_s *fcport,
enum bfa_fcport_sm_event event)
static void
bfa_fcport_sm_stopped(struct bfa_fcport_s *fcport,
enum bfa_fcport_sm_event event)
static void
bfa_fcport_sm_iocdown(struct bfa_fcport_s *fcport,
enum bfa_fcport_sm_event event)
static void
bfa_fcport_sm_iocfail(struct bfa_fcport_s *fcport,
enum bfa_fcport_sm_event event)
static void
bfa_fcport_ln_sm_dn(struct bfa_fcport_ln_s *ln,
enum bfa_fcport_ln_sm_event event)
static void
bfa_fcport_ln_sm_dn_nf(struct bfa_fcport_ln_s *ln,
enum bfa_fcport_ln_sm_event event)
static void
bfa_fcport_ln_sm_dn_up_nf(struct bfa_fcport_ln_s *ln,
enum bfa_fcport_ln_sm_event event)
static void
bfa_fcport_ln_sm_up(struct bfa_fcport_ln_s *ln,
enum bfa_fcport_ln_sm_event event)
static void
bfa_fcport_ln_sm_up_nf(struct bfa_fcport_ln_s *ln,
enum bfa_fcport_ln_sm_event event)
static void
bfa_fcport_ln_sm_up_dn_nf(struct bfa_fcport_ln_s *ln,
enum bfa_fcport_ln_sm_event event)
static void
bfa_fcport_ln_sm_up_dn_up_nf(struct bfa_fcport_ln_s *ln,
enum bfa_fcport_ln_sm_event event)
static void
__bfa_cb_fcport_event(void *cbarg, bfa_boolean_t complete)
static void
bfa_fcport_scn(struct bfa_fcport_s *fcport, enum bfa_port_linkstate event,
bfa_boolean_t trunk)
static void
bfa_fcport_queue_cb(struct bfa_fcport_ln_s *ln, enum bfa_port_linkstate event)
#define FCPORT_STATS_DMA_SZ (BFA_ROUNDUP(sizeof(union bfa_fcport_stats_u), \
BFA_CACHELINE_SZ))
static void
bfa_fcport_meminfo(struct bfa_iocfc_cfg_s *cfg, u32 *ndm_len,
u32 *dm_len)
static void
bfa_fcport_qresume(void *cbarg)
static void
bfa_fcport_mem_claim(struct bfa_fcport_s *fcport, struct bfa_meminfo_s *meminfo)
static void
bfa_fcport_attach(struct bfa_s *bfa, void *bfad, struct bfa_iocfc_cfg_s *cfg,
struct bfa_meminfo_s *meminfo, struct bfa_pcidev_s *pcidev)
static void
bfa_fcport_detach(struct bfa_s *bfa)
static void
bfa_fcport_start(struct bfa_s *bfa)
static void
bfa_fcport_stop(struct bfa_s *bfa)
static void
bfa_fcport_iocdisable(struct bfa_s *bfa)
static void
bfa_fcport_update_linkinfo(struct bfa_fcport_s *fcport)
static void
bfa_fcport_reset_linkinfo(struct bfa_fcport_s *fcport)
static bfa_boolean_t
bfa_fcport_send_enable(struct bfa_fcport_s *fcport)
static	bfa_boolean_t
bfa_fcport_send_disable(struct bfa_fcport_s *fcport)
static void
bfa_fcport_set_wwns(struct bfa_fcport_s *fcport)
static void
bfa_fcport_send_txcredit(void *port_cbarg)
static void
bfa_fcport_qos_stats_swap(struct bfa_qos_stats_s *d,
struct bfa_qos_stats_s *s)
static void
bfa_fcport_fcoe_stats_swap(struct bfa_fcoe_stats_s *d,
struct bfa_fcoe_stats_s *s)
static void
__bfa_cb_fcport_stats_get(void *cbarg, bfa_boolean_t complete)
static void
bfa_fcport_stats_get_timeout(void *cbarg)
static void
bfa_fcport_send_stats_get(void *cbarg)
static void
__bfa_cb_fcport_stats_clr(void *cbarg, bfa_boolean_t complete)
static void
bfa_fcport_stats_clr_timeout(void *cbarg)
static void
bfa_fcport_send_stats_clear(void *cbarg)
static void
bfa_trunk_scn(struct bfa_fcport_s *fcport, struct bfi_fcport_trunk_scn_s *scn)
static void
bfa_trunk_iocdisable(struct bfa_s *bfa)
void
bfa_fcport_init(struct bfa_s *bfa)
void
bfa_fcport_isr(struct bfa_s *bfa, struct bfi_msg_s *msg)
void
bfa_fcport_event_register(struct bfa_s *bfa,
void (*cbfn) (void *cbarg,
enum bfa_port_linkstate event),
void *cbarg)
bfa_status_t
bfa_fcport_enable(struct bfa_s *bfa)
bfa_status_t
bfa_fcport_disable(struct bfa_s *bfa)
bfa_status_t
bfa_fcport_cfg_speed(struct bfa_s *bfa, enum bfa_port_speed speed)
enum bfa_port_speed
bfa_fcport_get_speed(struct bfa_s *bfa)
bfa_status_t
bfa_fcport_cfg_topology(struct bfa_s *bfa, enum bfa_port_topology topology)
enum bfa_port_topology
bfa_fcport_get_topology(struct bfa_s *bfa)
bfa_status_t
bfa_fcport_cfg_hardalpa(struct bfa_s *bfa, u8 alpa)
bfa_status_t
bfa_fcport_clr_hardalpa(struct bfa_s *bfa)
bfa_boolean_t
bfa_fcport_get_hardalpa(struct bfa_s *bfa, u8 *alpa)
u8
bfa_fcport_get_myalpa(struct bfa_s *bfa)
bfa_status_t
bfa_fcport_cfg_maxfrsize(struct bfa_s *bfa, u16 maxfrsize)
u16
bfa_fcport_get_maxfrsize(struct bfa_s *bfa)
u8
bfa_fcport_get_rx_bbcredit(struct bfa_s *bfa)
void
bfa_fcport_set_tx_bbcredit(struct bfa_s *bfa, u16 tx_bbcredit)
wwn_t
bfa_fcport_get_wwn(struct bfa_s *bfa, bfa_boolean_t node)
void
bfa_fcport_get_attr(struct bfa_s *bfa, struct bfa_port_attr_s *attr)
#define BFA_FCPORT_STATS_TOV	1000
bfa_status_t
bfa_fcport_get_stats(struct bfa_s *bfa, union bfa_fcport_stats_u *stats,
bfa_cb_port_t cbfn, void *cbarg)
bfa_status_t
bfa_fcport_clear_stats(struct bfa_s *bfa, bfa_cb_port_t cbfn, void *cbarg)
bfa_boolean_t
bfa_fcport_is_disabled(struct bfa_s *bfa)
bfa_boolean_t
bfa_fcport_is_ratelim(struct bfa_s *bfa)
enum bfa_port_speed
bfa_fcport_get_ratelim_speed(struct bfa_s *bfa)
bfa_boolean_t
bfa_fcport_is_linkup(struct bfa_s *bfa)
bfa_boolean_t
bfa_fcport_is_qos_enabled(struct bfa_s *bfa)
static void
bfa_rport_sm_uninit(struct bfa_rport_s *rp, enum bfa_rport_event event)
static void
bfa_rport_sm_created(struct bfa_rport_s *rp, enum bfa_rport_event event)
static void
bfa_rport_sm_fwcreate(struct bfa_rport_s *rp, enum bfa_rport_event event)
static void
bfa_rport_sm_fwcreate_qfull(struct bfa_rport_s *rp, enum bfa_rport_event event)
static void
bfa_rport_sm_online(struct bfa_rport_s *rp, enum bfa_rport_event event)
static void
bfa_rport_sm_fwdelete(struct bfa_rport_s *rp, enum bfa_rport_event event)
static void
bfa_rport_sm_fwdelete_qfull(struct bfa_rport_s *rp, enum bfa_rport_event event)
static void
bfa_rport_sm_offline(struct bfa_rport_s *rp, enum bfa_rport_event event)
static void
bfa_rport_sm_deleting(struct bfa_rport_s *rp, enum bfa_rport_event event)
static void
bfa_rport_sm_deleting_qfull(struct bfa_rport_s *rp, enum bfa_rport_event event)
static void
bfa_rport_sm_delete_pending(struct bfa_rport_s *rp,
enum bfa_rport_event event)
static void
bfa_rport_sm_offline_pending(struct bfa_rport_s *rp,
enum bfa_rport_event event)
static void
bfa_rport_sm_iocdisable(struct bfa_rport_s *rp, enum bfa_rport_event event)
static void
__bfa_cb_rport_online(void *cbarg, bfa_boolean_t complete)
static void
__bfa_cb_rport_offline(void *cbarg, bfa_boolean_t complete)
static void
bfa_rport_qresume(void *cbarg)
static void
bfa_rport_meminfo(struct bfa_iocfc_cfg_s *cfg, u32 *km_len,
u32 *dm_len)
static void
bfa_rport_attach(struct bfa_s *bfa, void *bfad, struct bfa_iocfc_cfg_s *cfg,
struct bfa_meminfo_s *meminfo, struct bfa_pcidev_s *pcidev)
static void
bfa_rport_detach(struct bfa_s *bfa)
static void
bfa_rport_start(struct bfa_s *bfa)
static void
bfa_rport_stop(struct bfa_s *bfa)
static void
bfa_rport_iocdisable(struct bfa_s *bfa)
static struct bfa_rport_s *
bfa_rport_alloc(struct bfa_rport_mod_s *mod)
static void
bfa_rport_free(struct bfa_rport_s *rport)
static bfa_boolean_t
bfa_rport_send_fwcreate(struct bfa_rport_s *rp)
static bfa_boolean_t
bfa_rport_send_fwdelete(struct bfa_rport_s *rp)
static bfa_boolean_t
bfa_rport_send_fwspeed(struct bfa_rport_s *rp)
void
bfa_rport_isr(struct bfa_s *bfa, struct bfi_msg_s *m)
struct bfa_rport_s *
bfa_rport_create(struct bfa_s *bfa, void *rport_drv)
void
bfa_rport_online(struct bfa_rport_s *rport, struct bfa_rport_info_s *rport_info)
void
bfa_rport_speed(struct bfa_rport_s *rport, enum bfa_port_speed speed)
static void
bfa_sgpg_meminfo(struct bfa_iocfc_cfg_s *cfg, u32 *km_len,
u32 *dm_len)
static void
bfa_sgpg_attach(struct bfa_s *bfa, void *bfad, struct bfa_iocfc_cfg_s *cfg,
struct bfa_meminfo_s *minfo, struct bfa_pcidev_s *pcidev)
static void
bfa_sgpg_detach(struct bfa_s *bfa)
static void
bfa_sgpg_start(struct bfa_s *bfa)
static void
bfa_sgpg_stop(struct bfa_s *bfa)
static void
bfa_sgpg_iocdisable(struct bfa_s *bfa)
bfa_status_t
bfa_sgpg_malloc(struct bfa_s *bfa, struct list_head *sgpg_q, int nsgpgs)
void
bfa_sgpg_mfree(struct bfa_s *bfa, struct list_head *sgpg_q, int nsgpg)
void
bfa_sgpg_wait(struct bfa_s *bfa, struct bfa_sgpg_wqe_s *wqe, int nsgpg)
void
bfa_sgpg_wcancel(struct bfa_s *bfa, struct bfa_sgpg_wqe_s *wqe)
void
bfa_sgpg_winit(struct bfa_sgpg_wqe_s *wqe, void (*cbfn) (void *cbarg),
void *cbarg)
static void
__bfa_cb_uf_recv(void *cbarg, bfa_boolean_t complete)
static void
claim_uf_pbs(struct bfa_uf_mod_s *ufm, struct bfa_meminfo_s *mi)
static void
claim_uf_post_msgs(struct bfa_uf_mod_s *ufm, struct bfa_meminfo_s *mi)
static void
claim_ufs(struct bfa_uf_mod_s *ufm, struct bfa_meminfo_s *mi)
static void
uf_mem_claim(struct bfa_uf_mod_s *ufm, struct bfa_meminfo_s *mi)
static void
bfa_uf_meminfo(struct bfa_iocfc_cfg_s *cfg, u32 *ndm_len, u32 *dm_len)
static void
bfa_uf_attach(struct bfa_s *bfa, void *bfad, struct bfa_iocfc_cfg_s *cfg,
struct bfa_meminfo_s *meminfo, struct bfa_pcidev_s *pcidev)
static void
bfa_uf_detach(struct bfa_s *bfa)
static struct bfa_uf_s *
bfa_uf_get(struct bfa_uf_mod_s *uf_mod)
static void
bfa_uf_put(struct bfa_uf_mod_s *uf_mod, struct bfa_uf_s *uf)
static bfa_status_t
bfa_uf_post(struct bfa_uf_mod_s *ufm, struct bfa_uf_s *uf)
static void
bfa_uf_post_all(struct bfa_uf_mod_s *uf_mod)
static void
uf_recv(struct bfa_s *bfa, struct bfi_uf_frm_rcvd_s *m)
static void
bfa_uf_stop(struct bfa_s *bfa)
static void
bfa_uf_iocdisable(struct bfa_s *bfa)
static void
bfa_uf_start(struct bfa_s *bfa)
void
bfa_uf_recv_register(struct bfa_s *bfa, bfa_cb_uf_recv_t ufrecv, void *cbarg)
void
bfa_uf_free(struct bfa_uf_s *uf)
void
bfa_uf_isr(struct bfa_s *bfa, struct bfi_msg_s *msg)
