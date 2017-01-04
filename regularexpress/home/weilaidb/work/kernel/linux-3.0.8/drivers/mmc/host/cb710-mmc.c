static const u8 cb710_clock_divider_log2[8] = ;
#define CB710_MAX_DIVIDER_IDX	\
(ARRAY_SIZE(cb710_clock_divider_log2) - 1)
static const u8 cb710_src_freq_mhz[16] = ;
static void cb710_mmc_select_clock_divider(struct mmc_host *mmc, int hz)
static void __cb710_mmc_enable_irq(struct cb710_slot *slot,
unsigned short enable, unsigned short mask)
static void cb710_mmc_enable_irq(struct cb710_slot *slot,
unsigned short enable, unsigned short mask)
static void cb710_mmc_reset_events(struct cb710_slot *slot)
static void cb710_mmc_enable_4bit_data(struct cb710_slot *slot, int enable)
static int cb710_check_event(struct cb710_slot *slot, u8 what)
static int cb710_wait_for_event(struct cb710_slot *slot, u8 what)
static int cb710_wait_while_busy(struct cb710_slot *slot, uint8_t mask)
static void cb710_mmc_set_transfer_size(struct cb710_slot *slot,
size_t count, size_t blocksize)
static void cb710_mmc_fifo_hack(struct cb710_slot *slot)
static int cb710_mmc_receive_pio(struct cb710_slot *slot,
struct sg_mapping_iter *miter, size_t dw_count)
static bool cb710_is_transfer_size_supported(struct mmc_data *data)
static int cb710_mmc_receive(struct cb710_slot *slot, struct mmc_data *data)
static int cb710_mmc_send(struct cb710_slot *slot, struct mmc_data *data)
static u16 cb710_encode_cmd_flags(struct cb710_mmc_reader *reader,
struct mmc_command *cmd)
static void cb710_receive_response(struct cb710_slot *slot,
struct mmc_command *cmd)
static int cb710_mmc_transfer_data(struct cb710_slot *slot,
struct mmc_data *data)
static int cb710_mmc_command(struct mmc_host *mmc, struct mmc_command *cmd)
static void cb710_mmc_request(struct mmc_host *mmc, struct mmc_request *mrq)
static int cb710_mmc_powerup(struct cb710_slot *slot)
static void cb710_mmc_powerdown(struct cb710_slot *slot)
static void cb710_mmc_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static int cb710_mmc_get_ro(struct mmc_host *mmc)
static int cb710_mmc_get_cd(struct mmc_host *mmc)
static int cb710_mmc_irq_handler(struct cb710_slot *slot)
static void cb710_mmc_finish_request_tasklet(unsigned long data)
static const struct mmc_host_ops cb710_mmc_host = ;
static int cb710_mmc_suspend(struct platform_device *pdev, pm_message_t state)
static int cb710_mmc_resume(struct platform_device *pdev)
static int __devinit cb710_mmc_init(struct platform_device *pdev)
static int __devexit cb710_mmc_exit(struct platform_device *pdev)
static struct platform_driver cb710_mmc_driver = ;
static int __init cb710_mmc_init_module(void)
static void __exit cb710_mmc_cleanup_module(void)
module_init(cb710_mmc_init_module);
module_exit(cb710_mmc_cleanup_module);
MODULE_AUTHOR("Michał Mirosław <mirq-linux@rere.qmqm.pl>");
MODULE_DESCRIPTION("ENE CB710 memory card reader driver - MMC/SD part");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:cb710-mmc");
