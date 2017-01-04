#define __BFA_FCS_H__
#define BFA_FCS_OS_STR_LEN		64
enum bfa_lps_event ;
enum ;
struct bfa_fcs_s;
#define __fcs_min_cfg(__fcs)       ((__fcs)->min_cfg)
#define BFA_FCS_BRCD_SWITCH_OUI  0x051e
#define N2N_LOCAL_PID	    0x010000
#define N2N_REMOTE_PID		0x020000
#define	BFA_FCS_RETRY_TIMEOUT 2000
#define BFA_FCS_PID_IS_WKA(pid)  ((bfa_ntoh3b(pid) > 0xFFF000) ?  1 : 0)
struct bfa_fcs_lport_ns_s ;
struct bfa_fcs_lport_scn_s ;
struct bfa_fcs_lport_fdmi_s ;
struct bfa_fcs_lport_ms_s ;
struct bfa_fcs_lport_fab_s ;
#define	MAX_ALPA_COUNT	127
struct bfa_fcs_lport_loop_s ;
struct bfa_fcs_lport_n2n_s ;
union bfa_fcs_lport_topo_u ;
struct bfa_fcs_lport_s ;
#define BFA_FCS_GET_HAL_FROM_PORT(port)  (port->fcs->bfa)
#define BFA_FCS_GET_NS_FROM_PORT(port)  (&port->port_topo.pfab.ns)
#define BFA_FCS_GET_SCN_FROM_PORT(port)  (&port->port_topo.pfab.scn)
#define BFA_FCS_GET_MS_FROM_PORT(port)  (&port->port_topo.pfab.ms)
#define BFA_FCS_GET_FDMI_FROM_PORT(port)  (&port->port_topo.pfab.ms.fdmi)
#define	BFA_FCS_VPORT_IS_INITIATOR_MODE(port) \
(port->port_cfg.roles & BFA_LPORT_ROLE_FCP_IM)
struct bfad_vf_s;
enum bfa_fcs_fabric_type ;
struct bfa_fcs_fabric_s ;
#define bfa_fcs_fabric_npiv_capable(__f)    ((__f)->is_npiv)
#define bfa_fcs_fabric_is_switched(__f)			\
((__f)->fab_type == BFA_FCS_FABRIC_SWITCHED)
#define bfa_fcs_vf_t struct bfa_fcs_fabric_s
struct bfa_vf_event_s ;
struct bfa_fcs_s;
struct bfa_fcs_fabric_s;
#define BFA_FCS_MAX_RPORTS_SUPP  256
#define bfa_fcs_lport_t struct bfa_fcs_lport_s
#define BFA_FCS_PORT_SYMBNAME_SEPARATOR			" | "
#define BFA_FCS_PORT_SYMBNAME_MODEL_SZ			12
#define BFA_FCS_PORT_SYMBNAME_VERSION_SZ		10
#define BFA_FCS_PORT_SYMBNAME_MACHINENAME_SZ		30
#define BFA_FCS_PORT_SYMBNAME_OSINFO_SZ			48
#define BFA_FCS_PORT_SYMBNAME_OSPATCH_SZ		16
#define bfa_fcs_lport_get_fcid(_lport)	((_lport)->pid)
#define bfa_fcs_lport_get_pwwn(_lport)	((_lport)->port_cfg.pwwn)
#define bfa_fcs_lport_get_nwwn(_lport)	((_lport)->port_cfg.nwwn)
#define bfa_fcs_lport_get_psym_name(_lport)	((_lport)->port_cfg.sym_name)
#define bfa_fcs_lport_is_initiator(_lport)			\
((_lport)->port_cfg.roles & BFA_LPORT_ROLE_FCP_IM)
#define bfa_fcs_lport_get_nrports(_lport)	\
((_lport) ? (_lport)->num_rports : 0)
static inline struct bfad_port_s *
bfa_fcs_lport_get_drvport(struct bfa_fcs_lport_s *port)
#define bfa_fcs_lport_get_opertype(_lport)	((_lport)->fabric->oper_type)
#define bfa_fcs_lport_get_fabric_name(_lport)	((_lport)->fabric->fabric_name)
#define bfa_fcs_lport_get_fabric_ipaddr(_lport)		\
((_lport)->fabric->fabric_ip_addr)
bfa_boolean_t   bfa_fcs_lport_is_online(struct bfa_fcs_lport_s *port);
struct bfa_fcs_lport_s *bfa_fcs_get_base_port(struct bfa_fcs_s *fcs);
void bfa_fcs_lport_get_rports(struct bfa_fcs_lport_s *port,
wwn_t rport_wwns[], int *nrports);
wwn_t bfa_fcs_lport_get_rport(struct bfa_fcs_lport_s *port, wwn_t wwn,
int index, int nrports, bfa_boolean_t bwwn);
struct bfa_fcs_lport_s *bfa_fcs_lookup_port(struct bfa_fcs_s *fcs,
u16 vf_id, wwn_t lpwwn);
void bfa_fcs_lport_get_info(struct bfa_fcs_lport_s *port,
struct bfa_lport_info_s *port_info);
void bfa_fcs_lport_get_attr(struct bfa_fcs_lport_s *port,
struct bfa_lport_attr_s *port_attr);
void bfa_fcs_lport_get_stats(struct bfa_fcs_lport_s *fcs_port,
struct bfa_lport_stats_s *port_stats);
void bfa_fcs_lport_clear_stats(struct bfa_fcs_lport_s *fcs_port);
enum bfa_port_speed bfa_fcs_lport_get_rport_max_speed(
struct bfa_fcs_lport_s *port);
void bfa_fcs_lport_ms_init(struct bfa_fcs_lport_s *port);
void bfa_fcs_lport_ms_offline(struct bfa_fcs_lport_s *port);
void bfa_fcs_lport_ms_online(struct bfa_fcs_lport_s *port);
void bfa_fcs_lport_ms_fabric_rscn(struct bfa_fcs_lport_s *port);
void bfa_fcs_lport_fdmi_init(struct bfa_fcs_lport_ms_s *ms);
void bfa_fcs_lport_fdmi_offline(struct bfa_fcs_lport_ms_s *ms);
void bfa_fcs_lport_fdmi_online(struct bfa_fcs_lport_ms_s *ms);
void bfa_fcs_lport_uf_recv(struct bfa_fcs_lport_s *lport, struct fchs_s *fchs,
u16 len);
void bfa_fcs_lport_attach(struct bfa_fcs_lport_s *lport, struct bfa_fcs_s *fcs,
u16 vf_id, struct bfa_fcs_vport_s *vport);
void bfa_fcs_lport_init(struct bfa_fcs_lport_s *lport,
struct bfa_lport_cfg_s *port_cfg);
void            bfa_fcs_lport_online(struct bfa_fcs_lport_s *port);
void            bfa_fcs_lport_offline(struct bfa_fcs_lport_s *port);
void            bfa_fcs_lport_delete(struct bfa_fcs_lport_s *port);
struct bfa_fcs_rport_s *bfa_fcs_lport_get_rport_by_pid(
struct bfa_fcs_lport_s *port, u32 pid);
struct bfa_fcs_rport_s *bfa_fcs_lport_get_rport_by_pwwn(
struct bfa_fcs_lport_s *port, wwn_t pwwn);
struct bfa_fcs_rport_s *bfa_fcs_lport_get_rport_by_nwwn(
struct bfa_fcs_lport_s *port, wwn_t nwwn);
void            bfa_fcs_lport_add_rport(struct bfa_fcs_lport_s *port,
struct bfa_fcs_rport_s *rport);
void            bfa_fcs_lport_del_rport(struct bfa_fcs_lport_s *port,
struct bfa_fcs_rport_s *rport);
void            bfa_fcs_lport_ns_init(struct bfa_fcs_lport_s *vport);
void            bfa_fcs_lport_ns_offline(struct bfa_fcs_lport_s *vport);
void            bfa_fcs_lport_ns_online(struct bfa_fcs_lport_s *vport);
void            bfa_fcs_lport_ns_query(struct bfa_fcs_lport_s *port);
void            bfa_fcs_lport_scn_init(struct bfa_fcs_lport_s *vport);
void            bfa_fcs_lport_scn_offline(struct bfa_fcs_lport_s *vport);
void            bfa_fcs_lport_scn_online(struct bfa_fcs_lport_s *vport);
void            bfa_fcs_lport_scn_process_rscn(struct bfa_fcs_lport_s *port,
struct fchs_s *rx_frame, u32 len);
struct bfa_fcs_vport_s ;
#define bfa_fcs_vport_get_port(vport)			\
((struct bfa_fcs_lport_s  *)(&vport->port))
bfa_status_t bfa_fcs_vport_create(struct bfa_fcs_vport_s *vport,
struct bfa_fcs_s *fcs, u16 vf_id,
struct bfa_lport_cfg_s *port_cfg,
struct bfad_vport_s *vport_drv);
bfa_status_t bfa_fcs_pbc_vport_create(struct bfa_fcs_vport_s *vport,
struct bfa_fcs_s *fcs, u16 vf_id,
struct bfa_lport_cfg_s *port_cfg,
struct bfad_vport_s *vport_drv);
bfa_boolean_t bfa_fcs_is_pbc_vport(struct bfa_fcs_vport_s *vport);
bfa_status_t bfa_fcs_vport_delete(struct bfa_fcs_vport_s *vport);
bfa_status_t bfa_fcs_vport_start(struct bfa_fcs_vport_s *vport);
bfa_status_t bfa_fcs_vport_stop(struct bfa_fcs_vport_s *vport);
void bfa_fcs_vport_get_attr(struct bfa_fcs_vport_s *vport,
struct bfa_vport_attr_s *vport_attr);
struct bfa_fcs_vport_s *bfa_fcs_vport_lookup(struct bfa_fcs_s *fcs,
u16 vf_id, wwn_t vpwwn);
void bfa_fcs_vport_cleanup(struct bfa_fcs_vport_s *vport);
void bfa_fcs_vport_online(struct bfa_fcs_vport_s *vport);
void bfa_fcs_vport_offline(struct bfa_fcs_vport_s *vport);
void bfa_fcs_vport_delete_comp(struct bfa_fcs_vport_s *vport);
void bfa_fcs_vport_fcs_delete(struct bfa_fcs_vport_s *vport);
#define BFA_FCS_RPORT_DEF_DEL_TIMEOUT	90
#define BFA_FCS_RPORT_MAX_RETRIES	(5)
struct bfad_rport_s;
struct bfa_fcs_itnim_s;
struct bfa_fcs_tin_s;
struct bfa_fcs_iprp_s;
struct bfa_fcs_rpf_s ;
struct bfa_fcs_rport_s ;
static inline struct bfa_rport_s *
bfa_fcs_rport_get_halrport(struct bfa_fcs_rport_s *rport)
struct bfa_fcs_rport_s *bfa_fcs_rport_lookup(struct bfa_fcs_lport_s *port,
wwn_t rpwwn);
struct bfa_fcs_rport_s *bfa_fcs_rport_lookup_by_nwwn(
struct bfa_fcs_lport_s *port, wwn_t rnwwn);
void bfa_fcs_rport_set_del_timeout(u8 rport_tmo);
void bfa_fcs_rport_uf_recv(struct bfa_fcs_rport_s *rport,
struct fchs_s *fchs, u16 len);
void bfa_fcs_rport_scn(struct bfa_fcs_rport_s *rport);
struct bfa_fcs_rport_s *bfa_fcs_rport_create(struct bfa_fcs_lport_s *port,
u32 pid);
void bfa_fcs_rport_start(struct bfa_fcs_lport_s *port, struct fchs_s *rx_fchs,
struct fc_logi_s *plogi_rsp);
void bfa_fcs_rport_plogi_create(struct bfa_fcs_lport_s *port,
struct fchs_s *rx_fchs,
struct fc_logi_s *plogi);
void bfa_fcs_rport_plogi(struct bfa_fcs_rport_s *rport, struct fchs_s *fchs,
struct fc_logi_s *plogi);
void bfa_fcs_rport_prlo(struct bfa_fcs_rport_s *rport, __be16 ox_id);
void bfa_fcs_rport_itntm_ack(struct bfa_fcs_rport_s *rport);
void bfa_fcs_rport_fcptm_offline_done(struct bfa_fcs_rport_s *rport);
int  bfa_fcs_rport_get_state(struct bfa_fcs_rport_s *rport);
struct bfa_fcs_rport_s *bfa_fcs_rport_create_by_wwn(
struct bfa_fcs_lport_s *port, wwn_t wwn);
void  bfa_fcs_rpf_init(struct bfa_fcs_rport_s *rport);
void  bfa_fcs_rpf_rport_online(struct bfa_fcs_rport_s *rport);
void  bfa_fcs_rpf_rport_offline(struct bfa_fcs_rport_s *rport);
struct bfad_itnim_s;
struct bfa_fcs_itnim_s ;
#define bfa_fcs_fcxp_alloc(__fcs)	\
bfa_fcxp_alloc(NULL, (__fcs)->bfa, 0, 0, NULL, NULL, NULL, NULL)
#define bfa_fcs_fcxp_alloc_wait(__bfa, __wqe, __alloc_cbfn, __alloc_cbarg) \
bfa_fcxp_alloc_wait(__bfa, __wqe, __alloc_cbfn, __alloc_cbarg, \
NULL, 0, 0, NULL, NULL, NULL, NULL)
static inline struct bfad_port_s *
bfa_fcs_itnim_get_drvport(struct bfa_fcs_itnim_s *itnim)
static inline struct bfa_fcs_lport_s *
bfa_fcs_itnim_get_port(struct bfa_fcs_itnim_s *itnim)
static inline wwn_t
bfa_fcs_itnim_get_nwwn(struct bfa_fcs_itnim_s *itnim)
static inline wwn_t
bfa_fcs_itnim_get_pwwn(struct bfa_fcs_itnim_s *itnim)
static inline u32
bfa_fcs_itnim_get_fcid(struct bfa_fcs_itnim_s *itnim)
static inline	u32
bfa_fcs_itnim_get_maxfrsize(struct bfa_fcs_itnim_s *itnim)
static inline	enum fc_cos
bfa_fcs_itnim_get_cos(struct bfa_fcs_itnim_s *itnim)
static inline struct bfad_itnim_s *
bfa_fcs_itnim_get_drvitn(struct bfa_fcs_itnim_s *itnim)
static inline struct bfa_itnim_s *
bfa_fcs_itnim_get_halitn(struct bfa_fcs_itnim_s *itnim)
void bfa_fcs_itnim_get_attr(struct bfa_fcs_itnim_s *itnim,
struct bfa_itnim_attr_s *attr);
void bfa_fcs_itnim_get_stats(struct bfa_fcs_itnim_s *itnim,
struct bfa_itnim_stats_s *stats);
struct bfa_fcs_itnim_s *bfa_fcs_itnim_lookup(struct bfa_fcs_lport_s *port,
wwn_t rpwwn);
bfa_status_t bfa_fcs_itnim_attr_get(struct bfa_fcs_lport_s *port, wwn_t rpwwn,
struct bfa_itnim_attr_s *attr);
bfa_status_t bfa_fcs_itnim_stats_get(struct bfa_fcs_lport_s *port, wwn_t rpwwn,
struct bfa_itnim_stats_s *stats);
bfa_status_t bfa_fcs_itnim_stats_clear(struct bfa_fcs_lport_s *port,
wwn_t rpwwn);
struct bfa_fcs_itnim_s *bfa_fcs_itnim_create(struct bfa_fcs_rport_s *rport);
void bfa_fcs_itnim_delete(struct bfa_fcs_itnim_s *itnim);
void bfa_fcs_itnim_rport_offline(struct bfa_fcs_itnim_s *itnim);
void bfa_fcs_itnim_rport_online(struct bfa_fcs_itnim_s *itnim);
bfa_status_t bfa_fcs_itnim_get_online_state(struct bfa_fcs_itnim_s *itnim);
void bfa_fcs_itnim_is_initiator(struct bfa_fcs_itnim_s *itnim);
void bfa_fcs_fcpim_uf_recv(struct bfa_fcs_itnim_s *itnim,
struct fchs_s *fchs, u16 len);
#define	BFA_FCS_FDMI_SUPORTED_SPEEDS  (FDMI_TRANS_SPEED_1G  |	\
FDMI_TRANS_SPEED_2G |	\
FDMI_TRANS_SPEED_4G |	\
FDMI_TRANS_SPEED_8G)
struct bfa_fcs_fdmi_hba_attr_s ;
struct bfa_fcs_fdmi_port_attr_s ;
struct bfa_fcs_stats_s ;
struct bfa_fcs_driver_info_s ;
struct bfa_fcs_s ;
enum bfa_fcs_fabric_event ;
enum rport_event ;
void bfa_fcs_attach(struct bfa_fcs_s *fcs, struct bfa_s *bfa,
struct bfad_s *bfad,
bfa_boolean_t min_cfg);
void bfa_fcs_init(struct bfa_fcs_s *fcs);
void bfa_fcs_driver_info_init(struct bfa_fcs_s *fcs,
struct bfa_fcs_driver_info_s *driver_info);
void bfa_fcs_exit(struct bfa_fcs_s *fcs);
bfa_fcs_vf_t *bfa_fcs_vf_lookup(struct bfa_fcs_s *fcs, u16 vf_id);
void bfa_fcs_fabric_attach(struct bfa_fcs_s *fcs);
void bfa_fcs_fabric_modinit(struct bfa_fcs_s *fcs);
void bfa_fcs_fabric_modexit(struct bfa_fcs_s *fcs);
void bfa_fcs_fabric_link_up(struct bfa_fcs_fabric_s *fabric);
void bfa_fcs_fabric_link_down(struct bfa_fcs_fabric_s *fabric);
void bfa_fcs_fabric_addvport(struct bfa_fcs_fabric_s *fabric,
struct bfa_fcs_vport_s *vport);
void bfa_fcs_fabric_delvport(struct bfa_fcs_fabric_s *fabric,
struct bfa_fcs_vport_s *vport);
struct bfa_fcs_vport_s *bfa_fcs_fabric_vport_lookup(
struct bfa_fcs_fabric_s *fabric, wwn_t pwwn);
void bfa_fcs_fabric_modstart(struct bfa_fcs_s *fcs);
void bfa_fcs_fabric_uf_recv(struct bfa_fcs_fabric_s *fabric,
struct fchs_s *fchs, u16 len);
void	bfa_fcs_fabric_psymb_init(struct bfa_fcs_fabric_s *fabric);
void bfa_fcs_fabric_set_fabric_name(struct bfa_fcs_fabric_s *fabric,
wwn_t fabric_name);
u16 bfa_fcs_fabric_get_switch_oui(struct bfa_fcs_fabric_s *fabric);
void bfa_fcs_uf_attach(struct bfa_fcs_s *fcs);
void bfa_fcs_port_attach(struct bfa_fcs_s *fcs);
void bfa_fcs_fabric_sm_online(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event);
void bfa_fcs_fabric_sm_loopback(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event);
void bfa_fcs_fabric_sm_auth_failed(struct bfa_fcs_fabric_s *fabric,
enum bfa_fcs_fabric_event event);
struct bfad_port_s;
struct bfad_vf_s;
struct bfad_vport_s;
struct bfad_rport_s;
struct bfad_port_s *bfa_fcb_lport_new(struct bfad_s *bfad,
struct bfa_fcs_lport_s *port,
enum bfa_lport_role roles,
struct bfad_vf_s *vf_drv,
struct bfad_vport_s *vp_drv);
void bfa_fcb_lport_delete(struct bfad_s *bfad, enum bfa_lport_role roles,
struct bfad_vf_s *vf_drv,
struct bfad_vport_s *vp_drv);
void bfa_fcb_pbc_vport_create(struct bfad_s *bfad, struct bfi_pbc_vport_s);
bfa_status_t bfa_fcb_rport_alloc(struct bfad_s *bfad,
struct bfa_fcs_rport_s **rport,
struct bfad_rport_s **rport_drv);
void bfa_fcb_itnim_alloc(struct bfad_s *bfad, struct bfa_fcs_itnim_s **itnim,
struct bfad_itnim_s **itnim_drv);
void bfa_fcb_itnim_free(struct bfad_s *bfad,
struct bfad_itnim_s *itnim_drv);
void bfa_fcb_itnim_online(struct bfad_itnim_s *itnim_drv);
void bfa_fcb_itnim_offline(struct bfad_itnim_s *itnim_drv);
