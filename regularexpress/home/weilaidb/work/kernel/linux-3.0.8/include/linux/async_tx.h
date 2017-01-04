#define _ASYNC_TX_H_
#define __async_inline
#define __async_inline __always_inline
struct dma_chan_ref ;
enum async_tx_flags ;
struct async_submit_ctl ;
#define async_tx_issue_pending_all dma_issue_pending_all
static inline void async_tx_issue_pending(struct dma_async_tx_descriptor *tx)
#define async_tx_find_channel(dep, type, dst, dst_count, src, src_count, len) \
__async_tx_find_channel(dep, type)
struct dma_chan *
__async_tx_find_channel(struct async_submit_ctl *submit,
enum dma_transaction_type tx_type);
static inline void async_tx_issue_pending_all(void)
static inline void async_tx_issue_pending(struct dma_async_tx_descriptor *tx)
static inline struct dma_chan *
async_tx_find_channel(struct async_submit_ctl *submit,
enum dma_transaction_type tx_type, struct page **dst,
int dst_count, struct page **src, int src_count,
size_t len)
static inline void
async_tx_sync_epilog(struct async_submit_ctl *submit)
typedef union  addr_conv_t;
static inline void
init_async_submit(struct async_submit_ctl *args, enum async_tx_flags flags,
struct dma_async_tx_descriptor *tx,
dma_async_tx_callback cb_fn, void *cb_param,
addr_conv_t *scribble)
void async_tx_submit(struct dma_chan *chan, struct dma_async_tx_descriptor *tx,
struct async_submit_ctl *submit);
struct dma_async_tx_descriptor *
async_xor(struct page *dest, struct page **src_list, unsigned int offset,
int src_cnt, size_t len, struct async_submit_ctl *submit);
struct dma_async_tx_descriptor *
async_xor_val(struct page *dest, struct page **src_list, unsigned int offset,
int src_cnt, size_t len, enum sum_check_flags *result,
struct async_submit_ctl *submit);
struct dma_async_tx_descriptor *
async_memcpy(struct page *dest, struct page *src, unsigned int dest_offset,
unsigned int src_offset, size_t len,
struct async_submit_ctl *submit);
struct dma_async_tx_descriptor *
async_memset(struct page *dest, int val, unsigned int offset,
size_t len, struct async_submit_ctl *submit);
struct dma_async_tx_descriptor *async_trigger_callback(struct async_submit_ctl *submit);
struct dma_async_tx_descriptor *
async_gen_syndrome(struct page **blocks, unsigned int offset, int src_cnt,
size_t len, struct async_submit_ctl *submit);
struct dma_async_tx_descriptor *
async_syndrome_val(struct page **blocks, unsigned int offset, int src_cnt,
size_t len, enum sum_check_flags *pqres, struct page *spare,
struct async_submit_ctl *submit);
struct dma_async_tx_descriptor *
async_raid6_2data_recov(int src_num, size_t bytes, int faila, int failb,
struct page **ptrs, struct async_submit_ctl *submit);
struct dma_async_tx_descriptor *
async_raid6_datap_recov(int src_num, size_t bytes, int faila,
struct page **ptrs, struct async_submit_ctl *submit);
void async_tx_quiesce(struct dma_async_tx_descriptor **tx);
