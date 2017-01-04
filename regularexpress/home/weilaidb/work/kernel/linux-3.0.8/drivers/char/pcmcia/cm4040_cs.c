#define reader_to_dev(x)	(&x->p_dev->dev)
#define DEBUGP(n, rdr, x, args...) do  while (0)
static DEFINE_MUTEX(cm4040_mutex);
#define	CCID_DRIVER_BULK_DEFAULT_TIMEOUT  	(150*HZ)
#define	CCID_DRIVER_ASYNC_POWERUP_TIMEOUT 	(35*HZ)
#define	CCID_DRIVER_MINIMUM_TIMEOUT 		(3*HZ)
#define READ_WRITE_BUFFER_SIZE 512
#define POLL_LOOP_COUNT				1000
#define POLL_PERIOD 				msecs_to_jiffies(10)
static void reader_release(struct pcmcia_device *link);
static int major;
static struct class *cmx_class;
#define		BS_READABLE	0x01
#define		BS_WRITABLE	0x02
struct reader_dev ;
static struct pcmcia_device *dev_table[CM_MAX_DEV];
#define	xoutb	outb
#define	xinb	inb
static inline void xoutb(unsigned char val, unsigned short port)
static inline unsigned char xinb(unsigned short port)
static void cm4040_do_poll(unsigned long dummy)
static void cm4040_stop_poll(struct reader_dev *dev)
static int wait_for_bulk_out_ready(struct reader_dev *dev)
static int write_sync_reg(unsigned char val, struct reader_dev *dev)
static int wait_for_bulk_in_ready(struct reader_dev *dev)
static ssize_t cm4040_read(struct file *filp, char __user *buf,
size_t count, loff_t *ppos)
bytes_to_read = 5 + le32_to_cpu(*(__le32 *)&dev->r_buf[1]);
DEBUGP(6, dev, "BytesToRead=%zu\n", bytes_to_read);
min_bytes_to_read = min(count, bytes_to_read + 5);
min_bytes_to_read = min_t(size_t, min_bytes_to_read, READ_WRITE_BUFFER_SIZE);
DEBUGP(6, dev, "Min=%zu\n", min_bytes_to_read);
for (i = 0; i < (min_bytes_to_read-5); i++)
pr_debug("\n");
}
*ppos = min_bytes_to_read;
if (copy_to_user(buf, dev->r_buf, min_bytes_to_read))
return -EFAULT;
rc = wait_for_bulk_in_ready(dev);
if (rc <= 0)
rc = write_sync_reg(SCR_READER_TO_HOST_DONE, dev);
if (rc <= 0)
uc = xinb(iobase + REG_OFFSET_BULK_IN);
DEBUGP(2, dev, "<- cm4040_read (successfully)\n");
return min_bytes_to_read;
}
static ssize_t cm4040_write(struct file *filp, const char __user *buf,
size_t count, loff_t *ppos)
static unsigned int cm4040_poll(struct file *filp, poll_table *wait)
static int cm4040_open(struct inode *inode, struct file *filp)
static int cm4040_close(struct inode *inode, struct file *filp)
static void cm4040_reader_release(struct pcmcia_device *link)
static int cm4040_config_check(struct pcmcia_device *p_dev, void *priv_data)
static int reader_config(struct pcmcia_device *link, int devno)
static void reader_release(struct pcmcia_device *link)
static int reader_probe(struct pcmcia_device *link)
static void reader_detach(struct pcmcia_device *link)
static const struct file_operations reader_fops = ;
static const struct pcmcia_device_id cm4040_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, cm4040_ids);
static struct pcmcia_driver reader_driver = ;
static int __init cm4040_init(void)
static void __exit cm4040_exit(void)
module_init(cm4040_init);
module_exit(cm4040_exit);
MODULE_LICENSE("Dual BSD/GPL");
