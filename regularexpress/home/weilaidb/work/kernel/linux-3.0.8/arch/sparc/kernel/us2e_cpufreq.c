static struct cpufreq_driver *cpufreq_us2e_driver;
struct us2e_freq_percpu_info ;
static struct us2e_freq_percpu_info *us2e_freq_table;
#define HBIRD_MEM_CNTL0_ADDR	0x1fe0000f010UL
#define HBIRD_ESTAR_MODE_ADDR	0x1fe0000f080UL
#define ESTAR_MODE_DIV_1	0x0000000000000000UL
#define ESTAR_MODE_DIV_2	0x0000000000000001UL
#define ESTAR_MODE_DIV_4	0x0000000000000003UL
#define ESTAR_MODE_DIV_6	0x0000000000000002UL
#define ESTAR_MODE_DIV_8	0x0000000000000004UL
#define ESTAR_MODE_DIV_MASK	0x0000000000000007UL
#define MCTRL0_SREFRESH_ENAB	0x0000000000010000UL
#define MCTRL0_REFR_COUNT_MASK	0x0000000000007f00UL
#define MCTRL0_REFR_COUNT_SHIFT	8
#define MCTRL0_REFR_INTERVAL	7800
#define MCTRL0_REFR_CLKS_P_CNT	64
static unsigned long read_hbreg(unsigned long addr)
static void write_hbreg(unsigned long addr, unsigned long val)
static void self_refresh_ctl(int enable)
static void frob_mem_refresh(int cpu_slowing_down,
unsigned long clock_tick,
unsigned long old_divisor, unsigned long divisor)
static void us2e_transition(unsigned long estar, unsigned long new_bits,
unsigned long clock_tick,
unsigned long old_divisor, unsigned long divisor)
static unsigned long index_to_estar_mode(unsigned int index)
static unsigned long index_to_divisor(unsigned int index)
static unsigned long estar_to_divisor(unsigned long estar)
static unsigned int us2e_freq_get(unsigned int cpu)
static void us2e_set_cpu_divider_index(unsigned int cpu, unsigned int index)
static int us2e_freq_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static int us2e_freq_verify(struct cpufreq_policy *policy)
static int __init us2e_freq_cpu_init(struct cpufreq_policy *policy)
static int us2e_freq_cpu_exit(struct cpufreq_policy *policy)
static int __init us2e_freq_init(void)
static void __exit us2e_freq_exit(void)
MODULE_AUTHOR("David S. Miller <davem@redhat.com>");
MODULE_DESCRIPTION("cpufreq driver for UltraSPARC-IIe");
MODULE_LICENSE("GPL");
module_init(us2e_freq_init);
module_exit(us2e_freq_exit);
