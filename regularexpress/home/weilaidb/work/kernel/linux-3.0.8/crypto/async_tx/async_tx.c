static int __init async_tx_init(void)
static void __exit async_tx_exit(void)
module_init(async_tx_init);
module_exit(async_tx_exit);
struct dma_chan *
__async_tx_find_channel(struct async_submit_ctl *submit,
enum dma_transaction_type tx_type)
EXPORT_SYMBOL_GPL(__async_tx_find_channel);
static void
async_tx_channel_switch(struct dma_async_tx_descriptor *depend_tx,
struct dma_async_tx_descriptor *tx)
enum submit_disposition ;
void
async_tx_submit(struct dma_chan *chan, struct dma_async_tx_descriptor *tx,
struct async_submit_ctl *submit)
EXPORT_SYMBOL_GPL(async_tx_submit);
struct dma_async_tx_descriptor *
async_trigger_callback(struct async_submit_ctl *submit)
EXPORT_SYMBOL_GPL(async_trigger_callback);
void async_tx_quiesce(struct dma_async_tx_descriptor **tx)
EXPORT_SYMBOL_GPL(async_tx_quiesce);
MODULE_AUTHOR("Intel Corporation");
MODULE_DESCRIPTION("Asynchronous Bulk Memory Transactions API");
MODULE_LICENSE("GPL");
