#define FRAMEMASTER_SIZE	0x200000
#define FRAMEMASTER_REG		0x1ffff8
#define FRAMEMASTER_NOLACE	1
#define FRAMEMASTER_ENABLE	2
#define FRAMEMASTER_COMPL	4
#define FRAMEMASTER_ROM		8
static volatile unsigned char *fm2fb_reg;
static struct fb_fix_screeninfo fb_fix __devinitdata = ;
static int fm2fb_mode __devinitdata = -1;
#define FM2FB_MODE_PAL	0
#define FM2FB_MODE_NTSC	1
static struct fb_var_screeninfo fb_var_modes[] __devinitdata = ;
static int fm2fb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info);
static int fm2fb_blank(int blank, struct fb_info *info);
static struct fb_ops fm2fb_ops = ;
static int fm2fb_blank(int blank, struct fb_info *info)
static int fm2fb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
static int __devinit fm2fb_probe(struct zorro_dev *z,
const struct zorro_device_id *id);
static struct zorro_device_id fm2fb_devices[] __devinitdata = ;
MODULE_DEVICE_TABLE(zorro, fm2fb_devices);
static struct zorro_driver fm2fb_driver = ;
static int __devinit fm2fb_probe(struct zorro_dev *z,
const struct zorro_device_id *id)
int __init fm2fb_setup(char *options)
int __init fm2fb_init(void)
module_init(fm2fb_init);
MODULE_LICENSE("GPL");
