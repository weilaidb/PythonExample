static __async_inline struct dma_async_tx_descriptor *
do_async_xor(struct dma_chan *chan, struct page *dest, struct page **src_list,
unsigned int offset, int src_cnt, size_t len, dma_addr_t *dma_src,
struct async_submit_ctl *submit)
static void
do_sync_xor(struct page *dest, struct page **src_list, unsigned int offset,
int src_cnt, size_t len, struct async_submit_ctl *submit)
struct dma_async_tx_descriptor *
async_xor(struct page *dest, struct page **src_list, unsigned int offset,
int src_cnt, size_t len, struct async_submit_ctl *submit)
EXPORT_SYMBOL_GPL(async_xor);
static int page_is_zero(struct page *p, unsigned int offset, size_t len)
static inline struct dma_chan *
xor_val_chan(struct async_submit_ctl *submit, struct page *dest,
struct page **src_list, int src_cnt, size_t len)
struct dma_async_tx_descriptor *
async_xor_val(struct page *dest, struct page **src_list, unsigned int offset,
int src_cnt, size_t len, enum sum_check_flags *result,
struct async_submit_ctl *submit)
EXPORT_SYMBOL_GPL(async_xor_val);
MODULE_AUTHOR("Intel Corporation");
MODULE_DESCRIPTION("asynchronous xor/xor-zero-sum api");
MODULE_LICENSE("GPL");
