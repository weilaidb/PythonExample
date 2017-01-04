#define PCI_DEBUG
#undef PCI_DEBUG
static char __initdata command_line[COMMAND_LINE_SIZE];
struct proc_dir_entry * proc_runway_root __read_mostly = NULL;
struct proc_dir_entry * proc_gsc_root __read_mostly = NULL;
struct proc_dir_entry * proc_mckinley_root __read_mostly = NULL;
#if !defined(CONFIG_PA20) && (defined(CONFIG_IOMMU_CCIO) || defined(CONFIG_IOMMU_SBA))
int parisc_bus_is_phys __read_mostly = 1;
EXPORT_SYMBOL(parisc_bus_is_phys);
void __init setup_cmdline(char **cmdline_p)
void __init dma_ops_init(void)
extern int init_per_cpu(int cpuid);
extern void collect_boot_cpu_data(void);
void __init setup_arch(char **cmdline_p)
extern int show_cpuinfo (struct seq_file *m, void *v);
static void *
c_start (struct seq_file *m, loff_t *pos)
static void *
c_next (struct seq_file *m, void *v, loff_t *pos)
static void
c_stop (struct seq_file *m, void *v)
const struct seq_operations cpuinfo_op = ;
static void __init parisc_proc_mkdir(void)
static struct resource central_bus = ;
static struct resource local_broadcast = ;
static struct resource global_broadcast = ;
static int __init parisc_init_resources(void)
extern void gsc_init(void);
extern void processor_init(void);
extern void ccio_init(void);
extern void hppb_init(void);
extern void dino_init(void);
extern void iosapic_init(void);
extern void lba_init(void);
extern void sba_init(void);
extern void eisa_init(void);
static int __init parisc_init(void)
arch_initcall(parisc_init);
void start_parisc(void)
