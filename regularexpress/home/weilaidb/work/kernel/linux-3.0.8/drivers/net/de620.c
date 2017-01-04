static const char version[] =
"de620.c: $Revision: 1.40 $,  Bjorn Ekwall <bj0rn@blox.se>\n";
#define DE620_CLONE 0
#define READ_DELAY 100
#define WRITE_DELAY 100
typedef unsigned char byte;
#define DE620_IO 0x378
#define DE620_IRQ	7
#define DATA_PORT	(dev->base_addr)
#define STATUS_PORT	(dev->base_addr + 1)
#define COMMAND_PORT	(dev->base_addr + 2)
#define RUNT 60
#define GIANT 1514
static int bnc;
static int utp;
static int io  = DE620_IO;
static int irq = DE620_IRQ;
static int clone = DE620_CLONE;
static spinlock_t de620_lock;
module_param(bnc, int, 0);
module_param(utp, int, 0);
module_param(io, int, 0);
module_param(irq, int, 0);
module_param(clone, int, 0);
MODULE_PARM_DESC(bnc, "DE-620 set BNC medium (0-1)");
MODULE_PARM_DESC(utp, "DE-620 set UTP medium (0-1)");
MODULE_PARM_DESC(io, "DE-620 I/O base address,required");
MODULE_PARM_DESC(irq, "DE-620 IRQ number,required");
MODULE_PARM_DESC(clone, "Check also for non-D-Link DE-620 clones (0-1)");
static int	de620_open(struct net_device *);
static int	de620_close(struct net_device *);
static void	de620_set_multicast_list(struct net_device *);
static int	de620_start_xmit(struct sk_buff *, struct net_device *);
static irqreturn_t de620_interrupt(int, void *);
static int	de620_rx_intr(struct net_device *);
static int	adapter_init(struct net_device *);
static int	read_eeprom(struct net_device *);
#define SCR_DEF NIBBLEMODE |INTON | SLEEP | AUTOTX
#define	TCR_DEF RXPB
#define DE620_RX_START_PAGE 12
#define DEF_NIC_CMD IRQEN | ICEN | DS1
static volatile byte	NIC_Cmd;
static volatile byte	next_rx_page;
static byte		first_rx_page;
static byte		last_rx_page;
static byte		EIPRegister;
static struct nic  nic_data;
#define de620_tx_buffs(dd) (inb(STATUS_PORT) & (TXBF0 | TXBF1))
#define de620_flip_ds(dd) NIC_Cmd ^= DS0 | DS1; outb(NIC_Cmd, COMMAND_PORT);
static int tot_cnt;
static inline byte
de620_ready(struct net_device *dev)
static inline void
de620_send_command(struct net_device *dev, byte cmd)
static inline void
de620_put_byte(struct net_device *dev, byte value)
static inline byte
de620_read_byte(struct net_device *dev)
static inline void
de620_write_block(struct net_device *dev, byte *buffer, int count, int pad)
static inline void
de620_read_block(struct net_device *dev, byte *data, int count)
static inline void
de620_set_delay(struct net_device *dev)
static inline void
de620_set_register(struct net_device *dev, byte reg, byte value)
static inline byte
de620_get_register(struct net_device *dev, byte reg)
static int de620_open(struct net_device *dev)
static int de620_close(struct net_device *dev)
static void de620_set_multicast_list(struct net_device *dev)
static void de620_timeout(struct net_device *dev)
static int de620_start_xmit(struct sk_buff *skb, struct net_device *dev)
static irqreturn_t
de620_interrupt(int irq_in, void *dev_id)
static int de620_rx_intr(struct net_device *dev)
static int adapter_init(struct net_device *dev)
static const struct net_device_ops de620_netdev_ops = ;
struct net_device * __init de620_probe(int unit)
#define sendit(dev,data) de620_set_register(dev, W_EIP, data | EIPRegister);
static unsigned short __init ReadAWord(struct net_device *dev, int from)
static int __init read_eeprom(struct net_device *dev)
static struct net_device *de620_dev;
int __init init_module(void)
void cleanup_module(void)
MODULE_LICENSE("GPL");
