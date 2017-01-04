#define TX28_STK5_GPIO_LED		MXS_GPIO_NR(4, 10)
static const iomux_cfg_t tx28_stk5v3_pads[] __initconst = ;
static struct gpio_led tx28_stk5v3_leds[] = ;
static const struct gpio_led_platform_data tx28_stk5v3_led_data __initconst = ;
static struct spi_board_info tx28_spi_board_info[] = ;
static struct i2c_board_info tx28_stk5v3_i2c_boardinfo[] __initdata = ;
static void __init tx28_stk5v3_init(void)
static void __init tx28_timer_init(void)
static struct sys_timer tx28_timer = ;
MACHINE_START(TX28, "Ka-Ro electronics TX28 module")
.map_io = mx28_map_io,
.init_irq = mx28_init_irq,
.init_machine = tx28_stk5v3_init,
.timer = &tx28_timer,
MACHINE_END
