static irqreturn_t ibmveth_interrupt(int irq, void *dev_instance);
static void ibmveth_rxq_harvest_buffer(struct ibmveth_adapter *adapter);
static unsigned long ibmveth_get_desired_dma(struct vio_dev *vdev);
static struct kobj_type ktype_veth_pool;
static const char ibmveth_driver_name[] = "ibmveth";
static const char ibmveth_driver_string[] = "IBM Power Virtual Ethernet Driver";
#define ibmveth_driver_version "1.04"
MODULE_AUTHOR("Santiago Leon <santil@linux.vnet.ibm.com>");
MODULE_DESCRIPTION("IBM Power Virtual Ethernet Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(ibmveth_driver_version);
static unsigned int tx_copybreak __read_mostly = 128;
module_param(tx_copybreak, uint, 0644);
MODULE_PARM_DESC(tx_copybreak,
"Maximum size of packet that is copied to a new buffer on transmit");
static unsigned int rx_copybreak __read_mostly = 128;
module_param(rx_copybreak, uint, 0644);
MODULE_PARM_DESC(rx_copybreak,
"Maximum size of packet that is copied to a new buffer on receive");
static unsigned int rx_flush __read_mostly = 0;
module_param(rx_flush, uint, 0644);
MODULE_PARM_DESC(rx_flush, "Flush receive buffers before use");
struct ibmveth_stat ;
#define IBMVETH_STAT_OFF(stat) offsetof(struct ibmveth_adapter, stat)
#define IBMVETH_GET_STAT(a, off) *((u64 *)(((unsigned long)(a)) + off))
struct ibmveth_stat ibmveth_stats[] = ;
static inline u32 ibmveth_rxq_flags(struct ibmveth_adapter *adapter)
static inline int ibmveth_rxq_toggle(struct ibmveth_adapter *adapter)
static inline int ibmveth_rxq_pending_buffer(struct ibmveth_adapter *adapter)
static inline int ibmveth_rxq_buffer_valid(struct ibmveth_adapter *adapter)
static inline int ibmveth_rxq_frame_offset(struct ibmveth_adapter *adapter)
static inline int ibmveth_rxq_frame_length(struct ibmveth_adapter *adapter)
static inline int ibmveth_rxq_csum_good(struct ibmveth_adapter *adapter)
static void ibmveth_init_buffer_pool(struct ibmveth_buff_pool *pool,
u32 pool_index, u32 pool_size,
u32 buff_size, u32 pool_active)
static int ibmveth_alloc_buffer_pool(struct ibmveth_buff_pool *pool)
static inline void ibmveth_flush_buffer(void *addr, unsigned long length)
static void ibmveth_replenish_buffer_pool(struct ibmveth_adapter *adapter,
struct ibmveth_buff_pool *pool)
static void ibmveth_replenish_task(struct ibmveth_adapter *adapter)
static void ibmveth_free_buffer_pool(struct ibmveth_adapter *adapter,
struct ibmveth_buff_pool *pool)
static void ibmveth_remove_buffer_from_pool(struct ibmveth_adapter *adapter,
u64 correlator)
static inline struct sk_buff *ibmveth_rxq_get_buffer(struct ibmveth_adapter *adapter)
static int ibmveth_rxq_recycle_buffer(struct ibmveth_adapter *adapter)
static void ibmveth_rxq_harvest_buffer(struct ibmveth_adapter *adapter)
static void ibmveth_cleanup(struct ibmveth_adapter *adapter)
static int ibmveth_register_logical_lan(struct ibmveth_adapter *adapter,
union ibmveth_buf_desc rxq_desc, u64 mac_address)
static int ibmveth_open(struct net_device *netdev)
static int ibmveth_close(struct net_device *netdev)
static int netdev_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static void netdev_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static u32 ibmveth_fix_features(struct net_device *dev, u32 features)
static int ibmveth_set_csum_offload(struct net_device *dev, u32 data)
static int ibmveth_set_features(struct net_device *dev, u32 features)
static void ibmveth_get_strings(struct net_device *dev, u32 stringset, u8 *data)
static int ibmveth_get_sset_count(struct net_device *dev, int sset)
static void ibmveth_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *stats, u64 *data)
static const struct ethtool_ops netdev_ethtool_ops = ;
static int ibmveth_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
#define page_offset(v) ((unsigned long)(v) & ((1 << 12) - 1))
static int ibmveth_send(struct ibmveth_adapter *adapter,
union ibmveth_buf_desc *descs)
static netdev_tx_t ibmveth_start_xmit(struct sk_buff *skb,
struct net_device *netdev)
static int ibmveth_poll(struct napi_struct *napi, int budget)
static irqreturn_t ibmveth_interrupt(int irq, void *dev_instance)
static void ibmveth_set_multicast_list(struct net_device *netdev)
static int ibmveth_change_mtu(struct net_device *dev, int new_mtu)
static void ibmveth_poll_controller(struct net_device *dev)
static unsigned long ibmveth_get_desired_dma(struct vio_dev *vdev)
static const struct net_device_ops ibmveth_netdev_ops = ;
static int __devinit ibmveth_probe(struct vio_dev *dev,
const struct vio_device_id *id)
static int __devexit ibmveth_remove(struct vio_dev *dev)
static struct attribute veth_active_attr;
static struct attribute veth_num_attr;
static struct attribute veth_size_attr;
static ssize_t veth_pool_show(struct kobject *kobj,
struct attribute *attr, char *buf)
static ssize_t veth_pool_store(struct kobject *kobj, struct attribute *attr,
const char *buf, size_t count)
#define ATTR(_name, _mode)				\
struct attribute veth_##_name##_attr = ;
static ATTR(active, 0644);
static ATTR(num, 0644);
static ATTR(size, 0644);
static struct attribute *veth_pool_attrs[] = ;
static const struct sysfs_ops veth_pool_ops = ;
static struct kobj_type ktype_veth_pool = ;
static int ibmveth_resume(struct device *dev)
static struct vio_device_id ibmveth_device_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(vio, ibmveth_device_table);
static struct dev_pm_ops ibmveth_pm_ops = ;
static struct vio_driver ibmveth_driver = ;
static int __init ibmveth_module_init(void)
static void __exit ibmveth_module_exit(void)
module_init(ibmveth_module_init);
module_exit(ibmveth_module_exit);
