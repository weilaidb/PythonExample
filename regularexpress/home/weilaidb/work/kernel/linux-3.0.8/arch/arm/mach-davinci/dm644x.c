#define DM644X_REF_FREQ		27000000
static struct pll_data pll1_data = ;
static struct pll_data pll2_data = ;
static struct clk ref_clk = ;
static struct clk pll1_clk = ;
static struct clk pll1_sysclk1 = ;
static struct clk pll1_sysclk2 = ;
static struct clk pll1_sysclk3 = ;
static struct clk pll1_sysclk5 = ;
static struct clk pll1_aux_clk = ;
static struct clk pll1_sysclkbp = ;
static struct clk pll2_clk = ;
static struct clk pll2_sysclk1 = ;
static struct clk pll2_sysclk2 = ;
static struct clk pll2_sysclkbp = ;
static struct clk dsp_clk = ;
static struct clk arm_clk = ;
static struct clk vicp_clk = ;
static struct clk vpss_master_clk = ;
static struct clk vpss_slave_clk = ;
static struct clk uart0_clk = ;
static struct clk uart1_clk = ;
static struct clk uart2_clk = ;
static struct clk emac_clk = ;
static struct clk i2c_clk = ;
static struct clk ide_clk = ;
static struct clk asp_clk = ;
static struct clk mmcsd_clk = ;
static struct clk spi_clk = ;
static struct clk gpio_clk = ;
static struct clk usb_clk = ;
static struct clk vlynq_clk = ;
static struct clk aemif_clk = ;
static struct clk pwm0_clk = ;
static struct clk pwm1_clk = ;
static struct clk pwm2_clk = ;
static struct clk timer0_clk = ;
static struct clk timer1_clk = ;
static struct clk timer2_clk = ;
static struct clk_lookup dm644x_clks[] = ;
static struct emac_platform_data dm644x_emac_pdata = ;
static struct resource dm644x_emac_resources[] = ;
static struct platform_device dm644x_emac_device = ;
static struct resource dm644x_mdio_resources[] = ;
static struct platform_device dm644x_mdio_device = ;
static const struct mux_config dm644x_pins[] = ;
static u8 dm644x_default_priorities[DAVINCI_N_AINTC_IRQ] = ;
static const s8
queue_tc_mapping[][2] = ;
static const s8
queue_priority_mapping[][2] = ;
static struct edma_soc_info edma_cc0_info = ;
static struct edma_soc_info *dm644x_edma_info[EDMA_MAX_CC] = ;
static struct resource edma_resources[] = ;
static struct platform_device dm644x_edma_device = ;
static struct resource dm644x_asp_resources[] = ;
static struct platform_device dm644x_asp_device = ;
static struct resource dm644x_vpss_resources[] = ;
static struct platform_device dm644x_vpss_device = ;
static struct resource vpfe_resources[] = ;
static u64 vpfe_capture_dma_mask = DMA_BIT_MASK(32);
static struct resource dm644x_ccdc_resource[] = ;
static struct platform_device dm644x_ccdc_dev = ;
static struct platform_device vpfe_capture_dev = ;
void dm644x_set_vpfe_config(struct vpfe_config *cfg)
static struct map_desc dm644x_io_desc[] = ;
static struct davinci_id dm644x_ids[] = ;
static u32 dm644x_psc_bases[] = ;
static struct davinci_timer_info dm644x_timer_info = ;
static struct plat_serial8250_port dm644x_serial_platform_data[] = ;
static struct platform_device dm644x_serial_device = ;
static struct davinci_soc_info davinci_soc_info_dm644x = ;
void __init dm644x_init_asp(struct snd_platform_data *pdata)
void __init dm644x_init(void)
static int __init dm644x_init_devices(void)
postcore_initcall(dm644x_init_devices);
