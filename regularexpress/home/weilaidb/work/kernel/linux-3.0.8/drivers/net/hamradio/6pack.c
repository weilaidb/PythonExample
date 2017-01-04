#define SIXPACK_VERSION    "Revision: 0.3.0"
#define SIXP_SEOF		0x40
#define SIXP_TX_URUN		0x48
#define SIXP_RX_ORUN		0x50
#define SIXP_RX_BUF_OVL		0x58
#define SIXP_CHKSUM		0xFF
#define SIXP_CMD_MASK		0xC0
#define SIXP_CHN_MASK		0x07
#define SIXP_PRIO_CMD_MASK	0x80
#define SIXP_STD_CMD_MASK	0x40
#define SIXP_PRIO_DATA_MASK	0x38
#define SIXP_TX_MASK		0x20
#define SIXP_RX_MASK		0x10
#define SIXP_RX_DCD_MASK	0x18
#define SIXP_LEDS_ON		0x78
#define SIXP_LEDS_OFF		0x60
#define SIXP_CON		0x08
#define SIXP_STA		0x10
#define SIXP_FOUND_TNC		0xe9
#define SIXP_CON_ON		0x68
#define SIXP_DCD_MASK		0x08
#define SIXP_DAMA_OFF		0
#define SIXP_TXDELAY			(HZ/4)
#define SIXP_PERSIST			50
#define SIXP_SLOTTIME			(HZ/10)
#define SIXP_INIT_RESYNC_TIMEOUT	(3*HZ/2)
#define SIXP_RESYNC_TIMEOUT		5*HZ
#define SIXP_NRUNIT			31
#define SIXP_MTU			256
enum sixpack_flags ;
struct sixpack ;
#define AX25_6PACK_HEADER_LEN 0
static void sixpack_decode(struct sixpack *, unsigned char[], int);
static int encode_sixpack(unsigned char *, unsigned char *, int, unsigned char);
static void sp_xmit_on_air(unsigned long channel)
static void sp_encaps(struct sixpack *sp, unsigned char *icp, int len)
static netdev_tx_t sp_xmit(struct sk_buff *skb, struct net_device *dev)
static int sp_open_dev(struct net_device *dev)
static int sp_close(struct net_device *dev)
static int sp_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type, const void *daddr,
const void *saddr, unsigned len)
static int sp_set_mac_address(struct net_device *dev, void *addr)
static int sp_rebuild_header(struct sk_buff *skb)
static const struct header_ops sp_header_ops = ;
static const struct net_device_ops sp_netdev_ops = ;
static void sp_setup(struct net_device *dev)
static void sp_bump(struct sixpack *sp, char cmd)
static DEFINE_RWLOCK(disc_data_lock);
static struct sixpack *sp_get(struct tty_struct *tty)
static void sp_put(struct sixpack *sp)
static void sixpack_write_wakeup(struct tty_struct *tty)
static void sixpack_receive_buf(struct tty_struct *tty,
const unsigned char *cp, char *fp, int count)
#define TNC_UNINITIALIZED	0
#define TNC_UNSYNC_STARTUP	1
#define TNC_UNSYNCED		2
#define TNC_IN_SYNC		3
static void __tnc_set_sync_state(struct sixpack *sp, int new_tnc_state)
static inline void tnc_set_sync_state(struct sixpack *sp, int new_tnc_state)
static void resync_tnc(unsigned long channel)
static inline int tnc_init(struct sixpack *sp)
static int sixpack_open(struct tty_struct *tty)
static void sixpack_close(struct tty_struct *tty)
static int sixpack_ioctl(struct tty_struct *tty, struct file *file,
unsigned int cmd, unsigned long arg)
static long sixpack_compat_ioctl(struct tty_struct * tty, struct file * file,
unsigned int cmd, unsigned long arg)
static struct tty_ldisc_ops sp_ldisc = ;
static const char msg_banner[]  __initdata = KERN_INFO \
"AX.25: 6pack driver, " SIXPACK_VERSION "\n";
static const char msg_regfail[] __initdata = KERN_ERR  \
"6pack: can't register line discipline (err = %d)\n";
static int __init sixpack_init_driver(void)
static const char msg_unregfail[] __exitdata = KERN_ERR \
"6pack: can't unregister line discipline (err = %d)\n";
static void __exit sixpack_exit_driver(void)
static int encode_sixpack(unsigned char *tx_buf, unsigned char *tx_buf_raw,
int length, unsigned char tx_delay)
static void decode_data(struct sixpack *sp, unsigned char inbyte)
static void decode_prio_command(struct sixpack *sp, unsigned char cmd)
static void decode_std_command(struct sixpack *sp, unsigned char cmd)
static void
sixpack_decode(struct sixpack *sp, unsigned char *pre_rbuff, int count)
MODULE_AUTHOR("Ralf Baechle DO1GRB <ralf@linux-mips.org>");
MODULE_DESCRIPTION("6pack driver for AX.25");
MODULE_LICENSE("GPL");
MODULE_ALIAS_LDISC(N_6PACK);
module_init(sixpack_init_driver);
module_exit(sixpack_exit_driver);
