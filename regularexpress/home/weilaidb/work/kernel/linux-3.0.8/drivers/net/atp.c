static const char version[] =
"atp.c:v1.09=ac 2002/10/01 Donald Becker <becker@scyld.com>\n";
static int debug = 1;
#define net_debug debug
static int max_interrupt_work = 15;
#define NUM_UNITS 2
static int io[NUM_UNITS];
static int irq[NUM_UNITS];
static int xcvr[NUM_UNITS];
#define TX_TIMEOUT  (400*HZ/1000)
MODULE_AUTHOR("Donald Becker <becker@scyld.com>");
MODULE_DESCRIPTION("RealTek RTL8002/8012 parallel port Ethernet driver");
MODULE_LICENSE("GPL");
module_param(max_interrupt_work, int, 0);
module_param(debug, int, 0);
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
module_param_array(xcvr, int, NULL, 0);
MODULE_PARM_DESC(max_interrupt_work, "ATP maximum events handled per interrupt");
MODULE_PARM_DESC(debug, "ATP debug level (0-7)");
MODULE_PARM_DESC(io, "ATP I/O base address(es)");
MODULE_PARM_DESC(irq, "ATP IRQ number(s)");
MODULE_PARM_DESC(xcvr, "ATP transceiver(s) (0=internal, 1=external)");
#define ETHERCARD_TOTAL_SIZE	3
static char mux_8012[] = ;
struct net_local ;
#define TIMED_CHECKER (HZ/4)
static void atp_timed_checker(unsigned long ignored);
static int atp_probe1(long ioaddr);
static void get_node_ID(struct net_device *dev);
static unsigned short eeprom_op(long ioaddr, unsigned int cmd);
static int net_open(struct net_device *dev);
static void hardware_init(struct net_device *dev);
static void write_packet(long ioaddr, int length, unsigned char *packet, int pad, int mode);
static void trigger_send(long ioaddr, int length);
static netdev_tx_t atp_send_packet(struct sk_buff *skb,
struct net_device *dev);
static irqreturn_t atp_interrupt(int irq, void *dev_id);
static void net_rx(struct net_device *dev);
static void read_block(long ioaddr, int length, unsigned char *buffer, int data_mode);
static int net_close(struct net_device *dev);
static void set_rx_mode(struct net_device *dev);
static void tx_timeout(struct net_device *dev);
static struct net_device *root_atp_dev;
static int __init atp_init(void)
static const struct net_device_ops atp_netdev_ops = ;
static int __init atp_probe1(long ioaddr)
static void __init get_node_ID(struct net_device *dev)
static unsigned short __init eeprom_op(long ioaddr, u32 cmd)
static int net_open(struct net_device *dev)
static void hardware_init(struct net_device *dev)
static void trigger_send(long ioaddr, int length)
static void write_packet(long ioaddr, int length, unsigned char *packet, int pad_len, int data_mode)
static void tx_timeout(struct net_device *dev)
static netdev_tx_t atp_send_packet(struct sk_buff *skb,
struct net_device *dev)
static irqreturn_t atp_interrupt(int irq, void *dev_instance)
static void atp_timed_checker(unsigned long data)
static void net_rx(struct net_device *dev)
static void read_block(long ioaddr, int length, unsigned char *p, int data_mode)
static int
net_close(struct net_device *dev)
static void set_rx_mode_8002(struct net_device *dev)
static void set_rx_mode_8012(struct net_device *dev)
static void set_rx_mode(struct net_device *dev)
static int __init atp_init_module(void)
static void __exit atp_cleanup_module(void)
module_init(atp_init_module);
module_exit(atp_cleanup_module);
