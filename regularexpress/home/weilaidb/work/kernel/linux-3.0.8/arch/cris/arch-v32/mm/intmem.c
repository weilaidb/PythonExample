#define STATUS_FREE 0
#define STATUS_ALLOCATED 1
#define RESERVED_SIZE 66*1024
#define RESERVED_SIZE 0
struct intmem_allocation ;
static struct list_head intmem_allocations;
static void* intmem_virtual;
static void crisv32_intmem_init(void)
void* crisv32_intmem_alloc(unsigned size, unsigned align)
void crisv32_intmem_free(void* addr)
void* crisv32_intmem_phys_to_virt(unsigned long addr)
unsigned long crisv32_intmem_virt_to_phys(void* addr)
module_init(crisv32_intmem_init);
