static struct cpufreq_driver s3c24xx_driver;
static struct s3c_cpufreq_config cpu_cur;
static struct s3c_iotimings s3c24xx_iotiming;
static struct cpufreq_frequency_table *pll_reg;
static unsigned int last_target = ~0;
static unsigned int ftab_size;
static struct cpufreq_frequency_table *ftab;
static struct clk *_clk_mpll;
static struct clk *_clk_xtal;
static struct clk *clk_fclk;
static struct clk *clk_hclk;
static struct clk *clk_pclk;
static struct clk *clk_arm;
struct s3c_cpufreq_config *s3c_cpufreq_getconfig(void)
struct s3c_iotimings *s3c_cpufreq_getiotimings(void)
static void s3c_cpufreq_getcur(struct s3c_cpufreq_config *cfg)
static inline void s3c_cpufreq_calc(struct s3c_cpufreq_config *cfg)
static inline int closer(unsigned int target, unsigned int n, unsigned int c)
static void s3c_cpufreq_show(const char *pfx,
struct s3c_cpufreq_config *cfg)
static void s3c_cpufreq_setio(struct s3c_cpufreq_config *cfg)
static int s3c_cpufreq_calcio(struct s3c_cpufreq_config *cfg)
static void s3c_cpufreq_setrefresh(struct s3c_cpufreq_config *cfg)
static void s3c_cpufreq_setdivs(struct s3c_cpufreq_config *cfg)
static int s3c_cpufreq_calcdivs(struct s3c_cpufreq_config *cfg)
static void s3c_cpufreq_setfvco(struct s3c_cpufreq_config *cfg)
static inline void s3c_cpufreq_resume_clocks(void)
static inline void s3c_cpufreq_updateclk(struct clk *clk,
unsigned int freq)
static int s3c_cpufreq_settarget(struct cpufreq_policy *policy,
unsigned int target_freq,
struct cpufreq_frequency_table *pll)
static int s3c_cpufreq_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static unsigned int s3c_cpufreq_get(unsigned int cpu)
struct clk *s3c_cpufreq_clk_get(struct device *dev, const char *name)
static int s3c_cpufreq_init(struct cpufreq_policy *policy)
static __init int s3c_cpufreq_initclks(void)
static int s3c_cpufreq_verify(struct cpufreq_policy *policy)
static struct cpufreq_frequency_table suspend_pll;
static unsigned int suspend_freq;
static int s3c_cpufreq_suspend(struct cpufreq_policy *policy)
static int s3c_cpufreq_resume(struct cpufreq_policy *policy)
#define s3c_cpufreq_resume NULL
#define s3c_cpufreq_suspend NULL
static struct cpufreq_driver s3c24xx_driver = ;
int __init s3c_cpufreq_register(struct s3c_cpufreq_info *info)
int __init s3c_cpufreq_setboard(struct s3c_cpufreq_board *board)
int __init s3c_cpufreq_auto_io(void)
#define do_min(_a, _b) ((_a) == 0 ? (_b) : (_b) == 0 ? (_a) : min(_a, _b))
static void s3c_cpufreq_freq_min(struct s3c_freq *dst,
struct s3c_freq *a, struct s3c_freq *b)
static inline u32 calc_locktime(u32 freq, u32 time_us)
static void s3c_cpufreq_update_loctkime(void)
static int s3c_cpufreq_build_freq(void)
static int __init s3c_cpufreq_initcall(void)
late_initcall(s3c_cpufreq_initcall);
int __init s3c_plltab_register(struct cpufreq_frequency_table *plls,
unsigned int plls_no)
