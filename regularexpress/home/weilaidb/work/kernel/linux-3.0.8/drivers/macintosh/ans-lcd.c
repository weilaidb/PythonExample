#define ANSLCD_ADDR		0xf301c000
#define ANSLCD_CTRL_IX 0x00
#define ANSLCD_DATA_IX 0x10
static unsigned long anslcd_short_delay = 80;
static unsigned long anslcd_long_delay = 3280;
static volatile unsigned char __iomem *anslcd_ptr;
static DEFINE_MUTEX(anslcd_mutex);
#undef DEBUG
static void
anslcd_write_byte_ctrl ( unsigned char c )
static void
anslcd_write_byte_data ( unsigned char c )
static ssize_t
anslcd_write( struct file * file, const char __user * buf,
size_t count, loff_t *ppos )
static long
anslcd_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int
anslcd_open( struct inode * inode, struct file * file )
const struct file_operations anslcd_fops = ;
static struct miscdevice anslcd_dev = ;
const char anslcd_logo[] =	"********************"
"*      LINUX!      *"
"*    Welcome to    *"
"********************";
static int __init
anslcd_init(void)
static void __exit
anslcd_exit(void)
module_init(anslcd_init);
module_exit(anslcd_exit);
