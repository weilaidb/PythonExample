#define SG_TABLESIZE		30
static DEFINE_MUTEX(i2o_cfg_mutex);
static long i2o_cfg_ioctl(struct file *, unsigned int, unsigned long);
static spinlock_t i2o_config_lock;
#define MODINC(x,y) ((x) = ((x) + 1) % (y))
struct sg_simple_element ;
struct i2o_cfg_info ;
static struct i2o_cfg_info *open_files = NULL;
static ulong i2o_cfg_info_id = 0;
static int i2o_cfg_getiops(unsigned long arg)
;
static int i2o_cfg_gethrt(unsigned long arg)
;
static int i2o_cfg_getlct(unsigned long arg)
;
static int i2o_cfg_parms(unsigned long arg, unsigned int type)
;
static int i2o_cfg_swdl(unsigned long arg)
;
static int i2o_cfg_swul(unsigned long arg)
static int i2o_cfg_swdel(unsigned long arg)
;
static int i2o_cfg_validate(unsigned long arg)
;
static int i2o_cfg_evt_reg(unsigned long arg, struct file *fp)
static int i2o_cfg_evt_get(unsigned long arg, struct file *fp)
static int i2o_cfg_passthru32(struct file *file, unsigned cmnd,
unsigned long arg)
static long i2o_cfg_compat_ioctl(struct file *file, unsigned cmd,
unsigned long arg)
static int i2o_cfg_passthru(unsigned long arg)
static long i2o_cfg_ioctl(struct file *fp, unsigned int cmd, unsigned long arg)
static int cfg_open(struct inode *inode, struct file *file)
static int cfg_fasync(int fd, struct file *fp, int on)
static int cfg_release(struct inode *inode, struct file *file)
static const struct file_operations config_fops = ;
static struct miscdevice i2o_miscdev = ;
static int __init i2o_config_old_init(void)
static void i2o_config_old_exit(void)
MODULE_AUTHOR("Red Hat Software");
