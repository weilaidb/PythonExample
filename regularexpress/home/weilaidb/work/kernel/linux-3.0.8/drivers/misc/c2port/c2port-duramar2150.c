#define DATA_PORT	0x325
#define DIR_PORT	0x326
#define    C2D		   (1 << 0)
#define    C2CK		   (1 << 1)
static DEFINE_MUTEX(update_lock);
static void duramar2150_c2port_access(struct c2port_device *dev, int status)
static void duramar2150_c2port_c2d_dir(struct c2port_device *dev, int dir)
static int duramar2150_c2port_c2d_get(struct c2port_device *dev)
static void duramar2150_c2port_c2d_set(struct c2port_device *dev, int status)
static void duramar2150_c2port_c2ck_set(struct c2port_device *dev, int status)
static struct c2port_ops duramar2150_c2port_ops = ;
static struct c2port_device *duramar2150_c2port_dev;
static int __init duramar2150_c2port_init(void)
static void __exit duramar2150_c2port_exit(void)
module_init(duramar2150_c2port_init);
module_exit(duramar2150_c2port_exit);
MODULE_AUTHOR("Rodolfo Giometti <giometti@linux.it>");
MODULE_DESCRIPTION("Silicon Labs C2 port Linux support for Duramar 2150");
MODULE_LICENSE("GPL");
