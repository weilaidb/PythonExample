static int num_pages_spanned(struct iovec *iov)
struct dma_pinned_list *dma_pin_iovec_pages(struct iovec *iov, size_t len)
void dma_unpin_iovec_pages(struct dma_pinned_list *pinned_list)
dma_cookie_t dma_memcpy_to_iovec(struct dma_chan *chan, struct iovec *iov,
struct dma_pinned_list *pinned_list, unsigned char *kdata, size_t len)
dma_cookie_t dma_memcpy_pg_to_iovec(struct dma_chan *chan, struct iovec *iov,
struct dma_pinned_list *pinned_list, struct page *page,
unsigned int offset, size_t len)
