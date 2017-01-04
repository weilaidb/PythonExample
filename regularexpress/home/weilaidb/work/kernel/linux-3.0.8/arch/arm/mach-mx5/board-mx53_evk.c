#define MX53_EVK_FEC_PHY_RST	IMX_GPIO_NR(7, 6)
#define EVK_ECSPI1_CS0		IMX_GPIO_NR(2, 30)
#define EVK_ECSPI1_CS1		IMX_GPIO_NR(3, 19)
static iomux_v3_cfg_t mx53_evk_pads[] = ;
static const struct imxuart_platform_data mx53_evk_uart_pdata __initconst = ;
static inline void mx53_evk_init_uart(void)
static const struct imxi2c_platform_data mx53_evk_i2c_data __initconst = ;
static inline void mx53_evk_fec_reset(void)
static struct fec_platform_data mx53_evk_fec_pdata = ;
static struct spi_board_info mx53_evk_spi_board_info[] __initdata = ;
static int mx53_evk_spi_cs[] = ;
static const struct spi_imx_master mx53_evk_spi_data __initconst = ;
static void __init mx53_evk_board_init(void)
static void __init mx53_evk_timer_init(void)
static struct sys_timer mx53_evk_timer = ;
MACHINE_START(MX53_EVK, "Freescale MX53 EVK Board")
.map_io = mx53_map_io,
.init_early = imx53_init_early,
.init_irq = mx53_init_irq,
.timer = &mx53_evk_timer,
.init_machine = mx53_evk_board_init,
MACHINE_END
