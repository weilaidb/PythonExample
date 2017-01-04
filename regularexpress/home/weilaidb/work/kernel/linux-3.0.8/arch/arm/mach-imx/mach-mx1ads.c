static const int mx1ads_pins[] __initconst = ;
static const struct imxuart_platform_data uart0_pdata __initconst = ;
static const struct imxuart_platform_data uart1_pdata __initconst = ;
static struct physmap_flash_data mx1ads_flash_data = ;
static struct resource flash_resource = ;
static struct platform_device flash_device = ;
static struct pcf857x_platform_data pcf857x_data[] = ;
static const struct imxi2c_platform_data mx1ads_i2c_data __initconst = ;
static struct i2c_board_info mx1ads_i2c_devices[] = ;
static void __init mx1ads_init(void)
static void __init mx1ads_timer_init(void)
struct sys_timer mx1ads_timer = ;
MACHINE_START(MX1ADS, "Freescale MX1ADS")
.boot_params = MX1_PHYS_OFFSET + 0x100,
.map_io = mx1_map_io,
.init_early = imx1_init_early,
.init_irq = mx1_init_irq,
.timer = &mx1ads_timer,
.init_machine = mx1ads_init,
MACHINE_END
MACHINE_START(MXLADS, "Freescale MXLADS")
.boot_params = MX1_PHYS_OFFSET + 0x100,
.map_io = mx1_map_io,
.init_early = imx1_init_early,
.init_irq = mx1_init_irq,
.timer = &mx1ads_timer,
.init_machine = mx1ads_init,
MACHINE_END
