#define _VMXNET3_INT_H
# define VMXNET3_DRIVER_VERSION_REPORT VMXNET3_DRIVER_VERSION_STRING"-NAPI(debug)"
# define VMXNET3_DRIVER_VERSION_REPORT VMXNET3_DRIVER_VERSION_STRING"-NAPI"
#define VMXNET3_DRIVER_VERSION_STRING   "1.1.18.0-k"
#define VMXNET3_DRIVER_VERSION_NUM      0x01011200
#if defined(CONFIG_PCI_MSI)
#define VMXNET3_RSS
enum ;
#define PCI_VENDOR_ID_VMWARE            0x15AD
#define PCI_DEVICE_ID_VMWARE_VMXNET3    0x07B0
#define MAX_ETHERNET_CARDS		10
#define MAX_PCI_PASSTHRU_DEVICE		6
struct vmxnet3_cmd_ring ;
static inline void
vmxnet3_cmd_ring_adv_next2fill(struct vmxnet3_cmd_ring *ring)
static inline void
vmxnet3_cmd_ring_adv_next2comp(struct vmxnet3_cmd_ring *ring)
static inline int
vmxnet3_cmd_ring_desc_avail(struct vmxnet3_cmd_ring *ring)
struct vmxnet3_comp_ring ;
static inline void
vmxnet3_comp_ring_adv_next2proc(struct vmxnet3_comp_ring *ring)
struct vmxnet3_tx_data_ring ;
enum vmxnet3_buf_map_type ;
struct vmxnet3_tx_buf_info ;
struct vmxnet3_tq_driver_stats ;
struct vmxnet3_tx_ctx ;
struct vmxnet3_tx_queue  __attribute__((__aligned__(SMP_CACHE_BYTES)));
enum vmxnet3_rx_buf_type ;
struct vmxnet3_rx_buf_info ;
struct vmxnet3_rx_ctx ;
struct vmxnet3_rq_driver_stats ;
struct vmxnet3_rx_queue  __attribute__((__aligned__(SMP_CACHE_BYTES)));
#define VMXNET3_DEVICE_MAX_TX_QUEUES 8
#define VMXNET3_DEVICE_MAX_RX_QUEUES 8
#define VMXNET3_RSS_IND_TABLE_SIZE (VMXNET3_DEVICE_MAX_RX_QUEUES * 4)
#define VMXNET3_LINUX_MAX_MSIX_VECT     (VMXNET3_DEVICE_MAX_TX_QUEUES + \
VMXNET3_DEVICE_MAX_RX_QUEUES + 1)
#define VMXNET3_LINUX_MIN_MSIX_VECT     2
struct vmxnet3_intr ;
#define VMXNET3_INTR_BUDDYSHARE 0
#define VMXNET3_INTR_TXSHARE 1
#define VMXNET3_INTR_DONTSHARE 2
#define VMXNET3_STATE_BIT_RESETTING   0
#define VMXNET3_STATE_BIT_QUIESCED    1
struct vmxnet3_adapter ;
#define VMXNET3_WRITE_BAR0_REG(adapter, reg, val)  \
writel((val), (adapter)->hw_addr0 + (reg))
#define VMXNET3_READ_BAR0_REG(adapter, reg)        \
readl((adapter)->hw_addr0 + (reg))
#define VMXNET3_WRITE_BAR1_REG(adapter, reg, val)  \
writel((val), (adapter)->hw_addr1 + (reg))
#define VMXNET3_READ_BAR1_REG(adapter, reg)        \
readl((adapter)->hw_addr1 + (reg))
#define VMXNET3_WAKE_QUEUE_THRESHOLD(tq)  (5)
#define VMXNET3_RX_ALLOC_THRESHOLD(rq, ring_idx, adapter) \
((rq)->rx_ring[ring_idx].size >> 3)
#define VMXNET3_GET_ADDR_LO(dma)   ((u32)(dma))
#define VMXNET3_GET_ADDR_HI(dma)   ((u32)(((u64)(dma)) >> 32))
#define VMXNET3_DEF_TX_RING_SIZE    512
#define VMXNET3_DEF_RX_RING_SIZE    256
#define VMXNET3_MAX_ETH_HDR_SIZE    22
#define VMXNET3_MAX_SKB_BUF_SIZE    (3*1024)
int
vmxnet3_quiesce_dev(struct vmxnet3_adapter *adapter);
int
vmxnet3_activate_dev(struct vmxnet3_adapter *adapter);
void
vmxnet3_force_close(struct vmxnet3_adapter *adapter);
void
vmxnet3_reset_dev(struct vmxnet3_adapter *adapter);
void
vmxnet3_tq_destroy_all(struct vmxnet3_adapter *adapter);
void
vmxnet3_rq_destroy_all(struct vmxnet3_adapter *adapter);
int
vmxnet3_set_features(struct net_device *netdev, u32 features);
int
vmxnet3_create_queues(struct vmxnet3_adapter *adapter,
u32 tx_ring_size, u32 rx_ring_size, u32 rx_ring2_size);
extern void vmxnet3_set_ethtool_ops(struct net_device *netdev);
extern struct net_device_stats *vmxnet3_get_stats(struct net_device *netdev);
extern char vmxnet3_driver_name[];
