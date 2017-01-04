#undef DEBUG
#if PGTABLE_RANGE > USER_VSID_RANGE
#warning Limited user VSID range means pagetable space is wasted
#if (TASK_SIZE_USER64 < PGTABLE_RANGE) && (TASK_SIZE_USER64 < USER_VSID_RANGE)
#warning TASK_SIZE is smaller than it needs to be.
phys_addr_t memstart_addr = ~0;
EXPORT_SYMBOL_GPL(memstart_addr);
phys_addr_t kernstart_addr;
EXPORT_SYMBOL_GPL(kernstart_addr);
void free_initmem(void)
static void pgd_ctor(void *addr)
static void pmd_ctor(void *addr)
struct kmem_cache *pgtable_cache[MAX_PGTABLE_INDEX_SIZE];
void pgtable_cache_add(unsigned shift, void (*ctor)(void *))
void pgtable_cache_init(void)
static unsigned long __meminit vmemmap_section_start(unsigned long page)
static int __meminit vmemmap_populated(unsigned long start, int page_size)
static void __meminit vmemmap_create_mapping(unsigned long start,
unsigned long page_size,
unsigned long phys)
static void __meminit vmemmap_create_mapping(unsigned long start,
unsigned long page_size,
unsigned long phys)
struct vmemmap_backing *vmemmap_list;
static __meminit struct vmemmap_backing * vmemmap_list_alloc(int node)
static __meminit void vmemmap_list_populate(unsigned long phys,
unsigned long start,
int node)
int __meminit vmemmap_populate(struct page *start_page,
unsigned long nr_pages, int node)
