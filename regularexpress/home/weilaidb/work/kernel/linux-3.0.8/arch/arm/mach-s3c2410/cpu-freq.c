static void s3c2410_cpufreq_setdivs(struct s3c_cpufreq_config *cfg)
static int s3c2410_cpufreq_calcdivs(struct s3c_cpufreq_config *cfg)
static struct s3c_cpufreq_info s3c2410_cpufreq_info = ;
static int s3c2410_cpufreq_add(struct sys_device *sysdev)
static struct sysdev_driver s3c2410_cpufreq_driver = ;
static int __init s3c2410_cpufreq_init(void)
arch_initcall(s3c2410_cpufreq_init);
static int s3c2410a_cpufreq_add(struct sys_device *sysdev)
static struct sysdev_driver s3c2410a_cpufreq_driver = ;
static int __init s3c2410a_cpufreq_init(void)
arch_initcall(s3c2410a_cpufreq_init);
