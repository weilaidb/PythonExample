#define FEC_EN		IMX_GPIO_NR(6, 23)
#define FEC_RESET_B	IMX_GPIO_NR(4, 12)
static iomux_v3_cfg_t mx50_rdp_pads[] __initdata = ;
static const struct imxuart_platform_data uart_pdata __initconst = ;
static const struct fec_platform_data fec_data __initconst = ;
static inline void mx50_rdp_fec_reset(void)
static const struct imxi2c_platform_data i2c_data __initconst = ;
static void __init mx50_rdp_board_init(void)
static void __init mx50_rdp_timer_init(void)
static struct sys_timer mx50_rdp_timer = ;
MACHINE_START(MX50_RDP, "Freescale MX50 Reference Design Platform")
.map_io = mx50_map_io,
.init_early = imx50_init_early,
.init_irq = mx50_init_irq,
.timer = &mx50_rdp_timer,
.init_machine = mx50_rdp_board_init,
MACHINE_END
