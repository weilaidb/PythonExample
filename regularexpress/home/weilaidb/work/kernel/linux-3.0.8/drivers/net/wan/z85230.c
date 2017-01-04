#define RT_LOCK
#define RT_UNLOCK
static inline int z8530_read_port(unsigned long p)
static inline void z8530_write_port(unsigned long p, u8 d)
static void z8530_rx_done(struct z8530_channel *c);
static void z8530_tx_done(struct z8530_channel *c);
static inline u8 read_zsreg(struct z8530_channel *c, u8 reg)
static inline u8 read_zsdata(struct z8530_channel *c)
static inline void write_zsreg(struct z8530_channel *c, u8 reg, u8 val)
static inline void write_zsctrl(struct z8530_channel *c, u8 val)
static inline void write_zsdata(struct z8530_channel *c, u8 val)
u8 z8530_dead_port[]=
;
EXPORT_SYMBOL(z8530_dead_port);
u8 z8530_hdlc_kilostream[]=
;
EXPORT_SYMBOL(z8530_hdlc_kilostream);
u8 z8530_hdlc_kilostream_85230[]=
;
EXPORT_SYMBOL(z8530_hdlc_kilostream_85230);
static void z8530_flush_fifo(struct z8530_channel *c)
static void z8530_rtsdtr(struct z8530_channel *c, int set)
static void z8530_rx(struct z8530_channel *c)
static void z8530_tx(struct z8530_channel *c)
static void z8530_status(struct z8530_channel *chan)
struct z8530_irqhandler z8530_sync =
;
EXPORT_SYMBOL(z8530_sync);
static void z8530_dma_rx(struct z8530_channel *chan)
static void z8530_dma_tx(struct z8530_channel *chan)
static void z8530_dma_status(struct z8530_channel *chan)
static struct z8530_irqhandler z8530_dma_sync = ;
static struct z8530_irqhandler z8530_txdma_sync = ;
static void z8530_rx_clear(struct z8530_channel *c)
static void z8530_tx_clear(struct z8530_channel *c)
static void z8530_status_clear(struct z8530_channel *chan)
struct z8530_irqhandler z8530_nop=
;
EXPORT_SYMBOL(z8530_nop);
irqreturn_t z8530_interrupt(int irq, void *dev_id)
EXPORT_SYMBOL(z8530_interrupt);
static const u8 reg_init[16]=
;
int z8530_sync_open(struct net_device *dev, struct z8530_channel *c)
EXPORT_SYMBOL(z8530_sync_open);
int z8530_sync_close(struct net_device *dev, struct z8530_channel *c)
EXPORT_SYMBOL(z8530_sync_close);
int z8530_sync_dma_open(struct net_device *dev, struct z8530_channel *c)
EXPORT_SYMBOL(z8530_sync_dma_open);
int z8530_sync_dma_close(struct net_device *dev, struct z8530_channel *c)
EXPORT_SYMBOL(z8530_sync_dma_close);
int z8530_sync_txdma_open(struct net_device *dev, struct z8530_channel *c)
EXPORT_SYMBOL(z8530_sync_txdma_open);
int z8530_sync_txdma_close(struct net_device *dev, struct z8530_channel *c)
EXPORT_SYMBOL(z8530_sync_txdma_close);
static const char *z8530_type_name[]=;
void z8530_describe(struct z8530_dev *dev, char *mapping, unsigned long io)
EXPORT_SYMBOL(z8530_describe);
static inline int do_z8530_init(struct z8530_dev *dev)
int z8530_init(struct z8530_dev *dev)
EXPORT_SYMBOL(z8530_init);
int z8530_shutdown(struct z8530_dev *dev)
EXPORT_SYMBOL(z8530_shutdown);
int z8530_channel_load(struct z8530_channel *c, u8 *rtable)
EXPORT_SYMBOL(z8530_channel_load);
static void z8530_tx_begin(struct z8530_channel *c)
static void z8530_tx_done(struct z8530_channel *c)
void z8530_null_rx(struct z8530_channel *c, struct sk_buff *skb)
EXPORT_SYMBOL(z8530_null_rx);
static void z8530_rx_done(struct z8530_channel *c)
static inline int spans_boundary(struct sk_buff *skb)
netdev_tx_t z8530_queue_xmit(struct z8530_channel *c, struct sk_buff *skb)
EXPORT_SYMBOL(z8530_queue_xmit);
static const char banner[] __initdata =
KERN_INFO "Generic Z85C30/Z85230 interface driver v0.02\n";
static int __init z85230_init_driver(void)
module_init(z85230_init_driver);
static void __exit z85230_cleanup_driver(void)
module_exit(z85230_cleanup_driver);
MODULE_AUTHOR("Red Hat Inc.");
MODULE_DESCRIPTION("Z85x30 synchronous driver core");
MODULE_LICENSE("GPL");
