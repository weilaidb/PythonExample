static struct clk *xtal;
static struct clk *fclk;
static struct clk *hclk;
static struct clk *armclk;
static inline int within_khz(unsigned long a, unsigned long b)
int s3c2440_cpufreq_calcdivs(struct s3c_cpufreq_config *cfg)
#define CAMDIVN_HCLK_HALF (S3C2440_CAMDIVN_HCLK3_HALF | \
S3C2440_CAMDIVN_HCLK4_HALF)
static void s3c2440_cpufreq_setdivs(struct s3c_cpufreq_config *cfg)
static int run_freq_for(unsigned long max_hclk, unsigned long fclk,
int *divs,
struct cpufreq_frequency_table *table,
size_t table_size)
static int hclk_divs[] = ;
static int s3c2440_cpufreq_calctable(struct s3c_cpufreq_config *cfg,
struct cpufreq_frequency_table *table,
size_t table_size)
struct s3c_cpufreq_info s3c2440_cpufreq_info = ;
static int s3c2440_cpufreq_add(struct sys_device *sysdev)
static struct sysdev_driver s3c2440_cpufreq_driver = ;
static int s3c2440_cpufreq_init(void)
subsys_initcall(s3c2440_cpufreq_init);
static struct sysdev_driver s3c2442_cpufreq_driver = ;
static int s3c2442_cpufreq_init(void)
subsys_initcall(s3c2442_cpufreq_init);
