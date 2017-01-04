#define bna_ib_find_free_ibidx(_mask, _pos)\
do  while (0)
#define bna_ib_count_ibidx(_mask, _count)\
do  while (0)
#define bna_ib_select_segpool(_count, _q_idx)\
do  while (0)
struct bna_ibidx_pool ;
init_ibidx_pool(ibidx_pool);
static struct bna_intr *
bna_intr_get(struct bna_ib_mod *ib_mod, enum bna_intr_type intr_type,
int vector)
static void
bna_intr_put(struct bna_ib_mod *ib_mod,
struct bna_intr *intr)
void
bna_ib_mod_init(struct bna_ib_mod *ib_mod, struct bna *bna,
struct bna_res_info *res_info)
void
bna_ib_mod_uninit(struct bna_ib_mod *ib_mod)
static struct bna_ib *
bna_ib_get(struct bna_ib_mod *ib_mod,
enum bna_intr_type intr_type,
int vector)
static void
bna_ib_put(struct bna_ib_mod *ib_mod, struct bna_ib *ib)
static int
bna_ib_reserve_idx(struct bna_ib *ib)
static void
bna_ib_release_idx(struct bna_ib *ib, int idx)
static int
bna_ib_config(struct bna_ib *ib, struct bna_ib_config *ib_config)
static void
bna_ib_start(struct bna_ib *ib)
static void
bna_ib_stop(struct bna_ib *ib)
static void
bna_ib_fail(struct bna_ib *ib)
static void rxf_enable(struct bna_rxf *rxf);
static void rxf_disable(struct bna_rxf *rxf);
static void __rxf_config_set(struct bna_rxf *rxf);
static void __rxf_rit_set(struct bna_rxf *rxf);
static void __bna_rxf_stat_clr(struct bna_rxf *rxf);
static int rxf_process_packet_filter(struct bna_rxf *rxf);
static int rxf_clear_packet_filter(struct bna_rxf *rxf);
static void rxf_reset_packet_filter(struct bna_rxf *rxf);
static void rxf_cb_enabled(void *arg, int status);
static void rxf_cb_disabled(void *arg, int status);
static void bna_rxf_cb_stats_cleared(void *arg, int status);
static void __rxf_enable(struct bna_rxf *rxf);
static void __rxf_disable(struct bna_rxf *rxf);
bfa_fsm_state_decl(bna_rxf, stopped, struct bna_rxf,
enum bna_rxf_event);
bfa_fsm_state_decl(bna_rxf, start_wait, struct bna_rxf,
enum bna_rxf_event);
bfa_fsm_state_decl(bna_rxf, cam_fltr_mod_wait, struct bna_rxf,
enum bna_rxf_event);
bfa_fsm_state_decl(bna_rxf, started, struct bna_rxf,
enum bna_rxf_event);
bfa_fsm_state_decl(bna_rxf, cam_fltr_clr_wait, struct bna_rxf,
enum bna_rxf_event);
bfa_fsm_state_decl(bna_rxf, stop_wait, struct bna_rxf,
enum bna_rxf_event);
bfa_fsm_state_decl(bna_rxf, pause_wait, struct bna_rxf,
enum bna_rxf_event);
bfa_fsm_state_decl(bna_rxf, resume_wait, struct bna_rxf,
enum bna_rxf_event);
bfa_fsm_state_decl(bna_rxf, stat_clr_wait, struct bna_rxf,
enum bna_rxf_event);
static struct bfa_sm_table rxf_sm_table[] = ;
static void
bna_rxf_sm_stopped_entry(struct bna_rxf *rxf)
static void
bna_rxf_sm_stopped(struct bna_rxf *rxf, enum bna_rxf_event event)
static void
bna_rxf_sm_start_wait_entry(struct bna_rxf *rxf)
static void
bna_rxf_sm_start_wait(struct bna_rxf *rxf, enum bna_rxf_event event)
static void
bna_rxf_sm_cam_fltr_mod_wait_entry(struct bna_rxf *rxf)
static void
bna_rxf_sm_cam_fltr_mod_wait(struct bna_rxf *rxf, enum bna_rxf_event event)
static void
bna_rxf_sm_started_entry(struct bna_rxf *rxf)
static void
bna_rxf_sm_started(struct bna_rxf *rxf, enum bna_rxf_event event)
static void
bna_rxf_sm_cam_fltr_clr_wait_entry(struct bna_rxf *rxf)
static void
bna_rxf_sm_cam_fltr_clr_wait(struct bna_rxf *rxf, enum bna_rxf_event event)
static void
bna_rxf_sm_stop_wait_entry(struct bna_rxf *rxf)
static void
bna_rxf_sm_stop_wait(struct bna_rxf *rxf, enum bna_rxf_event event)
static void
bna_rxf_sm_pause_wait_entry(struct bna_rxf *rxf)
static void
bna_rxf_sm_pause_wait(struct bna_rxf *rxf, enum bna_rxf_event event)
static void
bna_rxf_sm_resume_wait_entry(struct bna_rxf *rxf)
static void
bna_rxf_sm_resume_wait(struct bna_rxf *rxf, enum bna_rxf_event event)
static void
bna_rxf_sm_stat_clr_wait_entry(struct bna_rxf *rxf)
static void
bna_rxf_sm_stat_clr_wait(struct bna_rxf *rxf, enum bna_rxf_event event)
static void
__rxf_enable(struct bna_rxf *rxf)
static void
__rxf_disable(struct bna_rxf *rxf)
static void
__rxf_config_set(struct bna_rxf *rxf)
void
__rxf_vlan_filter_set(struct bna_rxf *rxf, enum bna_status status)
static void
__rxf_rit_set(struct bna_rxf *rxf)
static void
__bna_rxf_stat_clr(struct bna_rxf *rxf)
static void
rxf_enable(struct bna_rxf *rxf)
static void
rxf_cb_enabled(void *arg, int status)
static void
rxf_disable(struct bna_rxf *rxf)
static void
rxf_cb_disabled(void *arg, int status)
void
rxf_cb_cam_fltr_mbox_cmd(void *arg, int status)
static void
bna_rxf_cb_stats_cleared(void *arg, int status)
void
rxf_cam_mbox_cmd(struct bna_rxf *rxf, u8 cmd,
const struct bna_mac *mac_addr)
static int
rxf_process_packet_filter_mcast(struct bna_rxf *rxf)
static int
rxf_process_packet_filter_vlan(struct bna_rxf *rxf)
static int
rxf_process_packet_filter(struct bna_rxf *rxf)
static int
rxf_clear_packet_filter_mcast(struct bna_rxf *rxf)
static int
rxf_clear_packet_filter(struct bna_rxf *rxf)
static void
rxf_reset_packet_filter_mcast(struct bna_rxf *rxf)
static void
rxf_reset_packet_filter(struct bna_rxf *rxf)
static void
bna_rxf_init(struct bna_rxf *rxf,
struct bna_rx *rx,
struct bna_rx_config *q_config)
static void
bna_rxf_uninit(struct bna_rxf *rxf)
static void
bna_rx_cb_rxf_started(struct bna_rx *rx, enum bna_cb_status status)
static void
bna_rxf_start(struct bna_rxf *rxf)
static void
bna_rx_cb_rxf_stopped(struct bna_rx *rx, enum bna_cb_status status)
static void
bna_rxf_stop(struct bna_rxf *rxf)
static void
bna_rxf_fail(struct bna_rxf *rxf)
int
bna_rxf_state_get(struct bna_rxf *rxf)
enum bna_cb_status
bna_rx_ucast_set(struct bna_rx *rx, u8 *ucmac,
void (*cbfn)(struct bnad *, struct bna_rx *,
enum bna_cb_status))
enum bna_cb_status
bna_rx_mcast_add(struct bna_rx *rx, u8 *addr,
void (*cbfn)(struct bnad *, struct bna_rx *,
enum bna_cb_status))
enum bna_cb_status
bna_rx_mcast_listset(struct bna_rx *rx, int count, u8 *mclist,
void (*cbfn)(struct bnad *, struct bna_rx *,
enum bna_cb_status))
void
bna_rx_vlan_add(struct bna_rx *rx, int vlan_id)
void
bna_rx_vlan_del(struct bna_rx *rx, int vlan_id)
#define	RXQ_RCB_INIT(q, rxp, qdepth, bna, _id, unmapq_mem)	do  while (0)
#define	BNA_GET_RXQS(qcfg)	(((qcfg)->rxp_type == BNA_RXP_SINGLE) ?	\
(qcfg)->num_paths : ((qcfg)->num_paths * 2))
#define	SIZE_TO_PAGES(size)	(((size) >> PAGE_SHIFT) + ((((size) &\
(PAGE_SIZE - 1)) + (PAGE_SIZE - 1)) >> PAGE_SHIFT))
#define	call_rx_stop_callback(rx, status)				\
if ((rx)->stop_cbfn)
#define	call_rx_disable_cbfn(rx, status)				\
if ((rx)->disable_cbfn)								\
#define	rxqs_reqd(type, num_rxqs)					\
(((type) == BNA_RXP_SINGLE) ? (num_rxqs) : ((num_rxqs) * 2))
#define rx_ib_fail(rx)						\
do  while (0)
static void __bna_multi_rxq_stop(struct bna_rxp *, u32 *);
static void __bna_rxq_start(struct bna_rxq *rxq);
static void __bna_cq_start(struct bna_cq *cq);
static void bna_rit_create(struct bna_rx *rx);
static void bna_rx_cb_multi_rxq_stopped(void *arg, int status);
static void bna_rx_cb_rxq_stopped_all(void *arg);
bfa_fsm_state_decl(bna_rx, stopped,
struct bna_rx, enum bna_rx_event);
bfa_fsm_state_decl(bna_rx, rxf_start_wait,
struct bna_rx, enum bna_rx_event);
bfa_fsm_state_decl(bna_rx, started,
struct bna_rx, enum bna_rx_event);
bfa_fsm_state_decl(bna_rx, rxf_stop_wait,
struct bna_rx, enum bna_rx_event);
bfa_fsm_state_decl(bna_rx, rxq_stop_wait,
struct bna_rx, enum bna_rx_event);
static const struct bfa_sm_table rx_sm_table[] = ;
static void bna_rx_sm_stopped_entry(struct bna_rx *rx)
static void bna_rx_sm_stopped(struct bna_rx *rx,
enum bna_rx_event event)
static void bna_rx_sm_rxf_start_wait_entry(struct bna_rx *rx)
static void bna_rx_sm_rxf_start_wait(struct bna_rx *rx,
enum bna_rx_event event)
void
bna_rx_sm_started_entry(struct bna_rx *rx)
void
bna_rx_sm_started(struct bna_rx *rx, enum bna_rx_event event)
void
bna_rx_sm_rxf_stop_wait_entry(struct bna_rx *rx)
void
bna_rx_sm_rxf_stop_wait(struct bna_rx *rx, enum bna_rx_event event)
void
bna_rx_sm_rxq_stop_wait_entry(struct bna_rx *rx)
void
bna_rx_sm_rxq_stop_wait(struct bna_rx *rx, enum bna_rx_event event)
void
__bna_multi_rxq_stop(struct bna_rxp *rxp, u32 * rxq_id_mask)
void
__bna_rxq_start(struct bna_rxq *rxq)
void
__bna_cq_start(struct bna_cq *cq)
void
bna_rit_create(struct bna_rx *rx)
static int
_rx_can_satisfy(struct bna_rx_mod *rx_mod,
struct bna_rx_config *rx_cfg)
static struct bna_rxq *
_get_free_rxq(struct bna_rx_mod *rx_mod)
static void
_put_free_rxq(struct bna_rx_mod *rx_mod, struct bna_rxq *rxq)
static struct bna_rxp *
_get_free_rxp(struct bna_rx_mod *rx_mod)
static void
_put_free_rxp(struct bna_rx_mod *rx_mod, struct bna_rxp *rxp)
static struct bna_rx *
_get_free_rx(struct bna_rx_mod *rx_mod)
static void
_put_free_rx(struct bna_rx_mod *rx_mod, struct bna_rx *rx)
static void
_rx_init(struct bna_rx *rx, struct bna *bna)
static void
_rxp_add_rxqs(struct bna_rxp *rxp,
struct bna_rxq *q0,
struct bna_rxq *q1)
static void
_rxq_qpt_init(struct bna_rxq *rxq,
struct bna_rxp *rxp,
u32 page_count,
u32 page_size,
struct bna_mem_descr *qpt_mem,
struct bna_mem_descr *swqpt_mem,
struct bna_mem_descr *page_mem)
static void
_rxp_cqpt_setup(struct bna_rxp *rxp,
u32 page_count,
u32 page_size,
struct bna_mem_descr *qpt_mem,
struct bna_mem_descr *swqpt_mem,
struct bna_mem_descr *page_mem)
static void
_rx_add_rxp(struct bna_rx *rx, struct bna_rxp *rxp)
static void
_init_rxmod_queues(struct bna_rx_mod *rx_mod)
static void
_rx_ctor(struct bna_rx *rx, int id)
void
bna_rx_cb_multi_rxq_stopped(void *arg, int status)
void
bna_rx_cb_rxq_stopped_all(void *arg)
static void
bna_rx_mod_cb_rx_stopped(void *arg, struct bna_rx *rx,
enum bna_cb_status status)
static void
bna_rx_mod_cb_rx_stopped_all(void *arg)
static void
bna_rx_start(struct bna_rx *rx)
static void
bna_rx_stop(struct bna_rx *rx)
static void
bna_rx_fail(struct bna_rx *rx)
void
bna_rx_mod_start(struct bna_rx_mod *rx_mod, enum bna_rx_type type)
void
bna_rx_mod_stop(struct bna_rx_mod *rx_mod, enum bna_rx_type type)
void
bna_rx_mod_fail(struct bna_rx_mod *rx_mod)
void bna_rx_mod_init(struct bna_rx_mod *rx_mod, struct bna *bna,
struct bna_res_info *res_info)
void
bna_rx_mod_uninit(struct bna_rx_mod *rx_mod)
int
bna_rx_state_get(struct bna_rx *rx)
void
bna_rx_res_req(struct bna_rx_config *q_cfg, struct bna_res_info *res_info)
struct bna_rx *
bna_rx_create(struct bna *bna, struct bnad *bnad,
struct bna_rx_config *rx_cfg,
struct bna_rx_event_cbfn *rx_cbfn,
struct bna_res_info *res_info,
void *priv)
void
bna_rx_destroy(struct bna_rx *rx)
void
bna_rx_enable(struct bna_rx *rx)
void
bna_rx_disable(struct bna_rx *rx, enum bna_cleanup_type type,
void (*cbfn)(void *, struct bna_rx *,
enum bna_cb_status))
#define call_tx_stop_cbfn(tx, status)\
do  while (0)
#define call_tx_prio_change_cbfn(tx, status)\
do  while (0)
static void bna_tx_mod_cb_tx_stopped(void *tx_mod, struct bna_tx *tx,
enum bna_cb_status status);
static void bna_tx_cb_txq_stopped(void *arg, int status);
static void bna_tx_cb_stats_cleared(void *arg, int status);
static void __bna_tx_stop(struct bna_tx *tx);
static void __bna_tx_start(struct bna_tx *tx);
static void __bna_txf_stat_clr(struct bna_tx *tx);
enum bna_tx_event ;
enum bna_tx_state ;
bfa_fsm_state_decl(bna_tx, stopped, struct bna_tx,
enum bna_tx_event);
bfa_fsm_state_decl(bna_tx, started, struct bna_tx,
enum bna_tx_event);
bfa_fsm_state_decl(bna_tx, txq_stop_wait, struct bna_tx,
enum bna_tx_event);
bfa_fsm_state_decl(bna_tx, prio_stop_wait, struct bna_tx,
enum bna_tx_event);
bfa_fsm_state_decl(bna_tx, stat_clr_wait, struct bna_tx,
enum bna_tx_event);
static struct bfa_sm_table tx_sm_table[] = ;
static void
bna_tx_sm_stopped_entry(struct bna_tx *tx)
static void
bna_tx_sm_stopped(struct bna_tx *tx, enum bna_tx_event event)
static void
bna_tx_sm_started_entry(struct bna_tx *tx)
static void
bna_tx_sm_started(struct bna_tx *tx, enum bna_tx_event event)
static void
bna_tx_sm_txq_stop_wait_entry(struct bna_tx *tx)
static void
bna_tx_sm_txq_stop_wait(struct bna_tx *tx, enum bna_tx_event event)
static void
bna_tx_sm_prio_stop_wait_entry(struct bna_tx *tx)
static void
bna_tx_sm_prio_stop_wait(struct bna_tx *tx, enum bna_tx_event event)
static void
bna_tx_sm_stat_clr_wait_entry(struct bna_tx *tx)
static void
bna_tx_sm_stat_clr_wait(struct bna_tx *tx, enum bna_tx_event event)
static void
__bna_txq_start(struct bna_tx *tx, struct bna_txq *txq)
static void
__bna_txq_stop(struct bna_tx *tx, struct bna_txq *txq)
static void
__bna_txf_start(struct bna_tx *tx)
static void
__bna_txf_stop(struct bna_tx *tx)
static void
__bna_txf_stat_clr(struct bna_tx *tx)
static void
__bna_tx_start(struct bna_tx *tx)
static void
__bna_tx_stop(struct bna_tx *tx)
static void
bna_txq_qpt_setup(struct bna_txq *txq, int page_count, int page_size,
struct bna_mem_descr *qpt_mem,
struct bna_mem_descr *swqpt_mem,
struct bna_mem_descr *page_mem)
static void
bna_tx_free(struct bna_tx *tx)
static void
bna_tx_cb_txq_stopped(void *arg, int status)
static void
bna_tx_cb_txq_stopped_all(void *arg)
static void
bna_tx_cb_stats_cleared(void *arg, int status)
static void
bna_tx_start(struct bna_tx *tx)
static void
bna_tx_stop(struct bna_tx *tx)
static void
bna_tx_fail(struct bna_tx *tx)
static void
bna_tx_prio_changed(struct bna_tx *tx, int prio)
static void
bna_tx_cee_link_status(struct bna_tx *tx, int cee_link)
static void
bna_tx_mod_cb_tx_stopped(void *arg, struct bna_tx *tx,
enum bna_cb_status status)
static void
bna_tx_mod_cb_tx_stopped_all(void *arg)
void
bna_tx_res_req(int num_txq, int txq_depth, struct bna_res_info *res_info)
struct bna_tx *
bna_tx_create(struct bna *bna, struct bnad *bnad,
struct bna_tx_config *tx_cfg,
struct bna_tx_event_cbfn *tx_cbfn,
struct bna_res_info *res_info, void *priv)
void
bna_tx_destroy(struct bna_tx *tx)
void
bna_tx_enable(struct bna_tx *tx)
void
bna_tx_disable(struct bna_tx *tx, enum bna_cleanup_type type,
void (*cbfn)(void *, struct bna_tx *, enum bna_cb_status))
int
bna_tx_state_get(struct bna_tx *tx)
void
bna_tx_mod_init(struct bna_tx_mod *tx_mod, struct bna *bna,
struct bna_res_info *res_info)
void
bna_tx_mod_uninit(struct bna_tx_mod *tx_mod)
void
bna_tx_mod_start(struct bna_tx_mod *tx_mod, enum bna_tx_type type)
void
bna_tx_mod_stop(struct bna_tx_mod *tx_mod, enum bna_tx_type type)
void
bna_tx_mod_fail(struct bna_tx_mod *tx_mod)
void
bna_tx_mod_prio_changed(struct bna_tx_mod *tx_mod, int prio)
void
bna_tx_mod_cee_link_status(struct bna_tx_mod *tx_mod, int cee_link)
