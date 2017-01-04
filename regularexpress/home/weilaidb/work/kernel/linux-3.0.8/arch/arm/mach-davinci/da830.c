#define DA830_CMP12_0		0x60
#define DA830_CMP12_1		0x64
#define DA830_CMP12_2		0x68
#define DA830_CMP12_3		0x6c
#define DA830_CMP12_4		0x70
#define DA830_CMP12_5		0x74
#define DA830_CMP12_6		0x78
#define DA830_CMP12_7		0x7c
#define DA830_REF_FREQ		24000000
static struct pll_data pll0_data = ;
static struct clk ref_clk = ;
static struct clk pll0_clk = ;
static struct clk pll0_aux_clk = ;
static struct clk pll0_sysclk2 = ;
static struct clk pll0_sysclk3 = ;
static struct clk pll0_sysclk4 = ;
static struct clk pll0_sysclk5 = ;
static struct clk pll0_sysclk6 = ;
static struct clk pll0_sysclk7 = ;
static struct clk i2c0_clk = ;
static struct clk timerp64_0_clk = ;
static struct clk timerp64_1_clk = ;
static struct clk arm_rom_clk = ;
static struct clk scr0_ss_clk = ;
static struct clk scr1_ss_clk = ;
static struct clk scr2_ss_clk = ;
static struct clk dmax_clk = ;
static struct clk tpcc_clk = ;
static struct clk tptc0_clk = ;
static struct clk tptc1_clk = ;
static struct clk mmcsd_clk = ;
static struct clk uart0_clk = ;
static struct clk uart1_clk = ;
static struct clk uart2_clk = ;
static struct clk spi0_clk = ;
static struct clk spi1_clk = ;
static struct clk ecap0_clk = ;
static struct clk ecap1_clk = ;
static struct clk ecap2_clk = ;
static struct clk pwm0_clk = ;
static struct clk pwm1_clk = ;
static struct clk pwm2_clk = ;
static struct clk eqep0_clk = ;
static struct clk eqep1_clk = ;
static struct clk lcdc_clk = ;
static struct clk mcasp0_clk = ;
static struct clk mcasp1_clk = ;
static struct clk mcasp2_clk = ;
static struct clk usb20_clk = ;
static struct clk aemif_clk = ;
static struct clk aintc_clk = ;
static struct clk secu_mgr_clk = ;
static struct clk emac_clk = ;
static struct clk gpio_clk = ;
static struct clk i2c1_clk = ;
static struct clk usb11_clk = ;
static struct clk emif3_clk = ;
static struct clk arm_clk = ;
static struct clk rmii_clk = ;
static struct clk_lookup da830_clks[] = ;
static const struct mux_config da830_pins[] = ;
const short da830_emif25_pins[] __initdata = ;
const short da830_spi0_pins[] __initdata = ;
const short da830_spi1_pins[] __initdata = ;
const short da830_mmc_sd_pins[] __initdata = ;
const short da830_uart0_pins[] __initdata = ;
const short da830_uart1_pins[] __initdata = ;
const short da830_uart2_pins[] __initdata = ;
const short da830_usb20_pins[] __initdata = ;
const short da830_usb11_pins[] __initdata = ;
const short da830_uhpi_pins[] __initdata = ;
const short da830_cpgmac_pins[] __initdata = ;
const short da830_emif3c_pins[] __initdata = ;
const short da830_mcasp0_pins[] __initdata = ;
const short da830_mcasp1_pins[] __initdata = ;
const short da830_mcasp2_pins[] __initdata = ;
const short da830_i2c0_pins[] __initdata = ;
const short da830_i2c1_pins[] __initdata = ;
const short da830_lcdcntl_pins[] __initdata = ;
const short da830_pwm_pins[] __initdata = ;
const short da830_ecap0_pins[] __initdata = ;
const short da830_ecap1_pins[] __initdata = ;
const short da830_ecap2_pins[] __initdata = ;
const short da830_eqep0_pins[] __initdata = ;
const short da830_eqep1_pins[] __initdata = ;
static u8 da830_default_priorities[DA830_N_CP_INTC_IRQ] = ;
static struct map_desc da830_io_desc[] = ;
static u32 da830_psc_bases[] = ;
static struct davinci_id da830_ids[] = ;
static struct davinci_timer_instance da830_timer_instance[2] = ;
static struct davinci_timer_info da830_timer_info = ;
static struct davinci_soc_info davinci_soc_info_da830 = ;
void __init da830_init(void)
