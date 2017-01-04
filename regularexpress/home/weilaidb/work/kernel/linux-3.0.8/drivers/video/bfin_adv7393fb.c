#define pr_fmt(fmt) DRIVER_NAME ": " fmt
static int mode = VMODE;
static int mem = VMEM;
static int nocursor = 1;
static const unsigned short ppi_pins[] = ;
static struct bfin_adv7393_fb_par  bfin_par;
static struct fb_var_screeninfo bfin_adv7393_fb_defined = ;
static struct fb_fix_screeninfo bfin_adv7393_fb_fix __devinitdata = ;
static struct fb_ops bfin_adv7393_fb_ops = ;
static int dma_desc_list(struct adv7393fb_device *fbdev, u16 arg)
static int bfin_config_dma(struct adv7393fb_device *fbdev)
static void bfin_disable_dma(void)
static void bfin_config_ppi(struct adv7393fb_device *fbdev)
static void bfin_enable_ppi(void)
static void bfin_disable_ppi(void)
static inline int adv7393_write(struct i2c_client *client, u8 reg, u8 value)
static inline int adv7393_read(struct i2c_client *client, u8 reg)
static int
adv7393_write_block(struct i2c_client *client,
const u8 *data, unsigned int len)
static int adv7393_mode(struct i2c_client *client, u16 mode)
static irqreturn_t ppi_irq_error(int irq, void *dev_id)
static int proc_output(char *buf)
static int
adv7393_read_proc(char *page, char **start, off_t off,
int count, int *eof, void *data)
static int
adv7393_write_proc(struct file *file, const char __user * buffer,
unsigned long count, void *data)
static int __devinit bfin_adv7393_fb_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int bfin_adv7393_fb_open(struct fb_info *info, int user)
static int bfin_adv7393_fb_release(struct fb_info *info, int user)
static int
bfin_adv7393_fb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int
bfin_adv7393_fb_pan_display(struct fb_var_screeninfo *var, struct fb_info *info)
static int bfin_adv7393_fb_blank(int blank, struct fb_info *info)
int bfin_adv7393_fb_cursor(struct fb_info *info, struct fb_cursor *cursor)
static int bfin_adv7393_fb_setcolreg(u_int regno, u_int red, u_int green,
u_int blue, u_int transp,
struct fb_info *info)
static int __devexit bfin_adv7393_fb_remove(struct i2c_client *client)
static int bfin_adv7393_fb_suspend(struct device *dev)
static int bfin_adv7393_fb_resume(struct device *dev)
static const struct dev_pm_ops bfin_adv7393_dev_pm_ops = ;
static const struct i2c_device_id bfin_adv7393_id[] = ;
MODULE_DEVICE_TABLE(i2c, bfin_adv7393_id);
static struct i2c_driver bfin_adv7393_fb_driver = ;
static int __init bfin_adv7393_fb_driver_init(void)
module_init(bfin_adv7393_fb_driver_init);
static void __exit bfin_adv7393_fb_driver_cleanup(void)
module_exit(bfin_adv7393_fb_driver_cleanup);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("Frame buffer driver for ADV7393/2 Video Encoder");
module_param(mode, int, 0);
MODULE_PARM_DESC(mode,
"Video Mode (0=NTSC,1=PAL,2=NTSC 640x480,3=PAL 640x480,4=NTSC YCbCr input,5=PAL YCbCr input)");
module_param(mem, int, 0);
MODULE_PARM_DESC(mem,
"Size of frame buffer memory 1=Single 2=Double Size (allows y-panning / frame stacking)");
module_param(nocursor, int, 0644);
MODULE_PARM_DESC(nocursor, "cursor enable/disable");
