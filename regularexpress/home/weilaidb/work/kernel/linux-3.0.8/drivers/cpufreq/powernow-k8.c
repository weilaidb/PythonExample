#define PFX "powernow-k8: "
#define VERSION "version 2.20.00"
static DEFINE_MUTEX(fidvid_mutex);
static DEFINE_PER_CPU(struct powernow_k8_data *, powernow_data);
static int cpu_family = CPU_OPTERON;
static bool cpb_capable, cpb_enabled;
static struct msr __percpu *msrs;
static struct cpufreq_driver cpufreq_amd64_driver;
static inline const struct cpumask *cpu_core_mask(int cpu)
static u32 find_freq_from_fid(u32 fid)
static u32 find_khz_freq_from_fid(u32 fid)
static u32 find_khz_freq_from_pstate(struct cpufreq_frequency_table *data,
u32 pstate)
static u32 convert_fid_to_vco_fid(u32 fid)
static int pending_bit_stuck(void)
static int query_current_values_with_pending_wait(struct powernow_k8_data *data)
static void count_off_irt(struct powernow_k8_data *data)
static void count_off_vst(struct powernow_k8_data *data)
static void fidvid_msr_init(void)
static int write_new_fid(struct powernow_k8_data *data, u32 fid)
static int write_new_vid(struct powernow_k8_data *data, u32 vid)
static int decrease_vid_code_by_step(struct powernow_k8_data *data,
u32 reqvid, u32 step)
static int transition_pstate(struct powernow_k8_data *data, u32 pstate)
static int transition_fid_vid(struct powernow_k8_data *data,
u32 reqfid, u32 reqvid)
static int core_voltage_pre_transition(struct powernow_k8_data *data,
u32 reqvid, u32 reqfid)
static int core_frequency_transition(struct powernow_k8_data *data, u32 reqfid)
static int core_voltage_post_transition(struct powernow_k8_data *data,
u32 reqvid)
static void check_supported_cpu(void *_rc)
static int check_pst_table(struct powernow_k8_data *data, struct pst_s *pst,
u8 maxvid)
static void invalidate_entry(struct cpufreq_frequency_table *powernow_table,
unsigned int entry)
static void print_basics(struct powernow_k8_data *data)
static u32 freq_from_fid_did(u32 fid, u32 did)
static int fill_powernow_table(struct powernow_k8_data *data,
struct pst_s *pst, u8 maxvid)
static int find_psb_table(struct powernow_k8_data *data)
static void powernow_k8_acpi_pst_values(struct powernow_k8_data *data,
unsigned int index)
static int powernow_k8_cpu_init_acpi(struct powernow_k8_data *data)
static int fill_powernow_table_pstate(struct powernow_k8_data *data,
struct cpufreq_frequency_table *powernow_table)
static int fill_powernow_table_fidvid(struct powernow_k8_data *data,
struct cpufreq_frequency_table *powernow_table)
static void powernow_k8_cpu_exit_acpi(struct powernow_k8_data *data)
static int get_transition_latency(struct powernow_k8_data *data)
static int transition_frequency_fidvid(struct powernow_k8_data *data,
unsigned int index)
static int transition_frequency_pstate(struct powernow_k8_data *data,
unsigned int index)
static int powernowk8_target(struct cpufreq_policy *pol,
unsigned targfreq, unsigned relation)
static int powernowk8_verify(struct cpufreq_policy *pol)
struct init_on_cpu ;
static void __cpuinit powernowk8_cpu_init_on_cpu(void *_init_on_cpu)
static int __cpuinit powernowk8_cpu_init(struct cpufreq_policy *pol)
static int __devexit powernowk8_cpu_exit(struct cpufreq_policy *pol)
static void query_values_on_cpu(void *_err)
static unsigned int powernowk8_get(unsigned int cpu)
static void _cpb_toggle_msrs(bool t)
static void cpb_toggle(bool t)
static ssize_t store_cpb(struct cpufreq_policy *policy, const char *buf,
size_t count)
static ssize_t show_cpb(struct cpufreq_policy *policy, char *buf)
#define define_one_rw(_name) \
static struct freq_attr _name = \
__ATTR(_name, 0644, show_##_name, store_##_name)
define_one_rw(cpb);
static struct freq_attr *powernow_k8_attr[] = ;
static struct cpufreq_driver cpufreq_amd64_driver = ;
static int cpb_notify(struct notifier_block *nb, unsigned long action,
void *hcpu)
static struct notifier_block cpb_nb = ;
static int __cpuinit powernowk8_init(void)
static void __exit powernowk8_exit(void)
MODULE_AUTHOR("Paul Devriendt <paul.devriendt@amd.com> and "
"Mark Langsdorf <mark.langsdorf@amd.com>");
MODULE_DESCRIPTION("AMD Athlon 64 and Opteron processor frequency driver.");
MODULE_LICENSE("GPL");
late_initcall(powernowk8_init);
module_exit(powernowk8_exit);
