#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
struct if_spi_packet ;
struct if_spi_card ;
static void free_if_spi_card(struct if_spi_card *card)
#define MODEL_8385	0x04
#define MODEL_8686	0x0b
#define MODEL_8688	0x10
static const struct lbs_fw_table fw_table[] = ;
MODULE_FIRMWARE("libertas/gspi8385_helper.bin");
MODULE_FIRMWARE("libertas/gspi8385_hlp.bin");
MODULE_FIRMWARE("libertas/gspi8385.bin");
MODULE_FIRMWARE("libertas/gspi8686_v9_helper.bin");
MODULE_FIRMWARE("libertas/gspi8686_v9.bin");
MODULE_FIRMWARE("libertas/gspi8686_hlp.bin");
MODULE_FIRMWARE("libertas/gspi8686.bin");
MODULE_FIRMWARE("libertas/gspi8688_helper.bin");
MODULE_FIRMWARE("libertas/gspi8688.bin");
static void spu_transaction_init(struct if_spi_card *card)
static void spu_transaction_finish(struct if_spi_card *card)
static int spu_write(struct if_spi_card *card, u16 reg, const u8 *buf, int len)
static inline int spu_write_u16(struct if_spi_card *card, u16 reg, u16 val)
static inline int spu_reg_is_port_reg(u16 reg)
static int spu_read(struct if_spi_card *card, u16 reg, u8 *buf, int len)
static inline int spu_read_u16(struct if_spi_card *card, u16 reg, u16 *val)
static int spu_read_u32(struct if_spi_card *card, u16 reg, u32 *val)
static int spu_wait_for_u16(struct if_spi_card *card, u16 reg,
u16 target_mask, u16 target)
static int spu_wait_for_u32(struct if_spi_card *card, u32 reg, u32 target)
static int spu_set_interrupt_mode(struct if_spi_card *card,
int suppress_host_int,
int auto_int)
static int spu_get_chip_revision(struct if_spi_card *card,
u16 *card_id, u8 *card_rev)
static int spu_set_bus_mode(struct if_spi_card *card, u16 mode)
static int spu_init(struct if_spi_card *card, int use_dummy_writes)
static int if_spi_prog_helper_firmware(struct if_spi_card *card,
const struct firmware *firmware)
static int if_spi_prog_main_firmware_check_len(struct if_spi_card *card,
int *crc_err)
static int if_spi_prog_main_firmware(struct if_spi_card *card,
const struct firmware *firmware)
static int if_spi_c2h_cmd(struct if_spi_card *card)
static int if_spi_c2h_data(struct if_spi_card *card)
static void if_spi_h2c(struct if_spi_card *card,
struct if_spi_packet *packet, int type)
static void if_spi_e2h(struct if_spi_card *card)
static void if_spi_host_to_card_worker(struct work_struct *work)
static int if_spi_host_to_card(struct lbs_private *priv,
u8 type, u8 *buf, u16 nb)
static irqreturn_t if_spi_host_interrupt(int irq, void *dev_id)
static int if_spi_init_card(struct if_spi_card *card)
static void if_spi_resume_worker(struct work_struct *work)
static int __devinit if_spi_probe(struct spi_device *spi)
static int __devexit libertas_spi_remove(struct spi_device *spi)
static int if_spi_suspend(struct device *dev)
static int if_spi_resume(struct device *dev)
static const struct dev_pm_ops if_spi_pm_ops = ;
static struct spi_driver libertas_spi_driver = ;
static int __init if_spi_init_module(void)
static void __exit if_spi_exit_module(void)
module_init(if_spi_init_module);
module_exit(if_spi_exit_module);
MODULE_DESCRIPTION("Libertas SPI WLAN Driver");
MODULE_AUTHOR("Andrey Yurovsky <andrey@cozybit.com>, "
"Colin McCabe <colin@cozybit.com>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("spi:libertas_spi");
