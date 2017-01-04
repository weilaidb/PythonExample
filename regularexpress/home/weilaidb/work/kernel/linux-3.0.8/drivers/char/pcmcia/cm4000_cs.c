#define reader_to_dev(x)	(&x->p_dev->dev)
#define DEBUGP(n, rdr, x, args...) do  while (0)
static DEFINE_MUTEX(cmm_mutex);
#define	T_1SEC		(HZ)
#define	T_10MSEC	msecs_to_jiffies(10)
#define	T_20MSEC	msecs_to_jiffies(20)
#define	T_40MSEC	msecs_to_jiffies(40)
#define	T_50MSEC	msecs_to_jiffies(50)
#define	T_100MSEC	msecs_to_jiffies(100)
#define	T_500MSEC	msecs_to_jiffies(500)
static void cm4000_release(struct pcmcia_device *link);
static int major;
#define	M_FETCH_ATR	0
#define	M_TIMEOUT_WAIT	1
#define	M_READ_ATR_LEN	2
#define	M_READ_ATR	3
#define	M_ATR_PRESENT	4
#define	M_BAD_CARD	5
#define M_CARDOFF	6
#define	LOCK_IO			0
#define	LOCK_MONITOR		1
#define IS_AUTOPPS_ACT		 6
#define	IS_PROCBYTE_PRESENT	 7
#define	IS_INVREV		 8
#define IS_ANY_T0		 9
#define	IS_ANY_T1		10
#define	IS_ATR_PRESENT		11
#define	IS_ATR_VALID		12
#define	IS_CMM_ABSENT		13
#define	IS_BAD_LENGTH		14
#define	IS_BAD_CSUM		15
#define	IS_BAD_CARD		16
#define REG_FLAGS0(x)		(x + 0)
#define REG_FLAGS1(x)		(x + 1)
#define REG_NUM_BYTES(x)	(x + 2)
#define REG_BUF_ADDR(x)		(x + 3)
#define REG_BUF_DATA(x)		(x + 4)
#define REG_NUM_SEND(x)		(x + 5)
#define REG_BAUDRATE(x)		(x + 6)
#define REG_STOPBITS(x)		(x + 7)
struct cm4000_dev ;
#define	ZERO_DEV(dev)  						\
memset(&dev->atr_csum,0,				\
sizeof(struct cm4000_dev) - 			\
offsetof(struct cm4000_dev, atr_csum))
static struct pcmcia_device *dev_table[CM4000_MAX_DEV];
static struct class *cmm_class;
static unsigned char fi_di_table[10][14] = ;
#define	xoutb	outb
#define	xinb	inb
static inline void xoutb(unsigned char val, unsigned short port)
static inline unsigned char xinb(unsigned short port)
static inline unsigned char invert_revert(unsigned char ch)
static void str_invert_revert(unsigned char *b, int len)
#define	ATRLENCK(dev,pos) \
if (pos>=dev->atr_len || pos>=MAX_ATR) \
goto return_0;
static unsigned int calc_baudv(unsigned char fidi)
static unsigned short io_read_num_rec_bytes(unsigned int iobase,
unsigned short *s)
static int parse_atr(struct cm4000_dev *dev)
struct card_fixup ;
static struct card_fixup card_fixups[] = ;
static void set_cardparameter(struct cm4000_dev *dev)
static int set_protocol(struct cm4000_dev *dev, struct ptsreq *ptsreq)
DEBUGP(5, dev, "Set number of bytes to write\n");
xoutb(0x04, REG_NUM_SEND(iobase));
xoutb(0x50, REG_FLAGS0(iobase));
DEBUGP(5, dev, "Waiting for NumRecBytes getting valid\n");
for (i = 0; i < 100; i++)
if (i == 100)
DEBUGP(5, dev, "Reading NumRecBytes\n");
for (i = 0; i < 100; i++)
if (num_bytes_read == 3)
i = 0;
if (i == 100)
DEBUGP(5, dev, "Reset the CARDMAN CONTROLLER\n");
xoutb(0x80, REG_FLAGS0(iobase));
DEBUGP(5, dev, "Read PPS reply\n");
for (i = 0; i < num_bytes_read; i++)
DEBUGP(2, dev, "PTSreply: ");
for (i = 0; i < num_bytes_read; i++)
pr_debug("\n");
DEBUGP(5, dev, "Clear Tactive in Flags1\n");
xoutb(0x20, REG_FLAGS1(iobase));
if ((dev->pts[0] == pts_reply[0]) &&
(dev->pts[1] == pts_reply[1]) &&
(dev->pts[2] == pts_reply[2]) && (dev->pts[3] == pts_reply[3]))  else if ((dev->pts[0] == pts_reply[0]) &&
((dev->pts[1] & 0xef) == pts_reply[1]) &&
((pts_reply[0] ^ pts_reply[1]) == pts_reply[2]))  else
rc = -EIO;
exit_setprotocol:
DEBUGP(3, dev, "<- set_protocol\n");
return rc;
}
static int io_detect_cm4000(unsigned int iobase, struct cm4000_dev *dev)
static void terminate_monitor(struct cm4000_dev *dev)
static void monitor_card(unsigned long p)
static ssize_t cmm_read(struct file *filp, __user char *buf, size_t count,
loff_t *ppos)
static ssize_t cmm_write(struct file *filp, const char __user *buf,
size_t count, loff_t *ppos)
static void start_monitor(struct cm4000_dev *dev)
static void stop_monitor(struct cm4000_dev *dev)
static long cmm_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
static int cmm_open(struct inode *inode, struct file *filp)
static int cmm_close(struct inode *inode, struct file *filp)
static void cmm_cm4000_release(struct pcmcia_device * link)
static int cm4000_config_check(struct pcmcia_device *p_dev, void *priv_data)
static int cm4000_config(struct pcmcia_device * link, int devno)
static int cm4000_suspend(struct pcmcia_device *link)
static int cm4000_resume(struct pcmcia_device *link)
static void cm4000_release(struct pcmcia_device *link)
static int cm4000_probe(struct pcmcia_device *link)
static void cm4000_detach(struct pcmcia_device *link)
static const struct file_operations cm4000_fops = ;
static const struct pcmcia_device_id cm4000_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, cm4000_ids);
static struct pcmcia_driver cm4000_driver = ;
static int __init cmm_init(void)
static void __exit cmm_exit(void)
;
module_init(cmm_init);
module_exit(cmm_exit);
MODULE_LICENSE("Dual BSD/GPL");
