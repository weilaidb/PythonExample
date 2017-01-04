static struct map_desc s3c244x_iodesc[] __initdata = ;
void __init s3c244x_init_uarts(struct s3c2410_uartcfg *cfg, int no)
void __init s3c244x_map_io(void)
void __init_or_cpufreq s3c244x_setup_clocks(void)
void __init s3c244x_init_clocks(int xtal)
struct sysdev_class s3c2440_sysclass = ;
struct sysdev_class s3c2442_sysclass = ;
static int __init s3c2440_core_init(void)
core_initcall(s3c2440_core_init);
static int __init s3c2442_core_init(void)
core_initcall(s3c2442_core_init);
static struct sleep_save s3c244x_sleep[] = ;
static int s3c244x_suspend(void)
static void s3c244x_resume(void)
#define s3c244x_suspend NULL
#define s3c244x_resume  NULL
struct syscore_ops s3c244x_pm_syscore_ops = ;
