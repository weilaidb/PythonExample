enum spe_type ;
struct spe_shadow ;
enum spe_ex_state ;
struct priv1_cache ;
struct spu_pdata ;
static struct spu_pdata *spu_pdata(struct spu *spu)
#define dump_areas(_a, _b, _c, _d, _e) \
_dump_areas(_a, _b, _c, _d, _e, __func__, __LINE__)
static void _dump_areas(unsigned int spe_id, unsigned long priv2,
unsigned long problem, unsigned long ls, unsigned long shadow,
const char* func, int line)
inline u64 ps3_get_spe_id(void *arg)
EXPORT_SYMBOL_GPL(ps3_get_spe_id);
static unsigned long get_vas_id(void)
static int __init construct_spu(struct spu *spu)
static void spu_unmap(struct spu *spu)
static int __init setup_areas(struct spu *spu)
static int __init setup_interrupts(struct spu *spu)
static int __init enable_spu(struct spu *spu)
static int ps3_destroy_spu(struct spu *spu)
static int __init ps3_create_spu(struct spu *spu, void *data)
static int __init ps3_enumerate_spus(int (*fn)(void *data))
static int ps3_init_affinity(void)
static void ps3_enable_spu(struct spu_context *ctx)
static void ps3_disable_spu(struct spu_context *ctx)
const struct spu_management_ops spu_management_ps3_ops = ;
static void int_mask_and(struct spu *spu, int class, u64 mask)
static void int_mask_or(struct spu *spu, int class, u64 mask)
static void int_mask_set(struct spu *spu, int class, u64 mask)
static u64 int_mask_get(struct spu *spu, int class)
static void int_stat_clear(struct spu *spu, int class, u64 stat)
static u64 int_stat_get(struct spu *spu, int class)
static void cpu_affinity_set(struct spu *spu, int cpu)
static u64 mfc_dar_get(struct spu *spu)
static void mfc_dsisr_set(struct spu *spu, u64 dsisr)
static u64 mfc_dsisr_get(struct spu *spu)
static void mfc_sdr_setup(struct spu *spu)
static void mfc_sr1_set(struct spu *spu, u64 sr1)
static u64 mfc_sr1_get(struct spu *spu)
static void mfc_tclass_id_set(struct spu *spu, u64 tclass_id)
static u64 mfc_tclass_id_get(struct spu *spu)
static void tlb_invalidate(struct spu *spu)
static void resource_allocation_groupID_set(struct spu *spu, u64 id)
static u64 resource_allocation_groupID_get(struct spu *spu)
static void resource_allocation_enable_set(struct spu *spu, u64 enable)
static u64 resource_allocation_enable_get(struct spu *spu)
const struct spu_priv1_ops spu_priv1_ps3_ops = ;
void ps3_spu_set_platform(void)
