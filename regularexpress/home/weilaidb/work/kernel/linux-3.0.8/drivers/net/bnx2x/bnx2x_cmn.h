#define BNX2X_CMN_H
extern int num_queues;
#define BNX2X_PCI_FREE(x, y, size) \
do  while (0)
#define BNX2X_FREE(x) \
do  while (0)
#define BNX2X_PCI_ALLOC(x, y, size) \
do  while (0)
#define BNX2X_ALLOC(x, size) \
do  while (0)
u8 bnx2x_initial_phy_init(struct bnx2x *bp, int load_mode);
void bnx2x_link_set(struct bnx2x *bp);
u8 bnx2x_link_test(struct bnx2x *bp, u8 is_serdes);
void bnx2x__link_status_update(struct bnx2x *bp);
void bnx2x_link_report(struct bnx2x *bp);
void __bnx2x_link_report(struct bnx2x *bp);
u16 bnx2x_get_mf_speed(struct bnx2x *bp);
irqreturn_t bnx2x_msix_sp_int(int irq, void *dev_instance);
irqreturn_t bnx2x_interrupt(int irq, void *dev_instance);
int bnx2x_cnic_notify(struct bnx2x *bp, int cmd);
void bnx2x_setup_cnic_irq_info(struct bnx2x *bp);
void bnx2x_int_enable(struct bnx2x *bp);
void bnx2x_int_disable_sync(struct bnx2x *bp, int disable_hw);
int bnx2x_init_firmware(struct bnx2x *bp);
int bnx2x_init_hw(struct bnx2x *bp, u32 load_code);
void bnx2x_nic_init(struct bnx2x *bp, u32 load_code);
int bnx2x_alloc_mem(struct bnx2x *bp);
void bnx2x_free_mem(struct bnx2x *bp);
int bnx2x_setup_client(struct bnx2x *bp, struct bnx2x_fastpath *fp,
int is_leading);
void bnx2x_set_num_queues(struct bnx2x *bp);
void bnx2x_chip_cleanup(struct bnx2x *bp, int unload_mode);
int bnx2x_acquire_hw_lock(struct bnx2x *bp, u32 resource);
int bnx2x_release_hw_lock(struct bnx2x *bp, u32 resource);
void bnx2x_set_eth_mac(struct bnx2x *bp, int set);
int bnx2x_set_fip_eth_mac_addr(struct bnx2x *bp, int set);
int bnx2x_set_all_enode_macs(struct bnx2x *bp, int set);
void bnx2x_set_rx_mode(struct net_device *dev);
void bnx2x_set_storm_rx_mode(struct bnx2x *bp);
void bnx2x_inc_load_cnt(struct bnx2x *bp);
u32 bnx2x_dec_load_cnt(struct bnx2x *bp);
bool bnx2x_chk_parity_attn(struct bnx2x *bp);
bool bnx2x_reset_is_done(struct bnx2x *bp);
void bnx2x_disable_close_the_gate(struct bnx2x *bp);
void bnx2x_stats_handle(struct bnx2x *bp, enum bnx2x_stats_event event);
void bnx2x_sp_event(struct bnx2x_fastpath *fp, union eth_rx_cqe *rr_cqe);
int bnx2x_func_start(struct bnx2x *bp);
void bnx2x_ilt_set_info(struct bnx2x *bp);
void bnx2x_dcbx_init(struct bnx2x *bp);
int bnx2x_set_power_state(struct bnx2x *bp, pci_power_t state);
void bnx2x_update_max_mf_config(struct bnx2x *bp, u32 value);
int bnx2x_nic_unload(struct bnx2x *bp, int unload_mode);
int bnx2x_nic_load(struct bnx2x *bp, int load_mode);
netdev_tx_t bnx2x_start_xmit(struct sk_buff *skb, struct net_device *dev);
u16 bnx2x_select_queue(struct net_device *dev, struct sk_buff *skb);
int bnx2x_change_mac_addr(struct net_device *dev, void *p);
int bnx2x_rx_int(struct bnx2x_fastpath *fp, int budget);
int bnx2x_tx_int(struct bnx2x_fastpath *fp);
int bnx2x_suspend(struct pci_dev *pdev, pm_message_t state);
int bnx2x_resume(struct pci_dev *pdev);
void bnx2x_free_irq(struct bnx2x *bp);
void bnx2x_free_fp_mem(struct bnx2x *bp);
int bnx2x_alloc_fp_mem(struct bnx2x *bp);
void bnx2x_init_rx_rings(struct bnx2x *bp);
void bnx2x_free_skbs(struct bnx2x *bp);
void bnx2x_netif_stop(struct bnx2x *bp, int disable_hw);
void bnx2x_netif_start(struct bnx2x *bp);
int bnx2x_enable_msix(struct bnx2x *bp);
int bnx2x_enable_msi(struct bnx2x *bp);
int bnx2x_poll(struct napi_struct *napi, int budget);
int __devinit bnx2x_alloc_mem_bp(struct bnx2x *bp);
void bnx2x_free_mem_bp(struct bnx2x *bp);
int bnx2x_change_mtu(struct net_device *dev, int new_mtu);
u32 bnx2x_fix_features(struct net_device *dev, u32 features);
int bnx2x_set_features(struct net_device *dev, u32 features);
void bnx2x_tx_timeout(struct net_device *dev);
static inline void bnx2x_update_fpsb_idx(struct bnx2x_fastpath *fp)
static inline void bnx2x_update_rx_prod(struct bnx2x *bp,
struct bnx2x_fastpath *fp,
u16 bd_prod, u16 rx_comp_prod,
u16 rx_sge_prod)
static inline void bnx2x_igu_ack_sb_gen(struct bnx2x *bp, u8 igu_sb_id,
u8 segment, u16 index, u8 op,
u8 update, u32 igu_addr)
static inline void bnx2x_igu_clear_sb_gen(struct bnx2x *bp,
u8 idu_sb_id, bool is_Pf)
static inline void bnx2x_hc_ack_sb(struct bnx2x *bp, u8 sb_id,
u8 storm, u16 index, u8 op, u8 update)
static inline void bnx2x_igu_ack_sb(struct bnx2x *bp, u8 igu_sb_id, u8 segment,
u16 index, u8 op, u8 update)
static inline void bnx2x_ack_sb(struct bnx2x *bp, u8 igu_sb_id, u8 storm,
u16 index, u8 op, u8 update)
static inline u16 bnx2x_hc_ack_int(struct bnx2x *bp)
static inline u16 bnx2x_igu_ack_int(struct bnx2x *bp)
static inline u16 bnx2x_ack_int(struct bnx2x *bp)
static inline int bnx2x_has_tx_work_unload(struct bnx2x_fastpath *fp)
static inline u16 bnx2x_tx_avail(struct bnx2x_fastpath *fp)
static inline int bnx2x_has_tx_work(struct bnx2x_fastpath *fp)
static inline int bnx2x_has_rx_work(struct bnx2x_fastpath *fp)
static inline void bnx2x_tx_disable(struct bnx2x *bp)
static inline void bnx2x_free_rx_sge(struct bnx2x *bp,
struct bnx2x_fastpath *fp, u16 index)
static inline void bnx2x_add_all_napi(struct bnx2x *bp)
static inline void bnx2x_del_all_napi(struct bnx2x *bp)
static inline void bnx2x_disable_msi(struct bnx2x *bp)
static inline int bnx2x_calc_num_queues(struct bnx2x *bp)
static inline void bnx2x_clear_sge_mask_next_elems(struct bnx2x_fastpath *fp)
static inline void bnx2x_init_sge_ring_bit_mask(struct bnx2x_fastpath *fp)
static inline int bnx2x_alloc_rx_sge(struct bnx2x *bp,
struct bnx2x_fastpath *fp, u16 index)
static inline int bnx2x_alloc_rx_skb(struct bnx2x *bp,
struct bnx2x_fastpath *fp, u16 index)
static inline void bnx2x_reuse_rx_skb(struct bnx2x_fastpath *fp,
u16 cons, u16 prod)
static inline void bnx2x_free_rx_sge_range(struct bnx2x *bp,
struct bnx2x_fastpath *fp, int last)
static inline void bnx2x_free_tpa_pool(struct bnx2x *bp,
struct bnx2x_fastpath *fp, int last)
static inline void bnx2x_init_tx_ring_one(struct bnx2x_fastpath *fp)
static inline void bnx2x_init_tx_rings(struct bnx2x *bp)
static inline void bnx2x_set_next_page_rx_bd(struct bnx2x_fastpath *fp)
static inline void bnx2x_set_next_page_sgl(struct bnx2x_fastpath *fp)
static inline void bnx2x_set_next_page_rx_cq(struct bnx2x_fastpath *fp)
static inline int bnx2x_alloc_rx_bds(struct bnx2x_fastpath *fp,
int rx_ring_size)
static inline void bnx2x_init_fcoe_fp(struct bnx2x *bp)
static inline void __storm_memset_struct(struct bnx2x *bp,
u32 addr, size_t size, u32 *data)
static inline void storm_memset_mac_filters(struct bnx2x *bp,
struct tstorm_eth_mac_filter_config *mac_filters,
u16 abs_fid)
static inline void storm_memset_cmng(struct bnx2x *bp,
struct cmng_struct_per_port *cmng,
u8 port)
void bnx2x_acquire_phy_lock(struct bnx2x *bp);
void bnx2x_release_phy_lock(struct bnx2x *bp);
static inline u16 bnx2x_extract_max_cfg(struct bnx2x *bp, u32 mf_cfg)
