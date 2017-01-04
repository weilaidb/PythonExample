#define DMAENGINE_H
typedef s32 dma_cookie_t;
#define DMA_MIN_COOKIE	1
#define DMA_MAX_COOKIE	INT_MAX
#define dma_submit_error(cookie) ((cookie) < 0 ? 1 : 0)
enum dma_status ;
enum dma_transaction_type ;
#define DMA_TX_TYPE_END (DMA_CYCLIC + 1)
enum dma_ctrl_flags ;
enum dma_ctrl_cmd ;
enum sum_check_bits ;
enum sum_check_flags ;
typedef struct  dma_cap_mask_t;
struct dma_chan_percpu ;
struct dma_chan ;
struct dma_chan_dev ;
enum dma_slave_buswidth ;
struct dma_slave_config ;
static inline const char *dma_chan_name(struct dma_chan *chan)
void dma_chan_cleanup(struct kref *kref);
typedef bool (*dma_filter_fn)(struct dma_chan *chan, void *filter_param);
typedef void (*dma_async_tx_callback)(void *dma_async_param);
struct dma_async_tx_descriptor ;
static inline void txd_lock(struct dma_async_tx_descriptor *txd)
static inline void txd_unlock(struct dma_async_tx_descriptor *txd)
static inline void txd_chain(struct dma_async_tx_descriptor *txd, struct dma_async_tx_descriptor *next)
static inline void txd_clear_parent(struct dma_async_tx_descriptor *txd)
static inline void txd_clear_next(struct dma_async_tx_descriptor *txd)
static inline struct dma_async_tx_descriptor *txd_next(struct dma_async_tx_descriptor *txd)
static inline struct dma_async_tx_descriptor *txd_parent(struct dma_async_tx_descriptor *txd)
static inline void txd_lock(struct dma_async_tx_descriptor *txd)
static inline void txd_unlock(struct dma_async_tx_descriptor *txd)
static inline void txd_chain(struct dma_async_tx_descriptor *txd, struct dma_async_tx_descriptor *next)
static inline void txd_clear_parent(struct dma_async_tx_descriptor *txd)
static inline void txd_clear_next(struct dma_async_tx_descriptor *txd)
static inline struct dma_async_tx_descriptor *txd_parent(struct dma_async_tx_descriptor *txd)
static inline struct dma_async_tx_descriptor *txd_next(struct dma_async_tx_descriptor *txd)
struct dma_tx_state ;
struct dma_device ;
static inline int dmaengine_device_control(struct dma_chan *chan,
enum dma_ctrl_cmd cmd,
unsigned long arg)
static inline int dmaengine_slave_config(struct dma_chan *chan,
struct dma_slave_config *config)
static inline int dmaengine_terminate_all(struct dma_chan *chan)
static inline int dmaengine_pause(struct dma_chan *chan)
static inline int dmaengine_resume(struct dma_chan *chan)
static inline dma_cookie_t dmaengine_submit(struct dma_async_tx_descriptor *desc)
static inline bool dmaengine_check_align(u8 align, size_t off1, size_t off2, size_t len)
static inline bool is_dma_copy_aligned(struct dma_device *dev, size_t off1,
size_t off2, size_t len)
static inline bool is_dma_xor_aligned(struct dma_device *dev, size_t off1,
size_t off2, size_t len)
static inline bool is_dma_pq_aligned(struct dma_device *dev, size_t off1,
size_t off2, size_t len)
static inline bool is_dma_fill_aligned(struct dma_device *dev, size_t off1,
size_t off2, size_t len)
static inline void
dma_set_maxpq(struct dma_device *dma, int maxpq, int has_pq_continue)
static inline bool dmaf_continue(enum dma_ctrl_flags flags)
static inline bool dmaf_p_disabled_continue(enum dma_ctrl_flags flags)
static inline bool dma_dev_has_pq_continue(struct dma_device *dma)
static inline unsigned short dma_dev_to_maxpq(struct dma_device *dma)
static inline int dma_maxpq(struct dma_device *dma, enum dma_ctrl_flags flags)
void dmaengine_get(void);
void dmaengine_put(void);
static inline void dmaengine_get(void)
static inline void dmaengine_put(void)
#define net_dmaengine_get()	dmaengine_get()
#define net_dmaengine_put()	dmaengine_put()
static inline void net_dmaengine_get(void)
static inline void net_dmaengine_put(void)
#define async_dmaengine_get()	dmaengine_get()
#define async_dmaengine_put()	dmaengine_put()
#define async_dma_find_channel(type) dma_find_channel(DMA_ASYNC_TX)
#define async_dma_find_channel(type) dma_find_channel(type)
static inline void async_dmaengine_get(void)
static inline void async_dmaengine_put(void)
static inline struct dma_chan *
async_dma_find_channel(enum dma_transaction_type type)
dma_cookie_t dma_async_memcpy_buf_to_buf(struct dma_chan *chan,
void *dest, void *src, size_t len);
dma_cookie_t dma_async_memcpy_buf_to_pg(struct dma_chan *chan,
struct page *page, unsigned int offset, void *kdata, size_t len);
dma_cookie_t dma_async_memcpy_pg_to_pg(struct dma_chan *chan,
struct page *dest_pg, unsigned int dest_off, struct page *src_pg,
unsigned int src_off, size_t len);
void dma_async_tx_descriptor_init(struct dma_async_tx_descriptor *tx,
struct dma_chan *chan);
static inline void async_tx_ack(struct dma_async_tx_descriptor *tx)
static inline void async_tx_clear_ack(struct dma_async_tx_descriptor *tx)
static inline bool async_tx_test_ack(struct dma_async_tx_descriptor *tx)
#define first_dma_cap(mask) __first_dma_cap(&(mask))
static inline int __first_dma_cap(const dma_cap_mask_t *srcp)
#define next_dma_cap(n, mask) __next_dma_cap((n), &(mask))
static inline int __next_dma_cap(int n, const dma_cap_mask_t *srcp)
#define dma_cap_set(tx, mask) __dma_cap_set((tx), &(mask))
static inline void
__dma_cap_set(enum dma_transaction_type tx_type, dma_cap_mask_t *dstp)
#define dma_cap_clear(tx, mask) __dma_cap_clear((tx), &(mask))
static inline void
__dma_cap_clear(enum dma_transaction_type tx_type, dma_cap_mask_t *dstp)
#define dma_cap_zero(mask) __dma_cap_zero(&(mask))
static inline void __dma_cap_zero(dma_cap_mask_t *dstp)
#define dma_has_cap(tx, mask) __dma_has_cap((tx), &(mask))
static inline int
__dma_has_cap(enum dma_transaction_type tx_type, dma_cap_mask_t *srcp)
#define for_each_dma_cap_mask(cap, mask) \
for ((cap) = first_dma_cap(mask);	\
(cap) < DMA_TX_TYPE_END;	\
(cap) = next_dma_cap((cap), (mask)))
static inline void dma_async_issue_pending(struct dma_chan *chan)
#define dma_async_memcpy_issue_pending(chan) dma_async_issue_pending(chan)
static inline enum dma_status dma_async_is_tx_complete(struct dma_chan *chan,
dma_cookie_t cookie, dma_cookie_t *last, dma_cookie_t *used)
#define dma_async_memcpy_complete(chan, cookie, last, used)\
dma_async_is_tx_complete(chan, cookie, last, used)
static inline enum dma_status dma_async_is_complete(dma_cookie_t cookie,
dma_cookie_t last_complete, dma_cookie_t last_used)
static inline void
dma_set_tx_state(struct dma_tx_state *st, dma_cookie_t last, dma_cookie_t used, u32 residue)
enum dma_status dma_sync_wait(struct dma_chan *chan, dma_cookie_t cookie);
enum dma_status dma_wait_for_async_tx(struct dma_async_tx_descriptor *tx);
void dma_issue_pending_all(void);
struct dma_chan *__dma_request_channel(dma_cap_mask_t *mask, dma_filter_fn fn, void *fn_param);
void dma_release_channel(struct dma_chan *chan);
static inline enum dma_status dma_wait_for_async_tx(struct dma_async_tx_descriptor *tx)
static inline void dma_issue_pending_all(void)
static inline struct dma_chan *__dma_request_channel(dma_cap_mask_t *mask,
dma_filter_fn fn, void *fn_param)
static inline void dma_release_channel(struct dma_chan *chan)
int dma_async_device_register(struct dma_device *device);
void dma_async_device_unregister(struct dma_device *device);
void dma_run_dependencies(struct dma_async_tx_descriptor *tx);
struct dma_chan *dma_find_channel(enum dma_transaction_type tx_type);
#define dma_request_channel(mask, x, y) __dma_request_channel(&(mask), x, y)
struct dma_page_list ;
struct dma_pinned_list ;
struct dma_pinned_list *dma_pin_iovec_pages(struct iovec *iov, size_t len);
void dma_unpin_iovec_pages(struct dma_pinned_list* pinned_list);
dma_cookie_t dma_memcpy_to_iovec(struct dma_chan *chan, struct iovec *iov,
struct dma_pinned_list *pinned_list, unsigned char *kdata, size_t len);
dma_cookie_t dma_memcpy_pg_to_iovec(struct dma_chan *chan, struct iovec *iov,
struct dma_pinned_list *pinned_list, struct page *page,
unsigned int offset, size_t len);
