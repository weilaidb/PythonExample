#undef COSA_SLOW_IO
#define COSA_MAX_ID_STRING	128
#define COSA_MAX_NAME		(sizeof("cosaXXXcXXX")+1)
struct channel_data ;
#define COSA_FW_RESET		(1<<0)
#define COSA_FW_DOWNLOAD	(1<<1)
#define COSA_FW_START		(1<<2)
struct cosa_data ;
static DEFINE_MUTEX(cosa_chardev_mutex);
static int cosa_major = 117;
#define CARD_MINOR_BITS	4
#define MAX_CARDS	16
#define DRIVER_RX_READY		0x0001
#define DRIVER_TX_READY		0x0002
#define DRIVER_TXMAP_SHIFT	2
#define DRIVER_TXMAP_MASK	0x0c
#define TXBIT 0
#define RXBIT 1
#define IRQBIT 2
#define COSA_MTU 2000
#undef DEBUG_DATA
#undef DEBUG_IRQS
#undef DEBUG_IO
#define TX_TIMEOUT	(5*HZ)
static struct cosa_data cosa_cards[MAX_CARDS];
static int nr_cards;
static int io[MAX_CARDS+1]  = ;
static int dma[MAX_CARDS+1] = ;
static int io[MAX_CARDS+1];
static int dma[MAX_CARDS+1];
static int irq[MAX_CARDS+1] = ;
static struct class *cosa_class;
module_param_array(io, int, NULL, 0);
MODULE_PARM_DESC(io, "The I/O bases of the COSA or SRP cards");
module_param_array(irq, int, NULL, 0);
MODULE_PARM_DESC(irq, "The IRQ lines of the COSA or SRP cards");
module_param_array(dma, int, NULL, 0);
MODULE_PARM_DESC(dma, "The DMA channels of the COSA or SRP cards");
MODULE_AUTHOR("Jan \"Yenya\" Kasprzak, <kas@fi.muni.cz>");
MODULE_DESCRIPTION("Modular driver for the COSA or SRP synchronous card");
MODULE_LICENSE("GPL");
#define cosa_outb outb_p
#define cosa_outw outw_p
#define cosa_inb  inb_p
#define cosa_inw  inw_p
#define cosa_outb outb
#define cosa_outw outw
#define cosa_inb  inb
#define cosa_inw  inw
#define is_8bit(cosa)		(!(cosa->datareg & 0x08))
#define cosa_getstatus(cosa)	(cosa_inb(cosa->statusreg))
#define cosa_putstatus(cosa, stat)	(cosa_outb(stat, cosa->statusreg))
#define cosa_getdata16(cosa)	(cosa_inw(cosa->datareg))
#define cosa_getdata8(cosa)	(cosa_inb(cosa->datareg))
#define cosa_putdata16(cosa, dt)	(cosa_outw(dt, cosa->datareg))
#define cosa_putdata8(cosa, dt)	(cosa_outb(dt, cosa->datareg))
static int cosa_probe(int ioaddr, int irq, int dma);
static void cosa_enable_rx(struct channel_data *chan);
static void cosa_disable_rx(struct channel_data *chan);
static int cosa_start_tx(struct channel_data *channel, char *buf, int size);
static void cosa_kick(struct cosa_data *cosa);
static int cosa_dma_able(struct channel_data *chan, char *buf, int data);
static int cosa_net_attach(struct net_device *dev, unsigned short encoding,
unsigned short parity);
static int cosa_net_open(struct net_device *d);
static int cosa_net_close(struct net_device *d);
static void cosa_net_timeout(struct net_device *d);
static netdev_tx_t cosa_net_tx(struct sk_buff *skb, struct net_device *d);
static char *cosa_net_setup_rx(struct channel_data *channel, int size);
static int cosa_net_rx_done(struct channel_data *channel);
static int cosa_net_tx_done(struct channel_data *channel, int size);
static int cosa_net_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd);
static char *chrdev_setup_rx(struct channel_data *channel, int size);
static int chrdev_rx_done(struct channel_data *channel);
static int chrdev_tx_done(struct channel_data *channel, int size);
static ssize_t cosa_read(struct file *file,
char __user *buf, size_t count, loff_t *ppos);
static ssize_t cosa_write(struct file *file,
const char __user *buf, size_t count, loff_t *ppos);
static unsigned int cosa_poll(struct file *file, poll_table *poll);
static int cosa_open(struct inode *inode, struct file *file);
static int cosa_release(struct inode *inode, struct file *file);
static long cosa_chardev_ioctl(struct file *file, unsigned int cmd,
unsigned long arg);
static int cosa_fasync(struct inode *inode, struct file *file, int on);
static const struct file_operations cosa_fops = ;
static int cosa_start(struct cosa_data *cosa, int address);
static int cosa_reset(struct cosa_data *cosa);
static int cosa_download(struct cosa_data *cosa, void __user *a);
static int cosa_readmem(struct cosa_data *cosa, void __user *a);
static int download(struct cosa_data *cosa, const char __user *data, int addr, int len);
static int startmicrocode(struct cosa_data *cosa, int address);
static int readmem(struct cosa_data *cosa, char __user *data, int addr, int len);
static int cosa_reset_and_read_id(struct cosa_data *cosa, char *id);
static int get_wait_data(struct cosa_data *cosa);
static int put_wait_data(struct cosa_data *cosa, int data);
static int puthexnumber(struct cosa_data *cosa, int number);
static void put_driver_status(struct cosa_data *cosa);
static void put_driver_status_nolock(struct cosa_data *cosa);
static irqreturn_t cosa_interrupt(int irq, void *cosa);
static void debug_data_in(struct cosa_data *cosa, int data);
static void debug_data_out(struct cosa_data *cosa, int data);
static void debug_data_cmd(struct cosa_data *cosa, int data);
static void debug_status_in(struct cosa_data *cosa, int status);
static void debug_status_out(struct cosa_data *cosa, int status);
static inline struct channel_data* dev_to_chan(struct net_device *dev)
static int __init cosa_init(void)
module_init(cosa_init);
static void __exit cosa_exit(void)
module_exit(cosa_exit);
static const struct net_device_ops cosa_ops = ;
static int cosa_probe(int base, int irq, int dma)
static int cosa_net_attach(struct net_device *dev, unsigned short encoding,
unsigned short parity)
static int cosa_net_open(struct net_device *dev)
static netdev_tx_t cosa_net_tx(struct sk_buff *skb,
struct net_device *dev)
static void cosa_net_timeout(struct net_device *dev)
static int cosa_net_close(struct net_device *dev)
static char *cosa_net_setup_rx(struct channel_data *chan, int size)
static int cosa_net_rx_done(struct channel_data *chan)
static int cosa_net_tx_done(struct channel_data *chan, int size)
static ssize_t cosa_read(struct file *file,
char __user *buf, size_t count, loff_t *ppos)
static char *chrdev_setup_rx(struct channel_data *chan, int size)
static int chrdev_rx_done(struct channel_data *chan)
static ssize_t cosa_write(struct file *file,
const char __user *buf, size_t count, loff_t *ppos)
static int chrdev_tx_done(struct channel_data *chan, int size)
static unsigned int cosa_poll(struct file *file, poll_table *poll)
static int cosa_open(struct inode *inode, struct file *file)
static int cosa_release(struct inode *inode, struct file *file)
static struct fasync_struct *fasync[256] = ;
static int cosa_fasync(struct inode *inode, struct file *file, int on)
static inline int cosa_reset(struct cosa_data *cosa)
static inline int cosa_download(struct cosa_data *cosa, void __user *arg)
static inline int cosa_readmem(struct cosa_data *cosa, void __user *arg)
static inline int cosa_start(struct cosa_data *cosa, int address)
static inline int cosa_getidstr(struct cosa_data *cosa, char __user *string)
static inline int cosa_gettype(struct cosa_data *cosa, char __user *string)
static int cosa_ioctl_common(struct cosa_data *cosa,
struct channel_data *channel, unsigned int cmd, unsigned long arg)
static int cosa_net_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static long cosa_chardev_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static void cosa_enable_rx(struct channel_data *chan)
static void cosa_disable_rx(struct channel_data *chan)
static int cosa_start_tx(struct channel_data *chan, char *buf, int len)
static void put_driver_status(struct cosa_data *cosa)
static void put_driver_status_nolock(struct cosa_data *cosa)
static void cosa_kick(struct cosa_data *cosa)
static int cosa_dma_able(struct channel_data *chan, char *buf, int len)
static int download(struct cosa_data *cosa, const char __user *microcode, int length, int address)
static int startmicrocode(struct cosa_data *cosa, int address)
static int readmem(struct cosa_data *cosa, char __user *microcode, int length, int address)
static int cosa_reset_and_read_id(struct cosa_data *cosa, char *idstring)
static int get_wait_data(struct cosa_data *cosa)
static int put_wait_data(struct cosa_data *cosa, int data)
static int puthexnumber(struct cosa_data *cosa, int number)
static inline void tx_interrupt(struct cosa_data *cosa, int status)
static inline void rx_interrupt(struct cosa_data *cosa, int status)
static inline void eot_interrupt(struct cosa_data *cosa, int status)
static irqreturn_t cosa_interrupt(int irq, void *cosa_)
static void debug_status_in(struct cosa_data *cosa, int status)
static void debug_status_out(struct cosa_data *cosa, int status)
static void debug_data_in(struct cosa_data *cosa, int data)
static void debug_data_out(struct cosa_data *cosa, int data)
static void debug_data_cmd(struct cosa_data *cosa, int data)
