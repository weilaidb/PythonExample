struct s3c_pl330_dmac ;
struct s3c_pl330_xfer ;
struct s3c_pl330_chan ;
static LIST_HEAD(dmac_list);
static LIST_HEAD(chan_list);
static DEFINE_SPINLOCK(res_lock);
static struct s3c_pl330_chan *id_to_chan(const enum dma_ch id)
static void chan_add(const enum dma_ch id)
static bool chan_free(struct s3c_pl330_chan *ch)
static unsigned iface_of_dmac(struct s3c_pl330_dmac *dmac, enum dma_ch ch_id)
static inline bool dmac_busy(struct s3c_pl330_dmac *dmac)
static unsigned ch_onlyby_dmac(struct s3c_pl330_dmac *dmac)
#define MAX_SUIT	UINT_MAX
#define MIN_SUIT	0
static unsigned suitablility(struct s3c_pl330_dmac *dmac,
struct s3c_pl330_chan *ch)
static struct s3c_pl330_dmac *map_chan_to_dmac(struct s3c_pl330_chan *ch)
static struct s3c_pl330_chan *chan_acquire(const enum dma_ch id)
static inline void del_from_queue(struct s3c_pl330_xfer *xfer)
static struct s3c_pl330_xfer *get_from_queue(struct s3c_pl330_chan *ch,
int pluck)
static inline void add_to_queue(struct s3c_pl330_chan *ch,
struct s3c_pl330_xfer *xfer, int front)
static inline void _finish_off(struct s3c_pl330_xfer *xfer,
enum s3c2410_dma_buffresult res, int ffree)
static inline int s3c_pl330_submit(struct s3c_pl330_chan *ch,
struct pl330_req *r)
static void s3c_pl330_rq(struct s3c_pl330_chan *ch,
struct pl330_req *r, enum pl330_op_err err)
static void s3c_pl330_rq0(void *token, enum pl330_op_err err)
static void s3c_pl330_rq1(void *token, enum pl330_op_err err)
static void chan_release(struct s3c_pl330_chan *ch)
int s3c2410_dma_ctrl(enum dma_ch id, enum s3c2410_chan_op op)
EXPORT_SYMBOL(s3c2410_dma_ctrl);
int s3c2410_dma_enqueue(enum dma_ch id, void *token,
dma_addr_t addr, int size)
EXPORT_SYMBOL(s3c2410_dma_enqueue);
int s3c2410_dma_request(enum dma_ch id,
struct s3c2410_dma_client *client,
void *dev)
EXPORT_SYMBOL(s3c2410_dma_request);
int s3c2410_dma_free(enum dma_ch id, struct s3c2410_dma_client *client)
EXPORT_SYMBOL(s3c2410_dma_free);
int s3c2410_dma_config(enum dma_ch id, int xferunit)
EXPORT_SYMBOL(s3c2410_dma_config);
#define S3C_PL330_FLAGS (S3C2410_DMAF_CIRCULAR | S3C2410_DMAF_AUTOSTART)
int s3c2410_dma_setflags(enum dma_ch id, unsigned int options)
EXPORT_SYMBOL(s3c2410_dma_setflags);
int s3c2410_dma_set_buffdone_fn(enum dma_ch id, s3c2410_dma_cbfn_t rtn)
EXPORT_SYMBOL(s3c2410_dma_set_buffdone_fn);
int s3c2410_dma_devconfig(enum dma_ch id, enum s3c2410_dmasrc source,
unsigned long address)
EXPORT_SYMBOL(s3c2410_dma_devconfig);
int s3c2410_dma_getposition(enum dma_ch id, dma_addr_t *src, dma_addr_t *dst)
EXPORT_SYMBOL(s3c2410_dma_getposition);
static irqreturn_t pl330_irq_handler(int irq, void *data)
static int pl330_probe(struct platform_device *pdev)
static int pl330_remove(struct platform_device *pdev)
static struct platform_driver pl330_driver = ;
static int __init pl330_init(void)
module_init(pl330_init);
static void __exit pl330_exit(void)
module_exit(pl330_exit);
MODULE_AUTHOR("Jaswinder Singh <jassi.brar@samsung.com>");
MODULE_DESCRIPTION("Driver for PL330 DMA Controller");
MODULE_LICENSE("GPL");
