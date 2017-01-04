#define GART_MIN_ADDR	(512ULL << 20)
#define GART_MAX_ADDR	(1ULL   << 32)
int gart_iommu_aperture;
int gart_iommu_aperture_disabled __initdata;
int gart_iommu_aperture_allowed __initdata;
int fallback_aper_order __initdata = 1;
int fallback_aper_force __initdata;
int fix_aperture __initdata = 1;
static struct resource gart_resource = ;
static void __init insert_aperture_resource(u32 aper_base, u32 aper_size)
static u32 __init allocate_aperture(void)
static u32 __init find_cap(int bus, int slot, int func, int cap)
static u32 __init read_agp(int bus, int slot, int func, int cap, u32 *order)
static u32 __init search_agp_bridge(u32 *order, int *valid_agp)
static int gart_fix_e820 __initdata = 1;
static int __init parse_gart_mem(char *p)
early_param("gart_fix_e820", parse_gart_mem);
void __init early_gart_iommu_check(void)
static int __initdata printed_gart_size_msg;
int __init gart_iommu_hole_init(void)
