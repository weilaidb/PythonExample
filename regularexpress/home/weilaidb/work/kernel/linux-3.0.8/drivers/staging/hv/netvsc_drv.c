#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
struct net_device_context ;
#define PACKET_PAGES_LOWATER  8
#define PACKET_PAGES_HIWATER  (MAX_SKB_FRAGS + 2)
static int ring_size = 128;
module_param(ring_size, int, S_IRUGO);
MODULE_PARM_DESC(ring_size, "Ring buffer size (# of pages)");
static void netvsc_set_multicast_list(struct net_device *net)
static int netvsc_open(struct net_device *net)
static int netvsc_close(struct net_device *net)
static void netvsc_xmit_completion(void *context)
static int netvsc_start_xmit(struct sk_buff *skb, struct net_device *net)
void netvsc_linkstatus_callback(struct hv_device *device_obj,
unsigned int status)
int netvsc_recv_callback(struct hv_device *device_obj,
struct hv_netvsc_packet *packet)
static void netvsc_get_drvinfo(struct net_device *net,
struct ethtool_drvinfo *info)
static const struct ethtool_ops ethtool_ops = ;
static const struct net_device_ops device_ops = ;
static void netvsc_send_garp(struct work_struct *w)
static int netvsc_probe(struct hv_device *dev)
static int netvsc_remove(struct hv_device *dev)
static struct  hv_driver netvsc_drv = ;
static void __exit netvsc_drv_exit(void)
static const struct dmi_system_id __initconst
hv_netvsc_dmi_table[] __maybe_unused  = ;
MODULE_DEVICE_TABLE(dmi, hv_netvsc_dmi_table);
static int __init netvsc_drv_init(void)
static const struct pci_device_id __initconst
hv_netvsc_pci_table[] __maybe_unused = ;
MODULE_DEVICE_TABLE(pci, hv_netvsc_pci_table);
MODULE_LICENSE("GPL");
MODULE_VERSION(HV_DRV_VERSION);
MODULE_DESCRIPTION("Microsoft Hyper-V network driver");
module_init(netvsc_drv_init);
module_exit(netvsc_drv_exit);
