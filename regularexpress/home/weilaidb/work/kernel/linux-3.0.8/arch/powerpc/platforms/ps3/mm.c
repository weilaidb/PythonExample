#if defined(DEBUG)
#define DBG udbg_printf
#define DBG pr_devel
enum ;
enum ;
static unsigned long make_page_sizes(unsigned long a, unsigned long b)
enum ;
enum ;
struct mem_region ;
struct map ;
#define debug_dump_map(x) _debug_dump_map(x, __func__, __LINE__)
static void __maybe_unused _debug_dump_map(const struct map *m,
const char *func, int line)
static struct map map;
unsigned long ps3_mm_phys_to_lpar(unsigned long phys_addr)
EXPORT_SYMBOL(ps3_mm_phys_to_lpar);
void __init ps3_mm_vas_create(unsigned long* htab_size)
void ps3_mm_vas_destroy(void)
static int ps3_mm_region_create(struct mem_region *r, unsigned long size)
static void ps3_mm_region_destroy(struct mem_region *r)
static int __init ps3_mm_add_memory(void)
device_initcall(ps3_mm_add_memory);
static unsigned long dma_sb_lpar_to_bus(struct ps3_dma_region *r,
unsigned long lpar_addr)
#define dma_dump_region(_a) _dma_dump_region(_a, __func__, __LINE__)
static void  __maybe_unused _dma_dump_region(const struct ps3_dma_region *r,
const char *func, int line)
struct dma_chunk ;
#define dma_dump_chunk(_a) _dma_dump_chunk(_a, __func__, __LINE__)
static void _dma_dump_chunk (const struct dma_chunk* c, const char* func,
int line)
static struct dma_chunk * dma_find_chunk(struct ps3_dma_region *r,
unsigned long bus_addr, unsigned long len)
static struct dma_chunk *dma_find_chunk_lpar(struct ps3_dma_region *r,
unsigned long lpar_addr, unsigned long len)
static int dma_sb_free_chunk(struct dma_chunk *c)
static int dma_ioc0_free_chunk(struct dma_chunk *c)
static int dma_sb_map_pages(struct ps3_dma_region *r, unsigned long phys_addr,
unsigned long len, struct dma_chunk **c_out, u64 iopte_flag)
static int dma_ioc0_map_pages(struct ps3_dma_region *r, unsigned long phys_addr,
unsigned long len, struct dma_chunk **c_out,
u64 iopte_flag)
static int dma_sb_region_create(struct ps3_dma_region *r)
static int dma_ioc0_region_create(struct ps3_dma_region *r)
static int dma_sb_region_free(struct ps3_dma_region *r)
static int dma_ioc0_region_free(struct ps3_dma_region *r)
static int dma_sb_map_area(struct ps3_dma_region *r, unsigned long virt_addr,
unsigned long len, dma_addr_t *bus_addr,
u64 iopte_flag)
static int dma_ioc0_map_area(struct ps3_dma_region *r, unsigned long virt_addr,
unsigned long len, dma_addr_t *bus_addr,
u64 iopte_flag)
static int dma_sb_unmap_area(struct ps3_dma_region *r, dma_addr_t bus_addr,
unsigned long len)
static int dma_ioc0_unmap_area(struct ps3_dma_region *r,
dma_addr_t bus_addr, unsigned long len)
static int dma_sb_region_create_linear(struct ps3_dma_region *r)
static int dma_sb_region_free_linear(struct ps3_dma_region *r)
static int dma_sb_map_area_linear(struct ps3_dma_region *r,
unsigned long virt_addr, unsigned long len, dma_addr_t *bus_addr,
u64 iopte_flag)
static int dma_sb_unmap_area_linear(struct ps3_dma_region *r,
dma_addr_t bus_addr, unsigned long len)
;
static const struct ps3_dma_region_ops ps3_dma_sb_region_ops =  ;
static const struct ps3_dma_region_ops ps3_dma_sb_region_linear_ops = ;
static const struct ps3_dma_region_ops ps3_dma_ioc0_region_ops = ;
int ps3_dma_region_init(struct ps3_system_bus_device *dev,
struct ps3_dma_region *r, enum ps3_dma_page_size page_size,
enum ps3_dma_region_type region_type, void *addr, unsigned long len)
EXPORT_SYMBOL(ps3_dma_region_init);
int ps3_dma_region_create(struct ps3_dma_region *r)
EXPORT_SYMBOL(ps3_dma_region_create);
int ps3_dma_region_free(struct ps3_dma_region *r)
EXPORT_SYMBOL(ps3_dma_region_free);
int ps3_dma_map(struct ps3_dma_region *r, unsigned long virt_addr,
unsigned long len, dma_addr_t *bus_addr,
u64 iopte_flag)
int ps3_dma_unmap(struct ps3_dma_region *r, dma_addr_t bus_addr,
unsigned long len)
void __init ps3_mm_init(void)
void ps3_mm_shutdown(void)
