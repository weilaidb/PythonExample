static struct cbe_regs_map
cbe_regs_maps[MAX_CBE];
static int cbe_regs_map_count;
static struct cbe_thread_map
cbe_thread_map[NR_CPUS];
static cpumask_t cbe_local_mask[MAX_CBE] = ;
static cpumask_t cbe_first_online_cpu = ;
static struct cbe_regs_map *cbe_find_map(struct device_node *np)
struct cbe_pmd_regs __iomem *cbe_get_pmd_regs(struct device_node *np)
EXPORT_SYMBOL_GPL(cbe_get_pmd_regs);
struct cbe_pmd_regs __iomem *cbe_get_cpu_pmd_regs(int cpu)
EXPORT_SYMBOL_GPL(cbe_get_cpu_pmd_regs);
struct cbe_pmd_shadow_regs *cbe_get_pmd_shadow_regs(struct device_node *np)
struct cbe_pmd_shadow_regs *cbe_get_cpu_pmd_shadow_regs(int cpu)
struct cbe_iic_regs __iomem *cbe_get_iic_regs(struct device_node *np)
struct cbe_iic_regs __iomem *cbe_get_cpu_iic_regs(int cpu)
struct cbe_mic_tm_regs __iomem *cbe_get_mic_tm_regs(struct device_node *np)
struct cbe_mic_tm_regs __iomem *cbe_get_cpu_mic_tm_regs(int cpu)
EXPORT_SYMBOL_GPL(cbe_get_cpu_mic_tm_regs);
u32 cbe_get_hw_thread_id(int cpu)
EXPORT_SYMBOL_GPL(cbe_get_hw_thread_id);
u32 cbe_cpu_to_node(int cpu)
EXPORT_SYMBOL_GPL(cbe_cpu_to_node);
u32 cbe_node_to_cpu(int node)
EXPORT_SYMBOL_GPL(cbe_node_to_cpu);
static struct device_node *cbe_get_be_node(int cpu_id)
void __init cbe_fill_regs_map(struct cbe_regs_map *map)
void __init cbe_regs_init(void)
