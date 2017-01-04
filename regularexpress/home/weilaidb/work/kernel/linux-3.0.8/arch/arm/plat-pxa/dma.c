#define DMA_DEBUG_NAME		"pxa_dma"
#define DMA_MAX_REQUESTERS	64
struct dma_channel ;
static struct dma_channel *dma_channels;
static int num_dma_channels;
static struct dentry *dbgfs_root, *dbgfs_state, **dbgfs_chan;
static int dbg_show_requester_chan(struct seq_file *s, void *p)
static inline int dbg_burst_from_dcmd(u32 dcmd)
static int is_phys_valid(unsigned long addr)
#define DCSR_STR(flag) (dcsr & DCSR_##flag ? #flag" " : "")
#define DCMD_STR(flag) (dcmd & DCMD_##flag ? #flag" " : "")
static int dbg_show_descriptors(struct seq_file *s, void *p)
static int dbg_show_chan_state(struct seq_file *s, void *p)
static int dbg_show_state(struct seq_file *s, void *p)
#define DBGFS_FUNC_DECL(name) \
static int dbg_open_##name(struct inode *inode, struct file *file) \
\
static const struct file_operations dbg_fops_##name =
DBGFS_FUNC_DECL(state);
DBGFS_FUNC_DECL(chan_state);
DBGFS_FUNC_DECL(descriptors);
DBGFS_FUNC_DECL(requester_chan);
static struct dentry *pxa_dma_dbg_alloc_chan(int ch, struct dentry *chandir)
static void pxa_dma_init_debugfs(void)
static void __exit pxa_dma_cleanup_debugfs(void)
static inline void pxa_dma_init_debugfs(void)
static inline void pxa_dma_cleanup_debugfs(void)
int pxa_request_dma (char *name, pxa_dma_prio prio,
void (*irq_handler)(int, void *),
void *data)
EXPORT_SYMBOL(pxa_request_dma);
void pxa_free_dma (int dma_ch)
EXPORT_SYMBOL(pxa_free_dma);
static irqreturn_t dma_irq_handler(int irq, void *dev_id)
int __init pxa_init_dma(int irq, int num_ch)
