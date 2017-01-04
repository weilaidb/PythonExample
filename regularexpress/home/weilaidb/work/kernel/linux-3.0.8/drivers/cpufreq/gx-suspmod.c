#define PCI_PMER1	0x80
#define PCI_PMER2	0x81
#define PCI_PMER3	0x82
#define PCI_IRQTC	0x8c
#define PCI_VIDTC	0x8d
#define PCI_MODOFF	0x94
#define PCI_MODON	0x95
#define PCI_SUSCFG	0x96
#define GPM		(1<<0)
#define GIT		(1<<1)
#define GTR		(1<<2)
#define IRQ_SPDUP	(1<<3)
#define VID_SPDUP	(1<<4)
#define SUSMOD		(1<<0)
#define SMISPDUP	(1<<1)
#define SUSCFG		(1<<2)
#define PWRSVE_ISA	(1<<3)
#define PWRSVE		(1<<4)
struct gxfreq_params ;
static struct gxfreq_params *gx_params;
static int stock_freq;
static int pci_busclk;
module_param(pci_busclk, int, 0444);
static int max_duration = 255;
module_param(max_duration, int, 0444);
#define POLICY_MIN_DIV 20
static int gx_freq_mult[16] = ;
static struct pci_device_id gx_chipset_tbl[] __initdata = ;
static void gx_write_byte(int reg, int value)
static __init struct pci_dev *gx_detect_chipset(void)
static unsigned int gx_get_cpuspeed(unsigned int cpu)
static unsigned int gx_validate_speed(unsigned int khz, u8 *on_duration,
u8 *off_duration)
static void gx_set_cpuspeed(unsigned int khz)
static int cpufreq_gx_verify(struct cpufreq_policy *policy)
static int cpufreq_gx_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static int cpufreq_gx_cpu_init(struct cpufreq_policy *policy)
static struct cpufreq_driver gx_suspmod_driver = ;
static int __init cpufreq_gx_init(void)
static void __exit cpufreq_gx_exit(void)
MODULE_AUTHOR("Hiroshi Miura <miura@da-cha.org>");
MODULE_DESCRIPTION("Cpufreq driver for Cyrix MediaGX and NatSemi Geode");
MODULE_LICENSE("GPL");
module_init(cpufreq_gx_init);
module_exit(cpufreq_gx_exit);
