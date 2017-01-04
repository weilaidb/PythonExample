static struct ab8500_gpio_platform_data ab8500_gpio_pdata = ;
static struct ab8500_platform_data ab8500_platdata = ;
static struct resource ab8500_resources[] = ;
struct platform_device ab8500_device = ;
static struct tps6105x_platform_data mop500_tps61052_data = ;
static void mop500_tc35892_init(struct tc3589x *tc3589x, unsigned int base)
static struct tc3589x_gpio_platform_data mop500_tc35892_gpio_data = ;
static struct tc3589x_platform_data mop500_tc35892_data = ;
static struct lp5521_led_config lp5521_pri_led[] = ;
static struct lp5521_platform_data __initdata lp5521_pri_data = ;
static struct lp5521_led_config lp5521_sec_led[] = ;
static struct lp5521_platform_data __initdata lp5521_sec_data = ;
static struct i2c_board_info __initdata mop500_i2c0_devices[] = ;
#define NUM_PRE_V60_I2C0_DEVICES 1
static struct i2c_board_info __initdata mop500_i2c2_devices[] = ;
#define U8500_I2C_CONTROLLER(id, _slsu, _tft, _rft, clk, t_out, _sm)	\
static struct nmk_i2c_controller u8500_i2c##id##_data =
U8500_I2C_CONTROLLER(0, 0xe, 1, 8, 100000, 200, I2C_FREQ_MODE_FAST);
U8500_I2C_CONTROLLER(1, 0xe, 1, 8, 100000, 200, I2C_FREQ_MODE_FAST);
U8500_I2C_CONTROLLER(2,	0xe, 1, 8, 100000, 200, I2C_FREQ_MODE_FAST);
U8500_I2C_CONTROLLER(3,	0xe, 1, 8, 100000, 200, I2C_FREQ_MODE_FAST);
static void __init mop500_i2c_init(void)
static struct gpio_keys_button mop500_gpio_keys[] = ;
static struct regulator *prox_regulator;
static int mop500_prox_activate(struct device *dev);
static void mop500_prox_deactivate(struct device *dev);
static struct gpio_keys_platform_data mop500_gpio_keys_data = ;
static struct platform_device mop500_gpio_keys_device = ;
static int mop500_prox_activate(struct device *dev)
static void mop500_prox_deactivate(struct device *dev)
static struct platform_device *platform_devs[] __initdata = ;
static struct stedma40_chan_cfg ssp0_dma_cfg_rx = ;
static struct stedma40_chan_cfg ssp0_dma_cfg_tx = ;
static struct pl022_ssp_controller ssp0_platform_data = ;
static void __init mop500_spi_init(void)
static struct stedma40_chan_cfg uart0_dma_cfg_rx = ;
static struct stedma40_chan_cfg uart0_dma_cfg_tx = ;
static struct stedma40_chan_cfg uart1_dma_cfg_rx = ;
static struct stedma40_chan_cfg uart1_dma_cfg_tx = ;
static struct stedma40_chan_cfg uart2_dma_cfg_rx = ;
static struct stedma40_chan_cfg uart2_dma_cfg_tx = ;
static pin_cfg_t mop500_pins_uart0[] = ;
#define PRCC_K_SOFTRST_SET      0x18
#define PRCC_K_SOFTRST_CLEAR    0x1C
static void ux500_uart0_reset(void)
static void ux500_uart0_init(void)
static void ux500_uart0_exit(void)
static struct amba_pl011_data uart0_plat = ;
static struct amba_pl011_data uart1_plat = ;
static struct amba_pl011_data uart2_plat = ;
static void __init mop500_uart_init(void)
static void __init mop500_init_machine(void)
MACHINE_START(U8500, "ST-Ericsson MOP500 platform")
.boot_params	= 0x100,
.map_io		= u8500_map_io,
.init_irq	= ux500_init_irq,
.timer		= &ux500_timer,
.init_machine	= mop500_init_machine,
MACHINE_END
MACHINE_START(HREFV60, "ST-Ericsson U8500 Platform HREFv60+")
.boot_params	= 0x100,
.map_io		= u8500_map_io,
.init_irq	= ux500_init_irq,
.timer		= &ux500_timer,
.init_machine	= mop500_init_machine,
MACHINE_END
