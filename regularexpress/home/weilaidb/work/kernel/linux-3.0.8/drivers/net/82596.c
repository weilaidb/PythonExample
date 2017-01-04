static char version[] __initdata =
"82596.c $Revision: 1.5 $\n";
#define DRV_NAME	"82596"
#define DEB_INIT	0x0001
#define DEB_PROBE	0x0002
#define DEB_SERIOUS	0x0004
#define DEB_ERRORS	0x0008
#define DEB_MULTI	0x0010
#define DEB_TDR		0x0020
#define DEB_OPEN	0x0040
#define DEB_RESET	0x0080
#define DEB_ADDCMD	0x0100
#define DEB_STATUS	0x0200
#define DEB_STARTTX	0x0400
#define DEB_RXADDR	0x0800
#define DEB_TXADDR	0x1000
#define DEB_RXFRAME	0x2000
#define DEB_INTS	0x4000
#define DEB_STRUCT	0x8000
#define DEB_ANY		0xffff
#define DEB(x,y)	if (i596_debug & (x)) y
#if defined(CONFIG_MVME16x_NET) || defined(CONFIG_MVME16x_NET_MODULE)
#define ENABLE_MVME16x_NET
#if defined(CONFIG_BVME6000_NET) || defined(CONFIG_BVME6000_NET_MODULE)
#define ENABLE_BVME6000_NET
#if defined(CONFIG_APRICOT) || defined(CONFIG_APRICOT_MODULE)
#define ENABLE_APRICOT
#define WSWAPrfd(x)  ((struct i596_rfd *) (((u32)(x)<<16) | ((((u32)(x)))>>16)))
#define WSWAPrbd(x)  ((struct i596_rbd *) (((u32)(x)<<16) | ((((u32)(x)))>>16)))
#define WSWAPiscp(x) ((struct i596_iscp *)(((u32)(x)<<16) | ((((u32)(x)))>>16)))
#define WSWAPscb(x)  ((struct i596_scb *) (((u32)(x)<<16) | ((((u32)(x)))>>16)))
#define WSWAPcmd(x)  ((struct i596_cmd *) (((u32)(x)<<16) | ((((u32)(x)))>>16)))
#define WSWAPtbd(x)  ((struct i596_tbd *) (((u32)(x)<<16) | ((((u32)(x)))>>16)))
#define WSWAPchar(x) ((char *)            (((u32)(x)<<16) | ((((u32)(x)))>>16)))
#define ISCP_BUSY	0x00010000
#define MACH_IS_APRICOT	0
#define WSWAPrfd(x)     ((struct i596_rfd *)((long)x))
#define WSWAPrbd(x)     ((struct i596_rbd *)((long)x))
#define WSWAPiscp(x)    ((struct i596_iscp *)((long)x))
#define WSWAPscb(x)     ((struct i596_scb *)((long)x))
#define WSWAPcmd(x)     ((struct i596_cmd *)((long)x))
#define WSWAPtbd(x)     ((struct i596_tbd *)((long)x))
#define WSWAPchar(x)    ((char *)((long)x))
#define ISCP_BUSY	0x0001
#define MACH_IS_APRICOT	1
#define PORT_RESET		0x00
#define PORT_SELFTEST		0x01
#define PORT_ALTSCP		0x02
#define PORT_ALTDUMP		0x03
static int i596_debug = (DEB_SERIOUS|DEB_PROBE);
MODULE_AUTHOR("Richard Hirst");
MODULE_DESCRIPTION("i82596 driver");
MODULE_LICENSE("GPL");
module_param(i596_debug, int, 0);
MODULE_PARM_DESC(i596_debug, "i82596 debug mask");
static int rx_copybreak = 100;
#define PKT_BUF_SZ	1536
#define MAX_MC_CNT	64
#define I596_TOTAL_SIZE 17
#define I596_NULL ((void *)0xffffffff)
#define CMD_EOL		0x8000
#define CMD_SUSP	0x4000
#define CMD_INTR	0x2000
#define CMD_FLEX	0x0008
enum commands ;
#define STAT_C		0x8000
#define STAT_B		0x4000
#define STAT_OK		0x2000
#define STAT_A		0x1000
#define	 CUC_START	0x0100
#define	 CUC_RESUME	0x0200
#define	 CUC_SUSPEND    0x0300
#define	 CUC_ABORT	0x0400
#define	 RX_START	0x0010
#define	 RX_RESUME	0x0020
#define	 RX_SUSPEND	0x0030
#define	 RX_ABORT	0x0040
#define TX_TIMEOUT	(HZ/20)
struct i596_reg ;
#define EOF		0x8000
#define SIZE_MASK	0x3fff
struct i596_tbd ;
struct i596_cmd ;
struct tx_cmd ;
struct tdr_cmd ;
struct mc_cmd ;
struct sa_cmd ;
struct cf_cmd ;
struct i596_rfd ;
struct i596_rbd ;
#define TX_RING_SIZE 64
#define RX_RING_SIZE 16
struct i596_scb ;
struct i596_iscp ;
struct i596_scp ;
struct i596_private ;
static char init_setup[] =
;
static int i596_open(struct net_device *dev);
static netdev_tx_t i596_start_xmit(struct sk_buff *skb, struct net_device *dev);
static irqreturn_t i596_interrupt(int irq, void *dev_id);
static int i596_close(struct net_device *dev);
static void i596_add_cmd(struct net_device *dev, struct i596_cmd *cmd);
static void i596_tx_timeout (struct net_device *dev);
static void print_eth(unsigned char *buf, char *str);
static void set_multicast_list(struct net_device *dev);
static int rx_ring_size = RX_RING_SIZE;
static int ticks_limit = 25;
static int max_cmd_backlog = TX_RING_SIZE-1;
static inline void CA(struct net_device *dev)
static inline void MPU_PORT(struct net_device *dev, int c, volatile void *x)
static inline int wait_istat(struct net_device *dev, struct i596_private *lp, int delcnt, char *str)
static inline int wait_cmd(struct net_device *dev, struct i596_private *lp, int delcnt, char *str)
static inline int wait_cfg(struct net_device *dev, struct i596_cmd *cmd, int delcnt, char *str)
static void i596_display_data(struct net_device *dev)
#if defined(ENABLE_MVME16x_NET) || defined(ENABLE_BVME6000_NET)
static irqreturn_t i596_error(int irq, void *dev_id)
static inline void remove_rx_bufs(struct net_device *dev)
static inline int init_rx_bufs(struct net_device *dev)
static void rebuild_rx_bufs(struct net_device *dev)
static int init_i596_mem(struct net_device *dev)
static inline int i596_rx(struct net_device *dev)
static void i596_cleanup_cmd(struct net_device *dev, struct i596_private *lp)
static void i596_reset(struct net_device *dev, struct i596_private *lp,
int ioaddr)
static void i596_add_cmd(struct net_device *dev, struct i596_cmd *cmd)
static int i596_open(struct net_device *dev)
static void i596_tx_timeout (struct net_device *dev)
static netdev_tx_t i596_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void print_eth(unsigned char *add, char *str)
static int io = 0x300;
static int irq = 10;
static const struct net_device_ops i596_netdev_ops = ;
struct net_device * __init i82596_probe(int unit)
static irqreturn_t i596_interrupt(int irq, void *dev_id)
static int i596_close(struct net_device *dev)
static void set_multicast_list(struct net_device *dev)
static struct net_device *dev_82596;
module_param(irq, int, 0);
MODULE_PARM_DESC(irq, "Apricot IRQ number");
static int debug = -1;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "i82596 debug mask");
int __init init_module(void)
void __exit cleanup_module(void)
