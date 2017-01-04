static const int mxt_td60_pins[] __initconst = ;
static const struct mxc_nand_platform_data
mxt_td60_nand_board_info __initconst = ;
static const struct imxi2c_platform_data mxt_td60_i2c0_data __initconst = ;
static int mxt_td60_pca9557_setup(struct i2c_client *client,
unsigned gpio_base, unsigned ngpio,
void *context)
static struct pca953x_platform_data mxt_td60_pca9557_pdata = ;
static struct i2c_board_info mxt_td60_i2c_devices[] = ;
static const struct imxi2c_platform_data mxt_td60_i2c1_data __initconst = ;
static struct i2c_board_info mxt_td60_i2c2_devices[] = ;
static struct imx_fb_videomode mxt_td60_modes[] = ;
static const struct imx_fb_platform_data mxt_td60_fb_data __initconst = ;
static int mxt_td60_sdhc1_init(struct device *dev, irq_handler_t detect_irq,
void *data)
static void mxt_td60_sdhc1_exit(struct device *dev, void *data)
static const struct imxmmc_platform_data sdhc1_pdata __initconst = ;
static const struct imxuart_platform_data uart_pdata __initconst = ;
static void __init mxt_td60_board_init(void)
static void __init mxt_td60_timer_init(void)
static struct sys_timer mxt_td60_timer = ;
MACHINE_START(MXT_TD60, "Maxtrack i-MXT TD60")
.boot_params = MX27_PHYS_OFFSET + 0x100,
.map_io = mx27_map_io,
.init_early = imx27_init_early,
.init_irq = mx27_init_irq,
.timer = &mxt_td60_timer,
.init_machine = mxt_td60_board_init,
MACHINE_END
