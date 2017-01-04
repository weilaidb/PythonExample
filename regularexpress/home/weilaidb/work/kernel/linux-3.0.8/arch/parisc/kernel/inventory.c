#undef DEBUG_PAT
int pdc_type __read_mostly = PDC_TYPE_ILLEGAL;
void __init setup_pdc(void)
#define PDC_PAGE_ADJ_SHIFT (PAGE_SHIFT - 12)
static void __init
set_pmem_entry(physmem_range_t *pmem_ptr, unsigned long start,
unsigned long pages4k)
static void __init pagezero_memconfig(void)
static int __init
pat_query_module(ulong pcell_loc, ulong mod_index)
#define PAT_MAX_RANGES (4 * MAX_PHYSMEM_RANGES)
static void __init pat_memconfig(void)
static int __init pat_inventory(void)
static void __init sprockets_memconfig(void)
#define pat_inventory() do  while (0)
#define pat_memconfig() do  while (0)
#define sprockets_memconfig() pagezero_memconfig()
static struct parisc_device * __init
legacy_create_device(struct pdc_memory_map *r_addr,
struct pdc_module_path *module_path)
static void __init snake_inventory(void)
#define snake_inventory() do  while (0)
static void __init
add_system_map_addresses(struct parisc_device *dev, int num_addrs,
int module_instance)
static void __init system_map_inventory(void)
void __init do_memory_inventory(void)
void __init do_device_inventory(void)
