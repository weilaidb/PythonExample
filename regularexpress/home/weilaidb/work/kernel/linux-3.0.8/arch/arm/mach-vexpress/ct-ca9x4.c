#define V2M_PA_CS7	0x10000000
static struct map_desc ct_ca9x4_io_desc[] __initdata = ;
static void __init ct_ca9x4_map_io(void)
static void __init ct_ca9x4_init_irq(void)
static void ct_ca9x4_clcd_enable(struct clcd_fb *fb)
static int ct_ca9x4_clcd_setup(struct clcd_fb *fb)
static struct clcd_board ct_ca9x4_clcd_data = ;
static AMBA_DEVICE(clcd, "ct:clcd", CT_CA9X4_CLCDC, &ct_ca9x4_clcd_data);
static AMBA_DEVICE(dmc, "ct:dmc", CT_CA9X4_DMC, NULL);
static AMBA_DEVICE(smc, "ct:smc", CT_CA9X4_SMC, NULL);
static AMBA_DEVICE(gpio, "ct:gpio", CT_CA9X4_GPIO, NULL);
static struct amba_device *ct_ca9x4_amba_devs[] __initdata = ;
static long ct_round(struct clk *clk, unsigned long rate)
static int ct_set(struct clk *clk, unsigned long rate)
static const struct clk_ops osc1_clk_ops = ;
static struct clk osc1_clk = ;
static struct clk ct_sp804_clk = ;
static struct clk_lookup lookups[] = ;
static struct resource pmu_resources[] = ;
static struct platform_device pmu_device = ;
static void __init ct_ca9x4_init_early(void)
static void __init ct_ca9x4_init(void)
static void ct_ca9x4_init_cpu_map(void)
static void ct_ca9x4_smp_enable(unsigned int max_cpus)
struct ct_desc ct_ca9x4_desc __initdata = ;
