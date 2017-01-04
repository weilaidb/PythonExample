struct dma_async_tx_descriptor *
async_memcpy(struct page *dest, struct page *src, unsigned int dest_offset,
unsigned int src_offset, size_t len,
struct async_submit_ctl *submit)
EXPORT_SYMBOL_GPL(async_memcpy);
MODULE_AUTHOR("Intel Corporation");
MODULE_DESCRIPTION("asynchronous memcpy api");
MODULE_LICENSE("GPL");
