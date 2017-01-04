static struct fb_info fb_info;
static struct fb_var_screeninfo maxinefb_defined = ;
static struct fb_fix_screeninfo maxinefb_fix = ;
void maxinefb_ims332_write_register(int regno, register unsigned int val)
unsigned int maxinefb_ims332_read_register(int regno)
static int maxinefb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp, struct fb_info *info)
static struct fb_ops maxinefb_ops = ;
int __init maxinefb_init(void)
static void __exit maxinefb_exit(void)
MODULE_LICENSE("GPL");
module_init(maxinefb_init);
module_exit(maxinefb_exit);
