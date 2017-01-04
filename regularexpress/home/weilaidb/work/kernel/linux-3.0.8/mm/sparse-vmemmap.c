static void * __init_refok __earlyonly_bootmem_alloc(int node,
unsigned long size,
unsigned long align,
unsigned long goal)
static void *vmemmap_buf;
static void *vmemmap_buf_end;
void * __meminit vmemmap_alloc_block(unsigned long size, int node)
void * __meminit vmemmap_alloc_block_buf(unsigned long size, int node)
void __meminit vmemmap_verify(pte_t *pte, int node,
unsigned long start, unsigned long end)
pte_t * __meminit vmemmap_pte_populate(pmd_t *pmd, unsigned long addr, int node)
pmd_t * __meminit vmemmap_pmd_populate(pud_t *pud, unsigned long addr, int node)
pud_t * __meminit vmemmap_pud_populate(pgd_t *pgd, unsigned long addr, int node)
pgd_t * __meminit vmemmap_pgd_populate(unsigned long addr, int node)
int __meminit vmemmap_populate_basepages(struct page *start_page,
unsigned long size, int node)
struct page * __meminit sparse_mem_map_populate(unsigned long pnum, int nid)
void __init sparse_mem_maps_populate_node(struct page **map_map,
unsigned long pnum_begin,
unsigned long pnum_end,
unsigned long map_count, int nodeid)
