#if defined(CONFIG_CAVIUM_OCTEON_NUM_PACKET_BUFFERS) \
&& CONFIG_CAVIUM_OCTEON_NUM_PACKET_BUFFERS
int num_packet_buffers = CONFIG_CAVIUM_OCTEON_NUM_PACKET_BUFFERS;
int num_packet_buffers = 1024;
module_param(num_packet_buffers, int, 0444);
MODULE_PARM_DESC(num_packet_buffers, "\n"
"\tNumber of packet buffers to allocate and store in the\n"
"\tFPA. By default, 1024 packet buffers are used unless\n"
"\tCONFIG_CAVIUM_OCTEON_NUM_PACKET_BUFFERS is defined.");
int pow_receive_group = 15;
module_param(pow_receive_group, int, 0444);
MODULE_PARM_DESC(pow_receive_group, "\n"
"\tPOW group to receive packets from. All ethernet hardware\n"
"\twill be configured to send incomming packets to this POW\n"
"\tgroup. Also any other software can submit packets to this\n"
"\tgroup for the kernel to process.");
int pow_send_group = -1;
module_param(pow_send_group, int, 0644);
MODULE_PARM_DESC(pow_send_group, "\n"
"\tPOW group to send packets to other software on. This\n"
"\tcontrols the creation of the virtual device pow0.\n"
"\talways_use_pow also depends on this value.");
int always_use_pow;
module_param(always_use_pow, int, 0444);
MODULE_PARM_DESC(always_use_pow, "\n"
"\tWhen set, always send to the pow group. This will cause\n"
"\tpackets sent to real ethernet devices to be sent to the\n"
"\tPOW group instead of the hardware. Unless some other\n"
"\tapplication changes the config, packets will still be\n"
"\treceived from the low level hardware. Use this option\n"
"\tto allow a CVMX app to intercept all packets from the\n"
"\tlinux kernel. You must specify pow_send_group along with\n"
"\tthis option.");
char pow_send_list[128] = "";
module_param_string(pow_send_list, pow_send_list, sizeof(pow_send_list), 0444);
MODULE_PARM_DESC(pow_send_list, "\n"
"\tComma separated list of ethernet devices that should use the\n"
"\tPOW for transmit instead of the actual ethernet hardware. This\n"
"\tis a per port version of always_use_pow. always_use_pow takes\n"
"\tprecedence over this list. For example, setting this to\n"
"\t\"eth2,spi3,spi7\" would cause these three devices to transmit\n"
"\tusing the pow_send_group.");
int max_rx_cpus = -1;
module_param(max_rx_cpus, int, 0444);
MODULE_PARM_DESC(max_rx_cpus, "\n"
"\t\tThe maximum number of CPUs to use for packet reception.\n"
"\t\tUse -1 to use all available CPUs.");
int rx_napi_weight = 32;
module_param(rx_napi_weight, int, 0444);
MODULE_PARM_DESC(rx_napi_weight, "The NAPI WEIGHT parameter.");
static unsigned int cvm_oct_mac_addr_offset;
struct workqueue_struct *cvm_oct_poll_queue;
atomic_t cvm_oct_poll_queue_stopping = ATOMIC_INIT(0);
struct net_device *cvm_oct_device[TOTAL_NUMBER_OF_PORTS];
u64 cvm_oct_tx_poll_interval;
static void cvm_oct_rx_refill_worker(struct work_struct *work);
static DECLARE_DELAYED_WORK(cvm_oct_rx_refill_work, cvm_oct_rx_refill_worker);
static void cvm_oct_rx_refill_worker(struct work_struct *work)
static void cvm_oct_periodic_worker(struct work_struct *work)
static __init void cvm_oct_configure_common_hw(void)
int cvm_oct_free_work(void *work_queue_entry)
EXPORT_SYMBOL(cvm_oct_free_work);
static struct net_device_stats *cvm_oct_common_get_stats(struct net_device *dev)
static int cvm_oct_common_change_mtu(struct net_device *dev, int new_mtu)
static void cvm_oct_common_set_multicast_list(struct net_device *dev)
static int cvm_oct_common_set_mac_address(struct net_device *dev, void *addr)
int cvm_oct_common_init(struct net_device *dev)
void cvm_oct_common_uninit(struct net_device *dev)
static const struct net_device_ops cvm_oct_npi_netdev_ops = ;
static const struct net_device_ops cvm_oct_xaui_netdev_ops = ;
static const struct net_device_ops cvm_oct_sgmii_netdev_ops = ;
static const struct net_device_ops cvm_oct_spi_netdev_ops = ;
static const struct net_device_ops cvm_oct_rgmii_netdev_ops = ;
static const struct net_device_ops cvm_oct_pow_netdev_ops = ;
extern void octeon_mdiobus_force_mod_depencency(void);
static int __init cvm_oct_init_module(void)
static void __exit cvm_oct_cleanup_module(void)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Cavium Networks <support@caviumnetworks.com>");
MODULE_DESCRIPTION("Cavium Networks Octeon ethernet driver.");
module_init(cvm_oct_init_module);
module_exit(cvm_oct_cleanup_module);
