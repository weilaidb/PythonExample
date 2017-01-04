void __iomem *s3c24xx_va_gpio2 = S3C24XX_VA_GPIO;
static inline void s3c2412_init_gpio2(void)
#define s3c2412_init_gpio2() do  while(0)
static struct map_desc s3c2412_iodesc[] __initdata = ;
void __init s3c2412_init_uarts(struct s3c2410_uartcfg *cfg, int no)
static void s3c2412_idle(void)
static void s3c2412_hard_reset(void)
void __init s3c2412_map_io(void)
void __init_or_cpufreq s3c2412_setup_clocks(void)
void __init s3c2412_init_clocks(int xtal)
struct sysdev_class s3c2412_sysclass = ;
static int __init s3c2412_core_init(void)
core_initcall(s3c2412_core_init);
static struct sys_device s3c2412_sysdev = ;
int __init s3c2412_init(void)
