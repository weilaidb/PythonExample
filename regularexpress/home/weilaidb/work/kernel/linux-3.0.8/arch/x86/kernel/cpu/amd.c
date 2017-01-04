# include <asm/numa_64.h>
# include <asm/mmconfig.h>
# include <asm/cacheflush.h>
extern void vide(void);
__asm__(".align 4\nvide: ret");
static void __cpuinit init_amd_k5(struct cpuinfo_x86 *c)
static void __cpuinit init_amd_k6(struct cpuinfo_x86 *c)
static void __cpuinit amd_k7_smp_check(struct cpuinfo_x86 *c)
static void __cpuinit init_amd_k7(struct cpuinfo_x86 *c)
static int __cpuinit nearby_node(int apicid)
static void __cpuinit amd_get_topology(struct cpuinfo_x86 *c)
static void __cpuinit amd_detect_cmp(struct cpuinfo_x86 *c)
int amd_get_nb_id(int cpu)
EXPORT_SYMBOL_GPL(amd_get_nb_id);
static void __cpuinit srat_detect_node(struct cpuinfo_x86 *c)
static void __cpuinit early_init_amd_mc(struct cpuinfo_x86 *c)
static void __cpuinit early_init_amd(struct cpuinfo_x86 *c)
static void __cpuinit init_amd(struct cpuinfo_x86 *c)
static unsigned int __cpuinit amd_size_cache(struct cpuinfo_x86 *c,
unsigned int size)
static const struct cpu_dev __cpuinitconst amd_cpu_dev = ;
cpu_dev_register(amd_cpu_dev);
const int amd_erratum_400[] =
AMD_OSVW_ERRATUM(1, AMD_MODEL_RANGE(0xf, 0x41, 0x2, 0xff, 0xf),
AMD_MODEL_RANGE(0x10, 0x2, 0x1, 0xff, 0xf));
EXPORT_SYMBOL_GPL(amd_erratum_400);
const int amd_erratum_383[] =
AMD_OSVW_ERRATUM(3, AMD_MODEL_RANGE(0x10, 0, 0, 0xff, 0xf));
EXPORT_SYMBOL_GPL(amd_erratum_383);
bool cpu_has_amd_erratum(const int *erratum)
EXPORT_SYMBOL_GPL(cpu_has_amd_erratum);
