#define __CVMX_BOOTMEM_H__
#define CVMX_BOOTMEM_NAME_LEN 128
#define CVMX_BOOTMEM_NUM_NAMED_BLOCKS 64
#define CVMX_BOOTMEM_ALIGNMENT_SIZE     (16ull)
#define CVMX_BOOTMEM_FLAG_END_ALLOC    (1 << 0)
#define CVMX_BOOTMEM_FLAG_NO_LOCKING   (1 << 1)
struct cvmx_bootmem_block_header ;
struct cvmx_bootmem_named_block_desc ;
#define CVMX_BOOTMEM_DESC_MAJ_VER   3
#define CVMX_BOOTMEM_DESC_MIN_VER   0
struct cvmx_bootmem_desc ;
extern int cvmx_bootmem_init(void *mem_desc_ptr);
extern void *cvmx_bootmem_alloc(uint64_t size, uint64_t alignment);
extern void *cvmx_bootmem_alloc_address(uint64_t size, uint64_t address,
uint64_t alignment);
extern void *cvmx_bootmem_alloc_range(uint64_t size, uint64_t alignment,
uint64_t min_addr, uint64_t max_addr);
extern void *cvmx_bootmem_alloc_named(uint64_t size, uint64_t alignment,
char *name);
extern void *cvmx_bootmem_alloc_named_address(uint64_t size, uint64_t address,
char *name);
extern void *cvmx_bootmem_alloc_named_range(uint64_t size, uint64_t min_addr,
uint64_t max_addr, uint64_t align,
char *name);
extern int cvmx_bootmem_free_named(char *name);
struct cvmx_bootmem_named_block_desc *cvmx_bootmem_find_named_block(char *name);
int64_t cvmx_bootmem_phy_alloc(uint64_t req_size, uint64_t address_min,
uint64_t address_max, uint64_t alignment,
uint32_t flags);
int64_t cvmx_bootmem_phy_named_block_alloc(uint64_t size, uint64_t min_addr,
uint64_t max_addr,
uint64_t alignment,
char *name, uint32_t flags);
struct cvmx_bootmem_named_block_desc *
cvmx_bootmem_phy_named_block_find(char *name, uint32_t flags);
int cvmx_bootmem_phy_named_block_free(char *name, uint32_t flags);
int __cvmx_bootmem_phy_free(uint64_t phy_addr, uint64_t size, uint32_t flags);
void cvmx_bootmem_lock(void);
void cvmx_bootmem_unlock(void);
