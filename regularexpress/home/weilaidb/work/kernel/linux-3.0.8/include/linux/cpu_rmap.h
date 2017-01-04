struct cpu_rmap ;
#define CPU_RMAP_DIST_INF 0xffff
extern struct cpu_rmap *alloc_cpu_rmap(unsigned int size, gfp_t flags);
static inline void free_cpu_rmap(struct cpu_rmap *rmap)
extern int cpu_rmap_add(struct cpu_rmap *rmap, void *obj);
extern int cpu_rmap_update(struct cpu_rmap *rmap, u16 index,
const struct cpumask *affinity);
static inline u16 cpu_rmap_lookup_index(struct cpu_rmap *rmap, unsigned int cpu)
static inline void *cpu_rmap_lookup_obj(struct cpu_rmap *rmap, unsigned int cpu)
static inline struct cpu_rmap *alloc_irq_cpu_rmap(unsigned int size)
extern void free_irq_cpu_rmap(struct cpu_rmap *rmap);
extern int irq_cpu_rmap_add(struct cpu_rmap *rmap, int irq);
