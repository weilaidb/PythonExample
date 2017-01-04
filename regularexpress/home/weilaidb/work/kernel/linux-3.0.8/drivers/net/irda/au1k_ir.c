#if defined(CONFIG_MIPS_PB1000) || defined(CONFIG_MIPS_PB1100)
#elif defined(CONFIG_MIPS_DB1000) || defined(CONFIG_MIPS_DB1100)
#error au1k_ir: unsupported board
static int au1k_irda_net_init(struct net_device *);
static int au1k_irda_start(struct net_device *);
static int au1k_irda_stop(struct net_device *dev);
static int au1k_irda_hard_xmit(struct sk_buff *, struct net_device *);
static int au1k_irda_rx(struct net_device *);
static void au1k_irda_interrupt(int, void *);
static void au1k_tx_timeout(struct net_device *);
static int au1k_irda_ioctl(struct net_device *, struct ifreq *, int);
static int au1k_irda_set_speed(struct net_device *dev, int speed);
static void *dma_alloc(size_t, dma_addr_t *);
static void dma_free(void *, size_t);
static int qos_mtt_bits = 0x07;
static struct net_device *ir_devs[NUM_IR_IFF];
static char version[] __devinitdata =
"au1k_ircc:1.2 ppopov@mvista.com\n";
#define RUN_AT(x) (jiffies + (x))
static DEFINE_SPINLOCK(ir_lock);
u32 read_ir_reg(u32 addr)
static db_dest_t *GetFreeDB(struct au1k_private *aup)
static void ReleaseDB(struct au1k_private *aup, db_dest_t *pDB)
static void *dma_alloc(size_t size, dma_addr_t * dma_handle)
static void dma_free(void *vaddr, size_t size)
static void
setup_hw_rings(struct au1k_private *aup, u32 rx_base, u32 tx_base)
static int au1k_irda_init(void)
static int au1k_irda_init_iobuf(iobuff_t *io, int size)
static const struct net_device_ops au1k_irda_netdev_ops = ;
static int au1k_irda_net_init(struct net_device *dev)
static int au1k_init(struct net_device *dev)
static int au1k_irda_start(struct net_device *dev)
static int au1k_irda_stop(struct net_device *dev)
static void __exit au1k_irda_exit(void)
static inline void
update_tx_stats(struct net_device *dev, u32 status, u32 pkt_len)
static void au1k_tx_ack(struct net_device *dev)
static int au1k_irda_hard_xmit(struct sk_buff *skb, struct net_device *dev)
static inline void
update_rx_stats(struct net_device *dev, u32 status, u32 count)
static int au1k_irda_rx(struct net_device *dev)
static irqreturn_t au1k_irda_interrupt(int dummy, void *dev_id)
static void au1k_tx_timeout(struct net_device *dev)
static int
au1k_irda_set_speed(struct net_device *dev, int speed)
static int
au1k_irda_ioctl(struct net_device *dev, struct ifreq *ifreq, int cmd)
MODULE_AUTHOR("Pete Popov <ppopov@mvista.com>");
MODULE_DESCRIPTION("Au1000 IrDA Device Driver");
module_init(au1k_irda_init);
module_exit(au1k_irda_exit);
