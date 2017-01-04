static DEFINE_PER_CPU(struct cpu, cpu_devices);
DEFINE_PER_CPU(long, smt_snooze_delay) = ;
static ssize_t store_smt_snooze_delay(struct sys_device *dev,
struct sysdev_attribute *attr,
const char *buf,
size_t count)
static ssize_t show_smt_snooze_delay(struct sys_device *dev,
struct sysdev_attribute *attr,
char *buf)
static SYSDEV_ATTR(smt_snooze_delay, 0644, show_smt_snooze_delay,
store_smt_snooze_delay);
static int __init setup_smt_snooze_delay(char *str)
__setup("smt-snooze-delay=", setup_smt_snooze_delay);
static DEFINE_PER_CPU(char, pmcs_enabled);
void ppc_enable_pmcs(void)
EXPORT_SYMBOL(ppc_enable_pmcs);
#define SYSFS_PMCSETUP(NAME, ADDRESS) \
static void read_##NAME(void *val) \
\
static void write_##NAME(void *val) \
\
static ssize_t show_##NAME(struct sys_device *dev, \
struct sysdev_attribute *attr, \
char *buf) \
\
static ssize_t __used \
store_##NAME(struct sys_device *dev, struct sysdev_attribute *attr, \
const char *buf, size_t count) \
#if defined(CONFIG_PPC64)
#define HAS_PPC_PMC_CLASSIC	1
#define HAS_PPC_PMC_IBM		1
#define HAS_PPC_PMC_PA6T	1
#elif defined(CONFIG_6xx)
#define HAS_PPC_PMC_CLASSIC	1
#define HAS_PPC_PMC_IBM		1
#define HAS_PPC_PMC_G4		1
SYSFS_PMCSETUP(mmcr0, SPRN_MMCR0);
SYSFS_PMCSETUP(mmcr1, SPRN_MMCR1);
SYSFS_PMCSETUP(pmc1, SPRN_PMC1);
SYSFS_PMCSETUP(pmc2, SPRN_PMC2);
SYSFS_PMCSETUP(pmc3, SPRN_PMC3);
SYSFS_PMCSETUP(pmc4, SPRN_PMC4);
SYSFS_PMCSETUP(pmc5, SPRN_PMC5);
SYSFS_PMCSETUP(pmc6, SPRN_PMC6);
SYSFS_PMCSETUP(mmcr2, SPRN_MMCR2);
SYSFS_PMCSETUP(pmc7, SPRN_PMC7);
SYSFS_PMCSETUP(pmc8, SPRN_PMC8);
SYSFS_PMCSETUP(mmcra, SPRN_MMCRA);
SYSFS_PMCSETUP(purr, SPRN_PURR);
SYSFS_PMCSETUP(spurr, SPRN_SPURR);
SYSFS_PMCSETUP(dscr, SPRN_DSCR);
static SYSDEV_ATTR(mmcra, 0600, show_mmcra, store_mmcra);
static SYSDEV_ATTR(spurr, 0600, show_spurr, NULL);
static SYSDEV_ATTR(dscr, 0600, show_dscr, store_dscr);
static SYSDEV_ATTR(purr, 0600, show_purr, store_purr);
unsigned long dscr_default = 0;
EXPORT_SYMBOL(dscr_default);
static ssize_t show_dscr_default(struct sysdev_class *class,
struct sysdev_class_attribute *attr, char *buf)
static ssize_t __used store_dscr_default(struct sysdev_class *class,
struct sysdev_class_attribute *attr, const char *buf,
size_t count)
static SYSDEV_CLASS_ATTR(dscr_default, 0600,
show_dscr_default, store_dscr_default);
static void sysfs_create_dscr_default(void)
SYSFS_PMCSETUP(pa6t_pmc0, SPRN_PA6T_PMC0);
SYSFS_PMCSETUP(pa6t_pmc1, SPRN_PA6T_PMC1);
SYSFS_PMCSETUP(pa6t_pmc2, SPRN_PA6T_PMC2);
SYSFS_PMCSETUP(pa6t_pmc3, SPRN_PA6T_PMC3);
SYSFS_PMCSETUP(pa6t_pmc4, SPRN_PA6T_PMC4);
SYSFS_PMCSETUP(pa6t_pmc5, SPRN_PA6T_PMC5);
SYSFS_PMCSETUP(hid0, SPRN_HID0);
SYSFS_PMCSETUP(hid1, SPRN_HID1);
SYSFS_PMCSETUP(hid4, SPRN_HID4);
SYSFS_PMCSETUP(hid5, SPRN_HID5);
SYSFS_PMCSETUP(ima0, SPRN_PA6T_IMA0);
SYSFS_PMCSETUP(ima1, SPRN_PA6T_IMA1);
SYSFS_PMCSETUP(ima2, SPRN_PA6T_IMA2);
SYSFS_PMCSETUP(ima3, SPRN_PA6T_IMA3);
SYSFS_PMCSETUP(ima4, SPRN_PA6T_IMA4);
SYSFS_PMCSETUP(ima5, SPRN_PA6T_IMA5);
SYSFS_PMCSETUP(ima6, SPRN_PA6T_IMA6);
SYSFS_PMCSETUP(ima7, SPRN_PA6T_IMA7);
SYSFS_PMCSETUP(ima8, SPRN_PA6T_IMA8);
SYSFS_PMCSETUP(ima9, SPRN_PA6T_IMA9);
SYSFS_PMCSETUP(imaat, SPRN_PA6T_IMAAT);
SYSFS_PMCSETUP(btcr, SPRN_PA6T_BTCR);
SYSFS_PMCSETUP(pccr, SPRN_PA6T_PCCR);
SYSFS_PMCSETUP(rpccr, SPRN_PA6T_RPCCR);
SYSFS_PMCSETUP(der, SPRN_PA6T_DER);
SYSFS_PMCSETUP(mer, SPRN_PA6T_MER);
SYSFS_PMCSETUP(ber, SPRN_PA6T_BER);
SYSFS_PMCSETUP(ier, SPRN_PA6T_IER);
SYSFS_PMCSETUP(sier, SPRN_PA6T_SIER);
SYSFS_PMCSETUP(siar, SPRN_PA6T_SIAR);
SYSFS_PMCSETUP(tsr0, SPRN_PA6T_TSR0);
SYSFS_PMCSETUP(tsr1, SPRN_PA6T_TSR1);
SYSFS_PMCSETUP(tsr2, SPRN_PA6T_TSR2);
SYSFS_PMCSETUP(tsr3, SPRN_PA6T_TSR3);
static struct sysdev_attribute ibm_common_attrs[] = ;
static struct sysdev_attribute g4_common_attrs[] = ;
static struct sysdev_attribute classic_pmc_attrs[] = ;
static struct sysdev_attribute pa6t_attrs[] = ;
static void __cpuinit register_cpu_online(unsigned int cpu)
static void unregister_cpu_online(unsigned int cpu)
ssize_t arch_cpu_probe(const char *buf, size_t count)
ssize_t arch_cpu_release(const char *buf, size_t count)
static int __cpuinit sysfs_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
static struct notifier_block __cpuinitdata sysfs_cpu_nb = ;
static DEFINE_MUTEX(cpu_mutex);
int cpu_add_sysdev_attr(struct sysdev_attribute *attr)
EXPORT_SYMBOL_GPL(cpu_add_sysdev_attr);
int cpu_add_sysdev_attr_group(struct attribute_group *attrs)
EXPORT_SYMBOL_GPL(cpu_add_sysdev_attr_group);
void cpu_remove_sysdev_attr(struct sysdev_attribute *attr)
EXPORT_SYMBOL_GPL(cpu_remove_sysdev_attr);
void cpu_remove_sysdev_attr_group(struct attribute_group *attrs)
EXPORT_SYMBOL_GPL(cpu_remove_sysdev_attr_group);
static void register_nodes(void)
int sysfs_add_device_to_node(struct sys_device *dev, int nid)
EXPORT_SYMBOL_GPL(sysfs_add_device_to_node);
void sysfs_remove_device_from_node(struct sys_device *dev, int nid)
EXPORT_SYMBOL_GPL(sysfs_remove_device_from_node);
static void register_nodes(void)
static ssize_t show_physical_id(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static SYSDEV_ATTR(physical_id, 0444, show_physical_id, NULL);
static int __init topology_init(void)
subsys_initcall(topology_init);
