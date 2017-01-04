static struct i2c_board_info __initdata qnap_ts219_i2c_rtc = ;
static struct mv643xx_eth_platform_data qnap_ts219_ge00_data = ;
static struct mv_sata_platform_data qnap_ts219_sata_data = ;
static struct gpio_keys_button qnap_ts219_buttons[] = ;
static struct gpio_keys_platform_data qnap_ts219_button_data = ;
static struct platform_device qnap_ts219_button_device = ;
static unsigned int qnap_ts219_mpp_config[] __initdata = ;
static void __init qnap_ts219_init(void)
static int __init ts219_pci_init(void)
subsys_initcall(ts219_pci_init);
MACHINE_START(TS219, "QNAP TS-119/TS-219")
.boot_params	= 0x00000100,
.init_machine	= qnap_ts219_init,
.map_io		= kirkwood_map_io,
.init_early	= kirkwood_init_early,
.init_irq	= kirkwood_init_irq,
.timer		= &kirkwood_timer,
MACHINE_END
