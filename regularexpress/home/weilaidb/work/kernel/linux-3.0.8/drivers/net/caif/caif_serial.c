MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sjur Brendeland<sjur.brandeland@stericsson.com>");
MODULE_DESCRIPTION("CAIF serial device TTY line discipline");
MODULE_LICENSE("GPL");
MODULE_ALIAS_LDISC(N_CAIF);
#define SEND_QUEUE_LOW 10
#define SEND_QUEUE_HIGH 100
#define CAIF_SENDING	        1
#define CAIF_FLOW_OFF_SENT	4
#define MAX_WRITE_CHUNK	     4096
#define ON 1
#define OFF 0
#define CAIF_MAX_MTU 4096
static LIST_HEAD(ser_list);
static int ser_loop;
module_param(ser_loop, bool, S_IRUGO);
MODULE_PARM_DESC(ser_loop, "Run in simulated loopback mode.");
static int ser_use_stx = 1;
module_param(ser_use_stx, bool, S_IRUGO);
MODULE_PARM_DESC(ser_use_stx, "STX enabled or not.");
static int ser_use_fcs = 1;
module_param(ser_use_fcs, bool, S_IRUGO);
MODULE_PARM_DESC(ser_use_fcs, "FCS enabled or not.");
static int ser_write_chunk = MAX_WRITE_CHUNK;
module_param(ser_write_chunk, int, S_IRUGO);
MODULE_PARM_DESC(ser_write_chunk, "Maximum size of data written to UART.");
static struct dentry *debugfsdir;
static int caif_net_open(struct net_device *dev);
static int caif_net_close(struct net_device *dev);
struct ser_device ;
static void caifdev_setup(struct net_device *dev);
static void ldisc_tx_wakeup(struct tty_struct *tty);
static inline void update_tty_status(struct ser_device *ser)
static inline void debugfs_init(struct ser_device *ser, struct tty_struct *tty)
static inline void debugfs_deinit(struct ser_device *ser)
static inline void debugfs_rx(struct ser_device *ser, const u8 *data, int size)
static inline void debugfs_tx(struct ser_device *ser, const u8 *data, int size)
static inline void debugfs_init(struct ser_device *ser, struct tty_struct *tty)
static inline void debugfs_deinit(struct ser_device *ser)
static inline void update_tty_status(struct ser_device *ser)
static inline void debugfs_rx(struct ser_device *ser, const u8 *data, int size)
static inline void debugfs_tx(struct ser_device *ser, const u8 *data, int size)
static void ldisc_receive(struct tty_struct *tty, const u8 *data,
char *flags, int count)
static int handle_tx(struct ser_device *ser)
static int caif_xmit(struct sk_buff *skb, struct net_device *dev)
static void ldisc_tx_wakeup(struct tty_struct *tty)
static int ldisc_open(struct tty_struct *tty)
static void ldisc_close(struct tty_struct *tty)
static struct tty_ldisc_ops caif_ldisc = ;
static int register_ldisc(void)
static const struct net_device_ops netdev_ops = ;
static void caifdev_setup(struct net_device *dev)
static int caif_net_open(struct net_device *dev)
static int caif_net_close(struct net_device *dev)
static int __init caif_ser_init(void)
static void __exit caif_ser_exit(void)
module_init(caif_ser_init);
module_exit(caif_ser_exit);
