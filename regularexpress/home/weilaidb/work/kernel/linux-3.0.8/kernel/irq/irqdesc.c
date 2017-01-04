static struct lock_class_key irq_desc_lock_class;
#if defined(CONFIG_SMP)
static void __init init_irq_default_affinity(void)
static void __init init_irq_default_affinity(void)
static int alloc_masks(struct irq_desc *desc, gfp_t gfp, int node)
static void desc_smp_init(struct irq_desc *desc, int node)
static inline int desc_node(struct irq_desc *desc)
static inline int
alloc_masks(struct irq_desc *desc, gfp_t gfp, int node)
static inline void desc_smp_init(struct irq_desc *desc, int node)
static inline int desc_node(struct irq_desc *desc)
static void desc_set_defaults(unsigned int irq, struct irq_desc *desc, int node)
int nr_irqs = NR_IRQS;
EXPORT_SYMBOL_GPL(nr_irqs);
static DEFINE_MUTEX(sparse_irq_lock);
static DECLARE_BITMAP(allocated_irqs, IRQ_BITMAP_BITS);
static RADIX_TREE(irq_desc_tree, GFP_KERNEL);
static void irq_insert_desc(unsigned int irq, struct irq_desc *desc)
struct irq_desc *irq_to_desc(unsigned int irq)
static void delete_irq_desc(unsigned int irq)
static void free_masks(struct irq_desc *desc)
static inline void free_masks(struct irq_desc *desc)
static struct irq_desc *alloc_desc(int irq, int node)
static void free_desc(unsigned int irq)
static int alloc_descs(unsigned int start, unsigned int cnt, int node)
static int irq_expand_nr_irqs(unsigned int nr)
int __init early_irq_init(void)
struct irq_desc irq_desc[NR_IRQS] __cacheline_aligned_in_smp = ;
int __init early_irq_init(void)
struct irq_desc *irq_to_desc(unsigned int irq)
static void free_desc(unsigned int irq)
static inline int alloc_descs(unsigned int start, unsigned int cnt, int node)
static int irq_expand_nr_irqs(unsigned int nr)
int generic_handle_irq(unsigned int irq)
EXPORT_SYMBOL_GPL(generic_handle_irq);
void irq_free_descs(unsigned int from, unsigned int cnt)
EXPORT_SYMBOL_GPL(irq_free_descs);
int __ref
irq_alloc_descs(int irq, unsigned int from, unsigned int cnt, int node)
EXPORT_SYMBOL_GPL(irq_alloc_descs);
int irq_reserve_irqs(unsigned int from, unsigned int cnt)
unsigned int irq_get_next_irq(unsigned int offset)
struct irq_desc *
__irq_get_desc_lock(unsigned int irq, unsigned long *flags, bool bus)
void __irq_put_desc_unlock(struct irq_desc *desc, unsigned long flags, bool bus)
void dynamic_irq_cleanup(unsigned int irq)
unsigned int kstat_irqs_cpu(unsigned int irq, int cpu)
unsigned int kstat_irqs(unsigned int irq)
