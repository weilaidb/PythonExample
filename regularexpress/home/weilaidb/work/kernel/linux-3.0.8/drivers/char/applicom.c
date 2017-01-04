#undef DEBUG
#define MAX_BOARD 8
#define MAX_ISA_BOARD 4
#define LEN_RAM_IO 0x800
#define AC_MINOR 157
#define PCI_VENDOR_ID_APPLICOM                0x1389
#define PCI_DEVICE_ID_APPLICOM_PCIGENERIC     0x0001
#define PCI_DEVICE_ID_APPLICOM_PCI2000IBS_CAN 0x0002
#define PCI_DEVICE_ID_APPLICOM_PCI2000PFB     0x0003
static DEFINE_MUTEX(ac_mutex);
static char *applicom_pci_devnames[] = ;
static struct pci_device_id applicom_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, applicom_pci_tbl);
MODULE_AUTHOR("David Woodhouse & Applicom International");
MODULE_DESCRIPTION("Driver for Applicom Profibus card");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(AC_MINOR);
MODULE_SUPPORTED_DEVICE("ac");
static struct applicom_board  apbs[MAX_BOARD];
static unsigned int irq = 0;
static unsigned long mem = 0;
module_param(irq, uint, 0);
MODULE_PARM_DESC(irq, "IRQ of the Applicom board");
module_param(mem, ulong, 0);
MODULE_PARM_DESC(mem, "Shared Memory Address of Applicom board");
static unsigned int numboards;
static volatile unsigned char Dummy;
static DECLARE_WAIT_QUEUE_HEAD(FlagSleepRec);
static unsigned int WriteErrorCount;
static unsigned int ReadErrorCount;
static unsigned int DeviceErrorCount;
static ssize_t ac_read (struct file *, char __user *, size_t, loff_t *);
static ssize_t ac_write (struct file *, const char __user *, size_t, loff_t *);
static long ac_ioctl(struct file *, unsigned int, unsigned long);
static irqreturn_t ac_interrupt(int, void *);
static const struct file_operations ac_fops = ;
static struct miscdevice ac_miscdev = ;
static int dummy;
static int ac_register_board(unsigned long physloc, void __iomem *loc,
unsigned char boardno)
static void __exit applicom_exit(void)
static int __init applicom_init(void)
module_init(applicom_init);
module_exit(applicom_exit);
static ssize_t ac_write(struct file *file, const char __user *buf, size_t count, loff_t * ppos)
static int do_ac_read(int IndexCard, char __user *buf,
struct st_ram_io *st_loc, struct mailbox *mailbox)
static ssize_t ac_read (struct file *filp, char __user *buf, size_t count, loff_t *ptr)
static irqreturn_t ac_interrupt(int vec, void *dev_instance)
static long ac_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
