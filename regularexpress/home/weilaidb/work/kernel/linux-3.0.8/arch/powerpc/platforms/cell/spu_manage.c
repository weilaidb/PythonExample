struct device_node *spu_devnode(struct spu *spu)
EXPORT_SYMBOL_GPL(spu_devnode);
static u64 __init find_spu_unit_number(struct device_node *spe)
static void spu_unmap(struct spu *spu)
static int __init spu_map_interrupts_old(struct spu *spu,
struct device_node *np)
static void __iomem * __init spu_map_prop_old(struct spu *spu,
struct device_node *n,
const char *name)
static int __init spu_map_device_old(struct spu *spu)
static int __init spu_map_interrupts(struct spu *spu, struct device_node *np)
static int spu_map_resource(struct spu *spu, int nr,
void __iomem** virt, unsigned long *phys)
static int __init spu_map_device(struct spu *spu)
static int __init of_enumerate_spus(int (*fn)(void *data))
static int __init of_create_spu(struct spu *spu, void *data)
static int of_destroy_spu(struct spu *spu)
static void enable_spu_by_master_run(struct spu_context *ctx)
static void disable_spu_by_master_run(struct spu_context *ctx)
#define QS20_SPES_PER_BE 8
static int qs20_reg_idxs[QS20_SPES_PER_BE] =   ;
static int qs20_reg_memory[QS20_SPES_PER_BE] = ;
static struct spu *spu_lookup_reg(int node, u32 reg)
static void init_affinity_qs20_harcoded(void)
static int of_has_vicinity(void)
static struct spu *devnode_spu(int cbe, struct device_node *dn)
static struct spu *
neighbour_spu(int cbe, struct device_node *target, struct device_node *avoid)
static void init_affinity_node(int cbe)
static void init_affinity_fw(void)
static int __init init_affinity(void)
const struct spu_management_ops spu_management_of_ops = ;
