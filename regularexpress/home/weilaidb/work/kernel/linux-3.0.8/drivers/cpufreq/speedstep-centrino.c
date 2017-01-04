#define PFX		"speedstep-centrino: "
#define MAINTAINER	"cpufreq@vger.kernel.org"
#define INTEL_MSR_RANGE	(0xffff)
struct cpu_id
;
enum ;
static const struct cpu_id cpu_ids[] = ;
#define N_IDS	ARRAY_SIZE(cpu_ids)
struct cpu_model
;
static int centrino_verify_cpu_id(const struct cpuinfo_x86 *c,
const struct cpu_id *x);
static DEFINE_PER_CPU(struct cpu_model *, centrino_model);
static DEFINE_PER_CPU(const struct cpu_id *, centrino_cpu);
static struct cpufreq_driver centrino_driver;
#define OP(mhz, mv)							\
static struct cpufreq_frequency_table banias_900[] =
;
static struct cpufreq_frequency_table banias_1000[] =
;
static struct cpufreq_frequency_table banias_1100[] =
;
static struct cpufreq_frequency_table banias_1200[] =
;
static struct cpufreq_frequency_table banias_1300[] =
;
static struct cpufreq_frequency_table banias_1400[] =
;
static struct cpufreq_frequency_table banias_1500[] =
;
static struct cpufreq_frequency_table banias_1600[] =
;
static struct cpufreq_frequency_table banias_1700[] =
;
#undef OP
#define _BANIAS(cpuid, max, name)	\
#define BANIAS(max)	_BANIAS(&cpu_ids[CPU_BANIAS], max, #max)
static struct cpu_model models[] =
;
#undef _BANIAS
#undef BANIAS
static int centrino_cpu_init_table(struct cpufreq_policy *policy)
static inline int centrino_cpu_init_table(struct cpufreq_policy *policy)
static int centrino_verify_cpu_id(const struct cpuinfo_x86 *c,
const struct cpu_id *x)
static unsigned extract_clock(unsigned msr, unsigned int cpu, int failsafe)
static unsigned int get_cur_freq(unsigned int cpu)
static int centrino_cpu_init(struct cpufreq_policy *policy)
static int centrino_cpu_exit(struct cpufreq_policy *policy)
static int centrino_verify (struct cpufreq_policy *policy)
static int centrino_target (struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static struct freq_attr* centrino_attr[] = ;
static struct cpufreq_driver centrino_driver = ;
static int __init centrino_init(void)
static void __exit centrino_exit(void)
MODULE_AUTHOR ("Jeremy Fitzhardinge <jeremy@goop.org>");
MODULE_DESCRIPTION ("Enhanced SpeedStep driver for Intel Pentium M processors.");
MODULE_LICENSE ("GPL");
late_initcall(centrino_init);
module_exit(centrino_exit);
