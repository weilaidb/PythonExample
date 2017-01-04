#define QNAP_TS41X_JUMPER_JP1	45
static struct i2c_board_info __initdata qnap_ts41x_i2c_rtc = ;
static struct mv643xx_eth_platform_data qnap_ts41x_ge00_data = ;
static struct mv643xx_eth_platform_data qnap_ts41x_ge01_data = ;
static struct mv_sata_platform_data qnap_ts41x_sata_data = ;
static struct gpio_keys_button qnap_ts41x_buttons[] = ;
static struct gpio_keys_platform_data qnap_ts41x_button_data = ;
static struct platform_device qnap_ts41x_button_device = ;
static unsigned int qnap_ts41x_mpp_config[] __initdata = ;
static void __init qnap_ts41x_init(void)
static int __init ts41x_pci_init(void)
subsys_initcall(ts41x_pci_init);
MACHINE_START(TS41X, "QNAP TS-41x")
.boot_params	= 0x00000100,
.init_machine	= qnap_ts41x_init,
.map_io		= kirkwood_map_io,
.init_early	= kirkwood_init_early,
.init_irq	= kirkwood_init_irq,
.timer		= &kirkwood_timer,
MACHINE_END
