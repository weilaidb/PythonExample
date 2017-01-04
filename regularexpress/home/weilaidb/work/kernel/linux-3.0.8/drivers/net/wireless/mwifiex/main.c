#define VERSION	"1.0"
const char driver_version[] = "mwifiex " VERSION " (%s) ";
struct mwifiex_adapter *g_adapter;
EXPORT_SYMBOL_GPL(g_adapter);
static struct mwifiex_bss_attr mwifiex_bss_sta[] = ;
static int drv_mode = DRV_MODE_STA;
static char fw_name[32] = DEFAULT_FW_NAME;
static struct mwifiex_drv_mode mwifiex_drv_mode_tbl[] = ;
static int mwifiex_register(void *card, struct mwifiex_if_ops *if_ops,
struct mwifiex_drv_mode *drv_mode_ptr)
static int mwifiex_unregister(struct mwifiex_adapter *adapter)
int mwifiex_main_process(struct mwifiex_adapter *adapter)
static int
mwifiex_init_sw(void *card, struct mwifiex_if_ops *if_ops)
static void mwifiex_free_adapter(struct mwifiex_adapter *adapter)
static int mwifiex_init_hw_fw(struct mwifiex_adapter *adapter)
static void
mwifiex_fill_buffer(struct sk_buff *skb)
static int
mwifiex_open(struct net_device *dev)
static int
mwifiex_close(struct net_device *dev)
static int
mwifiex_hard_start_xmit(struct sk_buff *skb, struct net_device *dev)
static int
mwifiex_set_mac_address(struct net_device *dev, void *addr)
static void mwifiex_set_multicast_list(struct net_device *dev)
static void
mwifiex_tx_timeout(struct net_device *dev)
static struct net_device_stats *mwifiex_get_stats(struct net_device *dev)
static const struct net_device_ops mwifiex_netdev_ops = ;
static void
mwifiex_init_priv_params(struct mwifiex_private *priv, struct net_device *dev)
static struct mwifiex_private *mwifiex_add_interface(
struct mwifiex_adapter *adapter,
u8 bss_index, u8 bss_type)
static void
mwifiex_remove_interface(struct mwifiex_adapter *adapter, u8 bss_index)
int is_command_pending(struct mwifiex_adapter *adapter)
struct mwifiex_private *
mwifiex_bss_index_to_priv(struct mwifiex_adapter *adapter, u8 bss_index)
static void mwifiex_main_work_queue(struct work_struct *work)
static void
mwifiex_terminate_workqueue(struct mwifiex_adapter *adapter)
int
mwifiex_add_card(void *card, struct semaphore *sem,
struct mwifiex_if_ops *if_ops)
EXPORT_SYMBOL_GPL(mwifiex_add_card);
int mwifiex_remove_card(struct mwifiex_adapter *adapter, struct semaphore *sem)
EXPORT_SYMBOL_GPL(mwifiex_remove_card);
static int
mwifiex_init_module(void)
static void
mwifiex_cleanup_module(void)
module_init(mwifiex_init_module);
module_exit(mwifiex_cleanup_module);
MODULE_AUTHOR("Marvell International Ltd.");
MODULE_DESCRIPTION("Marvell WiFi-Ex Driver version " VERSION);
MODULE_VERSION(VERSION);
MODULE_LICENSE("GPL v2");
