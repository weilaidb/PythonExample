#undef CLK_DEBUG
static int clocks_initialized;
#define CLK_HAS_RATE	0x1
#define CLK_HAS_CTRL	0x2
struct clk ;
static LIST_HEAD(clocks);
static DEFINE_MUTEX(clocks_mutex);
static struct clk *mpc5121_clk_get(struct device *dev, const char *id)
static void dump_clocks(void)
#define	DEBUG_CLK_DUMP() dump_clocks()
#define	DEBUG_CLK_DUMP()
static void mpc5121_clk_put(struct clk *clk)
#define NRPSC 12
struct mpc512x_clockctl ;
struct mpc512x_clockctl __iomem *clockctl;
static int mpc5121_clk_enable(struct clk *clk)
static void mpc5121_clk_disable(struct clk *clk)
static unsigned long mpc5121_clk_get_rate(struct clk *clk)
static long mpc5121_clk_round_rate(struct clk *clk, unsigned long rate)
static int mpc5121_clk_set_rate(struct clk *clk, unsigned long rate)
static int clk_register(struct clk *clk)
static unsigned long spmf_mult(void)
static unsigned long sysdiv_div_x_2(void)
static unsigned long ref_to_sys(unsigned long rate)
static unsigned long sys_to_ref(unsigned long rate)
static long ips_to_ref(unsigned long rate)
static unsigned long devtree_getfreq(char *clockname)
static void ref_clk_calc(struct clk *clk)
static struct clk ref_clk = ;
static void sys_clk_calc(struct clk *clk)
static struct clk sys_clk = ;
static void diu_clk_calc(struct clk *clk)
static void viu_clk_calc(struct clk *clk)
static void half_clk_calc(struct clk *clk)
static void generic_div_clk_calc(struct clk *clk)
static void unity_clk_calc(struct clk *clk)
static struct clk csb_clk = ;
static void e300_clk_calc(struct clk *clk)
static struct clk e300_clk = ;
static struct clk ips_clk = ;
static struct clk lpc_clk = ;
static struct clk nfc_clk = ;
static struct clk pata_clk = ;
static struct clk sata_clk = ;
static struct clk fec_clk = ;
static struct clk pci_clk = ;
static struct clk diu_clk = ;
static struct clk viu_clk = ;
static struct clk axe_clk = ;
static struct clk usb1_clk = ;
static struct clk usb2_clk = ;
static struct clk i2c_clk = ;
static struct clk mscan_clk = ;
static struct clk sdhc_clk = ;
static struct clk mbx_bus_clk = ;
static struct clk mbx_clk = ;
static struct clk mbx_3d_clk = ;
static void psc_mclk_in_calc(struct clk *clk)
static struct clk psc_mclk_in = ;
static struct clk spdif_txclk = ;
static struct clk spdif_rxclk = ;
static void ac97_clk_calc(struct clk *clk)
static struct clk ac97_clk = ;
struct clk *rate_clks[] = ;
static void rate_clk_init(struct clk *clk)
static void rate_clks_init(void)
struct clk dev_clks[2][32];
static struct clk *psc_dev_clk(int pscnum)
static void psc_calc_rate(struct clk *clk, int pscnum, struct device_node *np)
static void psc_clks_init(void)
static struct clk_interface mpc5121_clk_functions = ;
int __init mpc5121_clk_init(void)
