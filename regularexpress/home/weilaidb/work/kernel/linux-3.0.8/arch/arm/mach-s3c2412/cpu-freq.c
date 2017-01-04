static struct clk *xtal;
static struct clk *fclk;
static struct clk *hclk;
static struct clk *armclk;
static int s3c2412_cpufreq_calcdivs(struct s3c_cpufreq_config *cfg)
static void s3c2412_cpufreq_setdivs(struct s3c_cpufreq_config *cfg)
static void s3c2412_cpufreq_setrefresh(struct s3c_cpufreq_config *cfg)
static struct s3c_cpufreq_info s3c2412_cpufreq_info = ;
static int s3c2412_cpufreq_add(struct sys_device *sysdev)
static struct sysdev_driver s3c2412_cpufreq_driver = ;
static int s3c2412_cpufreq_init(void)
arch_initcall(s3c2412_cpufreq_init);
