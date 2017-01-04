#define BOOTLDRFAMILY(byte1, byte0) (((byte1) << 8) | (byte0))
static void pmem_setup_resource(void);
enum asic_type asic;
unsigned int platform_features;
unsigned int platform_family;
struct register_map _asic_register_map;
EXPORT_SYMBOL(_asic_register_map);
unsigned long asic_phy_base;
unsigned long asic_base;
EXPORT_SYMBOL(asic_base);
struct resource *gp_resources;
unsigned long phys_to_dma_offset;
EXPORT_SYMBOL(phys_to_dma_offset);
struct resource asic_resource = ;
static char __initdata cmdline[COMMAND_LINE_SIZE];
#define	FORCEFAMILY_PARAM	"forcefamily"
static __init int check_forcefamily(unsigned char forced_family[2])
static __init noinline void platform_set_family(void)
unsigned int platform_get_family(void)
EXPORT_SYMBOL(platform_get_family);
enum asic_type platform_get_asic(void)
EXPORT_SYMBOL(platform_get_asic);
static void __init set_register_map(unsigned long phys_base,
const struct register_map *map)
void __init configure_platform(void)
void __init platform_alloc_bootmem(void)
static unsigned long pmemaddr __initdata;
static int __init early_param_pmemaddr(char *p)
early_param("pmemaddr", early_param_pmemaddr);
static long pmemlen __initdata;
static int __init early_param_pmemlen(char *p)
early_param("pmemlen", early_param_pmemlen);
static void __init pmem_setup_resource(void)
struct resource *asic_resource_get(const char *name)
EXPORT_SYMBOL(asic_resource_get);
void platform_release_memory(void *ptr, int size)
EXPORT_SYMBOL(platform_release_memory);
int platform_supports_dvr(void)
int platform_supports_ffs(void)
int platform_supports_pcie(void)
int platform_supports_display(void)
