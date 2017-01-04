#define SMD_FEC_PHY_RST		IMX_GPIO_NR(7, 6)
static iomux_v3_cfg_t mx53_smd_pads[] = ;
static const struct imxuart_platform_data mx53_smd_uart_data __initconst = ;
static inline void mx53_smd_init_uart(void)
static inline void mx53_smd_fec_reset(void)
static struct fec_platform_data mx53_smd_fec_data = ;
static const struct imxi2c_platform_data mx53_smd_i2c_data __initconst = ;
static void __init mx53_smd_board_init(void)
static void __init mx53_smd_timer_init(void)
static struct sys_timer mx53_smd_timer = ;
MACHINE_START(MX53_SMD, "Freescale MX53 SMD Board")
.map_io = mx53_map_io,
.init_early = imx53_init_early,
.init_irq = mx53_init_irq,
.timer = &mx53_smd_timer,
.init_machine = mx53_smd_board_init,
MACHINE_END
