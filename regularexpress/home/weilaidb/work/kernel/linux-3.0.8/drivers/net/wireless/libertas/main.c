#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRIVER_RELEASE_VERSION "323.p0"
const char lbs_driver_version[] = "COMM-USB8388-" DRIVER_RELEASE_VERSION
"-dbg"
"";
unsigned int lbs_debug;
EXPORT_SYMBOL_GPL(lbs_debug);
module_param_named(libertas_debug, lbs_debug, int, 0644);
unsigned int lbs_disablemesh;
EXPORT_SYMBOL_GPL(lbs_disablemesh);
module_param_named(libertas_disablemesh, lbs_disablemesh, int, 0644);
struct cmd_confirm_sleep confirm_sleep;
u16 lbs_region_code_to_index[MRVDRV_MAX_REGION_CODE] =
;
static u8 fw_data_rates[MAX_RATES] =
;
u32 lbs_fw_index_to_data_rate(u8 idx)
u8 lbs_data_rate_to_fw_index(u32 rate)
static int lbs_dev_open(struct net_device *dev)
static int lbs_eth_stop(struct net_device *dev)
void lbs_host_to_card_done(struct lbs_private *priv)
EXPORT_SYMBOL_GPL(lbs_host_to_card_done);
int lbs_set_mac_address(struct net_device *dev, void *addr)
static inline int mac_in_list(unsigned char *list, int list_len,
unsigned char *mac)
static int lbs_add_mcast_addrs(struct cmd_ds_mac_multicast_adr *cmd,
struct net_device *dev, int nr_addrs)
static void lbs_set_mcast_worker(struct work_struct *work)
void lbs_set_multicast_list(struct net_device *dev)
static int lbs_thread(void *data)
static int lbs_setup_firmware(struct lbs_private *priv)
int lbs_suspend(struct lbs_private *priv)
EXPORT_SYMBOL_GPL(lbs_suspend);
int lbs_resume(struct lbs_private *priv)
EXPORT_SYMBOL_GPL(lbs_resume);
static void lbs_cmd_timeout_handler(unsigned long data)
static void auto_deepsleep_timer_fn(unsigned long data)
int lbs_enter_auto_deep_sleep(struct lbs_private *priv)
int lbs_exit_auto_deep_sleep(struct lbs_private *priv)
static int lbs_init_adapter(struct lbs_private *priv)
static void lbs_free_adapter(struct lbs_private *priv)
static const struct net_device_ops lbs_netdev_ops = ;
struct lbs_private *lbs_add_card(void *card, struct device *dmdev)
EXPORT_SYMBOL_GPL(lbs_add_card);
void lbs_remove_card(struct lbs_private *priv)
EXPORT_SYMBOL_GPL(lbs_remove_card);
int lbs_rtap_supported(struct lbs_private *priv)
int lbs_start_card(struct lbs_private *priv)
EXPORT_SYMBOL_GPL(lbs_start_card);
void lbs_stop_card(struct lbs_private *priv)
EXPORT_SYMBOL_GPL(lbs_stop_card);
void lbs_queue_event(struct lbs_private *priv, u32 event)
EXPORT_SYMBOL_GPL(lbs_queue_event);
void lbs_notify_command_response(struct lbs_private *priv, u8 resp_idx)
EXPORT_SYMBOL_GPL(lbs_notify_command_response);
int lbs_get_firmware(struct device *dev, const char *user_helper,
const char *user_mainfw, u32 card_model,
const struct lbs_fw_table *fw_table,
const struct firmware **helper,
const struct firmware **mainfw)
EXPORT_SYMBOL_GPL(lbs_get_firmware);
static int __init lbs_init_module(void)
static void __exit lbs_exit_module(void)
module_init(lbs_init_module);
module_exit(lbs_exit_module);
MODULE_DESCRIPTION("Libertas WLAN Driver Library");
MODULE_AUTHOR("Marvell International Ltd.");
MODULE_LICENSE("GPL");
