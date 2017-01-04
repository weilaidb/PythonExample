#define VERSION "1.0"
static u8 user_rmmod;
static u8 sdio_ireg;
static const struct btmrvl_sdio_card_reg btmrvl_reg_8688 = ;
static const struct btmrvl_sdio_card_reg btmrvl_reg_8787 = ;
static const struct btmrvl_sdio_device btmrvl_sdio_sd6888 = ;
static const struct btmrvl_sdio_device btmrvl_sdio_sd8787 = ;
static const struct sdio_device_id btmrvl_sdio_ids[] = ;
MODULE_DEVICE_TABLE(sdio, btmrvl_sdio_ids);
static int btmrvl_sdio_get_rx_unit(struct btmrvl_sdio_card *card)
static int btmrvl_sdio_read_fw_status(struct btmrvl_sdio_card *card, u16 *dat)
static int btmrvl_sdio_read_rx_len(struct btmrvl_sdio_card *card, u16 *dat)
static int btmrvl_sdio_enable_host_int_mask(struct btmrvl_sdio_card *card,
u8 mask)
static int btmrvl_sdio_disable_host_int_mask(struct btmrvl_sdio_card *card,
u8 mask)
static int btmrvl_sdio_poll_card_status(struct btmrvl_sdio_card *card, u8 bits)
static int btmrvl_sdio_verify_fw_download(struct btmrvl_sdio_card *card,
int pollnum)
static int btmrvl_sdio_download_helper(struct btmrvl_sdio_card *card)
static int btmrvl_sdio_download_fw_w_helper(struct btmrvl_sdio_card *card)
static int btmrvl_sdio_card_to_host(struct btmrvl_private *priv)
static int btmrvl_sdio_process_int_status(struct btmrvl_private *priv)
static void btmrvl_sdio_interrupt(struct sdio_func *func)
static int btmrvl_sdio_register_dev(struct btmrvl_sdio_card *card)
static int btmrvl_sdio_unregister_dev(struct btmrvl_sdio_card *card)
static int btmrvl_sdio_enable_host_int(struct btmrvl_sdio_card *card)
static int btmrvl_sdio_disable_host_int(struct btmrvl_sdio_card *card)
static int btmrvl_sdio_host_to_card(struct btmrvl_private *priv,
u8 *payload, u16 nb)
static int btmrvl_sdio_download_fw(struct btmrvl_sdio_card *card)
static int btmrvl_sdio_wakeup_fw(struct btmrvl_private *priv)
static int btmrvl_sdio_probe(struct sdio_func *func,
const struct sdio_device_id *id)
static void btmrvl_sdio_remove(struct sdio_func *func)
static struct sdio_driver bt_mrvl_sdio = ;
static int __init btmrvl_sdio_init_module(void)
static void __exit btmrvl_sdio_exit_module(void)
module_init(btmrvl_sdio_init_module);
module_exit(btmrvl_sdio_exit_module);
MODULE_AUTHOR("Marvell International Ltd.");
MODULE_DESCRIPTION("Marvell BT-over-SDIO driver ver " VERSION);
MODULE_VERSION(VERSION);
MODULE_LICENSE("GPL v2");
MODULE_FIRMWARE("sd8688_helper.bin");
MODULE_FIRMWARE("sd8688.bin");
MODULE_FIRMWARE("mrvl/sd8787_uapsta.bin");
