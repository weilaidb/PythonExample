char vmxnet3_driver_name[] = "vmxnet3";
#define VMXNET3_DRIVER_DESC "VMware vmxnet3 virtual NIC driver"
static DEFINE_PCI_DEVICE_TABLE(vmxnet3_pciid_table) = ;
MODULE_DEVICE_TABLE(pci, vmxnet3_pciid_table);
static atomic_t devices_found;
#define VMXNET3_MAX_DEVICES 10
static int enable_mq = 1;
static int irq_share_mode;
static void
vmxnet3_write_mac_addr(struct vmxnet3_adapter *adapter, u8 *mac);
static void
vmxnet3_enable_intr(struct vmxnet3_adapter *adapter, unsigned intr_idx)
static void
vmxnet3_disable_intr(struct vmxnet3_adapter *adapter, unsigned intr_idx)
static void
vmxnet3_enable_all_intrs(struct vmxnet3_adapter *adapter)
static void
vmxnet3_disable_all_intrs(struct vmxnet3_adapter *adapter)
static void
vmxnet3_ack_events(struct vmxnet3_adapter *adapter, u32 events)
static bool
vmxnet3_tq_stopped(struct vmxnet3_tx_queue *tq, struct vmxnet3_adapter *adapter)
static void
vmxnet3_tq_start(struct vmxnet3_tx_queue *tq, struct vmxnet3_adapter *adapter)
static void
vmxnet3_tq_wake(struct vmxnet3_tx_queue *tq, struct vmxnet3_adapter *adapter)
static void
vmxnet3_tq_stop(struct vmxnet3_tx_queue *tq, struct vmxnet3_adapter *adapter)
static void
vmxnet3_check_link(struct vmxnet3_adapter *adapter, bool affectTxQueue)
static void
vmxnet3_process_events(struct vmxnet3_adapter *adapter)
static void vmxnet3_RxDescToCPU(const struct Vmxnet3_RxDesc *srcDesc,
struct Vmxnet3_RxDesc *dstDesc)
static void vmxnet3_TxDescToLe(const struct Vmxnet3_TxDesc *srcDesc,
struct Vmxnet3_TxDesc *dstDesc)
static void vmxnet3_RxCompToCPU(const struct Vmxnet3_RxCompDesc *srcDesc,
struct Vmxnet3_RxCompDesc *dstDesc)
static u32 get_bitfield32(const __le32 *bitfield, u32 pos, u32 size)
#   define VMXNET3_TXDESC_GET_GEN(txdesc) get_bitfield32(((const __le32 *) \
txdesc) + VMXNET3_TXD_GEN_DWORD_SHIFT, \
VMXNET3_TXD_GEN_SHIFT, VMXNET3_TXD_GEN_SIZE)
#   define VMXNET3_TXDESC_GET_EOP(txdesc) get_bitfield32(((const __le32 *) \
txdesc) + VMXNET3_TXD_EOP_DWORD_SHIFT, \
VMXNET3_TXD_EOP_SHIFT, VMXNET3_TXD_EOP_SIZE)
#   define VMXNET3_TCD_GET_GEN(tcd) get_bitfield32(((const __le32 *)tcd) + \
VMXNET3_TCD_GEN_DWORD_SHIFT, VMXNET3_TCD_GEN_SHIFT, \
VMXNET3_TCD_GEN_SIZE)
#   define VMXNET3_TCD_GET_TXIDX(tcd) get_bitfield32((const __le32 *)tcd, \
VMXNET3_TCD_TXIDX_SHIFT, VMXNET3_TCD_TXIDX_SIZE)
#   define vmxnet3_getRxComp(dstrcd, rcd, tmp) do  while (0)
#   define vmxnet3_getRxDesc(dstrxd, rxd, tmp) do  while (0)
#   define VMXNET3_TXDESC_GET_GEN(txdesc) ((txdesc)->gen)
#   define VMXNET3_TXDESC_GET_EOP(txdesc) ((txdesc)->eop)
#   define VMXNET3_TCD_GET_GEN(tcd) ((tcd)->gen)
#   define VMXNET3_TCD_GET_TXIDX(tcd) ((tcd)->txdIdx)
#   define vmxnet3_getRxComp(dstrcd, rcd, tmp) (dstrcd) = (rcd)
#   define vmxnet3_getRxDesc(dstrxd, rxd, tmp) (dstrxd) = (rxd)
static void
vmxnet3_unmap_tx_buf(struct vmxnet3_tx_buf_info *tbi,
struct pci_dev *pdev)
static int
vmxnet3_unmap_pkt(u32 eop_idx, struct vmxnet3_tx_queue *tq,
struct pci_dev *pdev,	struct vmxnet3_adapter *adapter)
static int
vmxnet3_tq_tx_complete(struct vmxnet3_tx_queue *tq,
struct vmxnet3_adapter *adapter)
static void
vmxnet3_tq_cleanup(struct vmxnet3_tx_queue *tq,
struct vmxnet3_adapter *adapter)
static void
vmxnet3_tq_destroy(struct vmxnet3_tx_queue *tq,
struct vmxnet3_adapter *adapter)
void
vmxnet3_tq_destroy_all(struct vmxnet3_adapter *adapter)
static void
vmxnet3_tq_init(struct vmxnet3_tx_queue *tq,
struct vmxnet3_adapter *adapter)
static int
vmxnet3_tq_create(struct vmxnet3_tx_queue *tq,
struct vmxnet3_adapter *adapter)
static void
vmxnet3_tq_cleanup_all(struct vmxnet3_adapter *adapter)
static int
vmxnet3_rq_alloc_rx_buf(struct vmxnet3_rx_queue *rq, u32 ring_idx,
int num_to_alloc, struct vmxnet3_adapter *adapter)
static void
vmxnet3_append_frag(struct sk_buff *skb, struct Vmxnet3_RxCompDesc *rcd,
struct vmxnet3_rx_buf_info *rbi)
static void
vmxnet3_map_pkt(struct sk_buff *skb, struct vmxnet3_tx_ctx *ctx,
struct vmxnet3_tx_queue *tq, struct pci_dev *pdev,
struct vmxnet3_adapter *adapter)
static void
vmxnet3_tq_init_all(struct vmxnet3_adapter *adapter)
static int
vmxnet3_parse_and_copy_hdr(struct sk_buff *skb, struct vmxnet3_tx_queue *tq,
struct vmxnet3_tx_ctx *ctx,
struct vmxnet3_adapter *adapter)
static void
vmxnet3_prepare_tso(struct sk_buff *skb,
struct vmxnet3_tx_ctx *ctx)
static int
vmxnet3_tq_xmit(struct sk_buff *skb, struct vmxnet3_tx_queue *tq,
struct vmxnet3_adapter *adapter, struct net_device *netdev)
static netdev_tx_t
vmxnet3_xmit_frame(struct sk_buff *skb, struct net_device *netdev)
static void
vmxnet3_rx_csum(struct vmxnet3_adapter *adapter,
struct sk_buff *skb,
union Vmxnet3_GenericDesc *gdesc)
static void
vmxnet3_rx_error(struct vmxnet3_rx_queue *rq, struct Vmxnet3_RxCompDesc *rcd,
struct vmxnet3_rx_ctx *ctx,  struct vmxnet3_adapter *adapter)
static int
vmxnet3_rq_rx_complete(struct vmxnet3_rx_queue *rq,
struct vmxnet3_adapter *adapter, int quota)
static void
vmxnet3_rq_cleanup(struct vmxnet3_rx_queue *rq,
struct vmxnet3_adapter *adapter)
static void
vmxnet3_rq_cleanup_all(struct vmxnet3_adapter *adapter)
void vmxnet3_rq_destroy(struct vmxnet3_rx_queue *rq,
struct vmxnet3_adapter *adapter)
static int
vmxnet3_rq_init(struct vmxnet3_rx_queue *rq,
struct vmxnet3_adapter  *adapter)
static int
vmxnet3_rq_init_all(struct vmxnet3_adapter *adapter)
static int
vmxnet3_rq_create(struct vmxnet3_rx_queue *rq, struct vmxnet3_adapter *adapter)
static int
vmxnet3_rq_create_all(struct vmxnet3_adapter *adapter)
static int
vmxnet3_do_poll(struct vmxnet3_adapter *adapter, int budget)
static int
vmxnet3_poll(struct napi_struct *napi, int budget)
static int
vmxnet3_poll_rx_only(struct napi_struct *napi, int budget)
static irqreturn_t
vmxnet3_msix_tx(int irq, void *data)
static irqreturn_t
vmxnet3_msix_rx(int irq, void *data)
static irqreturn_t
vmxnet3_msix_event(int irq, void *data)
static irqreturn_t
vmxnet3_intr(int irq, void *dev_id)
static void
vmxnet3_netpoll(struct net_device *netdev)
static int
vmxnet3_request_irqs(struct vmxnet3_adapter *adapter)
static void
vmxnet3_free_irqs(struct vmxnet3_adapter *adapter)
static void
vmxnet3_vlan_rx_register(struct net_device *netdev, struct vlan_group *grp)
static void
vmxnet3_restore_vlan(struct vmxnet3_adapter *adapter)
static void
vmxnet3_vlan_rx_add_vid(struct net_device *netdev, u16 vid)
static void
vmxnet3_vlan_rx_kill_vid(struct net_device *netdev, u16 vid)
static u8 *
vmxnet3_copy_mc(struct net_device *netdev)
static void
vmxnet3_set_mc(struct net_device *netdev)
void
vmxnet3_rq_destroy_all(struct vmxnet3_adapter *adapter)
static void
vmxnet3_setup_driver_shared(struct vmxnet3_adapter *adapter)
int
vmxnet3_activate_dev(struct vmxnet3_adapter *adapter)
void
vmxnet3_reset_dev(struct vmxnet3_adapter *adapter)
int
vmxnet3_quiesce_dev(struct vmxnet3_adapter *adapter)
static void
vmxnet3_write_mac_addr(struct vmxnet3_adapter *adapter, u8 *mac)
static int
vmxnet3_set_mac_addr(struct net_device *netdev, void *p)
static int
vmxnet3_alloc_pci_resources(struct vmxnet3_adapter *adapter, bool *dma64)
static void
vmxnet3_free_pci_resources(struct vmxnet3_adapter *adapter)
static void
vmxnet3_adjust_rx_ring_size(struct vmxnet3_adapter *adapter)
int
vmxnet3_create_queues(struct vmxnet3_adapter *adapter, u32 tx_ring_size,
u32 rx_ring_size, u32 rx_ring2_size)
static int
vmxnet3_open(struct net_device *netdev)
static int
vmxnet3_close(struct net_device *netdev)
void
vmxnet3_force_close(struct vmxnet3_adapter *adapter)
static int
vmxnet3_change_mtu(struct net_device *netdev, int new_mtu)
static void
vmxnet3_declare_features(struct vmxnet3_adapter *adapter, bool dma64)
static void
vmxnet3_read_mac_addr(struct vmxnet3_adapter *adapter, u8 *mac)
static int
vmxnet3_acquire_msix_vectors(struct vmxnet3_adapter *adapter,
int vectors)
static void
vmxnet3_alloc_intr_resources(struct vmxnet3_adapter *adapter)
static void
vmxnet3_free_intr_resources(struct vmxnet3_adapter *adapter)
static void
vmxnet3_tx_timeout(struct net_device *netdev)
static void
vmxnet3_reset_work(struct work_struct *data)
static int __devinit
vmxnet3_probe_device(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit
vmxnet3_remove_device(struct pci_dev *pdev)
static int
vmxnet3_suspend(struct device *device)
static int
vmxnet3_resume(struct device *device)
static const struct dev_pm_ops vmxnet3_pm_ops = ;
static struct pci_driver vmxnet3_driver = ;
static int __init
vmxnet3_init_module(void)
module_init(vmxnet3_init_module);
static void
vmxnet3_exit_module(void)
module_exit(vmxnet3_exit_module);
MODULE_AUTHOR("VMware, Inc.");
MODULE_DESCRIPTION(VMXNET3_DRIVER_DESC);
MODULE_LICENSE("GPL v2");
MODULE_VERSION(VMXNET3_DRIVER_VERSION_STRING);
