struct cpu_rmap *alloc_cpu_rmap(unsigned int size, gfp_t flags)
EXPORT_SYMBOL(alloc_cpu_rmap);
static bool cpu_rmap_copy_neigh(struct cpu_rmap *rmap, unsigned int cpu,
const struct cpumask *mask, u16 dist)
static void debug_print_rmap(const struct cpu_rmap *rmap, const char *prefix)
static inline void
debug_print_rmap(const struct cpu_rmap *rmap, const char *prefix)
int cpu_rmap_add(struct cpu_rmap *rmap, void *obj)
EXPORT_SYMBOL(cpu_rmap_add);
int cpu_rmap_update(struct cpu_rmap *rmap, u16 index,
const struct cpumask *affinity)
EXPORT_SYMBOL(cpu_rmap_update);
struct irq_glue ;
void free_irq_cpu_rmap(struct cpu_rmap *rmap)
EXPORT_SYMBOL(free_irq_cpu_rmap);
static void
irq_cpu_rmap_notify(struct irq_affinity_notify *notify, const cpumask_t *mask)
static void irq_cpu_rmap_release(struct kref *ref)
int irq_cpu_rmap_add(struct cpu_rmap *rmap, int irq)
EXPORT_SYMBOL(irq_cpu_rmap_add);
