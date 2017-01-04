struct fb_info	*cfb;
#define CMAP_MAX_SIZE	16
static unsigned int lcd_ac_prescale = 13;
static int
clps7111fb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
static int
clps7111fb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int
clps7111fb_set_par(struct fb_info *info)
static int clps7111fb_blank(int blank, struct fb_info *info)
static struct fb_ops clps7111fb_ops = ;
static int backlight_proc_show(struct seq_file *m, void *v)
static int backlight_proc_open(struct inode *inode, struct file *file)
static ssize_t backlight_proc_write(struct file *file, const char *buffer,
size_t count, loff_t *pos)
static const struct file_operations backlight_proc_fops = ;
static void __init clps711x_guess_lcd_params(struct fb_info *info)
int __init clps711xfb_init(void)
static void __exit clps711xfb_exit(void)
module_init(clps711xfb_init);
module_exit(clps711xfb_exit);
MODULE_AUTHOR("Russell King <rmk@arm.linux.org.uk>");
MODULE_DESCRIPTION("CLPS711x framebuffer driver");
MODULE_LICENSE("GPL");
