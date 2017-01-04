char qlge_driver_name[] = DRV_NAME;
const char qlge_driver_version[] = DRV_VERSION;
MODULE_AUTHOR("Ron Mercer <ron.mercer@qlogic.com>");
MODULE_DESCRIPTION(DRV_STRING " ");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
static const u32 default_msg =
NETIF_MSG_DRV | NETIF_MSG_PROBE | NETIF_MSG_LINK |
NETIF_MSG_IFDOWN |
NETIF_MSG_IFUP |
NETIF_MSG_RX_ERR |
NETIF_MSG_TX_ERR |
NETIF_MSG_HW | NETIF_MSG_WOL | 0;
static int debug = -1;
module_param(debug, int, 0664);
MODULE_PARM_DESC(debug, "Debug level (0=none,...,16=all)");
#define MSIX_IRQ 0
#define MSI_IRQ 1
#define LEG_IRQ 2
static int qlge_irq_type = MSIX_IRQ;
module_param(qlge_irq_type, int, 0664);
MODULE_PARM_DESC(qlge_irq_type, "0 = MSI-X, 1 = MSI, 2 = Legacy.");
static int qlge_mpi_coredump;
module_param(qlge_mpi_coredump, int, 0);
MODULE_PARM_DESC(qlge_mpi_coredump,
"Option to enable MPI firmware dump. "
"Default is OFF - Do Not allocate memory. ");
static int qlge_force_coredump;
module_param(qlge_force_coredump, int, 0);
MODULE_PARM_DESC(qlge_force_coredump,
"Option to allow force of firmware core dump. "
"Default is OFF - Do not allow.");
static DEFINE_PCI_DEVICE_TABLE(qlge_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, qlge_pci_tbl);
static int ql_wol(struct ql_adapter *qdev);
static void qlge_set_multicast_list(struct net_device *ndev);
static int ql_sem_trylock(struct ql_adapter *qdev, u32 sem_mask)
int ql_sem_spinlock(struct ql_adapter *qdev, u32 sem_mask)
void ql_sem_unlock(struct ql_adapter *qdev, u32 sem_mask)
int ql_wait_reg_rdy(struct ql_adapter *qdev, u32 reg, u32 bit, u32 err_bit)
static int ql_wait_cfg(struct ql_adapter *qdev, u32 bit)
int ql_write_cfg(struct ql_adapter *qdev, void *ptr, int size, u32 bit,
u16 q_id)
int ql_get_mac_addr_reg(struct ql_adapter *qdev, u32 type, u16 index,
u32 *value)
static int ql_set_mac_addr_reg(struct ql_adapter *qdev, u8 *addr, u32 type,
u16 index)
static int ql_set_mac_addr(struct ql_adapter *qdev, int set)
void ql_link_on(struct ql_adapter *qdev)
void ql_link_off(struct ql_adapter *qdev)
int ql_get_routing_reg(struct ql_adapter *qdev, u32 index, u32 *value)
static int ql_set_routing_reg(struct ql_adapter *qdev, u32 index, u32 mask,
int enable)
static void ql_enable_interrupts(struct ql_adapter *qdev)
static void ql_disable_interrupts(struct ql_adapter *qdev)
u32 ql_enable_completion_interrupt(struct ql_adapter *qdev, u32 intr)
static u32 ql_disable_completion_interrupt(struct ql_adapter *qdev, u32 intr)
static void ql_enable_all_completion_interrupts(struct ql_adapter *qdev)
static int ql_validate_flash(struct ql_adapter *qdev, u32 size, const char *str)
static int ql_read_flash_word(struct ql_adapter *qdev, int offset, __le32 *data)
static int ql_get_8000_flash_params(struct ql_adapter *qdev)
static int ql_get_8012_flash_params(struct ql_adapter *qdev)
static int ql_write_xgmac_reg(struct ql_adapter *qdev, u32 reg, u32 data)
int ql_read_xgmac_reg(struct ql_adapter *qdev, u32 reg, u32 *data)
int ql_read_xgmac_reg64(struct ql_adapter *qdev, u32 reg, u64 *data)
static int ql_8000_port_initialize(struct ql_adapter *qdev)
static int ql_8012_port_initialize(struct ql_adapter *qdev)
static inline unsigned int ql_lbq_block_size(struct ql_adapter *qdev)
static struct bq_desc *ql_get_curr_lbuf(struct rx_ring *rx_ring)
static struct bq_desc *ql_get_curr_lchunk(struct ql_adapter *qdev,
struct rx_ring *rx_ring)
static struct bq_desc *ql_get_curr_sbuf(struct rx_ring *rx_ring)
static void ql_update_cq(struct rx_ring *rx_ring)
static void ql_write_cq_idx(struct rx_ring *rx_ring)
static int ql_get_next_chunk(struct ql_adapter *qdev, struct rx_ring *rx_ring,
struct bq_desc *lbq_desc)
static void ql_update_lbq(struct ql_adapter *qdev, struct rx_ring *rx_ring)
static void ql_update_sbq(struct ql_adapter *qdev, struct rx_ring *rx_ring)
static void ql_update_buffer_queues(struct ql_adapter *qdev,
struct rx_ring *rx_ring)
static void ql_unmap_send(struct ql_adapter *qdev,
struct tx_ring_desc *tx_ring_desc, int mapped)
static int ql_map_send(struct ql_adapter *qdev,
struct ob_mac_iocb_req *mac_iocb_ptr,
struct sk_buff *skb, struct tx_ring_desc *tx_ring_desc)
static void ql_process_mac_rx_gro_page(struct ql_adapter *qdev,
struct rx_ring *rx_ring,
struct ib_mac_iocb_rsp *ib_mac_rsp,
u32 length,
u16 vlan_id)
static void ql_process_mac_rx_page(struct ql_adapter *qdev,
struct rx_ring *rx_ring,
struct ib_mac_iocb_rsp *ib_mac_rsp,
u32 length,
u16 vlan_id)
static void ql_process_mac_rx_skb(struct ql_adapter *qdev,
struct rx_ring *rx_ring,
struct ib_mac_iocb_rsp *ib_mac_rsp,
u32 length,
u16 vlan_id)
static void ql_realign_skb(struct sk_buff *skb, int len)
static struct sk_buff *ql_build_rx_skb(struct ql_adapter *qdev,
struct rx_ring *rx_ring,
struct ib_mac_iocb_rsp *ib_mac_rsp)
static void ql_process_mac_split_rx_intr(struct ql_adapter *qdev,
struct rx_ring *rx_ring,
struct ib_mac_iocb_rsp *ib_mac_rsp,
u16 vlan_id)
static unsigned long ql_process_mac_rx_intr(struct ql_adapter *qdev,
struct rx_ring *rx_ring,
struct ib_mac_iocb_rsp *ib_mac_rsp)
static void ql_process_mac_tx_intr(struct ql_adapter *qdev,
struct ob_mac_iocb_rsp *mac_rsp)
void ql_queue_fw_error(struct ql_adapter *qdev)
void ql_queue_asic_error(struct ql_adapter *qdev)
static void ql_process_chip_ae_intr(struct ql_adapter *qdev,
struct ib_ae_iocb_rsp *ib_ae_rsp)
static int ql_clean_outbound_rx_ring(struct rx_ring *rx_ring)
static int ql_clean_inbound_rx_ring(struct rx_ring *rx_ring, int budget)
static int ql_napi_poll_msix(struct napi_struct *napi, int budget)
static void qlge_vlan_rx_register(struct net_device *ndev, struct vlan_group *grp)
static void qlge_vlan_rx_add_vid(struct net_device *ndev, u16 vid)
static void qlge_vlan_rx_kill_vid(struct net_device *ndev, u16 vid)
static void qlge_restore_vlan(struct ql_adapter *qdev)
static irqreturn_t qlge_msix_rx_isr(int irq, void *dev_id)
static irqreturn_t qlge_isr(int irq, void *dev_id)
static int ql_tso(struct sk_buff *skb, struct ob_mac_tso_iocb_req *mac_iocb_ptr)
static void ql_hw_csum_setup(struct sk_buff *skb,
struct ob_mac_tso_iocb_req *mac_iocb_ptr)
static netdev_tx_t qlge_send(struct sk_buff *skb, struct net_device *ndev)
static void ql_free_shadow_space(struct ql_adapter *qdev)
static int ql_alloc_shadow_space(struct ql_adapter *qdev)
static void ql_init_tx_ring(struct ql_adapter *qdev, struct tx_ring *tx_ring)
static void ql_free_tx_resources(struct ql_adapter *qdev,
struct tx_ring *tx_ring)
static int ql_alloc_tx_resources(struct ql_adapter *qdev,
struct tx_ring *tx_ring)
static void ql_free_lbq_buffers(struct ql_adapter *qdev, struct rx_ring *rx_ring)
static void ql_free_sbq_buffers(struct ql_adapter *qdev, struct rx_ring *rx_ring)
static void ql_free_rx_buffers(struct ql_adapter *qdev)
static void ql_alloc_rx_buffers(struct ql_adapter *qdev)
static void ql_init_lbq_ring(struct ql_adapter *qdev,
struct rx_ring *rx_ring)
static void ql_init_sbq_ring(struct ql_adapter *qdev,
struct rx_ring *rx_ring)
static void ql_free_rx_resources(struct ql_adapter *qdev,
struct rx_ring *rx_ring)
static int ql_alloc_rx_resources(struct ql_adapter *qdev,
struct rx_ring *rx_ring)
static void ql_tx_ring_clean(struct ql_adapter *qdev)
static void ql_free_mem_resources(struct ql_adapter *qdev)
static int ql_alloc_mem_resources(struct ql_adapter *qdev)
static int ql_start_rx_ring(struct ql_adapter *qdev, struct rx_ring *rx_ring)
static int ql_start_tx_ring(struct ql_adapter *qdev, struct tx_ring *tx_ring)
static void ql_disable_msix(struct ql_adapter *qdev)
static void ql_enable_msix(struct ql_adapter *qdev)
static void ql_set_tx_vect(struct ql_adapter *qdev)
static void ql_set_irq_mask(struct ql_adapter *qdev, struct intr_context *ctx)
static void ql_resolve_queues_to_irqs(struct ql_adapter *qdev)
static void ql_free_irq(struct ql_adapter *qdev)
static int ql_request_irq(struct ql_adapter *qdev)
static int ql_start_rss(struct ql_adapter *qdev)
static int ql_clear_routing_entries(struct ql_adapter *qdev)
static int ql_route_initialize(struct ql_adapter *qdev)
int ql_cam_route_initialize(struct ql_adapter *qdev)
static int ql_adapter_initialize(struct ql_adapter *qdev)
static int ql_adapter_reset(struct ql_adapter *qdev)
static void ql_display_dev_info(struct net_device *ndev)
static int ql_wol(struct ql_adapter *qdev)
static void ql_cancel_all_work_sync(struct ql_adapter *qdev)
static int ql_adapter_down(struct ql_adapter *qdev)
static int ql_adapter_up(struct ql_adapter *qdev)
static void ql_release_adapter_resources(struct ql_adapter *qdev)
static int ql_get_adapter_resources(struct ql_adapter *qdev)
static int qlge_close(struct net_device *ndev)
static int ql_configure_rings(struct ql_adapter *qdev)
static int qlge_open(struct net_device *ndev)
static int ql_change_rx_buffers(struct ql_adapter *qdev)
static int qlge_change_mtu(struct net_device *ndev, int new_mtu)
static struct net_device_stats *qlge_get_stats(struct net_device
*ndev)
static void qlge_set_multicast_list(struct net_device *ndev)
static int qlge_set_mac_address(struct net_device *ndev, void *p)
static void qlge_tx_timeout(struct net_device *ndev)
static void ql_asic_reset_work(struct work_struct *work)
static const struct nic_operations qla8012_nic_ops = ;
static const struct nic_operations qla8000_nic_ops = ;
static int ql_get_alt_pcie_func(struct ql_adapter *qdev)
static int ql_get_board_info(struct ql_adapter *qdev)
static void ql_release_all(struct pci_dev *pdev)
static int __devinit ql_init_device(struct pci_dev *pdev,
struct net_device *ndev, int cards_found)
static const struct net_device_ops qlge_netdev_ops = ;
static void ql_timer(unsigned long data)
static int __devinit qlge_probe(struct pci_dev *pdev,
const struct pci_device_id *pci_entry)
netdev_tx_t ql_lb_send(struct sk_buff *skb, struct net_device *ndev)
int ql_clean_lb_rx_ring(struct rx_ring *rx_ring, int budget)
static void __devexit qlge_remove(struct pci_dev *pdev)
static void ql_eeh_close(struct net_device *ndev)
static pci_ers_result_t qlge_io_error_detected(struct pci_dev *pdev,
enum pci_channel_state state)
static pci_ers_result_t qlge_io_slot_reset(struct pci_dev *pdev)
static void qlge_io_resume(struct pci_dev *pdev)
static struct pci_error_handlers qlge_err_handler = ;
static int qlge_suspend(struct pci_dev *pdev, pm_message_t state)
static int qlge_resume(struct pci_dev *pdev)
static void qlge_shutdown(struct pci_dev *pdev)
static struct pci_driver qlge_driver = ;
static int __init qlge_init_module(void)
static void __exit qlge_exit(void)
module_init(qlge_init_module);
module_exit(qlge_exit);
