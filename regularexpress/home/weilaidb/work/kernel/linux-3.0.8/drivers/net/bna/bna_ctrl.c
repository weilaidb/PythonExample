static void bna_device_cb_port_stopped(void *arg, enum bna_cb_status status);
static void
bna_port_cb_link_up(struct bna_port *port, struct bfi_ll_aen *aen,
int status)
static void
bna_port_cb_link_down(struct bna_port *port, int status)
static inline int
llport_can_be_up(struct bna_llport *llport)
#define llport_is_up llport_can_be_up
enum bna_llport_event ;
static void
bna_llport_cb_port_enabled(struct bna_llport *llport)
static void
bna_llport_cb_port_disabled(struct bna_llport *llport)
static int
bna_is_aen(u8 msg_id)
static void
bna_mbox_aen_callback(struct bna *bna, struct bfi_mbmsg *msg)
static void
bna_ll_isr(void *llarg, struct bfi_mbmsg *msg)
static void
bna_err_handler(struct bna *bna, u32 intr_status)
void
bna_mbox_handler(struct bna *bna, u32 intr_status)
void
bna_mbox_send(struct bna *bna, struct bna_mbox_qe *mbox_qe)
static void
bna_mbox_flush_q(struct bna *bna, struct list_head *q)
static void
bna_mbox_mod_start(struct bna_mbox_mod *mbox_mod)
static void
bna_mbox_mod_stop(struct bna_mbox_mod *mbox_mod)
static void
bna_mbox_mod_init(struct bna_mbox_mod *mbox_mod, struct bna *bna)
static void
bna_mbox_mod_uninit(struct bna_mbox_mod *mbox_mod)
#define call_llport_stop_cbfn(llport, status)\
do  while (0)
static void bna_fw_llport_up(struct bna_llport *llport);
static void bna_fw_cb_llport_up(void *arg, int status);
static void bna_fw_llport_down(struct bna_llport *llport);
static void bna_fw_cb_llport_down(void *arg, int status);
static void bna_llport_start(struct bna_llport *llport);
static void bna_llport_stop(struct bna_llport *llport);
static void bna_llport_fail(struct bna_llport *llport);
enum bna_llport_state ;
bfa_fsm_state_decl(bna_llport, stopped, struct bna_llport,
enum bna_llport_event);
bfa_fsm_state_decl(bna_llport, down, struct bna_llport,
enum bna_llport_event);
bfa_fsm_state_decl(bna_llport, up_resp_wait, struct bna_llport,
enum bna_llport_event);
bfa_fsm_state_decl(bna_llport, down_resp_wait, struct bna_llport,
enum bna_llport_event);
bfa_fsm_state_decl(bna_llport, up, struct bna_llport,
enum bna_llport_event);
bfa_fsm_state_decl(bna_llport, last_resp_wait, struct bna_llport,
enum bna_llport_event);
static struct bfa_sm_table llport_sm_table[] = ;
static void
bna_llport_sm_stopped_entry(struct bna_llport *llport)
static void
bna_llport_sm_stopped(struct bna_llport *llport,
enum bna_llport_event event)
static void
bna_llport_sm_down_entry(struct bna_llport *llport)
static void
bna_llport_sm_down(struct bna_llport *llport,
enum bna_llport_event event)
static void
bna_llport_sm_up_resp_wait_entry(struct bna_llport *llport)
static void
bna_llport_sm_up_resp_wait(struct bna_llport *llport,
enum bna_llport_event event)
static void
bna_llport_sm_down_resp_wait_entry(struct bna_llport *llport)
static void
bna_llport_sm_down_resp_wait(struct bna_llport *llport,
enum bna_llport_event event)
static void
bna_llport_sm_up_entry(struct bna_llport *llport)
static void
bna_llport_sm_up(struct bna_llport *llport,
enum bna_llport_event event)
static void
bna_llport_sm_last_resp_wait_entry(struct bna_llport *llport)
static void
bna_llport_sm_last_resp_wait(struct bna_llport *llport,
enum bna_llport_event event)
static void
bna_fw_llport_admin_up(struct bna_llport *llport)
static void
bna_fw_llport_up(struct bna_llport *llport)
static void
bna_fw_cb_llport_up(void *arg, int status)
static void
bna_fw_llport_admin_down(struct bna_llport *llport)
static void
bna_fw_llport_down(struct bna_llport *llport)
static void
bna_fw_cb_llport_down(void *arg, int status)
static void
bna_port_cb_llport_stopped(struct bna_port *port,
enum bna_cb_status status)
static void
bna_llport_init(struct bna_llport *llport, struct bna *bna)
static void
bna_llport_uninit(struct bna_llport *llport)
static void
bna_llport_start(struct bna_llport *llport)
static void
bna_llport_stop(struct bna_llport *llport)
static void
bna_llport_fail(struct bna_llport *llport)
static int
bna_llport_state_get(struct bna_llport *llport)
void
bna_llport_rx_started(struct bna_llport *llport)
void
bna_llport_rx_stopped(struct bna_llport *llport)
#define bna_port_chld_start(port)\
do  while (0)
#define bna_port_chld_stop(port)\
do  while (0)
#define bna_port_chld_fail(port)\
do  while (0)
#define bna_port_rx_start(port)\
do  while (0)
#define bna_port_rx_stop(port)\
do  while (0)
#define call_port_stop_cbfn(port, status)\
do  while (0)
#define call_port_pause_cbfn(port, status)\
do  while (0)
#define call_port_mtu_cbfn(port, status)\
do  while (0)
static void bna_fw_pause_set(struct bna_port *port);
static void bna_fw_cb_pause_set(void *arg, int status);
static void bna_fw_mtu_set(struct bna_port *port);
static void bna_fw_cb_mtu_set(void *arg, int status);
enum bna_port_event ;
enum bna_port_state ;
bfa_fsm_state_decl(bna_port, stopped, struct bna_port,
enum bna_port_event);
bfa_fsm_state_decl(bna_port, mtu_init_wait, struct bna_port,
enum bna_port_event);
bfa_fsm_state_decl(bna_port, pause_init_wait, struct bna_port,
enum bna_port_event);
bfa_fsm_state_decl(bna_port, last_resp_wait, struct bna_port,
enum bna_port_event);
bfa_fsm_state_decl(bna_port, started, struct bna_port,
enum bna_port_event);
bfa_fsm_state_decl(bna_port, pause_cfg_wait, struct bna_port,
enum bna_port_event);
bfa_fsm_state_decl(bna_port, rx_stop_wait, struct bna_port,
enum bna_port_event);
bfa_fsm_state_decl(bna_port, mtu_cfg_wait, struct bna_port,
enum bna_port_event);
bfa_fsm_state_decl(bna_port, chld_stop_wait, struct bna_port,
enum bna_port_event);
static struct bfa_sm_table port_sm_table[] = ;
static void
bna_port_sm_stopped_entry(struct bna_port *port)
static void
bna_port_sm_stopped(struct bna_port *port, enum bna_port_event event)
static void
bna_port_sm_mtu_init_wait_entry(struct bna_port *port)
static void
bna_port_sm_mtu_init_wait(struct bna_port *port, enum bna_port_event event)
static void
bna_port_sm_pause_init_wait_entry(struct bna_port *port)
static void
bna_port_sm_pause_init_wait(struct bna_port *port,
enum bna_port_event event)
static void
bna_port_sm_last_resp_wait_entry(struct bna_port *port)
static void
bna_port_sm_last_resp_wait(struct bna_port *port,
enum bna_port_event event)
static void
bna_port_sm_started_entry(struct bna_port *port)
static void
bna_port_sm_started(struct bna_port *port,
enum bna_port_event event)
static void
bna_port_sm_pause_cfg_wait_entry(struct bna_port *port)
static void
bna_port_sm_pause_cfg_wait(struct bna_port *port,
enum bna_port_event event)
static void
bna_port_sm_rx_stop_wait_entry(struct bna_port *port)
static void
bna_port_sm_rx_stop_wait(struct bna_port *port,
enum bna_port_event event)
static void
bna_port_sm_mtu_cfg_wait_entry(struct bna_port *port)
static void
bna_port_sm_mtu_cfg_wait(struct bna_port *port, enum bna_port_event event)
static void
bna_port_sm_chld_stop_wait_entry(struct bna_port *port)
static void
bna_port_sm_chld_stop_wait(struct bna_port *port,
enum bna_port_event event)
static void
bna_fw_pause_set(struct bna_port *port)
static void
bna_fw_cb_pause_set(void *arg, int status)
void
bna_fw_mtu_set(struct bna_port *port)
void
bna_fw_cb_mtu_set(void *arg, int status)
static void
bna_port_cb_chld_stopped(void *arg)
static void
bna_port_init(struct bna_port *port, struct bna *bna)
static void
bna_port_uninit(struct bna_port *port)
static int
bna_port_state_get(struct bna_port *port)
static void
bna_port_start(struct bna_port *port)
static void
bna_port_stop(struct bna_port *port)
static void
bna_port_fail(struct bna_port *port)
void
bna_port_cb_tx_stopped(struct bna_port *port, enum bna_cb_status status)
void
bna_port_cb_rx_stopped(struct bna_port *port, enum bna_cb_status status)
int
bna_port_mtu_get(struct bna_port *port)
void
bna_port_enable(struct bna_port *port)
void
bna_port_disable(struct bna_port *port, enum bna_cleanup_type type,
void (*cbfn)(void *, enum bna_cb_status))
void
bna_port_pause_config(struct bna_port *port,
struct bna_pause_config *pause_config,
void (*cbfn)(struct bnad *, enum bna_cb_status))
void
bna_port_mtu_set(struct bna_port *port, int mtu,
void (*cbfn)(struct bnad *, enum bna_cb_status))
void
bna_port_mac_get(struct bna_port *port, mac_t *mac)
#define enable_mbox_intr(_device)\
do  while (0)
#define disable_mbox_intr(_device)\
do  while (0)
static const struct bna_chip_regs_offset reg_offset[] =
;
enum bna_device_event ;
enum bna_device_state ;
bfa_fsm_state_decl(bna_device, stopped, struct bna_device,
enum bna_device_event);
bfa_fsm_state_decl(bna_device, ioc_ready_wait, struct bna_device,
enum bna_device_event);
bfa_fsm_state_decl(bna_device, ready, struct bna_device,
enum bna_device_event);
bfa_fsm_state_decl(bna_device, port_stop_wait, struct bna_device,
enum bna_device_event);
bfa_fsm_state_decl(bna_device, ioc_disable_wait, struct bna_device,
enum bna_device_event);
bfa_fsm_state_decl(bna_device, failed, struct bna_device,
enum bna_device_event);
static struct bfa_sm_table device_sm_table[] = ;
static void
bna_device_sm_stopped_entry(struct bna_device *device)
static void
bna_device_sm_stopped(struct bna_device *device,
enum bna_device_event event)
static void
bna_device_sm_ioc_ready_wait_entry(struct bna_device *device)
static void
bna_device_sm_ioc_ready_wait(struct bna_device *device,
enum bna_device_event event)
static void
bna_device_sm_ready_entry(struct bna_device *device)
static void
bna_device_sm_ready(struct bna_device *device, enum bna_device_event event)
static void
bna_device_sm_port_stop_wait_entry(struct bna_device *device)
static void
bna_device_sm_port_stop_wait(struct bna_device *device,
enum bna_device_event event)
static void
bna_device_sm_ioc_disable_wait_entry(struct bna_device *device)
static void
bna_device_sm_ioc_disable_wait(struct bna_device *device,
enum bna_device_event event)
static void
bna_device_sm_failed_entry(struct bna_device *device)
static void
bna_device_sm_failed(struct bna_device *device,
enum bna_device_event event)
static void
bna_device_cb_iocll_ready(void *dev, enum bfa_status error)
static void
bna_device_cb_iocll_disabled(void *dev)
static void
bna_device_cb_iocll_failed(void *dev)
static void
bna_device_cb_iocll_reset(void *dev)
static struct bfa_ioc_cbfn bfa_iocll_cbfn = ;
static void
bna_adv_device_init(struct bna_device *device, struct bna *bna,
struct bna_res_info *res_info)
static void
bna_device_init(struct bna_device *device, struct bna *bna,
struct bna_res_info *res_info)
static void
bna_device_uninit(struct bna_device *device)
static void
bna_device_cb_port_stopped(void *arg, enum bna_cb_status status)
static int
bna_device_status_get(struct bna_device *device)
void
bna_device_enable(struct bna_device *device)
void
bna_device_disable(struct bna_device *device, enum bna_cleanup_type type)
static int
bna_device_state_get(struct bna_device *device)
const u32 bna_napi_dim_vector[BNA_LOAD_T_MAX][BNA_BIAS_T_MAX] = ;
static void
bna_adv_res_req(struct bna_res_info *res_info)
static void
bna_sw_stats_get(struct bna *bna, struct bna_sw_stats *sw_stats)
static void
bna_fw_cb_stats_get(void *arg, int status)
static void
bna_fw_stats_get(struct bna *bna)
void
bna_stats_get(struct bna *bna)
static void
bna_ib_coalescing_timeo_set(struct bna_ib *ib, u8 coalescing_timeo)
void
bna_rxf_adv_init(struct bna_rxf *rxf,
struct bna_rx *rx,
struct bna_rx_config *q_config)
static void
rxf_fltr_mbox_cmd(struct bna_rxf *rxf, u8 cmd, enum bna_status status)
int
rxf_process_packet_filter_ucast(struct bna_rxf *rxf)
int
rxf_process_packet_filter_promisc(struct bna_rxf *rxf)
int
rxf_process_packet_filter_allmulti(struct bna_rxf *rxf)
int
rxf_clear_packet_filter_ucast(struct bna_rxf *rxf)
int
rxf_clear_packet_filter_promisc(struct bna_rxf *rxf)
int
rxf_clear_packet_filter_allmulti(struct bna_rxf *rxf)
void
rxf_reset_packet_filter_ucast(struct bna_rxf *rxf)
void
rxf_reset_packet_filter_promisc(struct bna_rxf *rxf)
void
rxf_reset_packet_filter_allmulti(struct bna_rxf *rxf)
static int
rxf_promisc_enable(struct bna_rxf *rxf)
static int
rxf_promisc_disable(struct bna_rxf *rxf)
static int
rxf_allmulti_enable(struct bna_rxf *rxf)
static int
rxf_allmulti_disable(struct bna_rxf *rxf)
enum bna_cb_status
bna_rx_mode_set(struct bna_rx *rx, enum bna_rxmode new_mode,
enum bna_rxmode bitmask,
void (*cbfn)(struct bnad *, struct bna_rx *,
enum bna_cb_status))
void
bna_rx_vlanfilter_enable(struct bna_rx *rx)
void
bna_rx_coalescing_timeo_set(struct bna_rx *rx, int coalescing_timeo)
void
bna_rx_dim_reconfig(struct bna *bna, const u32 vector[][BNA_BIAS_T_MAX])
void
bna_rx_dim_update(struct bna_ccb *ccb)
void
bna_tx_coalescing_timeo_set(struct bna_tx *tx, int coalescing_timeo)
struct bna_ritseg_pool_cfg ;
init_ritseg_pool(ritseg_pool_cfg);
static void
bna_ucam_mod_init(struct bna_ucam_mod *ucam_mod, struct bna *bna,
struct bna_res_info *res_info)
static void
bna_ucam_mod_uninit(struct bna_ucam_mod *ucam_mod)
static void
bna_mcam_mod_init(struct bna_mcam_mod *mcam_mod, struct bna *bna,
struct bna_res_info *res_info)
static void
bna_mcam_mod_uninit(struct bna_mcam_mod *mcam_mod)
static void
bna_rit_mod_init(struct bna_rit_mod *rit_mod,
struct bna_res_info *res_info)
void
bna_res_req(struct bna_res_info *res_info)
void
bna_init(struct bna *bna, struct bnad *bnad, struct bfa_pcidev *pcidev,
struct bna_res_info *res_info)
void
bna_uninit(struct bna *bna)
struct bna_mac *
bna_ucam_mod_mac_get(struct bna_ucam_mod *ucam_mod)
void
bna_ucam_mod_mac_put(struct bna_ucam_mod *ucam_mod, struct bna_mac *mac)
struct bna_mac *
bna_mcam_mod_mac_get(struct bna_mcam_mod *mcam_mod)
void
bna_mcam_mod_mac_put(struct bna_mcam_mod *mcam_mod, struct bna_mac *mac)
int
bna_rit_mod_can_satisfy(struct bna_rit_mod *rit_mod, int seg_size)
struct bna_rit_segment *
bna_rit_mod_seg_get(struct bna_rit_mod *rit_mod, int seg_size)
void
bna_rit_mod_seg_put(struct bna_rit_mod *rit_mod,
struct bna_rit_segment *seg)
