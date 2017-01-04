#define DEBUG
static void __iomem *dma_base;
static struct kmem_cache *dma_kmem;
static int dma_channels;
static struct s3c24xx_dma_selection dma_sel;
#define BUF_MAGIC (0xcafebabe)
#define dmawarn(fmt...) printk(KERN_DEBUG fmt)
#define dma_regaddr(chan, reg) ((chan)->regs + (reg))
#if 1
#define dma_wrreg(chan, reg, val) writel((val), (chan)->regs + (reg))
static inline void
dma_wrreg(struct s3c2410_dma_chan *chan, int reg, unsigned long val)
#define dma_rdreg(chan, reg) readl((chan)->regs + (reg))
struct s3c2410_dma_regstate ;
static void
dmadbg_capture(struct s3c2410_dma_chan *chan, struct s3c2410_dma_regstate *regs)
static void
dmadbg_dumpregs(const char *fname, int line, struct s3c2410_dma_chan *chan,
struct s3c2410_dma_regstate *regs)
static void
dmadbg_showchan(const char *fname, int line, struct s3c2410_dma_chan *chan)
static void
dmadbg_showregs(const char *fname, int line, struct s3c2410_dma_chan *chan)
#define dbg_showregs(chan) dmadbg_showregs(__func__, __LINE__, (chan))
#define dbg_showchan(chan) dmadbg_showchan(__func__, __LINE__, (chan))
#define dbg_showregs(chan) do  while(0)
#define dbg_showchan(chan) do  while(0)
static void
s3c2410_dma_stats_timeout(struct s3c2410_dma_stats *stats, int val)
static int
s3c2410_dma_waitforload(struct s3c2410_dma_chan *chan, int line)
static inline int
s3c2410_dma_loadbuffer(struct s3c2410_dma_chan *chan,
struct s3c2410_dma_buf *buf)
static void
s3c2410_dma_call_op(struct s3c2410_dma_chan *chan, enum s3c2410_chan_op op)
static inline void
s3c2410_dma_buffdone(struct s3c2410_dma_chan *chan, struct s3c2410_dma_buf *buf,
enum s3c2410_dma_buffresult result)
static int s3c2410_dma_start(struct s3c2410_dma_chan *chan)
static int
s3c2410_dma_canload(struct s3c2410_dma_chan *chan)
int s3c2410_dma_enqueue(unsigned int channel, void *id,
dma_addr_t data, int size)
EXPORT_SYMBOL(s3c2410_dma_enqueue);
static inline void
s3c2410_dma_freebuf(struct s3c2410_dma_buf *buf)
static inline void
s3c2410_dma_lastxfer(struct s3c2410_dma_chan *chan)
#define dmadbg2(x...)
static irqreturn_t
s3c2410_dma_irq(int irq, void *devpw)
static struct s3c2410_dma_chan *s3c2410_dma_map_channel(int channel);
int s3c2410_dma_request(enum dma_ch channel,
struct s3c2410_dma_client *client,
void *dev)
EXPORT_SYMBOL(s3c2410_dma_request);
int s3c2410_dma_free(enum dma_ch channel, struct s3c2410_dma_client *client)
EXPORT_SYMBOL(s3c2410_dma_free);
static int s3c2410_dma_dostop(struct s3c2410_dma_chan *chan)
static void s3c2410_dma_waitforstop(struct s3c2410_dma_chan *chan)
static int s3c2410_dma_flush(struct s3c2410_dma_chan *chan)
static int s3c2410_dma_started(struct s3c2410_dma_chan *chan)
int
s3c2410_dma_ctrl(enum dma_ch channel, enum s3c2410_chan_op op)
EXPORT_SYMBOL(s3c2410_dma_ctrl);
int s3c2410_dma_config(enum dma_ch channel,
int xferunit)
EXPORT_SYMBOL(s3c2410_dma_config);
int s3c2410_dma_devconfig(enum dma_ch channel,
enum s3c2410_dmasrc source,
unsigned long devaddr)
EXPORT_SYMBOL(s3c2410_dma_devconfig);
int s3c2410_dma_getposition(enum dma_ch channel, dma_addr_t *src, dma_addr_t *dst)
EXPORT_SYMBOL(s3c2410_dma_getposition);
static void s3c2410_dma_suspend_chan(struct s3c2410_dma_chan *cp)
static int s3c2410_dma_suspend(void)
static void s3c2410_dma_resume_chan(struct s3c2410_dma_chan *cp)
static void s3c2410_dma_resume(void)
#define s3c2410_dma_suspend NULL
#define s3c2410_dma_resume  NULL
struct syscore_ops dma_syscore_ops = ;
static void s3c2410_dma_cache_ctor(void *p)
static int __init s3c24xx_dma_syscore_init(void)
late_initcall(s3c24xx_dma_syscore_init);
int __init s3c24xx_dma_init(unsigned int channels, unsigned int irq,
unsigned int stride)
int __init s3c2410_dma_init(void)
static inline int is_channel_valid(unsigned int channel)
static struct s3c24xx_dma_order *dma_order;
static struct s3c2410_dma_chan *s3c2410_dma_map_channel(int channel)
static int s3c24xx_dma_check_entry(struct s3c24xx_dma_map *map, int ch)
int __init s3c24xx_dma_init_map(struct s3c24xx_dma_selection *sel)
int __init s3c24xx_dma_order_set(struct s3c24xx_dma_order *ord)
