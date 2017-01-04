static int bnx2x_setup_irqs(struct bnx2x *bp);
static inline void bnx2x_bz_fp(struct bnx2x *bp, int index)
static inline void bnx2x_move_fp(struct bnx2x *bp, int from, int to)
static u16 bnx2x_free_tx_pkt(struct bnx2x *bp, struct bnx2x_fastpath *fp,
u16 idx)
int bnx2x_tx_int(struct bnx2x_fastpath *fp)
static inline void bnx2x_update_last_max_sge(struct bnx2x_fastpath *fp,
u16 idx)
static void bnx2x_update_sge_prod(struct bnx2x_fastpath *fp,
struct eth_fast_path_rx_cqe *fp_cqe)
static void bnx2x_tpa_start(struct bnx2x_fastpath *fp, u16 queue,
struct sk_buff *skb, u16 cons, u16 prod)
#define TPA_TSTAMP_OPT_LEN	12
static inline u16 bnx2x_set_lro_mss(struct bnx2x *bp, u16 parsing_flags,
u16 len_on_bd)
static int bnx2x_fill_frag_skb(struct bnx2x *bp, struct bnx2x_fastpath *fp,
struct sk_buff *skb,
struct eth_fast_path_rx_cqe *fp_cqe,
u16 cqe_idx, u16 parsing_flags)
static void bnx2x_tpa_stop(struct bnx2x *bp, struct bnx2x_fastpath *fp,
u16 queue, int pad, int len, union eth_rx_cqe *cqe,
u16 cqe_idx)
static inline void bnx2x_set_skb_rxhash(struct bnx2x *bp, union eth_rx_cqe *cqe,
struct sk_buff *skb)
int bnx2x_rx_int(struct bnx2x_fastpath *fp, int budget)
static irqreturn_t bnx2x_msix_fp_int(int irq, void *fp_cookie)
void bnx2x_acquire_phy_lock(struct bnx2x *bp)
void bnx2x_release_phy_lock(struct bnx2x *bp)
u16 bnx2x_get_mf_speed(struct bnx2x *bp)
static inline void bnx2x_fill_report_data(struct bnx2x *bp,
struct bnx2x_link_report_data *data)
void bnx2x_link_report(struct bnx2x *bp)
void __bnx2x_link_report(struct bnx2x *bp)
void bnx2x_init_rx_rings(struct bnx2x *bp)
static void bnx2x_free_tx_skbs(struct bnx2x *bp)
static void bnx2x_free_rx_bds(struct bnx2x_fastpath *fp)
static void bnx2x_free_rx_skbs(struct bnx2x *bp)
void bnx2x_free_skbs(struct bnx2x *bp)
void bnx2x_update_max_mf_config(struct bnx2x *bp, u32 value)
static void bnx2x_free_msix_irqs(struct bnx2x *bp)
void bnx2x_free_irq(struct bnx2x *bp)
int bnx2x_enable_msix(struct bnx2x *bp)
static int bnx2x_req_msix_irqs(struct bnx2x *bp)
int bnx2x_enable_msi(struct bnx2x *bp)
static int bnx2x_req_irq(struct bnx2x *bp)
static void bnx2x_napi_enable(struct bnx2x *bp)
static void bnx2x_napi_disable(struct bnx2x *bp)
void bnx2x_netif_start(struct bnx2x *bp)
void bnx2x_netif_stop(struct bnx2x *bp, int disable_hw)
u16 bnx2x_select_queue(struct net_device *dev, struct sk_buff *skb)
void bnx2x_set_num_queues(struct bnx2x *bp)
static inline void bnx2x_set_fcoe_eth_macs(struct bnx2x *bp)
static void bnx2x_release_firmware(struct bnx2x *bp)
static inline int bnx2x_set_real_num_queues(struct bnx2x *bp)
static inline void bnx2x_set_rx_buf_size(struct bnx2x *bp)
int bnx2x_nic_load(struct bnx2x *bp, int load_mode)
int bnx2x_nic_unload(struct bnx2x *bp, int unload_mode)
int bnx2x_set_power_state(struct bnx2x *bp, pci_power_t state)
int bnx2x_poll(struct napi_struct *napi, int budget)
static noinline u16 bnx2x_tx_split(struct bnx2x *bp,
struct bnx2x_fastpath *fp,
struct sw_tx_bd *tx_buf,
struct eth_tx_start_bd **tx_bd, u16 hlen,
u16 bd_prod, int nbd)
static inline u16 bnx2x_csum_fix(unsigned char *t_header, u16 csum, s8 fix)
static inline u32 bnx2x_xmit_type(struct bnx2x *bp, struct sk_buff *skb)
#if (MAX_SKB_FRAGS >= MAX_FETCH_BD - 3)
static int bnx2x_pkt_req_lin(struct bnx2x *bp, struct sk_buff *skb,
u32 xmit_type)
static inline void bnx2x_set_pbd_gso_e2(struct sk_buff *skb, u32 *parsing_data,
u32 xmit_type)
static inline void bnx2x_set_pbd_gso(struct sk_buff *skb,
struct eth_tx_parse_bd_e1x *pbd,
u32 xmit_type)
static inline  u8 bnx2x_set_pbd_csum_e2(struct bnx2x *bp, struct sk_buff *skb,
u32 *parsing_data, u32 xmit_type)
static inline u8 bnx2x_set_pbd_csum(struct bnx2x *bp, struct sk_buff *skb,
struct eth_tx_parse_bd_e1x *pbd,
u32 xmit_type)
netdev_tx_t bnx2x_start_xmit(struct sk_buff *skb, struct net_device *dev)
int bnx2x_change_mac_addr(struct net_device *dev, void *p)
static void bnx2x_free_fp_mem_at(struct bnx2x *bp, int fp_index)
void bnx2x_free_fp_mem(struct bnx2x *bp)
static inline void set_sb_shortcuts(struct bnx2x *bp, int index)
static int bnx2x_alloc_fp_mem_at(struct bnx2x *bp, int index)
int bnx2x_alloc_fp_mem(struct bnx2x *bp)
static int bnx2x_setup_irqs(struct bnx2x *bp)
void bnx2x_free_mem_bp(struct bnx2x *bp)
int __devinit bnx2x_alloc_mem_bp(struct bnx2x *bp)
static int bnx2x_reload_if_running(struct net_device *dev)
int bnx2x_change_mtu(struct net_device *dev, int new_mtu)
u32 bnx2x_fix_features(struct net_device *dev, u32 features)
int bnx2x_set_features(struct net_device *dev, u32 features)
void bnx2x_tx_timeout(struct net_device *dev)
int bnx2x_suspend(struct pci_dev *pdev, pm_message_t state)
int bnx2x_resume(struct pci_dev *pdev)
