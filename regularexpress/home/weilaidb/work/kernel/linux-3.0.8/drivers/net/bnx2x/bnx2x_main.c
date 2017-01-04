#define BNX2X_MAIN
#define FW_FILE_VERSION					\
__stringify(BCM_5710_FW_MAJOR_VERSION) "."	\
__stringify(BCM_5710_FW_MINOR_VERSION) "."	\
__stringify(BCM_5710_FW_REVISION_VERSION) "."	\
__stringify(BCM_5710_FW_ENGINEERING_VERSION)
#define FW_FILE_NAME_E1		"bnx2x/bnx2x-e1-" FW_FILE_VERSION ".fw"
#define FW_FILE_NAME_E1H	"bnx2x/bnx2x-e1h-" FW_FILE_VERSION ".fw"
#define FW_FILE_NAME_E2		"bnx2x/bnx2x-e2-" FW_FILE_VERSION ".fw"
#define TX_TIMEOUT		(5*HZ)
static char version[] __devinitdata =
"Broadcom NetXtreme II 5771x 10Gigabit Ethernet Driver "
DRV_MODULE_NAME " " DRV_MODULE_VERSION " (" DRV_MODULE_RELDATE ")\n";
MODULE_AUTHOR("Eliezer Tamir");
MODULE_DESCRIPTION("Broadcom NetXtreme II "
"BCM57710/57711/57711E/57712/57712E Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_MODULE_VERSION);
MODULE_FIRMWARE(FW_FILE_NAME_E1);
MODULE_FIRMWARE(FW_FILE_NAME_E1H);
MODULE_FIRMWARE(FW_FILE_NAME_E2);
static int multi_mode = 1;
module_param(multi_mode, int, 0);
MODULE_PARM_DESC(multi_mode, " Multi queue mode "
"(0 Disable; 1 Enable (default))");
int num_queues;
module_param(num_queues, int, 0);
MODULE_PARM_DESC(num_queues, " Number of queues for multi_mode=1"
" (default is as a number of CPUs)");
static int disable_tpa;
module_param(disable_tpa, int, 0);
MODULE_PARM_DESC(disable_tpa, " Disable the TPA (LRO) feature");
static int int_mode;
module_param(int_mode, int, 0);
MODULE_PARM_DESC(int_mode, " Force interrupt mode other then MSI-X "
"(1 INT#x; 2 MSI)");
static int dropless_fc;
module_param(dropless_fc, int, 0);
MODULE_PARM_DESC(dropless_fc, " Pause on exhausted host ring");
static int poll;
module_param(poll, int, 0);
MODULE_PARM_DESC(poll, " Use polling (for debug)");
static int mrrs = -1;
module_param(mrrs, int, 0);
MODULE_PARM_DESC(mrrs, " Force Max Read Req Size (0..3) (for debug)");
static int debug;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, " Default debug msglevel");
static struct workqueue_struct *bnx2x_wq;
static u8 ALL_ENODE_MACS[] = ;
enum bnx2x_board_type ;
static struct  board_info[] __devinitdata = ;
static DEFINE_PCI_DEVICE_TABLE(bnx2x_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, bnx2x_pci_tbl);
static inline void __storm_memset_dma_mapping(struct bnx2x *bp,
u32 addr, dma_addr_t mapping)
static inline void __storm_memset_fill(struct bnx2x *bp,
u32 addr, size_t size, u32 val)
static inline void storm_memset_ustats_zero(struct bnx2x *bp,
u8 port, u16 stat_id)
static inline void storm_memset_tstats_zero(struct bnx2x *bp,
u8 port, u16 stat_id)
static inline void storm_memset_xstats_zero(struct bnx2x *bp,
u8 port, u16 stat_id)
static inline void storm_memset_spq_addr(struct bnx2x *bp,
dma_addr_t mapping, u16 abs_fid)
static inline void storm_memset_ov(struct bnx2x *bp, u16 ov, u16 abs_fid)
static inline void storm_memset_func_cfg(struct bnx2x *bp,
struct tstorm_eth_function_common_config *tcfg,
u16 abs_fid)
static inline void storm_memset_xstats_flags(struct bnx2x *bp,
struct stats_indication_flags *flags,
u16 abs_fid)
static inline void storm_memset_tstats_flags(struct bnx2x *bp,
struct stats_indication_flags *flags,
u16 abs_fid)
static inline void storm_memset_ustats_flags(struct bnx2x *bp,
struct stats_indication_flags *flags,
u16 abs_fid)
static inline void storm_memset_cstats_flags(struct bnx2x *bp,
struct stats_indication_flags *flags,
u16 abs_fid)
static inline void storm_memset_xstats_addr(struct bnx2x *bp,
dma_addr_t mapping, u16 abs_fid)
static inline void storm_memset_tstats_addr(struct bnx2x *bp,
dma_addr_t mapping, u16 abs_fid)
static inline void storm_memset_ustats_addr(struct bnx2x *bp,
dma_addr_t mapping, u16 abs_fid)
static inline void storm_memset_cstats_addr(struct bnx2x *bp,
dma_addr_t mapping, u16 abs_fid)
static inline void storm_memset_vf_to_pf(struct bnx2x *bp, u16 abs_fid,
u16 pf_id)
static inline void storm_memset_func_en(struct bnx2x *bp, u16 abs_fid,
u8 enable)
static inline void storm_memset_eq_data(struct bnx2x *bp,
struct event_ring_data *eq_data,
u16 pfid)
static inline void storm_memset_eq_prod(struct bnx2x *bp, u16 eq_prod,
u16 pfid)
static inline void storm_memset_hc_timeout(struct bnx2x *bp, u8 port,
u16 fw_sb_id, u8 sb_index,
u8 ticks)
static inline void storm_memset_hc_disable(struct bnx2x *bp, u8 port,
u16 fw_sb_id, u8 sb_index,
u8 disable)
static void bnx2x_reg_wr_ind(struct bnx2x *bp, u32 addr, u32 val)
static u32 bnx2x_reg_rd_ind(struct bnx2x *bp, u32 addr)
#define DMAE_DP_SRC_GRC		"grc src_addr [%08x]"
#define DMAE_DP_SRC_PCI		"pci src_addr [%x:%08x]"
#define DMAE_DP_DST_GRC		"grc dst_addr [%08x]"
#define DMAE_DP_DST_PCI		"pci dst_addr [%x:%08x]"
#define DMAE_DP_DST_NONE	"dst_addr [none]"
static void bnx2x_dp_dmae(struct bnx2x *bp, struct dmae_command *dmae,
int msglvl)
const u32 dmae_reg_go_c[] = ;
void bnx2x_post_dmae(struct bnx2x *bp, struct dmae_command *dmae, int idx)
u32 bnx2x_dmae_opcode_add_comp(u32 opcode, u8 comp_type)
u32 bnx2x_dmae_opcode_clr_src_reset(u32 opcode)
u32 bnx2x_dmae_opcode(struct bnx2x *bp, u8 src_type, u8 dst_type,
bool with_comp, u8 comp_type)
static void bnx2x_prep_dmae_with_comp(struct bnx2x *bp,
struct dmae_command *dmae,
u8 src_type, u8 dst_type)
static int bnx2x_issue_dmae_with_comp(struct bnx2x *bp,
struct dmae_command *dmae)
void bnx2x_write_dmae(struct bnx2x *bp, dma_addr_t dma_addr, u32 dst_addr,
u32 len32)
void bnx2x_read_dmae(struct bnx2x *bp, u32 src_addr, u32 len32)
static void bnx2x_write_dmae_phys_len(struct bnx2x *bp, dma_addr_t phys_addr,
u32 addr, u32 len)
static void bnx2x_wb_wr(struct bnx2x *bp, int reg, u32 val_hi, u32 val_lo)
static u64 bnx2x_wb_rd(struct bnx2x *bp, int reg)
static int bnx2x_mc_assert(struct bnx2x *bp)
static void bnx2x_fw_dump(struct bnx2x *bp)
void bnx2x_panic_dump(struct bnx2x *bp)
static void bnx2x_hc_int_enable(struct bnx2x *bp)
static void bnx2x_igu_int_enable(struct bnx2x *bp)
void bnx2x_int_enable(struct bnx2x *bp)
static void bnx2x_hc_int_disable(struct bnx2x *bp)
static void bnx2x_igu_int_disable(struct bnx2x *bp)
static void bnx2x_int_disable(struct bnx2x *bp)
void bnx2x_int_disable_sync(struct bnx2x *bp, int disable_hw)
static bool bnx2x_trylock_hw_lock(struct bnx2x *bp, u32 resource)
static void bnx2x_cnic_cfc_comp(struct bnx2x *bp, int cid);
void bnx2x_sp_event(struct bnx2x_fastpath *fp,
union eth_rx_cqe *rr_cqe)
irqreturn_t bnx2x_interrupt(int irq, void *dev_instance)
int bnx2x_acquire_hw_lock(struct bnx2x *bp, u32 resource)
int bnx2x_release_hw_lock(struct bnx2x *bp, u32 resource)
int bnx2x_get_gpio(struct bnx2x *bp, int gpio_num, u8 port)
int bnx2x_set_gpio(struct bnx2x *bp, int gpio_num, u32 mode, u8 port)
int bnx2x_set_gpio_int(struct bnx2x *bp, int gpio_num, u32 mode, u8 port)
static int bnx2x_set_spio(struct bnx2x *bp, int spio_num, u32 mode)
int bnx2x_get_link_cfg_idx(struct bnx2x *bp)
void bnx2x_calc_fc_adv(struct bnx2x *bp)
u8 bnx2x_initial_phy_init(struct bnx2x *bp, int load_mode)
void bnx2x_link_set(struct bnx2x *bp)
static void bnx2x__link_reset(struct bnx2x *bp)
u8 bnx2x_link_test(struct bnx2x *bp, u8 is_serdes)
static void bnx2x_init_port_minmax(struct bnx2x *bp)
static void bnx2x_calc_vn_weight_sum(struct bnx2x *bp)
static void bnx2x_init_vn_minmax(struct bnx2x *bp, int vn)
static int bnx2x_get_cmng_fns_mode(struct bnx2x *bp)
void bnx2x_read_mf_cfg(struct bnx2x *bp)
static void bnx2x_cmng_fns_init(struct bnx2x *bp, u8 read_cfg, u8 cmng_type)
static inline void bnx2x_link_sync_notify(struct bnx2x *bp)
static void bnx2x_link_attn(struct bnx2x *bp)
void bnx2x__link_status_update(struct bnx2x *bp)
static void bnx2x_pmf_update(struct bnx2x *bp)
u32 bnx2x_fw_command(struct bnx2x *bp, u32 command, u32 param)
static u8 stat_counter_valid(struct bnx2x *bp, struct bnx2x_fastpath *fp)
static void bnx2x_rxq_set_mac_filters(struct bnx2x *bp, u16 cl_id, u32 filters)
static void bnx2x_func_init(struct bnx2x *bp, struct bnx2x_func_init_params *p)
static inline u16 bnx2x_get_cl_flags(struct bnx2x *bp,
struct bnx2x_fastpath *fp)
static void bnx2x_pf_rx_cl_prep(struct bnx2x *bp,
struct bnx2x_fastpath *fp, struct rxq_pause_params *pause,
struct bnx2x_rxq_init_params *rxq_init)
static void bnx2x_pf_tx_cl_prep(struct bnx2x *bp,
struct bnx2x_fastpath *fp, struct bnx2x_txq_init_params *txq_init)
static void bnx2x_pf_init(struct bnx2x *bp)
static void bnx2x_e1h_disable(struct bnx2x *bp)
static void bnx2x_e1h_enable(struct bnx2x *bp)
static inline void bnx2x_config_mf_bw(struct bnx2x *bp)
static inline void bnx2x_set_mf_bw(struct bnx2x *bp)
static void bnx2x_dcc_event(struct bnx2x *bp, u32 dcc_event)
static inline struct eth_spe *bnx2x_sp_get_next(struct bnx2x *bp)
static inline void bnx2x_sp_prod_update(struct bnx2x *bp)
int bnx2x_sp_post(struct bnx2x *bp, int command, int cid,
u32 data_hi, u32 data_lo, int common)
static int bnx2x_acquire_alr(struct bnx2x *bp)
static void bnx2x_release_alr(struct bnx2x *bp)
#define BNX2X_DEF_SB_ATT_IDX	0x0001
#define BNX2X_DEF_SB_IDX	0x0002
static inline u16 bnx2x_update_dsb_idx(struct bnx2x *bp)
static void bnx2x_attn_int_asserted(struct bnx2x *bp, u32 asserted)
static inline void bnx2x_fan_failure(struct bnx2x *bp)
static inline void bnx2x_attn_int_deasserted0(struct bnx2x *bp, u32 attn)
static inline void bnx2x_attn_int_deasserted1(struct bnx2x *bp, u32 attn)
static inline void bnx2x_attn_int_deasserted2(struct bnx2x *bp, u32 attn)
static inline void bnx2x_attn_int_deasserted3(struct bnx2x *bp, u32 attn)
#define BNX2X_MISC_GEN_REG      MISC_REG_GENERIC_POR_1
#define LOAD_COUNTER_BITS	16
#define LOAD_COUNTER_MASK	(((u32)0x1 << LOAD_COUNTER_BITS) - 1)
#define RESET_DONE_FLAG_MASK	(~LOAD_COUNTER_MASK)
#define RESET_DONE_FLAG_SHIFT	LOAD_COUNTER_BITS
static inline void bnx2x_set_reset_done(struct bnx2x *bp)
static inline void bnx2x_set_reset_in_progress(struct bnx2x *bp)
bool bnx2x_reset_is_done(struct bnx2x *bp)
inline void bnx2x_inc_load_cnt(struct bnx2x *bp)
u32 bnx2x_dec_load_cnt(struct bnx2x *bp)
static inline u32 bnx2x_get_load_cnt(struct bnx2x *bp)
static inline void bnx2x_clear_load_cnt(struct bnx2x *bp)
static inline void _print_next_block(int idx, const char *blk)
static inline int bnx2x_print_blocks_with_parity0(u32 sig, int par_num)
static inline int bnx2x_print_blocks_with_parity1(u32 sig, int par_num)
static inline int bnx2x_print_blocks_with_parity2(u32 sig, int par_num)
static inline int bnx2x_print_blocks_with_parity3(u32 sig, int par_num)
static inline bool bnx2x_parity_attn(struct bnx2x *bp, u32 sig0, u32 sig1,
u32 sig2, u32 sig3)
bool bnx2x_chk_parity_attn(struct bnx2x *bp)
static inline void bnx2x_attn_int_deasserted4(struct bnx2x *bp, u32 attn)
static void bnx2x_attn_int_deasserted(struct bnx2x *bp, u32 deasserted)
static void bnx2x_attn_int(struct bnx2x *bp)
static inline void bnx2x_update_eq_prod(struct bnx2x *bp, u16 prod)
static int  bnx2x_cnic_handle_cfc_del(struct bnx2x *bp, u32 cid,
union event_ring_elem *elem)
static void bnx2x_eq_int(struct bnx2x *bp)
static void bnx2x_sp_task(struct work_struct *work)
irqreturn_t bnx2x_msix_sp_int(int irq, void *dev_instance)
static void bnx2x_timer(unsigned long data)
static inline void bnx2x_fill(struct bnx2x *bp, u32 addr, int fill, u32 len)
static inline void bnx2x_wr_fp_sb_data(struct bnx2x *bp,
int fw_sb_id,
u32 *sb_data_p,
u32 data_size)
static inline void bnx2x_zero_fp_sb(struct bnx2x *bp, int fw_sb_id)
static inline void bnx2x_wr_sp_sb_data(struct bnx2x *bp,
struct hc_sp_status_block_data *sp_sb_data)
static inline void bnx2x_zero_sp_sb(struct bnx2x *bp)
static inline
void bnx2x_setup_ndsb_state_machine(struct hc_status_block_sm *hc_sm,
int igu_sb_id, int igu_seg_id)
static void bnx2x_init_sb(struct bnx2x *bp, dma_addr_t mapping, int vfid,
u8 vf_valid, int fw_sb_id, int igu_sb_id)
static void bnx2x_update_coalesce_sb_index(struct bnx2x *bp, u16 fw_sb_id,
u8 sb_index, u8 disable, u16 usec)
static void bnx2x_update_coalesce_sb(struct bnx2x *bp, u16 fw_sb_id,
u16 tx_usec, u16 rx_usec)
static void bnx2x_init_def_sb(struct bnx2x *bp)
void bnx2x_update_coalesce(struct bnx2x *bp)
static void bnx2x_init_sp_ring(struct bnx2x *bp)
static void bnx2x_init_eq_ring(struct bnx2x *bp)
void bnx2x_push_indir_table(struct bnx2x *bp)
static void bnx2x_init_ind_table(struct bnx2x *bp)
void bnx2x_set_storm_rx_mode(struct bnx2x *bp)
static void bnx2x_init_internal_common(struct bnx2x *bp)
static void bnx2x_init_internal_port(struct bnx2x *bp)
static void bnx2x_init_internal(struct bnx2x *bp, u32 load_code)
static void bnx2x_init_fp_sb(struct bnx2x *bp, int fp_idx)
void bnx2x_nic_init(struct bnx2x *bp, u32 load_code)
static int bnx2x_gunzip_init(struct bnx2x *bp)
static void bnx2x_gunzip_end(struct bnx2x *bp)
static int bnx2x_gunzip(struct bnx2x *bp, const u8 *zbuf, int len)
static void bnx2x_lb_pckt(struct bnx2x *bp)
static int bnx2x_int_mem_test(struct bnx2x *bp)
static void bnx2x_enable_blocks_attention(struct bnx2x *bp)
static void bnx2x_reset_common(struct bnx2x *bp)
static void bnx2x_init_pxp(struct bnx2x *bp)
static void bnx2x_setup_fan_failure_detection(struct bnx2x *bp)
static void bnx2x_pretend_func(struct bnx2x *bp, u8 pretend_func_num)
static void bnx2x_pf_disable(struct bnx2x *bp)
static int bnx2x_init_hw_common(struct bnx2x *bp, u32 load_code)
static int bnx2x_init_hw_port(struct bnx2x *bp)
static void bnx2x_ilt_wr(struct bnx2x *bp, u32 index, dma_addr_t addr)
static inline void bnx2x_igu_clear_sb(struct bnx2x *bp, u8 idu_sb_id)
static inline void bnx2x_clear_func_ilt(struct bnx2x *bp, u32 func)
static int bnx2x_init_hw_func(struct bnx2x *bp)
int bnx2x_init_hw(struct bnx2x *bp, u32 load_code)
void bnx2x_free_mem(struct bnx2x *bp)
int bnx2x_alloc_mem(struct bnx2x *bp)
static int bnx2x_wait_ramrod(struct bnx2x *bp, int state, int idx,
int *state_p, int flags);
int bnx2x_func_start(struct bnx2x *bp)
static int bnx2x_func_stop(struct bnx2x *bp)
static void bnx2x_set_mac_addr_gen(struct bnx2x *bp, int set, const u8 *mac,
u32 cl_bit_vec, u8 cam_offset,
u8 is_bcast)
static int bnx2x_wait_ramrod(struct bnx2x *bp, int state, int idx,
int *state_p, int flags)
static u8 bnx2x_e1h_cam_offset(struct bnx2x *bp, u8 rel_offset)
enum ;
static void bnx2x_set_mac_in_nig(struct bnx2x *bp,
int set,
unsigned char *dev_addr,
int index)
void bnx2x_set_eth_mac(struct bnx2x *bp, int set)
static inline u8 bnx2x_e1_cam_mc_offset(struct bnx2x *bp)
static int bnx2x_set_e1_mc_list(struct bnx2x *bp)
void bnx2x_invalidate_e1_mc_list(struct bnx2x *bp)
static int bnx2x_set_e1h_mc_list(struct bnx2x *bp)
void bnx2x_invalidate_e1h_mc_list(struct bnx2x *bp)
static int bnx2x_set_iscsi_eth_mac_addr(struct bnx2x *bp, int set)
int bnx2x_set_fip_eth_mac_addr(struct bnx2x *bp, int set)
int bnx2x_set_all_enode_macs(struct bnx2x *bp, int set)
static void bnx2x_fill_cl_init_data(struct bnx2x *bp,
struct bnx2x_client_init_params *params,
u8 activate,
struct client_init_ramrod_data *data)
static inline void bnx2x_set_ctx_validation(struct eth_context *cxt, u32 cid)
static int bnx2x_setup_fw_client(struct bnx2x *bp,
struct bnx2x_client_init_params *params,
u8 activate,
struct client_init_ramrod_data *data,
dma_addr_t data_mapping)
static int __devinit bnx2x_set_int_mode(struct bnx2x *bp)
static inline u16 bnx2x_cid_ilt_lines(struct bnx2x *bp)
void bnx2x_ilt_set_info(struct bnx2x *bp)
int bnx2x_setup_client(struct bnx2x *bp, struct bnx2x_fastpath *fp,
int is_leading)
static int bnx2x_stop_fw_client(struct bnx2x *bp,
struct bnx2x_client_ramrod_params *p)
static int bnx2x_stop_client(struct bnx2x *bp, int index)
static void bnx2x_reset_func(struct bnx2x *bp)
static void bnx2x_reset_port(struct bnx2x *bp)
static void bnx2x_reset_chip(struct bnx2x *bp, u32 reset_code)
static inline void bnx2x_del_fcoe_eth_macs(struct bnx2x *bp)
void bnx2x_chip_cleanup(struct bnx2x *bp, int unload_mode)
void bnx2x_disable_close_the_gate(struct bnx2x *bp)
static void bnx2x_set_234_gates(struct bnx2x *bp, bool close)
#define SHARED_MF_CLP_MAGIC  0x80000000
static void bnx2x_clp_reset_prep(struct bnx2x *bp, u32 *magic_val)
static void bnx2x_clp_reset_done(struct bnx2x *bp, u32 magic_val)
static void bnx2x_reset_mcp_prep(struct bnx2x *bp, u32 *magic_val)
#define MCP_TIMEOUT      5000
#define MCP_ONE_TIMEOUT  100
static inline void bnx2x_mcp_wait_one(struct bnx2x *bp)
static int bnx2x_init_shmem(struct bnx2x *bp)
static int bnx2x_reset_mcp_comp(struct bnx2x *bp, u32 magic_val)
static void bnx2x_pxp_prep(struct bnx2x *bp)
static void bnx2x_process_kill_chip_reset(struct bnx2x *bp)
static int bnx2x_process_kill(struct bnx2x *bp)
static int bnx2x_leader_reset(struct bnx2x *bp)
static void bnx2x_parity_recover(struct bnx2x *bp)
static void bnx2x_reset_task(struct work_struct *work)
static u32 bnx2x_get_pretend_reg(struct bnx2x *bp)
static void bnx2x_undi_int_disable_e1h(struct bnx2x *bp)
static inline void bnx2x_undi_int_disable(struct bnx2x *bp)
static void __devinit bnx2x_undi_unload(struct bnx2x *bp)
static void __devinit bnx2x_get_common_hwinfo(struct bnx2x *bp)
#define IGU_FID(val)	GET_FIELD((val), IGU_REG_MAPPING_MEMORY_FID)
#define IGU_VEC(val)	GET_FIELD((val), IGU_REG_MAPPING_MEMORY_VECTOR)
static void __devinit bnx2x_get_igu_cam_info(struct bnx2x *bp)
static void __devinit bnx2x_link_settings_supported(struct bnx2x *bp,
u32 switch_cfg)
static void __devinit bnx2x_link_settings_requested(struct bnx2x *bp)
static void __devinit bnx2x_set_mac_buf(u8 *mac_buf, u32 mac_lo, u16 mac_hi)
static void __devinit bnx2x_get_port_hwinfo(struct bnx2x *bp)
static void __devinit bnx2x_get_cnic_info(struct bnx2x *bp)
static void __devinit bnx2x_get_mac_hwinfo(struct bnx2x *bp)
static int __devinit bnx2x_get_hwinfo(struct bnx2x *bp)
static void __devinit bnx2x_read_fwinfo(struct bnx2x *bp)
static int __devinit bnx2x_init_bp(struct bnx2x *bp)
static int bnx2x_open(struct net_device *dev)
static int bnx2x_close(struct net_device *dev)
#define E1_MAX_UC_LIST	29
#define E1H_MAX_UC_LIST	30
#define E2_MAX_UC_LIST	14
static inline u8 bnx2x_max_uc_list(struct bnx2x *bp)
static inline u8 bnx2x_uc_list_cam_offset(struct bnx2x *bp)
static int bnx2x_set_uc_list(struct bnx2x *bp)
void bnx2x_invalidate_uc_list(struct bnx2x *bp)
static inline int bnx2x_set_mc_list(struct bnx2x *bp)
void bnx2x_set_rx_mode(struct net_device *dev)
static int bnx2x_mdio_read(struct net_device *netdev, int prtad,
int devad, u16 addr)
static int bnx2x_mdio_write(struct net_device *netdev, int prtad, int devad,
u16 addr, u16 value)
static int bnx2x_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static void poll_bnx2x(struct net_device *dev)
static const struct net_device_ops bnx2x_netdev_ops = ;
static int __devinit bnx2x_init_dev(struct pci_dev *pdev,
struct net_device *dev)
static void __devinit bnx2x_get_pcie_width_speed(struct bnx2x *bp,
int *width, int *speed)
static int bnx2x_check_firmware(struct bnx2x *bp)
static inline void be32_to_cpu_n(const u8 *_source, u8 *_target, u32 n)
static inline void bnx2x_prep_ops(const u8 *_source, u8 *_target, u32 n)
static inline void bnx2x_prep_iro(const u8 *_source, u8 *_target, u32 n)
static inline void be16_to_cpu_n(const u8 *_source, u8 *_target, u32 n)
#define BNX2X_ALLOC_AND_SET(arr, lbl, func)				\
do  while (0)
int bnx2x_init_firmware(struct bnx2x *bp)
static inline int bnx2x_set_qm_cid_count(struct bnx2x *bp, int l2_cid_count)
static int __devinit bnx2x_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit bnx2x_remove_one(struct pci_dev *pdev)
static int bnx2x_eeh_nic_unload(struct bnx2x *bp)
static void bnx2x_eeh_recover(struct bnx2x *bp)
static pci_ers_result_t bnx2x_io_error_detected(struct pci_dev *pdev,
pci_channel_state_t state)
static pci_ers_result_t bnx2x_io_slot_reset(struct pci_dev *pdev)
static void bnx2x_io_resume(struct pci_dev *pdev)
static struct pci_error_handlers bnx2x_err_handler = ;
static struct pci_driver bnx2x_pci_driver = ;
static int __init bnx2x_init(void)
static void __exit bnx2x_cleanup(void)
module_init(bnx2x_init);
module_exit(bnx2x_cleanup);
static void bnx2x_cnic_sp_post(struct bnx2x *bp, int count)
static int bnx2x_cnic_sp_queue(struct net_device *dev,
struct kwqe_16 *kwqes[], u32 count)
static int bnx2x_cnic_ctl_send(struct bnx2x *bp, struct cnic_ctl_info *ctl)
static int bnx2x_cnic_ctl_send_bh(struct bnx2x *bp, struct cnic_ctl_info *ctl)
int bnx2x_cnic_notify(struct bnx2x *bp, int cmd)
static void bnx2x_cnic_cfc_comp(struct bnx2x *bp, int cid)
static int bnx2x_drv_ctl(struct net_device *dev, struct drv_ctl_info *ctl)
void bnx2x_setup_cnic_irq_info(struct bnx2x *bp)
static int bnx2x_register_cnic(struct net_device *dev, struct cnic_ops *ops,
void *data)
static int bnx2x_unregister_cnic(struct net_device *dev)
struct cnic_eth_dev *bnx2x_cnic_probe(struct net_device *dev)
EXPORT_SYMBOL(bnx2x_cnic_probe);
