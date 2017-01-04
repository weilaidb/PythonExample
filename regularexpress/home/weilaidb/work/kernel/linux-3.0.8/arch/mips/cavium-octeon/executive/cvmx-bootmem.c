static struct cvmx_bootmem_desc *cvmx_bootmem_desc;
#define NEXT_OFFSET 0
#define SIZE_OFFSET 8
static void cvmx_bootmem_phy_set_size(uint64_t addr, uint64_t size)
static void cvmx_bootmem_phy_set_next(uint64_t addr, uint64_t next)
static uint64_t cvmx_bootmem_phy_get_size(uint64_t addr)
static uint64_t cvmx_bootmem_phy_get_next(uint64_t addr)
void *cvmx_bootmem_alloc_range(uint64_t size, uint64_t alignment,
uint64_t min_addr, uint64_t max_addr)
void *cvmx_bootmem_alloc_address(uint64_t size, uint64_t address,
uint64_t alignment)
void *cvmx_bootmem_alloc(uint64_t size, uint64_t alignment)
void *cvmx_bootmem_alloc_named_range(uint64_t size, uint64_t min_addr,
uint64_t max_addr, uint64_t align,
char *name)
void *cvmx_bootmem_alloc_named_address(uint64_t size, uint64_t address,
char *name)
void *cvmx_bootmem_alloc_named(uint64_t size, uint64_t alignment, char *name)
EXPORT_SYMBOL(cvmx_bootmem_alloc_named);
int cvmx_bootmem_free_named(char *name)
struct cvmx_bootmem_named_block_desc *cvmx_bootmem_find_named_block(char *name)
EXPORT_SYMBOL(cvmx_bootmem_find_named_block);
void cvmx_bootmem_lock(void)
void cvmx_bootmem_unlock(void)
int cvmx_bootmem_init(void *mem_desc_ptr)
int64_t cvmx_bootmem_phy_alloc(uint64_t req_size, uint64_t address_min,
uint64_t address_max, uint64_t alignment,
uint32_t flags)
int __cvmx_bootmem_phy_free(uint64_t phy_addr, uint64_t size, uint32_t flags)
struct cvmx_bootmem_named_block_desc *
cvmx_bootmem_phy_named_block_find(char *name, uint32_t flags)
int cvmx_bootmem_phy_named_block_free(char *name, uint32_t flags)
int64_t cvmx_bootmem_phy_named_block_alloc(uint64_t size, uint64_t min_addr,
uint64_t max_addr,
uint64_t alignment,
char *name,
uint32_t flags)
