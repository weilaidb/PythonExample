#define DAVINCI_VPIF_BASE       (0x01C12000)
#define VDD3P3V_PWDN_OFFSET	(0x48)
#define VSCLKDIS_OFFSET		(0x6C)
#define VDD3P3V_VID_MASK	(BIT_MASK(3) | BIT_MASK(2) | BIT_MASK(1) |\
BIT_MASK(0))
#define VSCLKDIS_MASK		(BIT_MASK(11) | BIT_MASK(10) | BIT_MASK(9) |\
BIT_MASK(8))
#define DM646X_AUX_FREQ		24000000
static struct pll_data pll1_data = ;
static struct pll_data pll2_data = ;
static struct clk ref_clk = ;
static struct clk aux_clkin = ;
static struct clk pll1_clk = ;
static struct clk pll1_sysclk1 = ;
static struct clk pll1_sysclk2 = ;
static struct clk pll1_sysclk3 = ;
static struct clk pll1_sysclk4 = ;
static struct clk pll1_sysclk5 = ;
static struct clk pll1_sysclk6 = ;
static struct clk pll1_sysclk8 = ;
static struct clk pll1_sysclk9 = ;
static struct clk pll1_sysclkbp = ;
static struct clk pll1_aux_clk = ;
static struct clk pll2_clk = ;
static struct clk pll2_sysclk1 = ;
static struct clk dsp_clk = ;
static struct clk arm_clk = ;
static struct clk edma_cc_clk = ;
static struct clk edma_tc0_clk = ;
static struct clk edma_tc1_clk = ;
static struct clk edma_tc2_clk = ;
static struct clk edma_tc3_clk = ;
static struct clk uart0_clk = ;
static struct clk uart1_clk = ;
static struct clk uart2_clk = ;
static struct clk i2c_clk = ;
static struct clk gpio_clk = ;
static struct clk mcasp0_clk = ;
static struct clk mcasp1_clk = ;
static struct clk aemif_clk = ;
static struct clk emac_clk = ;
static struct clk pwm0_clk = ;
static struct clk pwm1_clk = ;
static struct clk timer0_clk = ;
static struct clk timer1_clk = ;
static struct clk timer2_clk = ;
static struct clk ide_clk = ;
static struct clk vpif0_clk = ;
static struct clk vpif1_clk = ;
static struct clk_lookup dm646x_clks[] = ;
static struct emac_platform_data dm646x_emac_pdata = ;
static struct resource dm646x_emac_resources[] = ;
static struct platform_device dm646x_emac_device = ;
static struct resource dm646x_mdio_resources[] = ;
static struct platform_device dm646x_mdio_device = ;
static const struct mux_config dm646x_pins[] = ;
static u8 dm646x_default_priorities[DAVINCI_N_AINTC_IRQ] = ;
static const s8
dm646x_queue_tc_mapping[][2] = ;
static const s8
dm646x_queue_priority_mapping[][2] = ;
static struct edma_soc_info edma_cc0_info = ;
static struct edma_soc_info *dm646x_edma_info[EDMA_MAX_CC] = ;
static struct resource edma_resources[] = ;
static struct platform_device dm646x_edma_device = ;
static struct resource dm646x_mcasp0_resources[] = ;
static struct resource dm646x_mcasp1_resources[] = ;
static struct platform_device dm646x_mcasp0_device = ;
static struct platform_device dm646x_mcasp1_device = ;
static struct platform_device dm646x_dit_device = ;
static u64 vpif_dma_mask = DMA_BIT_MASK(32);
static struct resource vpif_resource[] = ;
static struct platform_device vpif_dev = ;
static struct resource vpif_display_resource[] = ;
static struct platform_device vpif_display_dev = ;
static struct resource vpif_capture_resource[] = ;
static struct platform_device vpif_capture_dev = ;
static struct map_desc dm646x_io_desc[] = ;
static struct davinci_id dm646x_ids[] = ;
static u32 dm646x_psc_bases[] = ;
static struct davinci_timer_info dm646x_timer_info = ;
static struct plat_serial8250_port dm646x_serial_platform_data[] = ;
static struct platform_device dm646x_serial_device = ;
static struct davinci_soc_info davinci_soc_info_dm646x = ;
void __init dm646x_init_mcasp0(struct snd_platform_data *pdata)
void __init dm646x_init_mcasp1(struct snd_platform_data *pdata)
void dm646x_setup_vpif(struct vpif_display_config *display_config,
struct vpif_capture_config *capture_config)
int __init dm646x_init_edma(struct edma_rsv_info *rsv)
void __init dm646x_init(void)
static int __init dm646x_init_devices(void)
postcore_initcall(dm646x_init_devices);
