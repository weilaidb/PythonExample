static struct page *pcpu_chunk_page(struct pcpu_chunk *chunk,
unsigned int cpu, int page_idx)
static struct page **pcpu_get_pages_and_bitmap(struct pcpu_chunk *chunk,
unsigned long **bitmapp,
bool may_alloc)
static void pcpu_free_pages(struct pcpu_chunk *chunk,
struct page **pages, unsigned long *populated,
int page_start, int page_end)
static int pcpu_alloc_pages(struct pcpu_chunk *chunk,
struct page **pages, unsigned long *populated,
int page_start, int page_end)
static void pcpu_pre_unmap_flush(struct pcpu_chunk *chunk,
int page_start, int page_end)
static void __pcpu_unmap_pages(unsigned long addr, int nr_pages)
static void pcpu_unmap_pages(struct pcpu_chunk *chunk,
struct page **pages, unsigned long *populated,
int page_start, int page_end)
static void pcpu_post_unmap_tlb_flush(struct pcpu_chunk *chunk,
int page_start, int page_end)
static int __pcpu_map_pages(unsigned long addr, struct page **pages,
int nr_pages)
static int pcpu_map_pages(struct pcpu_chunk *chunk,
struct page **pages, unsigned long *populated,
int page_start, int page_end)
static void pcpu_post_map_flush(struct pcpu_chunk *chunk,
int page_start, int page_end)
static int pcpu_populate_chunk(struct pcpu_chunk *chunk, int off, int size)
static void pcpu_depopulate_chunk(struct pcpu_chunk *chunk, int off, int size)
static struct pcpu_chunk *pcpu_create_chunk(void)
static void pcpu_destroy_chunk(struct pcpu_chunk *chunk)
static struct page *pcpu_addr_to_page(void *addr)
static int __init pcpu_verify_alloc_info(const struct pcpu_alloc_info *ai)
