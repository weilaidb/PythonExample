struct dma_channel dma_ch[MAX_DMA_CHANNELS];
EXPORT_SYMBOL(dma_ch);
static int __init blackfin_dma_init(void)
arch_initcall(blackfin_dma_init);
static int proc_dma_show(struct seq_file *m, void *v)
static int proc_dma_open(struct inode *inode, struct file *file)
static const struct file_operations proc_dma_operations = ;
static int __init proc_dma_init(void)
late_initcall(proc_dma_init);
static void set_dma_peripheral_map(unsigned int channel, const char *device_id)
int request_dma(unsigned int channel, const char *device_id)
EXPORT_SYMBOL(request_dma);
int set_dma_callback(unsigned int channel, irq_handler_t callback, void *data)
EXPORT_SYMBOL(set_dma_callback);
static void clear_dma_buffer(unsigned int channel)
void free_dma(unsigned int channel)
EXPORT_SYMBOL(free_dma);
# ifndef MAX_DMA_SUSPEND_CHANNELS
#  define MAX_DMA_SUSPEND_CHANNELS MAX_DMA_CHANNELS
# endif
int blackfin_dma_suspend(void)
void blackfin_dma_resume(void)
void __init blackfin_dma_early_init(void)
void __init early_dma_memcpy(void *pdst, const void *psrc, size_t size)
void __init early_dma_memcpy_done(void)
static void __dma_memcpy(u32 daddr, s16 dmod, u32 saddr, s16 smod, size_t cnt, u32 conf)
static void *_dma_memcpy(void *pdst, const void *psrc, size_t size)
void *dma_memcpy(void *pdst, const void *psrc, size_t size)
EXPORT_SYMBOL(dma_memcpy);
void *dma_memcpy_nocache(void *pdst, const void *psrc, size_t size)
EXPORT_SYMBOL(dma_memcpy_nocache);
void *safe_dma_memcpy(void *dst, const void *src, size_t size)
EXPORT_SYMBOL(safe_dma_memcpy);
static void _dma_out(unsigned long addr, unsigned long buf, unsigned short len,
u16 size, u16 dma_size)
static void _dma_in(unsigned long addr, unsigned long buf, unsigned short len,
u16 size, u16 dma_size)
#define MAKE_DMA_IO(io, bwl, isize, dmasize, cnst) \
void dma_##io##s##bwl(unsigned long addr, cnst void *buf, unsigned short len) \
\
EXPORT_SYMBOL(dma_##io##s##bwl)
MAKE_DMA_IO(out, b, 1,  8, const);
MAKE_DMA_IO(in,  b, 1,  8, );
MAKE_DMA_IO(out, w, 2, 16, const);
MAKE_DMA_IO(in,  w, 2, 16, );
MAKE_DMA_IO(out, l, 4, 32, const);
MAKE_DMA_IO(in,  l, 4, 32, );
