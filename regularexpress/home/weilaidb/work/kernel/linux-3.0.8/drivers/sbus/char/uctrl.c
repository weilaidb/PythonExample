#define UCTRL_MINOR	174
#define DEBUG 1
#define dprintk(x) printk x
#define dprintk(x)
struct uctrl_regs ;
struct ts102_regs ;
#define UCTRL_INTR_TXE_REQ         0x01
#define UCTRL_INTR_TXNF_REQ        0x02
#define UCTRL_INTR_RXNE_REQ        0x04
#define UCTRL_INTR_RXO_REQ         0x08
#define UCTRL_INTR_TXE_MSK         0x10
#define UCTRL_INTR_TXNF_MSK        0x20
#define UCTRL_INTR_RXNE_MSK        0x40
#define UCTRL_INTR_RXO_MSK         0x80
#define UCTRL_STAT_TXE_STA         0x01
#define UCTRL_STAT_TXNF_STA        0x02
#define UCTRL_STAT_RXNE_STA        0x04
#define UCTRL_STAT_RXO_STA         0x08
static DEFINE_MUTEX(uctrl_mutex);
static const char *uctrl_extstatus[16] = ;
struct uctrl_txn ;
struct uctrl_status ;
enum uctrl_opcode ;
static struct uctrl_driver  *global_driver;
static void uctrl_get_event_status(struct uctrl_driver *);
static void uctrl_get_external_status(struct uctrl_driver *);
static long
uctrl_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int
uctrl_open(struct inode *inode, struct file *file)
static irqreturn_t uctrl_interrupt(int irq, void *dev_id)
static const struct file_operations uctrl_fops = ;
static struct miscdevice uctrl_dev = ;
#define WRITEUCTLDATA(value) \
#define READUCTLDATA(value) \
static void uctrl_do_txn(struct uctrl_driver *driver, struct uctrl_txn *txn)
static void uctrl_get_event_status(struct uctrl_driver *driver)
static void uctrl_get_external_status(struct uctrl_driver *driver)
static int __devinit uctrl_probe(struct platform_device *op)
static int __devexit uctrl_remove(struct platform_device *op)
static const struct of_device_id uctrl_match[] = ;
MODULE_DEVICE_TABLE(of, uctrl_match);
static struct platform_driver uctrl_driver = ;
static int __init uctrl_init(void)
static void __exit uctrl_exit(void)
module_init(uctrl_init);
module_exit(uctrl_exit);
MODULE_LICENSE("GPL");
