#define DM365_REF_FREQ		24000000
static struct pll_data pll1_data = ;
static struct pll_data pll2_data = ;
static struct clk ref_clk = ;
static struct clk pll1_clk = ;
static struct clk pll1_aux_clk = ;
static struct clk pll1_sysclkbp = ;
static struct clk clkout0_clk = ;
static struct clk pll1_sysclk1 = ;
static struct clk pll1_sysclk2 = ;
static struct clk pll1_sysclk3 = ;
static struct clk pll1_sysclk4 = ;
static struct clk pll1_sysclk5 = ;
static struct clk pll1_sysclk6 = ;
static struct clk pll1_sysclk7 = ;
static struct clk pll1_sysclk8 = ;
static struct clk pll1_sysclk9 = ;
static struct clk pll2_clk = ;
static struct clk pll2_aux_clk = ;
static struct clk clkout1_clk = ;
static struct clk pll2_sysclk1 = ;
static struct clk pll2_sysclk2 = ;
static struct clk pll2_sysclk3 = ;
static struct clk pll2_sysclk4 = ;
static struct clk pll2_sysclk5 = ;
static struct clk pll2_sysclk6 = ;
static struct clk pll2_sysclk7 = ;
static struct clk pll2_sysclk8 = ;
static struct clk pll2_sysclk9 = ;
static struct clk vpss_dac_clk = ;
static struct clk vpss_master_clk = ;
static struct clk arm_clk = ;
static struct clk uart0_clk = ;
static struct clk uart1_clk = ;
static struct clk i2c_clk = ;
static struct clk mmcsd0_clk = ;
static struct clk mmcsd1_clk = ;
static struct clk spi0_clk = ;
static struct clk spi1_clk = ;
static struct clk spi2_clk = ;
static struct clk spi3_clk = ;
static struct clk spi4_clk = ;
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
static struct clk usb_clk = ;
static struct clk emac_clk = ;
static struct clk voicecodec_clk = ;
static struct clk asp0_clk = ;
static struct clk rto_clk = ;
static struct clk mjcp_clk = ;
static struct clk_lookup dm365_clks[] = ;
#define INTMUX		0x18
#define EVTMUX		0x1c
static const struct mux_config dm365_pins[] = ;
static u64 dm365_spi0_dma_mask = DMA_BIT_MASK(32);
static struct davinci_spi_platform_data dm365_spi0_pdata = ;
static struct resource dm365_spi0_resources[] = ;
static struct platform_device dm365_spi0_device = ;
void __init dm365_init_spi0(unsigned chipselect_mask,
struct spi_board_info *info, unsigned len)
static struct emac_platform_data dm365_emac_pdata = ;
static struct resource dm365_emac_resources[] = ;
static struct platform_device dm365_emac_device = ;
static struct resource dm365_mdio_resources[] = ;
static struct platform_device dm365_mdio_device = ;
static u8 dm365_default_priorities[DAVINCI_N_AINTC_IRQ] = ;
static const s8
dm365_queue_tc_mapping[][2] = ;
static const s8
dm365_queue_priority_mapping[][2] = ;
static struct edma_soc_info edma_cc0_info = ;
static struct edma_soc_info *dm365_edma_info[EDMA_MAX_CC] = ;
static struct resource edma_resources[] = ;
static struct platform_device dm365_edma_device = ;
static struct resource dm365_asp_resources[] = ;
static struct platform_device dm365_asp_device = ;
static struct resource dm365_vc_resources[] = ;
static struct platform_device dm365_vc_device = ;
static struct resource dm365_rtc_resources[] = ;
static struct platform_device dm365_rtc_device = ;
static struct map_desc dm365_io_desc[] = ;
static struct resource dm365_ks_resources[] = ;
static struct platform_device dm365_ks_device = ;
static struct davinci_id dm365_ids[] = ;
static u32 dm365_psc_bases[] = ;
static struct davinci_timer_info dm365_timer_info = ;
#define DM365_UART1_BASE	(IO_PHYS + 0x106000)
static struct plat_serial8250_port dm365_serial_platform_data[] = ;
static struct platform_device dm365_serial_device = ;
static struct davinci_soc_info davinci_soc_info_dm365 = ;
void __init dm365_init_asp(struct snd_platform_data *pdata)
void __init dm365_init_vc(struct snd_platform_data *pdata)
void __init dm365_init_ks(struct davinci_ks_platform_data *pdata)
void __init dm365_init_rtc(void)
void __init dm365_init(void)
static struct resource dm365_vpss_resources[] = ;
static struct platform_device dm365_vpss_device = ;
static struct resource vpfe_resources[] = ;
static u64 vpfe_capture_dma_mask = DMA_BIT_MASK(32);
static struct platform_device vpfe_capture_dev = ;
static void dm365_isif_setup_pinmux(void)
static struct resource isif_resource[] = ;
static struct platform_device dm365_isif_dev = ;
static int __init dm365_init_devices(void)
postcore_initcall(dm365_init_devices);
void dm365_set_vpfe_config(struct vpfe_config *cfg)
