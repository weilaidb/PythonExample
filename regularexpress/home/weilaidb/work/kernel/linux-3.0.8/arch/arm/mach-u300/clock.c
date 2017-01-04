static DEFINE_SPINLOCK(syscon_clkreg_lock);
static DEFINE_SPINLOCK(syscon_resetreg_lock);
static void syscon_block_reset_enable(struct clk *clk)
static void syscon_block_reset_disable(struct clk *clk)
int __clk_get(struct clk *clk)
EXPORT_SYMBOL(__clk_get);
void __clk_put(struct clk *clk)
EXPORT_SYMBOL(__clk_put);
static void syscon_clk_disable(struct clk *clk)
static void syscon_clk_enable(struct clk *clk)
static u16 syscon_clk_get_rate(void)
static void enable_i2s0_vcxo(void)
static void enable_i2s1_vcxo(void)
static void disable_i2s0_vcxo(void)
static void disable_i2s1_vcxo(void)
static void syscon_clk_rate_set_mclk(unsigned long rate)
void syscon_clk_rate_set_cpuclk(unsigned long rate)
EXPORT_SYMBOL(syscon_clk_rate_set_cpuclk);
void clk_disable(struct clk *clk)
EXPORT_SYMBOL(clk_disable);
int clk_enable(struct clk *clk)
EXPORT_SYMBOL(clk_enable);
static unsigned long clk_get_rate_cpuclk(struct clk *clk)
static unsigned long clk_get_rate_ahb_clk(struct clk *clk)
static unsigned long clk_get_rate_emif_clk(struct clk *clk)
static unsigned long clk_get_rate_xgamclk(struct clk *clk)
static unsigned long clk_get_rate_mclk(struct clk *clk)
static unsigned long clk_get_rate_i2s_i2c_spi(struct clk *clk)
unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL(clk_get_rate);
static unsigned long clk_round_rate_mclk(struct clk *clk, unsigned long rate)
static unsigned long clk_round_rate_cpuclk(struct clk *clk, unsigned long rate)
long clk_round_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL(clk_round_rate);
static int clk_set_rate_mclk(struct clk *clk, unsigned long rate)
static int clk_set_rate_cpuclk(struct clk *clk, unsigned long rate)
int clk_set_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL(clk_set_rate);
static struct clk amba_clk = ;
static struct clk cpu_clk = ;
static struct clk nandif_clk = ;
static struct clk semi_clk = ;
static struct clk isp_clk = ;
static struct clk cds_clk = ;
static struct clk dma_clk = ;
static struct clk aaif_clk = ;
static struct clk apex_clk = ;
static struct clk video_enc_clk = ;
static struct clk xgam_clk = ;
static struct clk ahb_clk = ;
static struct clk ahb_subsys_clk = ;
static struct clk intcon_clk = ;
static struct clk mspro_clk = ;
static struct clk emif_clk = ;
static struct clk fast_clk = ;
static struct clk mmcsd_clk = ;
static struct clk i2s0_clk = ;
static struct clk i2s1_clk = ;
static struct clk i2c0_clk = ;
static struct clk i2c1_clk = ;
static struct clk spi_clk = ;
static struct clk uart1_pclk = ;
static struct clk uart1_clk = ;
static struct clk slow_clk = ;
static struct clk wdog_clk = ;
static struct clk uart0_pclk = ;
static struct clk uart0_clk = ;
static struct clk keypad_clk = ;
static struct clk gpio_clk = ;
static struct clk rtc_clk = ;
static struct clk bustr_clk = ;
static struct clk evhist_clk = ;
static struct clk timer_clk = ;
static struct clk app_timer_clk = ;
static struct clk ppm_clk = ;
#define DEF_LOOKUP(devid, clkref)		\
#define DEF_LOOKUP_CON(devid, conid, clkref)	\
static struct clk_lookup lookups[] = ;
static void __init clk_register(void)
#if (defined(CONFIG_DEBUG_FS) && defined(CONFIG_U300_DEBUG))
static struct clk *clks[] = ;
static int u300_clocks_show(struct seq_file *s, void *data)
static int u300_clocks_open(struct inode *inode, struct file *file)
static const struct file_operations u300_clocks_operations = ;
static int __init init_clk_read_debugfs(void)
module_init(init_clk_read_debugfs);
int __init u300_clock_init(void)
