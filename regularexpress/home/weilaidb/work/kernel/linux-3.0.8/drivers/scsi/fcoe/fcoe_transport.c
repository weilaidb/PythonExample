MODULE_AUTHOR("Open-FCoE.org");
MODULE_DESCRIPTION("FIP discovery protocol and FCoE transport for FCoE HBAs");
MODULE_LICENSE("GPL v2");
static int fcoe_transport_create(const char *, struct kernel_param *);
static int fcoe_transport_destroy(const char *, struct kernel_param *);
static int fcoe_transport_show(char *buffer, const struct kernel_param *kp);
static struct fcoe_transport *fcoe_transport_lookup(struct net_device *device);
static struct fcoe_transport *fcoe_netdev_map_lookup(struct net_device *device);
static int fcoe_transport_enable(const char *, struct kernel_param *);
static int fcoe_transport_disable(const char *, struct kernel_param *);
static int libfcoe_device_notification(struct notifier_block *notifier,
ulong event, void *ptr);
static LIST_HEAD(fcoe_transports);
static DEFINE_MUTEX(ft_mutex);
static LIST_HEAD(fcoe_netdevs);
static DEFINE_MUTEX(fn_mutex);
unsigned int libfcoe_debug_logging;
module_param_named(debug_logging, libfcoe_debug_logging, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(debug_logging, "a bit mask of logging levels");
module_param_call(show, NULL, fcoe_transport_show, NULL, S_IRUSR);
__MODULE_PARM_TYPE(show, "string");
MODULE_PARM_DESC(show, " Show attached FCoE transports");
module_param_call(create, fcoe_transport_create, NULL,
(void *)FIP_MODE_FABRIC, S_IWUSR);
__MODULE_PARM_TYPE(create, "string");
MODULE_PARM_DESC(create, " Creates fcoe instance on a ethernet interface");
module_param_call(create_vn2vn, fcoe_transport_create, NULL,
(void *)FIP_MODE_VN2VN, S_IWUSR);
__MODULE_PARM_TYPE(create_vn2vn, "string");
MODULE_PARM_DESC(create_vn2vn, " Creates a VN_node to VN_node FCoE instance "
"on an Ethernet interface");
module_param_call(destroy, fcoe_transport_destroy, NULL, NULL, S_IWUSR);
__MODULE_PARM_TYPE(destroy, "string");
MODULE_PARM_DESC(destroy, " Destroys fcoe instance on a ethernet interface");
module_param_call(enable, fcoe_transport_enable, NULL, NULL, S_IWUSR);
__MODULE_PARM_TYPE(enable, "string");
MODULE_PARM_DESC(enable, " Enables fcoe on a ethernet interface.");
module_param_call(disable, fcoe_transport_disable, NULL, NULL, S_IWUSR);
__MODULE_PARM_TYPE(disable, "string");
MODULE_PARM_DESC(disable, " Disables fcoe on a ethernet interface.");
static struct notifier_block libfcoe_notifier = ;
u32 fcoe_fc_crc(struct fc_frame *fp)
EXPORT_SYMBOL_GPL(fcoe_fc_crc);
int fcoe_start_io(struct sk_buff *skb)
EXPORT_SYMBOL_GPL(fcoe_start_io);
void fcoe_clean_pending_queue(struct fc_lport *lport)
EXPORT_SYMBOL_GPL(fcoe_clean_pending_queue);
void fcoe_check_wait_queue(struct fc_lport *lport, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(fcoe_check_wait_queue);
void fcoe_queue_timer(ulong lport)
EXPORT_SYMBOL_GPL(fcoe_queue_timer);
int fcoe_get_paged_crc_eof(struct sk_buff *skb, int tlen,
struct fcoe_percpu_s *fps)
EXPORT_SYMBOL_GPL(fcoe_get_paged_crc_eof);
static struct fcoe_transport *fcoe_transport_lookup(struct net_device *netdev)
int fcoe_transport_attach(struct fcoe_transport *ft)
EXPORT_SYMBOL(fcoe_transport_attach);
int fcoe_transport_detach(struct fcoe_transport *ft)
EXPORT_SYMBOL(fcoe_transport_detach);
static int fcoe_transport_show(char *buffer, const struct kernel_param *kp)
static int __init fcoe_transport_init(void)
static int __exit fcoe_transport_exit(void)
static int fcoe_add_netdev_mapping(struct net_device *netdev,
struct fcoe_transport *ft)
static void fcoe_del_netdev_mapping(struct net_device *netdev)
static struct fcoe_transport *fcoe_netdev_map_lookup(struct net_device *netdev)
static struct net_device *fcoe_if_to_netdev(const char *buffer)
static int libfcoe_device_notification(struct notifier_block *notifier,
ulong event, void *ptr)
static int fcoe_transport_create(const char *buffer, struct kernel_param *kp)
static int fcoe_transport_destroy(const char *buffer, struct kernel_param *kp)
static int fcoe_transport_disable(const char *buffer, struct kernel_param *kp)
static int fcoe_transport_enable(const char *buffer, struct kernel_param *kp)
static int __init libfcoe_init(void)
module_init(libfcoe_init);
static void __exit libfcoe_exit(void)
module_exit(libfcoe_exit);
