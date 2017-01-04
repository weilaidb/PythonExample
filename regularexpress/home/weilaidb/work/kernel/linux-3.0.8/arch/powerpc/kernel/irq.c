#undef DEBUG
#define CREATE_TRACE_POINTS
DEFINE_PER_CPU_SHARED_ALIGNED(irq_cpustat_t, irq_stat);
EXPORT_PER_CPU_SYMBOL(irq_stat);
int __irq_offset_value;
EXPORT_SYMBOL(__irq_offset_value);
atomic_t ppc_n_lost_interrupts;
extern int tau_initialized;
extern int tau_interrupts(int);
EXPORT_SYMBOL(irq_desc);
int distribute_irqs = 1;
static inline notrace unsigned long get_hard_enabled(void)
static inline notrace void set_soft_enabled(unsigned long enable)
notrace void arch_local_irq_restore(unsigned long en)
EXPORT_SYMBOL(arch_local_irq_restore);
int arch_show_interrupts(struct seq_file *p, int prec)
u64 arch_irq_stat_cpu(unsigned int cpu)
void migrate_irqs(void)
static inline void handle_one_irq(unsigned int irq)
static inline void check_stack_overflow(void)
void do_IRQ(struct pt_regs *regs)
void __init init_IRQ(void)
#if defined(CONFIG_BOOKE) || defined(CONFIG_40x)
struct thread_info   *critirq_ctx[NR_CPUS] __read_mostly;
struct thread_info    *dbgirq_ctx[NR_CPUS] __read_mostly;
struct thread_info *mcheckirq_ctx[NR_CPUS] __read_mostly;
void exc_lvl_ctx_init(void)
struct thread_info *softirq_ctx[NR_CPUS] __read_mostly;
struct thread_info *hardirq_ctx[NR_CPUS] __read_mostly;
void irq_ctx_init(void)
static inline void do_softirq_onstack(void)
void do_softirq(void)
struct irq_map_entry ;
static LIST_HEAD(irq_hosts);
static DEFINE_RAW_SPINLOCK(irq_big_lock);
static DEFINE_MUTEX(revmap_trees_mutex);
static struct irq_map_entry irq_map[NR_IRQS];
static unsigned int irq_virq_count = NR_IRQS;
static struct irq_host *irq_default_host;
irq_hw_number_t irqd_to_hwirq(struct irq_data *d)
EXPORT_SYMBOL_GPL(irqd_to_hwirq);
irq_hw_number_t virq_to_hw(unsigned int virq)
EXPORT_SYMBOL_GPL(virq_to_hw);
bool virq_is_host(unsigned int virq, struct irq_host *host)
EXPORT_SYMBOL_GPL(virq_is_host);
static int default_irq_host_match(struct irq_host *h, struct device_node *np)
struct irq_host *irq_alloc_host(struct device_node *of_node,
unsigned int revmap_type,
unsigned int revmap_arg,
struct irq_host_ops *ops,
irq_hw_number_t inval_irq)
struct irq_host *irq_find_host(struct device_node *node)
EXPORT_SYMBOL_GPL(irq_find_host);
void irq_set_default_host(struct irq_host *host)
void irq_set_virq_count(unsigned int count)
static int irq_setup_virq(struct irq_host *host, unsigned int virq,
irq_hw_number_t hwirq)
unsigned int irq_create_direct_mapping(struct irq_host *host)
unsigned int irq_create_mapping(struct irq_host *host,
irq_hw_number_t hwirq)
EXPORT_SYMBOL_GPL(irq_create_mapping);
unsigned int irq_create_of_mapping(struct device_node *controller,
const u32 *intspec, unsigned int intsize)
EXPORT_SYMBOL_GPL(irq_create_of_mapping);
void irq_dispose_mapping(unsigned int virq)
EXPORT_SYMBOL_GPL(irq_dispose_mapping);
unsigned int irq_find_mapping(struct irq_host *host,
irq_hw_number_t hwirq)
EXPORT_SYMBOL_GPL(irq_find_mapping);
unsigned int irq_radix_revmap_lookup(struct irq_host *host,
irq_hw_number_t hwirq)
void irq_radix_revmap_insert(struct irq_host *host, unsigned int virq,
irq_hw_number_t hwirq)
unsigned int irq_linear_revmap(struct irq_host *host,
irq_hw_number_t hwirq)
unsigned int irq_alloc_virt(struct irq_host *host,
unsigned int count,
unsigned int hint)
void irq_free_virt(unsigned int virq, unsigned int count)
int arch_early_irq_init(void)
static int virq_debug_show(struct seq_file *m, void *private)
static int virq_debug_open(struct inode *inode, struct file *file)
static const struct file_operations virq_debug_fops = ;
static int __init irq_debugfs_init(void)
__initcall(irq_debugfs_init);
static int __init setup_noirqdistrib(char *str)
__setup("noirqdistrib", setup_noirqdistrib);
