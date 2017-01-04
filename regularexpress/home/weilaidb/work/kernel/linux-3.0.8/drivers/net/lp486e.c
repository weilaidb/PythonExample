#define DRV_NAME "lp486e"
#define LOG_SRCDST    0x80000000
#define LOG_STATINT   0x40000000
#define LOG_STARTINT  0x20000000
#define i596_debug debug
static int i596_debug = 0;
static const char * const medianame[] = ;
#define LP486E_TOTAL_SIZE 16
#define I596_NULL (0xffffffff)
#define CMD_EOL		0x8000
#define CMD_SUSP	0x4000
#define CMD_INTR	0x2000
#define CMD_FLEX	0x0008
enum commands ;
#define	STAT_CX		0x8000
#define	STAT_FR		0x4000
#define	STAT_CNA	0x2000
#define	STAT_RNR	0x1000
#define STAT_ACK	(STAT_CX | STAT_FR | STAT_CNA | STAT_RNR)
#define	STAT_CUS	0x0700
#define STAT_RUS	0x00f0
#define	STAT_T		0x0008
#define	STAT_ZERO	0x0807
#define ACK_CX		0x8000
#define ACK_FR		0x4000
#define ACK_CNA		0x2000
#define ACK_RNR		0x1000
#define CUC_START	0x0100
#define CUC_RESUME	0x0200
#define CUC_SUSPEND	0x0300
#define CUC_ABORT	0x0400
#define RX_START	0x0010
#define RX_RESUME	0x0020
#define RX_SUSPEND	0x0030
#define RX_ABORT	0x0040
typedef u32 phys_addr;
static inline phys_addr
va_to_pa(void *x)
static inline void *
pa_to_va(phys_addr x)
#define CMD_STAT_C	0x8000
#define CMD_STAT_B	0x4000
#define CMD_STAT_OK	0x2000
#define CMD_STAT_A	0x1000
struct i596_cmd ;
#define EOF		0x8000
#define SIZE_MASK	0x3fff
struct i596_tbd ;
struct tx_cmd ;
#define RFD_STAT_C	0x8000
#define RFD_STAT_B	0x4000
#define RFD_STAT_OK	0x2000
#define RFD_STATUS	0x1fff
#define RFD_LENGTH_ERR	0x1000
#define RFD_CRC_ERR	0x0800
#define RFD_ALIGN_ERR	0x0400
#define RFD_NOBUFS_ERR	0x0200
#define RFD_DMA_ERR	0x0100
#define RFD_SHORT_FRAME_ERR	0x0080
#define RFD_NOEOP_ERR	0x0040
#define RFD_TRUNC_ERR	0x0020
#define RFD_MULTICAST  0x0002
#define RFD_COLLISION  0x0001
struct i596_rfd ;
#define RBD_EL		0x8000
#define RBD_P		0x4000
#define RBD_SIZEMASK	0x3fff
#define RBD_EOF		0x8000
#define RBD_F		0x4000
struct i596_rbd ;
#define RX_RING_SIZE 64
#define RX_SKBSIZE (ETH_FRAME_LEN+10)
#define RX_RBD_SIZE 32
struct i596_scb ;
struct i596_iscp ;
struct i596_scp ;
struct i596_dump ;
struct i596_private ;
static char init_setup[14] = ;
static int i596_open(struct net_device *dev);
static netdev_tx_t i596_start_xmit(struct sk_buff *skb, struct net_device *dev);
static irqreturn_t i596_interrupt(int irq, void *dev_id);
static int i596_close(struct net_device *dev);
static void i596_add_cmd(struct net_device *dev, struct i596_cmd *cmd);
static void print_eth(char *);
static void set_multicast_list(struct net_device *dev);
static void i596_tx_timeout(struct net_device *dev);
static int
i596_timeout(struct net_device *dev, char *msg, int ct)
static inline int
init_rx_bufs(struct net_device *dev, int num)
static inline void
remove_rx_bufs(struct net_device *dev)
#define PORT_RESET              0x00
#define PORT_SELFTEST           0x01
#define PORT_ALTSCP             0x02
#define PORT_DUMP               0x03
#define IOADDR	0xcb0
#define IRQ	10
static inline void
PORT(phys_addr a, unsigned int cmd)
static inline void
CA(void)
static inline void
CLEAR_INT(void)
static int
i596_scp_setup(struct net_device *dev)
static int
init_i596(struct net_device *dev)
static inline int
i596_rx_one(struct net_device *dev, struct i596_private *lp,
struct i596_rfd *rfd, int *frames)
static int
i596_rx(struct net_device *dev)
static void
i596_cleanup_cmd(struct net_device *dev)
static void i596_reset(struct net_device *dev, struct i596_private *lp, int ioaddr)
static void i596_add_cmd(struct net_device *dev, struct i596_cmd *cmd)
static int i596_open(struct net_device *dev)
static netdev_tx_t i596_start_xmit (struct sk_buff *skb, struct net_device *dev)
static void
i596_tx_timeout (struct net_device *dev)
static void print_eth(char *add)
static const struct net_device_ops i596_netdev_ops = ;
static int __init lp486e_probe(struct net_device *dev)
static inline void
i596_handle_CU_completion(struct net_device *dev,
struct i596_private *lp,
unsigned short status,
unsigned short *ack_cmdp)
static irqreturn_t
i596_interrupt(int irq, void *dev_instance)
static int i596_close(struct net_device *dev)
static void set_multicast_list(struct net_device *dev)
MODULE_AUTHOR("Ard van Breemen <ard@cstmel.nl.eu.org>");
MODULE_DESCRIPTION("Intel Panther onboard i82596 driver");
MODULE_LICENSE("GPL");
static struct net_device *dev_lp486e;
static int full_duplex;
static int options;
static int io = IOADDR;
static int irq = IRQ;
module_param(debug, int, 0);
module_param(options, int, 0);
module_param(full_duplex, int, 0);
static int __init lp486e_init_module(void)
static void __exit lp486e_cleanup_module(void)
module_init(lp486e_init_module);
module_exit(lp486e_cleanup_module);
