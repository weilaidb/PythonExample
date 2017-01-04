#define DEBUG 0
#if defined(CONFIG_MIPS_PB1100)
#elif defined(CONFIG_MIPS_DB1100)
#error "Unknown Au1100 board, Au1100 FB driver not supported"
#define DRIVER_NAME "au1100fb"
#define DRIVER_DESC "LCD controller driver for AU1100 processors"
#define to_au1100fb_device(_info) \
(_info ? container_of(_info, struct au1100fb_device, info) : NULL);
struct fb_bitfield rgb_bitfields[][4] =
;
static struct fb_fix_screeninfo au1100fb_fix __devinitdata = ;
static struct fb_var_screeninfo au1100fb_var __devinitdata = ;
static struct au1100fb_drv_info drv_info;
static int nocursor = 0;
module_param(nocursor, int, 0644);
MODULE_PARM_DESC(nocursor, "cursor enable/disable");
static int au1100fb_fb_blank(int blank_mode, struct fb_info *fbi)
int au1100fb_setmode(struct au1100fb_device *fbdev)
int au1100fb_fb_setcolreg(unsigned regno, unsigned red, unsigned green, unsigned blue, unsigned transp, struct fb_info *fbi)
int au1100fb_fb_pan_display(struct fb_var_screeninfo *var, struct fb_info *fbi)
void au1100fb_fb_rotate(struct fb_info *fbi, int angle)
int au1100fb_fb_mmap(struct fb_info *fbi, struct vm_area_struct *vma)
int au1100fb_fb_cursor(struct fb_info *info, struct fb_cursor *cursor)
static struct fb_ops au1100fb_ops =
;
static int __devinit au1100fb_drv_probe(struct platform_device *dev)
int au1100fb_drv_remove(struct platform_device *dev)
static u32 sys_clksrc;
static struct au1100fb_regs fbregs;
int au1100fb_drv_suspend(struct platform_device *dev, pm_message_t state)
int au1100fb_drv_resume(struct platform_device *dev)
#define au1100fb_drv_suspend NULL
#define au1100fb_drv_resume NULL
static struct platform_driver au1100fb_driver = ;
int au1100fb_setup(char *options)
int __init au1100fb_init(void)
void __exit au1100fb_cleanup(void)
module_init(au1100fb_init);
module_exit(au1100fb_cleanup);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
