DEFINE_SPINLOCK(dma_spin_lock);
static LIST_HEAD(registered_dmac_list);
struct dma_info *get_dma_info(unsigned int chan)
EXPORT_SYMBOL(get_dma_info);
struct dma_info *get_dma_info_by_name(const char *dmac_name)
EXPORT_SYMBOL(get_dma_info_by_name);
static unsigned int get_nr_channels(void)
struct dma_channel *get_dma_channel(unsigned int chan)
EXPORT_SYMBOL(get_dma_channel);
int get_dma_residue(unsigned int chan)
EXPORT_SYMBOL(get_dma_residue);
static int search_cap(const char **haystack, const char *needle)
int request_dma_bycap(const char **dmac, const char **caps, const char *dev_id)
EXPORT_SYMBOL(request_dma_bycap);
int dmac_search_free_channel(const char *dev_id)
int request_dma(unsigned int chan, const char *dev_id)
EXPORT_SYMBOL(request_dma);
void free_dma(unsigned int chan)
EXPORT_SYMBOL(free_dma);
void dma_wait_for_completion(unsigned int chan)
EXPORT_SYMBOL(dma_wait_for_completion);
int register_chan_caps(const char *dmac, struct dma_chan_caps *caps)
EXPORT_SYMBOL(register_chan_caps);
void dma_configure_channel(unsigned int chan, unsigned long flags)
EXPORT_SYMBOL(dma_configure_channel);
int dma_xfer(unsigned int chan, unsigned long from,
unsigned long to, size_t size, unsigned int mode)
EXPORT_SYMBOL(dma_xfer);
int dma_extend(unsigned int chan, unsigned long op, void *param)
EXPORT_SYMBOL(dma_extend);
static int dma_read_proc(char *buf, char **start, off_t off,
int len, int *eof, void *data)
int register_dmac(struct dma_info *info)
EXPORT_SYMBOL(register_dmac);
void unregister_dmac(struct dma_info *info)
EXPORT_SYMBOL(unregister_dmac);
static int __init dma_api_init(void)
subsys_initcall(dma_api_init);
MODULE_AUTHOR("Paul Mundt <lethal@linux-sh.org>");
MODULE_DESCRIPTION("DMA API for SuperH");
MODULE_LICENSE("GPL");
