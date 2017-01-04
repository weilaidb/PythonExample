static DEFINE_MUTEX(dma_list_mutex);
static LIST_HEAD(dma_device_list);
static long dmaengine_ref_count;
static struct idr dma_idr;
static struct dma_chan *dev_to_dma_chan(struct device *dev)
static ssize_t show_memcpy_count(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_bytes_transferred(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_in_use(struct device *dev, struct device_attribute *attr, char *buf)
static struct device_attribute dma_attrs[] = ;
static void chan_dev_release(struct device *dev)
static struct class dma_devclass = ;
#define dma_device_satisfies_mask(device, mask) \
__dma_device_satisfies_mask((device), &(mask))
static int
__dma_device_satisfies_mask(struct dma_device *device, dma_cap_mask_t *want)
static struct module *dma_chan_to_owner(struct dma_chan *chan)
static void balance_ref_count(struct dma_chan *chan)
static int dma_chan_get(struct dma_chan *chan)
static void dma_chan_put(struct dma_chan *chan)
enum dma_status dma_sync_wait(struct dma_chan *chan, dma_cookie_t cookie)
EXPORT_SYMBOL(dma_sync_wait);
static dma_cap_mask_t dma_cap_mask_all;
struct dma_chan_tbl_ent ;
static struct dma_chan_tbl_ent __percpu *channel_table[DMA_TX_TYPE_END];
static int __init dma_channel_table_init(void)
arch_initcall(dma_channel_table_init);
struct dma_chan *dma_find_channel(enum dma_transaction_type tx_type)
EXPORT_SYMBOL(dma_find_channel);
void dma_issue_pending_all(void)
EXPORT_SYMBOL(dma_issue_pending_all);
static struct dma_chan *nth_chan(enum dma_transaction_type cap, int n)
static void dma_channel_rebalance(void)
static struct dma_chan *private_candidate(dma_cap_mask_t *mask, struct dma_device *dev,
dma_filter_fn fn, void *fn_param)
struct dma_chan *__dma_request_channel(dma_cap_mask_t *mask, dma_filter_fn fn, void *fn_param)
EXPORT_SYMBOL_GPL(__dma_request_channel);
void dma_release_channel(struct dma_chan *chan)
EXPORT_SYMBOL_GPL(dma_release_channel);
void dmaengine_get(void)
EXPORT_SYMBOL(dmaengine_get);
void dmaengine_put(void)
EXPORT_SYMBOL(dmaengine_put);
static bool device_has_all_tx_types(struct dma_device *device)
static int get_dma_id(struct dma_device *device)
int dma_async_device_register(struct dma_device *device)
EXPORT_SYMBOL(dma_async_device_register);
void dma_async_device_unregister(struct dma_device *device)
EXPORT_SYMBOL(dma_async_device_unregister);
dma_cookie_t
dma_async_memcpy_buf_to_buf(struct dma_chan *chan, void *dest,
void *src, size_t len)
EXPORT_SYMBOL(dma_async_memcpy_buf_to_buf);
dma_cookie_t
dma_async_memcpy_buf_to_pg(struct dma_chan *chan, struct page *page,
unsigned int offset, void *kdata, size_t len)
EXPORT_SYMBOL(dma_async_memcpy_buf_to_pg);
dma_cookie_t
dma_async_memcpy_pg_to_pg(struct dma_chan *chan, struct page *dest_pg,
unsigned int dest_off, struct page *src_pg, unsigned int src_off,
size_t len)
EXPORT_SYMBOL(dma_async_memcpy_pg_to_pg);
void dma_async_tx_descriptor_init(struct dma_async_tx_descriptor *tx,
struct dma_chan *chan)
EXPORT_SYMBOL(dma_async_tx_descriptor_init);
enum dma_status
dma_wait_for_async_tx(struct dma_async_tx_descriptor *tx)
EXPORT_SYMBOL_GPL(dma_wait_for_async_tx);
void dma_run_dependencies(struct dma_async_tx_descriptor *tx)
EXPORT_SYMBOL_GPL(dma_run_dependencies);
static int __init dma_bus_init(void)
arch_initcall(dma_bus_init);
