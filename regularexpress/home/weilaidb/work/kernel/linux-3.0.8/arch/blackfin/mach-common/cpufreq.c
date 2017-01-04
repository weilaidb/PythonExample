static struct cpufreq_frequency_table bfin_freq_table[] = ;
static struct bfin_dpm_state  dpm_state_table[3];
#if defined(CONFIG_CYCLES_CLOCKSOURCE)
unsigned long long __bfin_cycles_off;
unsigned int __bfin_cycles_mod;
static void __init bfin_init_tables(unsigned long cclk, unsigned long sclk)
static void bfin_adjust_core_timer(void *info)
static unsigned int bfin_getfreq_khz(unsigned int cpu)
static int bfin_target(struct cpufreq_policy *poli,
unsigned int target_freq, unsigned int relation)
static int bfin_verify_speed(struct cpufreq_policy *policy)
static int __init __bfin_cpu_init(struct cpufreq_policy *policy)
static struct freq_attr *bfin_freq_attr[] = ;
static struct cpufreq_driver bfin_driver = ;
static int __init bfin_cpu_init(void)
static void __exit bfin_cpu_exit(void)
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("cpufreq driver for Blackfin");
MODULE_LICENSE("GPL");
module_init(bfin_cpu_init);
module_exit(bfin_cpu_exit);
