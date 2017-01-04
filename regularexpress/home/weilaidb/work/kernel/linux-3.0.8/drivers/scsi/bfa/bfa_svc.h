#define __BFA_SVC_H__
#define BFA_SGPG_MIN	(16)
#define BFA_SGPG_ROUNDUP(_l) (((_l) + (sizeof(struct bfi_sgpg_s) - 1))	\
& ~(sizeof(struct bfi_sgpg_s) - 1))
struct bfa_sgpg_wqe_s ;
struct bfa_sgpg_s ;
#define BFA_SGPG_NPAGE(_nsges)  (((_nsges) / BFI_SGPG_DATA_SGES) + 1)
struct bfa_sgpg_mod_s ;
#define BFA_SGPG_MOD(__bfa)	(&(__bfa)->modules.sgpg_mod)
bfa_status_t bfa_sgpg_malloc(struct bfa_s *bfa, struct list_head *sgpg_q,
int nsgpgs);
void bfa_sgpg_mfree(struct bfa_s *bfa, struct list_head *sgpg_q, int nsgpgs);
void bfa_sgpg_winit(struct bfa_sgpg_wqe_s *wqe,
void (*cbfn) (void *cbarg), void *cbarg);
void bfa_sgpg_wait(struct bfa_s *bfa, struct bfa_sgpg_wqe_s *wqe, int nsgpgs);
void bfa_sgpg_wcancel(struct bfa_s *bfa, struct bfa_sgpg_wqe_s *wqe);
#define BFA_FCXP_MIN		(1)
#define BFA_FCXP_MAX_IBUF_SZ	(2 * 1024 + 256)
#define BFA_FCXP_MAX_LBUF_SZ	(4 * 1024 + 256)
struct bfa_fcxp_mod_s ;
#define BFA_FCXP_MOD(__bfa)		(&(__bfa)->modules.fcxp_mod)
#define BFA_FCXP_FROM_TAG(__mod, __tag)	(&(__mod)->fcxp_list[__tag])
typedef void    (*fcxp_send_cb_t) (struct bfa_s *ioc, struct bfa_fcxp_s *fcxp,
void *cb_arg, bfa_status_t req_status,
u32 rsp_len, u32 resid_len,
struct fchs_s *rsp_fchs);
typedef u64 (*bfa_fcxp_get_sgaddr_t) (void *bfad_fcxp, int sgeid);
typedef u32 (*bfa_fcxp_get_sglen_t) (void *bfad_fcxp, int sgeid);
typedef void (*bfa_cb_fcxp_send_t) (void *bfad_fcxp, struct bfa_fcxp_s *fcxp,
void *cbarg, enum bfa_status req_status,
u32 rsp_len, u32 resid_len,
struct fchs_s *rsp_fchs);
typedef void (*bfa_fcxp_alloc_cbfn_t) (void *cbarg, struct bfa_fcxp_s *fcxp);
struct bfa_fcxp_req_info_s ;
struct bfa_fcxp_rsp_info_s ;
struct bfa_fcxp_s ;
struct bfa_fcxp_wqe_s ;
#define BFA_FCXP_REQ_PLD(_fcxp)		(bfa_fcxp_get_reqbuf(_fcxp))
#define BFA_FCXP_RSP_FCHS(_fcxp)	(&((_fcxp)->rsp_info.fchs))
#define BFA_FCXP_RSP_PLD(_fcxp)		(bfa_fcxp_get_rspbuf(_fcxp))
#define BFA_FCXP_REQ_PLD_PA(_fcxp)				\
((_fcxp)->fcxp_mod->req_pld_list_pa +			\
((_fcxp)->fcxp_mod->req_pld_sz  * (_fcxp)->fcxp_tag))
#define BFA_FCXP_RSP_PLD_PA(_fcxp)				\
((_fcxp)->fcxp_mod->rsp_pld_list_pa +			\
((_fcxp)->fcxp_mod->rsp_pld_sz * (_fcxp)->fcxp_tag))
void	bfa_fcxp_isr(struct bfa_s *bfa, struct bfi_msg_s *msg);
enum bfa_rport_event ;
#define BFA_RPORT_MIN	4
struct bfa_rport_mod_s ;
#define BFA_RPORT_MOD(__bfa)	(&(__bfa)->modules.rport_mod)
#define BFA_RPORT_FROM_TAG(__bfa, _tag)				\
(BFA_RPORT_MOD(__bfa)->rps_list +			\
((_tag) & (BFA_RPORT_MOD(__bfa)->num_rports - 1)))
void	bfa_rport_isr(struct bfa_s *bfa, struct bfi_msg_s *msg);
struct bfa_rport_info_s ;
struct bfa_rport_s ;
#define BFA_RPORT_FC_COS(_rport)	((_rport)->rport_info.fc_class)
#define BFA_UF_MIN	(4)
struct bfa_uf_s ;
typedef void (*bfa_cb_uf_recv_t) (void *cbarg, struct bfa_uf_s *uf);
struct bfa_uf_mod_s ;
#define BFA_UF_MOD(__bfa)	(&(__bfa)->modules.uf_mod)
#define ufm_pbs_pa(_ufmod, _uftag)					\
((_ufmod)->uf_pbs_pa + sizeof(struct bfa_uf_buf_s) * (_uftag))
void	bfa_uf_isr(struct bfa_s *bfa, struct bfi_msg_s *msg);
#define BFA_UF_BUFSZ	(2 * 1024 + 256)
struct bfa_uf_buf_s ;
struct bfa_lps_s ;
struct bfa_lps_mod_s ;
#define BFA_LPS_MOD(__bfa)		(&(__bfa)->modules.lps_mod)
#define BFA_LPS_FROM_TAG(__mod, __tag)	(&(__mod)->lps_arr[__tag])
void	bfa_lps_isr(struct bfa_s *bfa, struct bfi_msg_s *msg);
#define BFA_FCPORT(_bfa)	(&((_bfa)->modules.port))
typedef void (*bfa_cb_port_t) (void *cbarg, enum bfa_status status);
struct bfa_fcport_ln_s ;
struct bfa_fcport_trunk_s ;
struct bfa_fcport_s ;
#define BFA_FCPORT_MOD(__bfa)	(&(__bfa)->modules.fcport)
void bfa_fcport_init(struct bfa_s *bfa);
void bfa_fcport_isr(struct bfa_s *bfa, struct bfi_msg_s *msg);
bfa_status_t bfa_fcport_enable(struct bfa_s *bfa);
bfa_status_t bfa_fcport_disable(struct bfa_s *bfa);
bfa_status_t bfa_fcport_cfg_speed(struct bfa_s *bfa,
enum bfa_port_speed speed);
enum bfa_port_speed bfa_fcport_get_speed(struct bfa_s *bfa);
bfa_status_t bfa_fcport_cfg_topology(struct bfa_s *bfa,
enum bfa_port_topology topo);
enum bfa_port_topology bfa_fcport_get_topology(struct bfa_s *bfa);
bfa_status_t bfa_fcport_cfg_hardalpa(struct bfa_s *bfa, u8 alpa);
bfa_boolean_t bfa_fcport_get_hardalpa(struct bfa_s *bfa, u8 *alpa);
u8 bfa_fcport_get_myalpa(struct bfa_s *bfa);
bfa_status_t bfa_fcport_clr_hardalpa(struct bfa_s *bfa);
bfa_status_t bfa_fcport_cfg_maxfrsize(struct bfa_s *bfa, u16 maxsize);
u16 bfa_fcport_get_maxfrsize(struct bfa_s *bfa);
u8 bfa_fcport_get_rx_bbcredit(struct bfa_s *bfa);
void bfa_fcport_get_attr(struct bfa_s *bfa, struct bfa_port_attr_s *attr);
wwn_t bfa_fcport_get_wwn(struct bfa_s *bfa, bfa_boolean_t node);
void bfa_fcport_event_register(struct bfa_s *bfa,
void (*event_cbfn) (void *cbarg,
enum bfa_port_linkstate event), void *event_cbarg);
bfa_boolean_t bfa_fcport_is_disabled(struct bfa_s *bfa);
enum bfa_port_speed bfa_fcport_get_ratelim_speed(struct bfa_s *bfa);
void bfa_fcport_set_tx_bbcredit(struct bfa_s *bfa, u16 tx_bbcredit);
bfa_boolean_t     bfa_fcport_is_ratelim(struct bfa_s *bfa);
bfa_boolean_t	bfa_fcport_is_linkup(struct bfa_s *bfa);
bfa_status_t bfa_fcport_get_stats(struct bfa_s *bfa,
union bfa_fcport_stats_u *stats,
bfa_cb_port_t cbfn, void *cbarg);
bfa_status_t bfa_fcport_clear_stats(struct bfa_s *bfa, bfa_cb_port_t cbfn,
void *cbarg);
bfa_boolean_t bfa_fcport_is_qos_enabled(struct bfa_s *bfa);
struct bfa_rport_s *bfa_rport_create(struct bfa_s *bfa, void *rport_drv);
void bfa_rport_online(struct bfa_rport_s *rport,
struct bfa_rport_info_s *rport_info);
void bfa_rport_speed(struct bfa_rport_s *rport, enum bfa_port_speed speed);
void bfa_cb_rport_online(void *rport);
void bfa_cb_rport_offline(void *rport);
void bfa_cb_rport_qos_scn_flowid(void *rport,
struct bfa_rport_qos_attr_s old_qos_attr,
struct bfa_rport_qos_attr_s new_qos_attr);
void bfa_cb_rport_qos_scn_prio(void *rport,
struct bfa_rport_qos_attr_s old_qos_attr,
struct bfa_rport_qos_attr_s new_qos_attr);
struct bfa_fcxp_s *bfa_fcxp_alloc(void *bfad_fcxp, struct bfa_s *bfa,
int nreq_sgles, int nrsp_sgles,
bfa_fcxp_get_sgaddr_t get_req_sga,
bfa_fcxp_get_sglen_t get_req_sglen,
bfa_fcxp_get_sgaddr_t get_rsp_sga,
bfa_fcxp_get_sglen_t get_rsp_sglen);
void bfa_fcxp_alloc_wait(struct bfa_s *bfa, struct bfa_fcxp_wqe_s *wqe,
bfa_fcxp_alloc_cbfn_t alloc_cbfn,
void *cbarg, void *bfad_fcxp,
int nreq_sgles, int nrsp_sgles,
bfa_fcxp_get_sgaddr_t get_req_sga,
bfa_fcxp_get_sglen_t get_req_sglen,
bfa_fcxp_get_sgaddr_t get_rsp_sga,
bfa_fcxp_get_sglen_t get_rsp_sglen);
void bfa_fcxp_walloc_cancel(struct bfa_s *bfa,
struct bfa_fcxp_wqe_s *wqe);
void bfa_fcxp_discard(struct bfa_fcxp_s *fcxp);
void *bfa_fcxp_get_reqbuf(struct bfa_fcxp_s *fcxp);
void *bfa_fcxp_get_rspbuf(struct bfa_fcxp_s *fcxp);
void bfa_fcxp_free(struct bfa_fcxp_s *fcxp);
void bfa_fcxp_send(struct bfa_fcxp_s *fcxp, struct bfa_rport_s *rport,
u16 vf_id, u8 lp_tag,
bfa_boolean_t cts, enum fc_cos cos,
u32 reqlen, struct fchs_s *fchs,
bfa_cb_fcxp_send_t cbfn,
void *cbarg,
u32 rsp_maxlen, u8 rsp_timeout);
bfa_status_t bfa_fcxp_abort(struct bfa_fcxp_s *fcxp);
u32 bfa_fcxp_get_reqbufsz(struct bfa_fcxp_s *fcxp);
u32 bfa_fcxp_get_maxrsp(struct bfa_s *bfa);
static inline void *
bfa_uf_get_frmbuf(struct bfa_uf_s *uf)
static inline   u16
bfa_uf_get_frmlen(struct bfa_uf_s *uf)
void bfa_uf_recv_register(struct bfa_s *bfa, bfa_cb_uf_recv_t ufrecv,
void *cbarg);
void bfa_uf_free(struct bfa_uf_s *uf);
u32 bfa_lps_get_max_vport(struct bfa_s *bfa);
struct bfa_lps_s *bfa_lps_alloc(struct bfa_s *bfa);
void bfa_lps_delete(struct bfa_lps_s *lps);
void bfa_lps_flogi(struct bfa_lps_s *lps, void *uarg, u8 alpa,
u16 pdusz, wwn_t pwwn, wwn_t nwwn,
bfa_boolean_t auth_en);
void bfa_lps_fdisc(struct bfa_lps_s *lps, void *uarg, u16 pdusz,
wwn_t pwwn, wwn_t nwwn);
void bfa_lps_fdisclogo(struct bfa_lps_s *lps);
void bfa_lps_set_n2n_pid(struct bfa_lps_s *lps, u32 n2n_pid);
u32 bfa_lps_get_base_pid(struct bfa_s *bfa);
u8 bfa_lps_get_tag_from_pid(struct bfa_s *bfa, u32 pid);
void bfa_cb_lps_flogi_comp(void *bfad, void *uarg, bfa_status_t status);
void bfa_cb_lps_fdisc_comp(void *bfad, void *uarg, bfa_status_t status);
void bfa_cb_lps_fdisclogo_comp(void *bfad, void *uarg);
void bfa_cb_lps_cvl_event(void *bfad, void *uarg);
