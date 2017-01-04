static struct dma_async_tx_descriptor *
async_sum_product(struct page *dest, struct page **srcs, unsigned char *coef,
size_t len, struct async_submit_ctl *submit)
static struct dma_async_tx_descriptor *
async_mult(struct page *dest, struct page *src, u8 coef, size_t len,
struct async_submit_ctl *submit)
static struct dma_async_tx_descriptor *
__2data_recov_4(int disks, size_t bytes, int faila, int failb,
struct page **blocks, struct async_submit_ctl *submit)
static struct dma_async_tx_descriptor *
__2data_recov_5(int disks, size_t bytes, int faila, int failb,
struct page **blocks, struct async_submit_ctl *submit)
static struct dma_async_tx_descriptor *
__2data_recov_n(int disks, size_t bytes, int faila, int failb,
struct page **blocks, struct async_submit_ctl *submit)
struct dma_async_tx_descriptor *
async_raid6_2data_recov(int disks, size_t bytes, int faila, int failb,
struct page **blocks, struct async_submit_ctl *submit)
EXPORT_SYMBOL_GPL(async_raid6_2data_recov);
struct dma_async_tx_descriptor *
async_raid6_datap_recov(int disks, size_t bytes, int faila,
struct page **blocks, struct async_submit_ctl *submit)
EXPORT_SYMBOL_GPL(async_raid6_datap_recov);
MODULE_AUTHOR("Dan Williams <dan.j.williams@intel.com>");
MODULE_DESCRIPTION("asynchronous RAID-6 recovery api");
MODULE_LICENSE("GPL");
