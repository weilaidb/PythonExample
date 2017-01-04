static const char yam_drvname[] = "yam";
static const char yam_drvinfo[] __initdata = KERN_INFO \
"YAM driver version 0.8 by F1OAT/F6FBB\n";
#define FIRMWARE_9600	"yam/9600.bin"
#define FIRMWARE_1200	"yam/1200.bin"
#define YAM_9600	1
#define YAM_1200	2
#define NR_PORTS	4
#define YAM_MAGIC	0xF10A7654
#define TX_OFF		0
#define TX_HEAD		1
#define TX_DATA		2
#define TX_CRC1		3
#define TX_CRC2		4
#define TX_TAIL		5
#define YAM_MAX_FRAME	1024
#define DEFAULT_BITRATE	9600
#define DEFAULT_HOLDD	10
#define DEFAULT_TXD	300
#define DEFAULT_TXTAIL	10
#define DEFAULT_SLOT	100
#define DEFAULT_PERS	64
struct yam_port ;
struct yam_mcs ;
static struct net_device *yam_devs[NR_PORTS];
static struct yam_mcs *yam_data;
static DEFINE_TIMER(yam_timer, NULL, 0, 0);
#define RBR(iobase)	(iobase+0)
#define THR(iobase)	(iobase+0)
#define IER(iobase)	(iobase+1)
#define IIR(iobase)	(iobase+2)
#define FCR(iobase)	(iobase+2)
#define LCR(iobase)	(iobase+3)
#define MCR(iobase)	(iobase+4)
#define LSR(iobase)	(iobase+5)
#define MSR(iobase)	(iobase+6)
#define SCR(iobase)	(iobase+7)
#define DLL(iobase)	(iobase+0)
#define DLM(iobase)	(iobase+1)
#define YAM_EXTENT	8
#define IIR_NOPEND	1
#define IIR_MSR		0
#define IIR_TX		2
#define IIR_RX		4
#define IIR_LSR		6
#define IIR_TIMEOUT	12
#define IIR_MASK	0x0F
#define IER_RX		1
#define IER_TX		2
#define IER_LSR		4
#define IER_MSR		8
#define MCR_DTR		0x01
#define MCR_RTS		0x02
#define MCR_OUT1	0x04
#define MCR_OUT2	0x08
#define MCR_LOOP	0x10
#define MSR_DCTS	0x01
#define MSR_DDSR	0x02
#define MSR_DRIN	0x04
#define MSR_DDCD	0x08
#define MSR_CTS		0x10
#define MSR_DSR		0x20
#define MSR_RING	0x40
#define MSR_DCD		0x80
#define LSR_RXC		0x01
#define LSR_OE		0x02
#define LSR_PE		0x04
#define LSR_FE		0x08
#define LSR_BREAK	0x10
#define LSR_THRE	0x20
#define LSR_TSRE	0x40
#define LCR_DLAB	0x80
#define LCR_BREAK	0x40
#define LCR_PZERO	0x28
#define LCR_PEVEN	0x18
#define LCR_PODD	0x08
#define LCR_STOP1	0x00
#define LCR_STOP2	0x04
#define LCR_BIT5	0x00
#define LCR_BIT6	0x02
#define LCR_BIT7	0x01
#define LCR_BIT8	0x03
#define TX_RDY		MSR_DCTS
#define RX_DCD		MSR_DCD
#define RX_FLAG		MSR_RING
#define FPGA_DONE	MSR_DSR
#define PTT_ON		(MCR_RTS|MCR_OUT2)
#define PTT_OFF		(MCR_DTR|MCR_OUT2)
#define ENABLE_RXINT	IER_RX
#define ENABLE_TXINT	IER_MSR
#define ENABLE_RTXINT	(IER_RX|IER_MSR)
static const unsigned char chktabl[256] =
;
static const unsigned char chktabh[256] =
;
static void delay(int ms)
static void fpga_reset(int iobase)
static int fpga_write(int iobase, unsigned char wrd)
static unsigned char *add_mcs(unsigned char *bits, int bitrate,
unsigned int predef)
static unsigned char *get_mcs(int bitrate)
static int fpga_download(int iobase, int bitrate)
static void yam_set_uart(struct net_device *dev)
enum uart ;
static const char *uart_str[] =
;
static enum uart yam_check_uart(unsigned int iobase)
static inline void yam_rx_flag(struct net_device *dev, struct yam_port *yp)
static inline void yam_rx_byte(struct net_device *dev, struct yam_port *yp, unsigned char rxb)
static void ptt_on(struct net_device *dev)
static void ptt_off(struct net_device *dev)
static netdev_tx_t yam_send_packet(struct sk_buff *skb,
struct net_device *dev)
static void yam_start_tx(struct net_device *dev, struct yam_port *yp)
static void yam_arbitrate(struct net_device *dev)
static void yam_dotimer(unsigned long dummy)
static void yam_tx_byte(struct net_device *dev, struct yam_port *yp)
static irqreturn_t yam_interrupt(int irq, void *dev_id)
static void *yam_seq_start(struct seq_file *seq, loff_t *pos)
static void *yam_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void yam_seq_stop(struct seq_file *seq, void *v)
static int yam_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations yam_seqops = ;
static int yam_info_open(struct inode *inode, struct file *file)
static const struct file_operations yam_info_fops = ;
static int yam_open(struct net_device *dev)
static int yam_close(struct net_device *dev)
static int yam_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int yam_set_mac_address(struct net_device *dev, void *addr)
static const struct net_device_ops yam_netdev_ops = ;
static void yam_setup(struct net_device *dev)
static int __init yam_init_driver(void)
static void __exit yam_cleanup_driver(void)
MODULE_AUTHOR("Frederic Rible F1OAT frible@teaser.fr");
MODULE_DESCRIPTION("Yam amateur radio modem driver");
MODULE_LICENSE("GPL");
MODULE_FIRMWARE(FIRMWARE_1200);
MODULE_FIRMWARE(FIRMWARE_9600);
module_init(yam_init_driver);
module_exit(yam_cleanup_driver);
