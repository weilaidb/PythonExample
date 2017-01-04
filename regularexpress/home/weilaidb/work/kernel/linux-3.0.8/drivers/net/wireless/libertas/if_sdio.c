#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static u8 user_rmmod;
static char *lbs_helper_name = NULL;
module_param_named(helper_name, lbs_helper_name, charp, 0644);
static char *lbs_fw_name = NULL;
module_param_named(fw_name, lbs_fw_name, charp, 0644);
static const struct sdio_device_id if_sdio_ids[] = ;
MODULE_DEVICE_TABLE(sdio, if_sdio_ids);
#define MODEL_8385	0x04
#define MODEL_8686	0x0b
#define MODEL_8688	0x10
static const struct lbs_fw_table fw_table[] = ;
MODULE_FIRMWARE("libertas/sd8385_helper.bin");
MODULE_FIRMWARE("libertas/sd8385.bin");
MODULE_FIRMWARE("sd8385_helper.bin");
MODULE_FIRMWARE("sd8385.bin");
MODULE_FIRMWARE("libertas/sd8686_v9_helper.bin");
MODULE_FIRMWARE("libertas/sd8686_v9.bin");
MODULE_FIRMWARE("libertas/sd8686_v8_helper.bin");
MODULE_FIRMWARE("libertas/sd8686_v8.bin");
MODULE_FIRMWARE("sd8686_helper.bin");
MODULE_FIRMWARE("sd8686.bin");
MODULE_FIRMWARE("libertas/sd8688_helper.bin");
MODULE_FIRMWARE("libertas/sd8688.bin");
MODULE_FIRMWARE("sd8688_helper.bin");
MODULE_FIRMWARE("sd8688.bin");
struct if_sdio_packet ;
struct if_sdio_card ;
static u16 if_sdio_read_scratch(struct if_sdio_card *card, int *err)
static u8 if_sdio_read_rx_unit(struct if_sdio_card *card)
static u16 if_sdio_read_rx_len(struct if_sdio_card *card, int *err)
static int if_sdio_handle_cmd(struct if_sdio_card *card,
u8 *buffer, unsigned size)
static int if_sdio_handle_data(struct if_sdio_card *card,
u8 *buffer, unsigned size)
static int if_sdio_handle_event(struct if_sdio_card *card,
u8 *buffer, unsigned size)
static int if_sdio_wait_status(struct if_sdio_card *card, const u8 condition)
static int if_sdio_card_to_host(struct if_sdio_card *card)
static void if_sdio_host_to_card_worker(struct work_struct *work)
#define FW_DL_READY_STATUS (IF_SDIO_IO_RDY | IF_SDIO_DL_RDY)
static int if_sdio_prog_helper(struct if_sdio_card *card,
const struct firmware *fw)
static int if_sdio_prog_real(struct if_sdio_card *card,
const struct firmware *fw)
static int if_sdio_prog_firmware(struct if_sdio_card *card)
static int if_sdio_host_to_card(struct lbs_private *priv,
u8 type, u8 *buf, u16 nb)
static int if_sdio_enter_deep_sleep(struct lbs_private *priv)
static int if_sdio_exit_deep_sleep(struct lbs_private *priv)
static int if_sdio_reset_deep_sleep_wakeup(struct lbs_private *priv)
static void if_sdio_interrupt(struct sdio_func *func)
static int if_sdio_probe(struct sdio_func *func,
const struct sdio_device_id *id)
static void if_sdio_remove(struct sdio_func *func)
static int if_sdio_suspend(struct device *dev)
static int if_sdio_resume(struct device *dev)
static const struct dev_pm_ops if_sdio_pm_ops = ;
static struct sdio_driver if_sdio_driver = ;
static int __init if_sdio_init_module(void)
static void __exit if_sdio_exit_module(void)
module_init(if_sdio_init_module);
module_exit(if_sdio_exit_module);
MODULE_DESCRIPTION("Libertas SDIO WLAN Driver");
MODULE_AUTHOR("Pierre Ossman");
MODULE_LICENSE("GPL");
