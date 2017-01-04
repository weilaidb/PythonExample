static struct map_desc s3c2410_iodesc[] __initdata = ;
void __init s3c2410_init_uarts(struct s3c2410_uartcfg *cfg, int no)
void __init s3c2410_map_io(void)
void __init_or_cpufreq s3c2410_setup_clocks(void)
static struct clk s3c2410_armclk = ;
void __init s3c2410_init_clocks(int xtal)
struct sysdev_class s3c2410_sysclass = ;
struct sysdev_class s3c2410a_sysclass = ;
static struct sys_device s3c2410_sysdev = ;
static int __init s3c2410_core_init(void)
core_initcall(s3c2410_core_init);
static int __init s3c2410a_core_init(void)
core_initcall(s3c2410a_core_init);
int __init s3c2410_init(void)
int __init s3c2410a_init(void)
