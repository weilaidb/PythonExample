static char version[] = "sb1000.c:v1.1.2 6/01/98 (fventuri@mediaone.net)\n";
static int sb1000_debug = SB1000_DEBUG;
static const int sb1000_debug = 1;
static const int SB1000_IO_EXTENT = 8;
static const int SB1000_MRU = 1500;
#define NPIDS 4
struct sb1000_private ;
extern int sb1000_probe(struct net_device *dev);
static int sb1000_open(struct net_device *dev);
static int sb1000_dev_ioctl (struct net_device *dev, struct ifreq *ifr, int cmd);
static netdev_tx_t sb1000_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static irqreturn_t sb1000_interrupt(int irq, void *dev_id);
static int sb1000_close(struct net_device *dev);
static int card_wait_for_busy_clear(const int ioaddr[],
const char* name);
static int card_wait_for_ready(const int ioaddr[], const char* name,
unsigned char in[]);
static int card_send_command(const int ioaddr[], const char* name,
const unsigned char out[], unsigned char in[]);
static int sb1000_wait_for_ready(const int ioaddr[], const char* name);
static int sb1000_wait_for_ready_clear(const int ioaddr[],
const char* name);
static void sb1000_send_command(const int ioaddr[], const char* name,
const unsigned char out[]);
static void sb1000_read_status(const int ioaddr[], unsigned char in[]);
static void sb1000_issue_read_command(const int ioaddr[],
const char* name);
static int sb1000_reset(const int ioaddr[], const char* name);
static int sb1000_check_CRC(const int ioaddr[], const char* name);
static inline int sb1000_start_get_set_command(const int ioaddr[],
const char* name);
static int sb1000_end_get_set_command(const int ioaddr[],
const char* name);
static int sb1000_activate(const int ioaddr[], const char* name);
static int sb1000_get_firmware_version(const int ioaddr[],
const char* name, unsigned char version[], int do_end);
static int sb1000_get_frequency(const int ioaddr[], const char* name,
int* frequency);
static int sb1000_set_frequency(const int ioaddr[], const char* name,
int frequency);
static int sb1000_get_PIDs(const int ioaddr[], const char* name,
short PID[]);
static int sb1000_set_PIDs(const int ioaddr[], const char* name,
const short PID[]);
static int sb1000_rx(struct net_device *dev);
static void sb1000_error_dpc(struct net_device *dev);
static const struct pnp_device_id sb1000_pnp_ids[] = ;
MODULE_DEVICE_TABLE(pnp, sb1000_pnp_ids);
static const struct net_device_ops sb1000_netdev_ops = ;
static int
sb1000_probe_one(struct pnp_dev *pdev, const struct pnp_device_id *id)
static void
sb1000_remove_one(struct pnp_dev *pdev)
static struct pnp_driver sb1000_driver = ;
static const int TimeOutJiffies = (875 * HZ) / 100;
static int
card_wait_for_busy_clear(const int ioaddr[], const char* name)
static int
card_wait_for_ready(const int ioaddr[], const char* name, unsigned char in[])
static int
card_send_command(const int ioaddr[], const char* name,
const unsigned char out[], unsigned char in[])
static const int Sb1000TimeOutJiffies = 7 * HZ;
static int
sb1000_wait_for_ready(const int ioaddr[], const char* name)
static int
sb1000_wait_for_ready_clear(const int ioaddr[], const char* name)
static void
sb1000_send_command(const int ioaddr[], const char* name,
const unsigned char out[])
static void
sb1000_read_status(const int ioaddr[], unsigned char in[])
static void
sb1000_issue_read_command(const int ioaddr[], const char* name)
static int
sb1000_reset(const int ioaddr[], const char* name)
static int
sb1000_check_CRC(const int ioaddr[], const char* name)
static inline int
sb1000_start_get_set_command(const int ioaddr[], const char* name)
static int
sb1000_end_get_set_command(const int ioaddr[], const char* name)
static int
sb1000_activate(const int ioaddr[], const char* name)
static int
sb1000_get_firmware_version(const int ioaddr[], const char* name,
unsigned char version[], int do_end)
static int
sb1000_get_frequency(const int ioaddr[], const char* name, int* frequency)
static int
sb1000_set_frequency(const int ioaddr[], const char* name, int frequency)
static int
sb1000_get_PIDs(const int ioaddr[], const char* name, short PID[])
static int
sb1000_set_PIDs(const int ioaddr[], const char* name, const short PID[])
static void
sb1000_print_status_buffer(const char* name, unsigned char st[],
unsigned char buffer[], int size)
static int
sb1000_rx(struct net_device *dev)
static void
sb1000_error_dpc(struct net_device *dev)
static int
sb1000_open(struct net_device *dev)
static int sb1000_dev_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static netdev_tx_t
sb1000_start_xmit(struct sk_buff *skb, struct net_device *dev)
static irqreturn_t sb1000_interrupt(int irq, void *dev_id)
static int sb1000_close(struct net_device *dev)
MODULE_AUTHOR("Franco Venturi <fventuri@mediaone.net>");
MODULE_DESCRIPTION("General Instruments SB1000 driver");
MODULE_LICENSE("GPL");
static int __init
sb1000_init(void)
static void __exit
sb1000_exit(void)
module_init(sb1000_init);
module_exit(sb1000_exit);
