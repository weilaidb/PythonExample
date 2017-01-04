static unsigned int nes_lro_max_aggr = NES_LRO_MAX_AGGR;
module_param(nes_lro_max_aggr, uint, 0444);
MODULE_PARM_DESC(nes_lro_max_aggr, "NIC LRO max packet aggregation");
static int wide_ppm_offset;
module_param(wide_ppm_offset, int, 0644);
MODULE_PARM_DESC(wide_ppm_offset, "Increase CX4 interface clock ppm offset, 0=100ppm (default), 1=300ppm");
static u32 crit_err_count;
u32 int_mod_timer_init;
u32 int_mod_cq_depth_256;
u32 int_mod_cq_depth_128;
u32 int_mod_cq_depth_32;
u32 int_mod_cq_depth_24;
u32 int_mod_cq_depth_16;
u32 int_mod_cq_depth_4;
u32 int_mod_cq_depth_1;
static const u8 nes_max_critical_error_count = 100;
static void nes_cqp_ce_handler(struct nes_device *nesdev, struct nes_hw_cq *cq);
static void nes_init_csr_ne020(struct nes_device *nesdev, u8 hw_rev, u8 port_count);
static int nes_init_serdes(struct nes_device *nesdev, u8 hw_rev, u8 port_count,
struct nes_adapter *nesadapter, u8  OneG_Mode);
static void nes_nic_napi_ce_handler(struct nes_device *nesdev, struct nes_hw_nic_cq *cq);
static void nes_process_aeq(struct nes_device *nesdev, struct nes_hw_aeq *aeq);
static void nes_process_ceq(struct nes_device *nesdev, struct nes_hw_ceq *ceq);
static void nes_process_iwarp_aeqe(struct nes_device *nesdev,
struct nes_hw_aeqe *aeqe);
static void process_critical_error(struct nes_device *nesdev);
static void nes_process_mac_intr(struct nes_device *nesdev, u32 mac_number);
static unsigned int nes_reset_adapter_ne020(struct nes_device *nesdev, u8 *OneG_Mode);
static void nes_terminate_timeout(unsigned long context);
static void nes_terminate_start_timer(struct nes_qp *nesqp);
static unsigned char *nes_iwarp_state_str[] = ;
static unsigned char *nes_tcp_state_str[] = ;
void  nes_nic_init_timer_defaults(struct nes_device *nesdev, u8 jumbomode)
static void  nes_nic_init_timer(struct nes_device *nesdev)
static void nes_nic_tune_timer(struct nes_device *nesdev)
struct nes_adapter *nes_init_adapter(struct nes_device *nesdev, u8 hw_rev)
static unsigned int nes_reset_adapter_ne020(struct nes_device *nesdev, u8 *OneG_Mode)
static int nes_init_serdes(struct nes_device *nesdev, u8 hw_rev, u8 port_count,
struct nes_adapter *nesadapter, u8  OneG_Mode)
static void nes_init_csr_ne020(struct nes_device *nesdev, u8 hw_rev, u8 port_count)
void nes_destroy_adapter(struct nes_adapter *nesadapter)
int nes_init_cqp(struct nes_device *nesdev)
int nes_destroy_cqp(struct nes_device *nesdev)
static int nes_init_1g_phy(struct nes_device *nesdev, u8 phy_type, u8 phy_index)
static int nes_init_2025_phy(struct nes_device *nesdev, u8 phy_type, u8 phy_index)
int nes_init_phy(struct nes_device *nesdev)
static void nes_replenish_nic_rq(struct nes_vnic *nesvnic)
static void nes_rq_wqes_timeout(unsigned long parm)
static int nes_lro_get_skb_hdr(struct sk_buff *skb, void **iphdr,
void **tcph, u64 *hdr_flags, void *priv)
int nes_init_nic_qp(struct nes_device *nesdev, struct net_device *netdev)
void nes_destroy_nic_qp(struct nes_vnic *nesvnic)
int nes_napi_isr(struct nes_device *nesdev)
static void process_critical_error(struct nes_device *nesdev)
void nes_dpc(unsigned long param)
static void nes_process_ceq(struct nes_device *nesdev, struct nes_hw_ceq *ceq)
static void nes_process_aeq(struct nes_device *nesdev, struct nes_hw_aeq *aeq)
static void nes_reset_link(struct nes_device *nesdev, u32 mac_index)
static void nes_process_mac_intr(struct nes_device *nesdev, u32 mac_number)
void nes_recheck_link_status(struct work_struct *work)
static void nes_nic_napi_ce_handler(struct nes_device *nesdev, struct nes_hw_nic_cq *cq)
#define	MAX_RQES_TO_PROCESS	384
void nes_nic_ce_handler(struct nes_device *nesdev, struct nes_hw_nic_cq *cq)
static void nes_cqp_ce_handler(struct nes_device *nesdev, struct nes_hw_cq *cq)
static u8 *locate_mpa(u8 *pkt, u32 aeq_info)
static u32 iwarp_opcode(struct nes_qp *nesqp, u32 aeq_info)
static int nes_bld_terminate_hdr(struct nes_qp *nesqp, u16 async_event_id, u32 aeq_info)
static void nes_terminate_connection(struct nes_device *nesdev, struct nes_qp *nesqp,
struct nes_hw_aeqe *aeqe, enum ib_event_type eventtype)
static void nes_terminate_send_fin(struct nes_device *nesdev,
struct nes_qp *nesqp, struct nes_hw_aeqe *aeqe)
static void nes_terminate_done(struct nes_qp *nesqp, int timeout_occurred)
static void nes_terminate_received(struct nes_device *nesdev,
struct nes_qp *nesqp, struct nes_hw_aeqe *aeqe)
static void nes_terminate_timeout(unsigned long context)
static void nes_terminate_start_timer(struct nes_qp *nesqp)
static void nes_process_iwarp_aeqe(struct nes_device *nesdev,
struct nes_hw_aeqe *aeqe)
void nes_iwarp_ce_handler(struct nes_device *nesdev, struct nes_hw_cq *hw_cq)
int nes_manage_apbvt(struct nes_vnic *nesvnic, u32 accel_local_port,
u32 nic_index, u32 add_port)
void nes_manage_arp_cache(struct net_device *netdev, unsigned char *mac_addr,
u32 ip_addr, u32 action)
void flush_wqes(struct nes_device *nesdev, struct nes_qp *nesqp,
u32 which_wq, u32 wait_completion)
