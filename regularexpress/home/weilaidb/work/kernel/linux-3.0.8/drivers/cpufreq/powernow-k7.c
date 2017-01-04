#define PFX "powernow: "
struct psb_s ;
struct pst_s ;
union powernow_acpi_control_t ;
static const int mobile_vid_table[32] = ;
static const int fid_codes[32] = ;
static int acpi_force;
static struct cpufreq_frequency_table *powernow_table;
static unsigned int can_scale_bus;
static unsigned int can_scale_vid;
static unsigned int minimum_speed = -1;
static unsigned int maximum_speed;
static unsigned int number_scales;
static unsigned int fsb;
static unsigned int latency;
static char have_a0;
static int check_fsb(unsigned int fsbspeed)
static int check_powernow(void)
static void invalidate_entry(unsigned int entry)
static int get_ranges(unsigned char *pst)
static void change_FID(int fid)
static void change_VID(int vid)
static void change_speed(unsigned int index)
static struct acpi_processor_performance *acpi_processor_perf;
static int powernow_acpi_init(void)
static int powernow_acpi_init(void)
static void print_pst_entry(struct pst_s *pst, unsigned int j)
static int powernow_decode_bios(int maxfid, int startvid)
static int powernow_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static int powernow_verify(struct cpufreq_policy *policy)
static int __cpuinit fixup_sgtc(void)
static unsigned int powernow_get(unsigned int cpu)
static int __cpuinit acer_cpufreq_pst(const struct dmi_system_id *d)
static struct dmi_system_id __cpuinitdata powernow_dmi_table[] = ;
static int __cpuinit powernow_cpu_init(struct cpufreq_policy *policy)
static int powernow_cpu_exit(struct cpufreq_policy *policy)
static struct freq_attr *powernow_table_attr[] = ;
static struct cpufreq_driver powernow_driver = ;
static int __init powernow_init(void)
static void __exit powernow_exit(void)
module_param(acpi_force,  int, 0444);
MODULE_PARM_DESC(acpi_force, "Force ACPI to be used.");
MODULE_AUTHOR("Dave Jones <davej@redhat.com>");
MODULE_DESCRIPTION("Powernow driver for AMD K7 processors.");
MODULE_LICENSE("GPL");
late_initcall(powernow_init);
module_exit(powernow_exit);
