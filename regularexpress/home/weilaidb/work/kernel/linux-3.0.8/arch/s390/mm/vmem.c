static DEFINE_MUTEX(vmem_mutex);
struct memory_segment ;
static LIST_HEAD(mem_segs);
static void __ref *vmem_alloc_pages(unsigned int order)
static inline pud_t *vmem_pud_alloc(void)
static inline pmd_t *vmem_pmd_alloc(void)
static pte_t __ref *vmem_pte_alloc(void)
static int vmem_add_mem(unsigned long start, unsigned long size, int ro)
static void vmem_remove_range(unsigned long start, unsigned long size)
int __meminit vmemmap_populate(struct page *start, unsigned long nr, int node)
static int insert_memory_segment(struct memory_segment *seg)
static void remove_memory_segment(struct memory_segment *seg)
static void __remove_shared_memory(struct memory_segment *seg)
int vmem_remove_mapping(unsigned long start, unsigned long size)
int vmem_add_mapping(unsigned long start, unsigned long size)
void __init vmem_map_init(void)
static int __init vmem_convert_memory_chunk(void)
core_initcall(vmem_convert_memory_chunk);
