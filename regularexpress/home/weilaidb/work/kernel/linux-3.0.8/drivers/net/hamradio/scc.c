#define RCS_ID "$Id: scc.c,v 1.75 1998/11/04 15:15:01 jreuter Exp jreuter $"
#define VERSION "3.0"
#undef  SCC_LDELAY
#undef  SCC_DONT_CHECK
#define SCC_MAXCHIPS	4
#define SCC_BUFSIZE	384
#undef	SCC_DEBUG
#define SCC_DEFAULT_CLOCK	4915200
static const char banner[] __initdata = KERN_INFO \
"AX.25: Z8530 SCC driver version "VERSION".dl1bke\n";
static void t_dwait(unsigned long);
static void t_txdelay(unsigned long);
static void t_tail(unsigned long);
static void t_busy(unsigned long);
static void t_maxkeyup(unsigned long);
static void t_idle(unsigned long);
static void scc_tx_done(struct scc_channel *);
static void scc_start_tx_timer(struct scc_channel *, void (*)(unsigned long), unsigned long);
static void scc_start_maxkeyup(struct scc_channel *);
static void scc_start_defer(struct scc_channel *);
static void z8530_init(void);
static void init_channel(struct scc_channel *scc);
static void scc_key_trx (struct scc_channel *scc, char tx);
static void scc_init_timer(struct scc_channel *scc);
static int scc_net_alloc(const char *name, struct scc_channel *scc);
static void scc_net_setup(struct net_device *dev);
static int scc_net_open(struct net_device *dev);
static int scc_net_close(struct net_device *dev);
static void scc_net_rx(struct scc_channel *scc, struct sk_buff *skb);
static netdev_tx_t scc_net_tx(struct sk_buff *skb,
struct net_device *dev);
static int scc_net_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd);
static int scc_net_set_mac_address(struct net_device *dev, void *addr);
static struct net_device_stats * scc_net_get_stats(struct net_device *dev);
static unsigned char SCC_DriverName[] = "scc";
static struct irqflags  Ivec[NR_IRQS];
static struct scc_channel SCC_Info[2 * SCC_MAXCHIPS];
static struct scc_ctrl  SCC_ctrl[SCC_MAXCHIPS+1];
static unsigned char Driver_Initialized;
static int Nchips;
static io_port Vector_Latch;
static DEFINE_SPINLOCK(iolock);
static inline unsigned char InReg(io_port port, unsigned char reg)
static inline void OutReg(io_port port, unsigned char reg, unsigned char val)
static inline void wr(struct scc_channel *scc, unsigned char reg,
unsigned char val)
static inline void or(struct scc_channel *scc, unsigned char reg, unsigned char val)
static inline void cl(struct scc_channel *scc, unsigned char reg, unsigned char val)
static inline void scc_discard_buffers(struct scc_channel *scc)
static inline void scc_notify(struct scc_channel *scc, int event)
static inline void flush_rx_FIFO(struct scc_channel *scc)
static void start_hunt(struct scc_channel *scc)
static inline void scc_txint(struct scc_channel *scc)
static inline void scc_exint(struct scc_channel *scc)
static inline void scc_rxint(struct scc_channel *scc)
static inline void scc_spint(struct scc_channel *scc)
static void scc_isr_dispatch(struct scc_channel *scc, int vector)
#define SCC_IRQTIMEOUT 30000
static irqreturn_t scc_isr(int irq, void *dev_id)
static inline void set_brg(struct scc_channel *scc, unsigned int tc)
static inline void set_speed(struct scc_channel *scc)
static inline void init_brg(struct scc_channel *scc)
static void init_channel(struct scc_channel *scc)
static void scc_key_trx(struct scc_channel *scc, char tx)
static void __scc_start_tx_timer(struct scc_channel *scc, void (*handler)(unsigned long), unsigned long when)
static void scc_start_tx_timer(struct scc_channel *scc, void (*handler)(unsigned long), unsigned long when)
static void scc_start_defer(struct scc_channel *scc)
static void scc_start_maxkeyup(struct scc_channel *scc)
static void scc_tx_done(struct scc_channel *scc)
static unsigned char Rand = 17;
static inline int is_grouped(struct scc_channel *scc)
static void t_dwait(unsigned long channel)
static void t_txdelay(unsigned long channel)
static void t_tail(unsigned long channel)
static void t_busy(unsigned long channel)
static void t_maxkeyup(unsigned long channel)
static void t_idle(unsigned long channel)
static void scc_init_timer(struct scc_channel *scc)
#define CAST(x) (unsigned long)(x)
static unsigned int scc_set_param(struct scc_channel *scc, unsigned int cmd, unsigned int arg)
static unsigned long scc_get_param(struct scc_channel *scc, unsigned int cmd)
#undef CAST
static void scc_stop_calibrate(unsigned long channel)
static void
scc_start_calibrate(struct scc_channel *scc, int duration, unsigned char pattern)
static void z8530_init(void)
static int scc_net_alloc(const char *name, struct scc_channel *scc)
static const struct net_device_ops scc_netdev_ops = ;
static void scc_net_setup(struct net_device *dev)
static int scc_net_open(struct net_device *dev)
static int scc_net_close(struct net_device *dev)
static void scc_net_rx(struct scc_channel *scc, struct sk_buff *skb)
static netdev_tx_t scc_net_tx(struct sk_buff *skb, struct net_device *dev)
static int scc_net_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int scc_net_set_mac_address(struct net_device *dev, void *addr)
static struct net_device_stats *scc_net_get_stats(struct net_device *dev)
static inline struct scc_channel *scc_net_seq_idx(loff_t pos)
static void *scc_net_seq_start(struct seq_file *seq, loff_t *pos)
static void *scc_net_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void scc_net_seq_stop(struct seq_file *seq, void *v)
static int scc_net_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations scc_net_seq_ops = ;
static int scc_net_seq_open(struct inode *inode, struct file *file)
static const struct file_operations scc_net_seq_fops = ;
static int __init scc_init_driver (void)
static void __exit scc_cleanup_driver(void)
MODULE_AUTHOR("Joerg Reuter <jreuter@yaina.de>");
MODULE_DESCRIPTION("AX.25 Device Driver for Z8530 based HDLC cards");
MODULE_SUPPORTED_DEVICE("Z8530 based SCC cards for Amateur Radio");
MODULE_LICENSE("GPL");
module_init(scc_init_driver);
module_exit(scc_cleanup_driver);
