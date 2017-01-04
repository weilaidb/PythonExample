#define POLL_TIME	100000
#define EXP		753
struct spu_gov_info_struct ;
static DEFINE_PER_CPU(struct spu_gov_info_struct, spu_gov_info);
static int calc_freq(struct spu_gov_info_struct *info)
static void spu_gov_work(struct work_struct *work)
static void spu_gov_init_work(struct spu_gov_info_struct *info)
static void spu_gov_cancel_work(struct spu_gov_info_struct *info)
static int spu_gov_govern(struct cpufreq_policy *policy, unsigned int event)
static struct cpufreq_governor spu_governor = ;
static int __init spu_gov_init(void)
static void __exit spu_gov_exit(void)
module_init(spu_gov_init);
module_exit(spu_gov_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Christian Krafft <krafft@de.ibm.com>");
