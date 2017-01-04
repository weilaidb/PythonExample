int __first_cpu(const cpumask_t *srcp)
EXPORT_SYMBOL(__first_cpu);
int __next_cpu(int n, const cpumask_t *srcp)
EXPORT_SYMBOL(__next_cpu);
#if NR_CPUS > 64
int __next_cpu_nr(int n, const cpumask_t *srcp)
EXPORT_SYMBOL(__next_cpu_nr);
int __any_online_cpu(const cpumask_t *mask)
EXPORT_SYMBOL(__any_online_cpu);
int cpumask_next_and(int n, const struct cpumask *src1p,
const struct cpumask *src2p)
EXPORT_SYMBOL(cpumask_next_and);
int cpumask_any_but(const struct cpumask *mask, unsigned int cpu)
bool alloc_cpumask_var_node(cpumask_var_t *mask, gfp_t flags, int node)
EXPORT_SYMBOL(alloc_cpumask_var_node);
bool zalloc_cpumask_var_node(cpumask_var_t *mask, gfp_t flags, int node)
EXPORT_SYMBOL(zalloc_cpumask_var_node);
bool alloc_cpumask_var(cpumask_var_t *mask, gfp_t flags)
EXPORT_SYMBOL(alloc_cpumask_var);
bool zalloc_cpumask_var(cpumask_var_t *mask, gfp_t flags)
EXPORT_SYMBOL(zalloc_cpumask_var);
void __init alloc_bootmem_cpumask_var(cpumask_var_t *mask)
void free_cpumask_var(cpumask_var_t mask)
EXPORT_SYMBOL(free_cpumask_var);
void __init free_bootmem_cpumask_var(cpumask_var_t mask)
