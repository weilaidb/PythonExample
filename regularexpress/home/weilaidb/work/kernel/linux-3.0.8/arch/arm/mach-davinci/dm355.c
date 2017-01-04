#define DM355_UART2_BASE	(IO_PHYS + 0x206000)
#define DM355_REF_FREQ		24000000
static struct pll_data pll1_data = ;
static struct pll_data pll2_data = ;
static struct clk ref_clk = ;
static struct clk pll1_clk = ;
static struct clk pll1_aux_clk = ;
static struct clk pll1_sysclk1 = ;
static struct clk pll1_sysclk2 = ;
static struct clk pll1_sysclk3 = ;
static struct clk pll1_sysclk4 = ;
static struct clk pll1_sysclkbp = ;
static struct clk vpss_dac_clk = ;
static struct clk vpss_master_clk = ;
static struct clk vpss_slave_clk = ;
static struct clk clkout1_clk = ;
static struct clk clkout2_clk = ;
static struct clk pll2_clk = ;
static struct clk pll2_sysclk1 = ;
static struct clk pll2_sysclkbp = ;
static struct clk clkout3_clk = ;
static struct clk arm_clk = ;
static struct clk mjcp_clk = ;
static struct clk uart0_clk = ;
static struct clk uart1_clk = ;
static struct clk uart2_clk = ;
static struct clk i2c_clk = ;
static struct clk asp0_clk = ;
static struct clk asp1_clk = ;
static struct clk mmcsd0_clk = ;
static struct clk mmcsd1_clk = ;
static struct clk spi0_clk = ;
static struct clk spi1_clk = ;
static struct clk spi2_clk = ;
static struct clk gpio_clk = ;
static struct clk aemif_clk = ;
static struct clk pwm0_clk = ;
static struct clk pwm1_clk = ;
static struct clk pwm2_clk = ;
static struct clk pwm3_clk = ;
static struct clk timer0_clk = ;
static struct clk timer1_clk = ;
static struct clk timer2_clk = ;
static struct clk timer3_clk = ;
static struct clk rto_clk = ;
static struct clk usb_clk = ;
static struct clk_lookup dm355_clks[] = ;
static u64 dm355_spi0_dma_mask = DMA_BIT_MASK(32);
static struct resource dm355_spi0_resources[] = ;
static struct davinci_spi_platform_data dm355_spi0_pdata = ;
static struct platform_device dm355_spi0_device = ;
void __init dm355_init_spi0(unsigned chipselect_mask,
struct spi_board_info *info, unsigned len)
#define INTMUX		0x18
#define EVTMUX		0x1c
static const struct mux_config dm355_pins[] = ;
static u8 dm355_default_priorities[DAVINCI_N_AINTC_IRQ] = ;
static const s8
queue_tc_mapping[][2] = ;
static const s8
queue_priority_mapping[][2] = ;
static struct edma_soc_info edma_cc0_info = ;
static struct edma_soc_info *dm355_edma_info[EDMA_MAX_CC] = ;
static struct resource edma_resources[] = ;
static struct platform_device dm355_edma_device = ;
static struct resource dm355_asp1_resources[] = ;
static struct platform_device dm355_asp1_device = ;
static void dm355_ccdc_setup_pinmux(void)
static struct resource dm355_vpss_resources[] = ;
static struct platform_device dm355_vpss_device = ;
static struct resource vpfe_resources[] = ;
static u64 vpfe_capture_dma_mask = DMA_BIT_MASK(32);
static struct resource dm355_ccdc_resource[] = ;
static struct platform_device dm355_ccdc_dev = ;
static struct platform_device vpfe_capture_dev = ;
void dm355_set_vpfe_config(struct vpfe_config *cfg)
static struct map_desc dm355_io_desc[] = ;
static struct davinci_id dm355_ids[] = ;
static u32 dm355_psc_bases[] = ;
static struct davinci_timer_info dm355_timer_info = ;
static struct plat_serial8250_port dm355_serial_platform_data[] = ;
static struct platform_device dm355_serial_device = ;
static struct davinci_soc_info davinci_soc_info_dm355 = ;
void __init dm355_init_asp1(u32 evt_enable, struct snd_platform_data *pdata)
void __init dm355_init(void)
static int __init dm355_init_devices(void)
postcore_initcall(dm355_init_devices);
