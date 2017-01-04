struct s3c64xx_dmac ;
static struct dma_pool *dma_pool;
static unsigned char debug_show_buffs = 0;
static void dbg_showchan(struct s3c2410_dma_chan *chan)
static void show_lli(struct pl080s_lli *lli)
static void dbg_showbuffs(struct s3c2410_dma_chan *chan)
static struct s3c2410_dma_chan *s3c64xx_dma_map_channel(unsigned int channel)
int s3c2410_dma_config(enum dma_ch channel, int xferunit)
EXPORT_SYMBOL(s3c2410_dma_config);
static void s3c64xx_dma_fill_lli(struct s3c2410_dma_chan *chan,
struct pl080s_lli *lli,
dma_addr_t data, int size)
static void s3c64xx_lli_to_regs(struct s3c2410_dma_chan *chan,
struct pl080s_lli *lli)
static int s3c64xx_dma_start(struct s3c2410_dma_chan *chan)
static int s3c64xx_dma_stop(struct s3c2410_dma_chan *chan)
static inline void s3c64xx_dma_bufffdone(struct s3c2410_dma_chan *chan,
struct s3c64xx_dma_buff *buf,
enum s3c2410_dma_buffresult result)
static void s3c64xx_dma_freebuff(struct s3c64xx_dma_buff *buff)
static int s3c64xx_dma_flush(struct s3c2410_dma_chan *chan)
int s3c2410_dma_ctrl(enum dma_ch channel, enum s3c2410_chan_op op)
EXPORT_SYMBOL(s3c2410_dma_ctrl);
int s3c2410_dma_enqueue(enum dma_ch channel, void *id,
dma_addr_t data, int size)
EXPORT_SYMBOL(s3c2410_dma_enqueue);
int s3c2410_dma_devconfig(enum dma_ch channel,
enum s3c2410_dmasrc source,
unsigned long devaddr)
EXPORT_SYMBOL(s3c2410_dma_devconfig);
int s3c2410_dma_getposition(enum dma_ch channel,
dma_addr_t *src, dma_addr_t *dst)
EXPORT_SYMBOL(s3c2410_dma_getposition);
int s3c2410_dma_request(enum dma_ch channel,
struct s3c2410_dma_client *client,
void *dev)
EXPORT_SYMBOL(s3c2410_dma_request);
int s3c2410_dma_free(enum dma_ch channel, struct s3c2410_dma_client *client)
EXPORT_SYMBOL(s3c2410_dma_free);
static irqreturn_t s3c64xx_dma_irq(int irq, void *pw)
static struct sysdev_class dma_sysclass = ;
static int s3c64xx_dma_init1(int chno, enum dma_ch chbase,
int irq, unsigned int base)
static int __init s3c64xx_dma_init(void)
arch_initcall(s3c64xx_dma_init);
