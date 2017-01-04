static DEFINE_MUTEX(bnad_fwimg_mutex);
static uint bnad_msix_disable;
module_param(bnad_msix_disable, uint, 0444);
MODULE_PARM_DESC(bnad_msix_disable, "Disable MSIX mode");
static uint bnad_ioc_auto_recover = 1;
module_param(bnad_ioc_auto_recover, uint, 0444);
MODULE_PARM_DESC(bnad_ioc_auto_recover, "Enable / Disable auto recovery");
u32 bnad_rxqs_per_cq = 2;
static const u8 bnad_bcast_addr[] =  ;
#define BNAD_TX_UNMAPQ_DEPTH (bnad->txq_depth * 2)
#define BNAD_RX_UNMAPQ_DEPTH (bnad->rxq_depth)
#define BNAD_GET_MBOX_IRQ(_bnad)				\
(((_bnad)->cfg_flags & BNAD_CF_MSIX) ?			\
((_bnad)->msix_table[(_bnad)->msix_num - 1].vector) : 	\
((_bnad)->pcidev->irq))
#define BNAD_FILL_UNMAPQ_MEM_REQ(_res_info, _num, _depth)	\
do  while (0)
#define BNAD_TXRX_SYNC_MDELAY	250
static void
bnad_cq_cmpl_init(struct bnad *bnad, struct bna_ccb *ccb)
static void
bnad_free_all_txbufs(struct bnad *bnad,
struct bna_tcb *tcb)
static u32
bnad_free_txbufs(struct bnad *bnad,
struct bna_tcb *tcb)
static void
bnad_tx_free_tasklet(unsigned long bnad_ptr)
static u32
bnad_tx(struct bnad *bnad, struct bna_tcb *tcb)
static irqreturn_t
bnad_msix_tx(int irq, void *data)
static void
bnad_reset_rcb(struct bnad *bnad, struct bna_rcb *rcb)
static void
bnad_free_all_rxbufs(struct bnad *bnad, struct bna_rcb *rcb)
static void
bnad_alloc_n_post_rxbufs(struct bnad *bnad, struct bna_rcb *rcb)
static inline void
bnad_refill_rxq(struct bnad *bnad, struct bna_rcb *rcb)
static u32
bnad_poll_cq(struct bnad *bnad, struct bna_ccb *ccb, int budget)
static void
bnad_disable_rx_irq(struct bnad *bnad, struct bna_ccb *ccb)
static void
bnad_enable_rx_irq(struct bnad *bnad, struct bna_ccb *ccb)
static void
bnad_netif_rx_schedule_poll(struct bnad *bnad, struct bna_ccb *ccb)
static irqreturn_t
bnad_msix_rx(int irq, void *data)
static irqreturn_t
bnad_msix_mbox_handler(int irq, void *data)
static irqreturn_t
bnad_isr(int irq, void *data)
static void
bnad_enable_mbox_irq(struct bnad *bnad)
static void
bnad_disable_mbox_irq(struct bnad *bnad)
static void
bnad_set_netdev_perm_addr(struct bnad *bnad)
void
bnad_cb_device_enable_mbox_intr(struct bnad *bnad)
void
bnad_cb_device_disable_mbox_intr(struct bnad *bnad)
void
bnad_cb_device_enabled(struct bnad *bnad, enum bna_cb_status status)
void
bnad_cb_device_disabled(struct bnad *bnad, enum bna_cb_status status)
static void
bnad_cb_port_disabled(void *arg, enum bna_cb_status status)
void
bnad_cb_port_link_status(struct bnad *bnad,
enum bna_link_status link_status)
static void
bnad_cb_tx_disabled(void *arg, struct bna_tx *tx,
enum bna_cb_status status)
static void
bnad_cb_tcb_setup(struct bnad *bnad, struct bna_tcb *tcb)
static void
bnad_cb_tcb_destroy(struct bnad *bnad, struct bna_tcb *tcb)
static void
bnad_cb_rcb_setup(struct bnad *bnad, struct bna_rcb *rcb)
static void
bnad_cb_rcb_destroy(struct bnad *bnad, struct bna_rcb *rcb)
static void
bnad_cb_ccb_setup(struct bnad *bnad, struct bna_ccb *ccb)
static void
bnad_cb_ccb_destroy(struct bnad *bnad, struct bna_ccb *ccb)
static void
bnad_cb_tx_stall(struct bnad *bnad, struct bna_tcb *tcb)
static void
bnad_cb_tx_resume(struct bnad *bnad, struct bna_tcb *tcb)
static void
bnad_cb_tx_cleanup(struct bnad *bnad, struct bna_tcb *tcb)
static void
bnad_cb_rx_cleanup(struct bnad *bnad,
struct bna_ccb *ccb)
static void
bnad_cb_rx_post(struct bnad *bnad, struct bna_rcb *rcb)
static void
bnad_cb_rx_disabled(void *arg, struct bna_rx *rx,
enum bna_cb_status status)
static void
bnad_cb_rx_mcast_add(struct bnad *bnad, struct bna_rx *rx,
enum bna_cb_status status)
void
bnad_cb_stats_get(struct bnad *bnad, enum bna_cb_status status,
struct bna_stats *stats)
static void
bnad_mem_free(struct bnad *bnad,
struct bna_mem_info *mem_info)
static int
bnad_mem_alloc(struct bnad *bnad,
struct bna_mem_info *mem_info)
static void
bnad_mbox_irq_free(struct bnad *bnad,
struct bna_intr_info *intr_info)
static int
bnad_mbox_irq_alloc(struct bnad *bnad,
struct bna_intr_info *intr_info)
static void
bnad_txrx_irq_free(struct bnad *bnad, struct bna_intr_info *intr_info)
static int
bnad_txrx_irq_alloc(struct bnad *bnad, enum bnad_intr_source src,
uint txrx_id, struct bna_intr_info *intr_info)
static void
bnad_tx_msix_unregister(struct bnad *bnad, struct bnad_tx_info *tx_info,
int num_txqs)
static int
bnad_tx_msix_register(struct bnad *bnad, struct bnad_tx_info *tx_info,
uint tx_id, int num_txqs)
static void
bnad_rx_msix_unregister(struct bnad *bnad, struct bnad_rx_info *rx_info,
int num_rxps)
static int
bnad_rx_msix_register(struct bnad *bnad, struct bnad_rx_info *rx_info,
uint rx_id, int num_rxps)
static void
bnad_tx_res_free(struct bnad *bnad, struct bna_res_info *res_info)
static int
bnad_tx_res_alloc(struct bnad *bnad, struct bna_res_info *res_info,
uint tx_id)
static void
bnad_rx_res_free(struct bnad *bnad, struct bna_res_info *res_info)
static int
bnad_rx_res_alloc(struct bnad *bnad, struct bna_res_info *res_info,
uint rx_id)
static void
bnad_ioc_timeout(unsigned long data)
static void
bnad_ioc_hb_check(unsigned long data)
static void
bnad_iocpf_timeout(unsigned long data)
static void
bnad_iocpf_sem_timeout(unsigned long data)
static void
bnad_dim_timeout(unsigned long data)
static void
bnad_stats_timeout(unsigned long data)
void
bnad_dim_timer_start(struct bnad *bnad)
static void
bnad_stats_timer_start(struct bnad *bnad)
static void
bnad_stats_timer_stop(struct bnad *bnad)
static void
bnad_netdev_mc_list_get(struct net_device *netdev, u8 *mc_list)
static int
bnad_napi_poll_rx(struct napi_struct *napi, int budget)
static void
bnad_napi_enable(struct bnad *bnad, u32 rx_id)
static void
bnad_napi_disable(struct bnad *bnad, u32 rx_id)
void
bnad_cleanup_tx(struct bnad *bnad, uint tx_id)
int
bnad_setup_tx(struct bnad *bnad, uint tx_id)
static void
bnad_init_rx_config(struct bnad *bnad, struct bna_rx_config *rx_config)
void
bnad_cleanup_rx(struct bnad *bnad, uint rx_id)
int
bnad_setup_rx(struct bnad *bnad, uint rx_id)
void
bnad_tx_coalescing_timeo_set(struct bnad *bnad)
void
bnad_rx_coalescing_timeo_set(struct bnad *bnad)
static int
bnad_mac_addr_set_locked(struct bnad *bnad, u8 *mac_addr)
static int
bnad_enable_default_bcast(struct bnad *bnad)
static void
bnad_restore_vlans(struct bnad *bnad, u32 rx_id)
void
bnad_netdev_qstats_fill(struct bnad *bnad, struct rtnl_link_stats64 *stats)
void
bnad_netdev_hwstats_fill(struct bnad *bnad, struct rtnl_link_stats64 *stats)
static void
bnad_mbox_irq_sync(struct bnad *bnad)
static int
bnad_tso_prepare(struct bnad *bnad, struct sk_buff *skb)
static void
bnad_q_num_init(struct bnad *bnad)
static void
bnad_q_num_adjust(struct bnad *bnad, int msix_vectors)
static void
bnad_device_disable(struct bnad *bnad)
static int
bnad_device_enable(struct bnad *bnad)
static void
bnad_res_free(struct bnad *bnad)
static int
bnad_res_alloc(struct bnad *bnad)
static void
bnad_enable_msix(struct bnad *bnad)
static void
bnad_disable_msix(struct bnad *bnad)
static int
bnad_open(struct net_device *netdev)
static int
bnad_stop(struct net_device *netdev)
static netdev_tx_t
bnad_start_xmit(struct sk_buff *skb, struct net_device *netdev)
static struct rtnl_link_stats64 *
bnad_get_stats64(struct net_device *netdev, struct rtnl_link_stats64 *stats)
static void
bnad_set_rx_mode(struct net_device *netdev)
static int
bnad_set_mac_address(struct net_device *netdev, void *mac_addr)
static int
bnad_change_mtu(struct net_device *netdev, int new_mtu)
static void
bnad_vlan_rx_register(struct net_device *netdev,
struct vlan_group *vlan_grp)
static void
bnad_vlan_rx_add_vid(struct net_device *netdev,
unsigned short vid)
static void
bnad_vlan_rx_kill_vid(struct net_device *netdev,
unsigned short vid)
static void
bnad_netpoll(struct net_device *netdev)
static const struct net_device_ops bnad_netdev_ops = ;
static void
bnad_netdev_init(struct bnad *bnad, bool using_dac)
static int
bnad_init(struct bnad *bnad,
struct pci_dev *pdev, struct net_device *netdev)
static void
bnad_uninit(struct bnad *bnad)
static void
bnad_lock_init(struct bnad *bnad)
static void
bnad_lock_uninit(struct bnad *bnad)
static int
bnad_pci_init(struct bnad *bnad,
struct pci_dev *pdev, bool *using_dac)
static void
bnad_pci_uninit(struct pci_dev *pdev)
static int __devinit
bnad_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *pcidev_id)
static void __devexit
bnad_pci_remove(struct pci_dev *pdev)
static const struct pci_device_id bnad_pci_id_table[] = ;
MODULE_DEVICE_TABLE(pci, bnad_pci_id_table);
static struct pci_driver bnad_pci_driver = ;
static int __init
bnad_module_init(void)
static void __exit
bnad_module_exit(void)
module_init(bnad_module_init);
module_exit(bnad_module_exit);
MODULE_AUTHOR("Brocade");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Brocade 10G PCIe Ethernet driver");
MODULE_VERSION(BNAD_VERSION);
MODULE_FIRMWARE(CNA_FW_FILE_CT);
