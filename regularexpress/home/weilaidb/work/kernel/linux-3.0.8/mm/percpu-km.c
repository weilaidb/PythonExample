#if defined(CONFIG_SMP) && defined(CONFIG_NEED_PER_CPU_PAGE_FIRST_CHUNK)
#error "contiguous percpu allocation is incompatible with paged first chunk"
static int pcpu_populate_chunk(struct pcpu_chunk *chunk, int off, int size)
static void pcpu_depopulate_chunk(struct pcpu_chunk *chunk, int off, int size)
static struct pcpu_chunk *pcpu_create_chunk(void)
static void pcpu_destroy_chunk(struct pcpu_chunk *chunk)
static struct page *pcpu_addr_to_page(void *addr)
static int __init pcpu_verify_alloc_info(const struct pcpu_alloc_info *ai)
