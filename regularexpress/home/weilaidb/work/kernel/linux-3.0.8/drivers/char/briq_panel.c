#define		BRIQ_PANEL_MINOR	156
#define		BRIQ_PANEL_VFD_IOPORT	0x0390
#define		BRIQ_PANEL_LED_IOPORT	0x0398
#define		BRIQ_PANEL_VER		"1.1 (04/20/2002)"
#define		BRIQ_PANEL_MSG0		"Loading Linux"
static int		vfd_is_open;
static unsigned char	vfd[40];
static int		vfd_cursor;
static unsigned char	ledpb, led;
static void update_vfd(void)
static void set_led(char state)
static int briq_panel_open(struct inode *ino, struct file *filep)
static int briq_panel_release(struct inode *ino, struct file *filep)
static ssize_t briq_panel_read(struct file *file, char __user *buf, size_t count,
loff_t *ppos)
static void scroll_vfd( void )
static ssize_t briq_panel_write(struct file *file, const char __user *buf, size_t len,
loff_t *ppos)
static const struct file_operations briq_panel_fops = ;
static struct miscdevice briq_panel_miscdev = ;
static int __init briq_panel_init(void)
static void __exit briq_panel_exit(void)
module_init(briq_panel_init);
module_exit(briq_panel_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Karsten Jeppesen <karsten@jeppesens.com>");
MODULE_DESCRIPTION("Driver for the Total Impact briQ front panel");
