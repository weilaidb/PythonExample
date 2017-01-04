#define PAGES_PER_KPAGE (PAGE_SIZE >> EHCA_PAGESHIFT)
struct kmem_cache *small_qp_cache;
void *ipz_qpageit_get_inc(struct ipz_queue *queue)
void *ipz_qeit_eq_get_inc(struct ipz_queue *queue)
int ipz_queue_abs_to_offset(struct ipz_queue *queue, u64 addr, u64 *q_offset)
#if PAGE_SHIFT < EHCA_PAGESHIFT
#error Kernel pages must be at least as large than eHCA pages (4K) !
static int alloc_queue_pages(struct ipz_queue *queue, const u32 nr_of_pages)
static int alloc_small_queue_page(struct ipz_queue *queue, struct ehca_pd *pd)
static void free_small_queue_page(struct ipz_queue *queue, struct ehca_pd *pd)
int ipz_queue_ctor(struct ehca_pd *pd, struct ipz_queue *queue,
const u32 nr_of_pages, const u32 pagesize,
const u32 qe_size, const u32 nr_of_sg,
int is_small)
int ipz_queue_dtor(struct ehca_pd *pd, struct ipz_queue *queue)
int ehca_init_small_qp_cache(void)
void ehca_cleanup_small_qp_cache(void)
