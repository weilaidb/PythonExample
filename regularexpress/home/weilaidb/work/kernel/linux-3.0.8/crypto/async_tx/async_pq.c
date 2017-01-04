static struct page *pq_scribble_page;
#define P(b, d) (b[d-2])
#define Q(b, d) (b[d-1])
static __async_inline struct dma_async_tx_descriptor *
do_async_gen_syndrome(struct dma_chan *chan, struct page **blocks,
const unsigned char *scfs, unsigned int offset, int disks,
size_t len, dma_addr_t *dma_src,
struct async_submit_ctl *submit)
static void
do_sync_gen_syndrome(struct page **blocks, unsigned int offset, int disks,
size_t len, struct async_submit_ctl *submit)
struct dma_async_tx_descriptor *
async_gen_syndrome(struct page **blocks, unsigned int offset, int disks,
size_t len, struct async_submit_ctl *submit)
EXPORT_SYMBOL_GPL(async_gen_syndrome);
static inline struct dma_chan *
pq_val_chan(struct async_submit_ctl *submit, struct page **blocks, int disks, size_t len)
struct dma_async_tx_descriptor *
async_syndrome_val(struct page **blocks, unsigned int offset, int disks,
size_t len, enum sum_check_flags *pqres, struct page *spare,
struct async_submit_ctl *submit)
EXPORT_SYMBOL_GPL(async_syndrome_val);
static int __init async_pq_init(void)
static void __exit async_pq_exit(void)
module_init(async_pq_init);
module_exit(async_pq_exit);
MODULE_DESCRIPTION("asynchronous raid6 syndrome generation/validation");
MODULE_LICENSE("GPL");
