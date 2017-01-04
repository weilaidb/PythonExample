#define MX53_LOCO_POWER			IMX_GPIO_NR(1, 8)
#define MX53_LOCO_UI1			IMX_GPIO_NR(2, 14)
#define MX53_LOCO_UI2			IMX_GPIO_NR(2, 15)
#define LOCO_FEC_PHY_RST		IMX_GPIO_NR(7, 6)
static iomux_v3_cfg_t mx53_loco_pads[] = ;
#define GPIO_BUTTON(gpio_num, ev_code, act_low, descr, wake)	\
static struct gpio_keys_button loco_buttons[] = ;
static const struct gpio_keys_platform_data loco_button_data __initconst = ;
static inline void mx53_loco_fec_reset(void)
static struct fec_platform_data mx53_loco_fec_data = ;
static const struct imxi2c_platform_data mx53_loco_i2c_data __initconst = ;
static void __init mx53_loco_board_init(void)
static void __init mx53_loco_timer_init(void)
static struct sys_timer mx53_loco_timer = ;
MACHINE_START(MX53_LOCO, "Freescale MX53 LOCO Board")
.map_io = mx53_map_io,
.init_early = imx53_init_early,
.init_irq = mx53_init_irq,
.timer = &mx53_loco_timer,
.init_machine = mx53_loco_board_init,
MACHINE_END
