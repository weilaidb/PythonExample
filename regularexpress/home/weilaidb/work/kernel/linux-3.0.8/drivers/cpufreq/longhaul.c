#define PFX "longhaul: "
#define TYPE_LONGHAUL_V1	1
#define TYPE_LONGHAUL_V2	2
#define TYPE_POWERSAVER		3
#define	CPU_SAMUEL	1
#define	CPU_SAMUEL2	2
#define	CPU_EZRA	3
#define	CPU_EZRA_T	4
#define	CPU_NEHEMIAH	5
#define	CPU_NEHEMIAH_C	6
#define USE_ACPI_C3		(1 << 1)
#define USE_NORTHBRIDGE		(1 << 2)
static int cpu_model;
static unsigned int numscales = 16;
static unsigned int fsb;
static const struct mV_pos *vrm_mV_table;
static const unsigned char *mV_vrm_table;
static unsigned int highest_speed, lowest_speed;
static unsigned int minmult, maxmult;
static int can_scale_voltage;
static struct acpi_processor *pr;
static struct acpi_processor_cx *cx;
static u32 acpi_regs_addr;
static u8 longhaul_flags;
static unsigned int longhaul_index;
static int scale_voltage;
static int disable_acpi_c3;
static int revid_errata;
static int mults[32];
static int eblcr[32];
static int longhaul_version;
static struct cpufreq_frequency_table *longhaul_table;
static char speedbuffer[8];
static char *print_speed(int speed)
static unsigned int calc_speed(int mult)
static int longhaul_get_cpu_mult(void)
static void do_longhaul1(unsigned int mults_index)
static void do_powersaver(int cx_address, unsigned int mults_index,
unsigned int dir)
static void longhaul_setstate(unsigned int table_index)
#define ROUNDING	0xf
static int guess_fsb(int mult)
static int __cpuinit longhaul_get_ranges(void)
static void __cpuinit longhaul_setup_voltagescaling(void)
static int longhaul_verify(struct cpufreq_policy *policy)
static int longhaul_target(struct cpufreq_policy *policy,
unsigned int target_freq, unsigned int relation)
static unsigned int longhaul_get(unsigned int cpu)
static acpi_status longhaul_walk_callback(acpi_handle obj_handle,
u32 nesting_level,
void *context, void **return_value)
static int enable_arbiter_disable(void)
static int longhaul_setup_southbridge(void)
static int __cpuinit longhaul_cpu_init(struct cpufreq_policy *policy)
static int __devexit longhaul_cpu_exit(struct cpufreq_policy *policy)
static struct freq_attr *longhaul_attr[] = ;
static struct cpufreq_driver longhaul_driver = ;
static int __init longhaul_init(void)
static void __exit longhaul_exit(void)
module_param(disable_acpi_c3, int, 0644);
MODULE_PARM_DESC(disable_acpi_c3, "Don't use ACPI C3 support");
module_param(scale_voltage, int, 0644);
MODULE_PARM_DESC(scale_voltage, "Scale voltage of processor");
module_param(revid_errata, int, 0644);
MODULE_PARM_DESC(revid_errata, "Ignore CPU Revision ID");
MODULE_AUTHOR("Dave Jones <davej@redhat.com>");
MODULE_DESCRIPTION("Longhaul driver for VIA Cyrix processors.");
MODULE_LICENSE("GPL");
late_initcall(longhaul_init);
module_exit(longhaul_exit);
