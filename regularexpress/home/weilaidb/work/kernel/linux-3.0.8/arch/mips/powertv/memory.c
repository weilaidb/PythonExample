#define KIBIBYTE(n)		((n) * 1024)
#define MEBIBYTE(n)		((n) * KIBIBYTE(1024))
#define DEFAULT_MEMSIZE		MEBIBYTE(128)
#define BLDR_SIZE	KIBIBYTE(256)
#define RV_SIZE		MEBIBYTE(4)
#define LOW_MEM_END	0x20000000
#define BLDR_ALIAS	0x10000000
#define RV_PHYS		0x1fc00000
#define LOW_RAM_END	RV_PHYS
#define PHYS_TO_DMA(paddr)	((paddr) + (CONFIG_LOW_RAM_DMA - LOW_RAM_ALIAS))
unsigned long ptv_memsize;
struct low_mem_reserved ;
struct low_mem_reserved low_mem_reserved[] = ;
struct mem_layout ;
struct mem_layout_list ;
static struct mem_layout f1500_layout[] = ;
static struct mem_layout f4500_layout[] = ;
static struct mem_layout f8500_layout[] = ;
static struct mem_layout fx600_layout[] = ;
static struct mem_layout_list layout_list[] = ;
static struct mem_layout default_layout[] = ;
static __init void register_non_ram(void)
static phys_addr_t get_memsize(void)
static __init phys_addr_t register_low_ram(phys_addr_t p, phys_addr_t n)
static __init void register_ram(phys_addr_t p, phys_addr_t alias,
phys_addr_t n)
static __init void register_address_space(phys_addr_t memsize)
void __init prom_meminit(void)
void __init prom_free_prom_memory(void)
