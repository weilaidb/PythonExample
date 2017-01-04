static DEFINE_PER_CPU(struct cpu, cpu_devices);
static ssize_t show_pc0event(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static ssize_t store_pc0event(struct sys_device *dev,
struct sysdev_attribute *attr, const char *buf,
size_t count)
static ssize_t show_pc0count(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static ssize_t store_pc0count(struct sys_device *dev,
struct sysdev_attribute *attr,
const char *buf, size_t count)
static ssize_t show_pc1event(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static ssize_t store_pc1event(struct sys_device *dev,
struct sysdev_attribute *attr, const char *buf,
size_t count)
static ssize_t show_pc1count(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static ssize_t store_pc1count(struct sys_device *dev,
struct sysdev_attribute *attr, const char *buf,
size_t count)
static ssize_t show_pccycles(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static ssize_t store_pccycles(struct sys_device *dev,
struct sysdev_attribute *attr, const char *buf,
size_t count)
static ssize_t show_pcenable(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static ssize_t store_pcenable(struct sys_device *dev,
struct sysdev_attribute *attr, const char *buf,
size_t count)
static SYSDEV_ATTR(pc0event, 0600, show_pc0event, store_pc0event);
static SYSDEV_ATTR(pc0count, 0600, show_pc0count, store_pc0count);
static SYSDEV_ATTR(pc1event, 0600, show_pc1event, store_pc1event);
static SYSDEV_ATTR(pc1count, 0600, show_pc1count, store_pc1count);
static SYSDEV_ATTR(pccycles, 0600, show_pccycles, store_pccycles);
static SYSDEV_ATTR(pcenable, 0600, show_pcenable, store_pcenable);
static int __init topology_init(void)
subsys_initcall(topology_init);
struct chip_id_map ;
static const struct chip_id_map chip_names[] = ;
#define NR_CHIP_NAMES ARRAY_SIZE(chip_names)
static const char *cpu_names[] = ;
#define NR_CPU_NAMES ARRAY_SIZE(cpu_names)
static const char *arch_names[] = ;
#define NR_ARCH_NAMES ARRAY_SIZE(arch_names)
static const char *mmu_types[] = ;
static const char *cpu_feature_flags[] = ;
static const char *get_chip_name(struct avr32_cpuinfo *cpu)
void __init setup_processor(void)
static int c_show(struct seq_file *m, void *v)
static void *c_start(struct seq_file *m, loff_t *pos)
static void *c_next(struct seq_file *m, void *v, loff_t *pos)
static void c_stop(struct seq_file *m, void *v)
const struct seq_operations cpuinfo_op = ;
