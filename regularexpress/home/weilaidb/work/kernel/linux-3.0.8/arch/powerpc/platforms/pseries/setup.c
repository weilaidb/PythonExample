int CMO_PrPSP = -1;
int CMO_SecPSP = -1;
unsigned long CMO_PageSize = (ASM_CONST(1) << IOMMU_PAGE_SHIFT);
EXPORT_SYMBOL(CMO_PageSize);
int fwnmi_active;
static void pseries_shared_idle_sleep(void);
static void pseries_dedicated_idle_sleep(void);
static struct device_node *pSeries_mpic_node;
static void pSeries_show_cpuinfo(struct seq_file *m)
static void __init fwnmi_init(void)
static void pseries_8259_cascade(unsigned int irq, struct irq_desc *desc)
static void __init pseries_setup_i8259_cascade(void)
static void __init pseries_mpic_init_IRQ(void)
static void __init pseries_xics_init_IRQ(void)
static void pseries_lpar_enable_pmcs(void)
static void __init pseries_discover_pic(void)
static int pci_dn_reconfig_notifier(struct notifier_block *nb, unsigned long action, void *node)
static struct notifier_block pci_dn_reconfig_nb = ;
struct kmem_cache *dtl_cache;
static int alloc_dispatch_logs(void)
static inline int alloc_dispatch_logs(void)
static int alloc_dispatch_log_kmem_cache(void)
early_initcall(alloc_dispatch_log_kmem_cache);
static void __init pSeries_setup_arch(void)
static int __init pSeries_init_panel(void)
machine_arch_initcall(pseries, pSeries_init_panel);
static int pseries_set_dabr(unsigned long dabr)
static int pseries_set_xdabr(unsigned long dabr)
#define CMO_CHARACTERISTICS_TOKEN 44
#define CMO_MAXLENGTH 1026
void pSeries_coalesce_init(void)
void pSeries_cmo_feature_init(void)
static void __init pSeries_init_early(void)
static int __init pSeries_probe_hypertas(unsigned long node,
const char *uname, int depth,
void *data)
static int __init pSeries_probe(void)
DECLARE_PER_CPU(long, smt_snooze_delay);
static void pseries_dedicated_idle_sleep(void)
static void pseries_shared_idle_sleep(void)
static int pSeries_pci_probe_mode(struct pci_bus *bus)
static void pSeries_power_off(void)
void pSeries_final_fixup(void)
define_machine(pseries) ;
