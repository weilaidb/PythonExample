#define PCC_VERSION	"1.10.00"
#define POLL_LOOPS 	300
#define CMD_COMPLETE 	0x1
#define CMD_GET_FREQ 	0x0
#define CMD_SET_FREQ 	0x1
#define BUF_SZ		4
struct pcc_register_resource  __attribute__ ((packed));
struct pcc_memory_resource  __attribute__ ((packed));
static struct cpufreq_driver pcc_cpufreq_driver;
struct pcc_header ;
static void __iomem *pcch_virt_addr;
static struct pcc_header __iomem *pcch_hdr;
static DEFINE_SPINLOCK(pcc_lock);
static struct acpi_generic_address doorbell;
static u64 doorbell_preserve;
static u64 doorbell_write;
static u8 OSC_UUID[16] = ;
struct pcc_cpu ;
static struct pcc_cpu __percpu *pcc_cpu_info;
static int pcc_cpufreq_verify(struct cpufreq_policy *policy)
static inline void pcc_cmd(void)
static inline void pcc_clear_mapping(void)
static unsigned int pcc_get_freq(unsigned int cpu)
static int pcc_cpufreq_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static int pcc_get_offset(int cpu)
static int __init pcc_cpufreq_do_osc(acpi_handle *handle)
static int __init pcc_cpufreq_probe(void)
static int pcc_cpufreq_cpu_init(struct cpufreq_policy *policy)
static int pcc_cpufreq_cpu_exit(struct cpufreq_policy *policy)
static struct cpufreq_driver pcc_cpufreq_driver = ;
static int __init pcc_cpufreq_init(void)
static void __exit pcc_cpufreq_exit(void)
MODULE_AUTHOR("Matthew Garrett, Naga Chumbalkar");
MODULE_VERSION(PCC_VERSION);
MODULE_DESCRIPTION("Processor Clocking Control interface driver");
MODULE_LICENSE("GPL");
late_initcall(pcc_cpufreq_init);
module_exit(pcc_cpufreq_exit);
