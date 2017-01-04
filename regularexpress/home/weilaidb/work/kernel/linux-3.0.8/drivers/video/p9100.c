static int p9100_setcolreg(unsigned, unsigned, unsigned, unsigned,
unsigned, struct fb_info *);
static int p9100_blank(int, struct fb_info *);
static int p9100_mmap(struct fb_info *, struct vm_area_struct *);
static int p9100_ioctl(struct fb_info *, unsigned int, unsigned long);
static struct fb_ops p9100_ops = ;
#define P9100_SYSCTL_OFF	0x0UL
#define P9100_VIDEOCTL_OFF	0x100UL
#define P9100_VRAMCTL_OFF 	0x180UL
#define P9100_RAMDAC_OFF 	0x200UL
#define P9100_VIDEOCOPROC_OFF 	0x400UL
#define P9100_CMD_OFF 0x0UL
#define P9100_FB_OFF 0x0UL
#define SYS_CONFIG_PIXELSIZE_SHIFT 26
#define SCREENPAINT_TIMECTL1_ENABLE_VIDEO 0x20
struct p9100_regs ;
struct p9100_cmd_parameng ;
struct p9100_par ;
static int p9100_setcolreg(unsigned regno,
unsigned red, unsigned green, unsigned blue,
unsigned transp, struct fb_info *info)
static int
p9100_blank(int blank, struct fb_info *info)
static struct sbus_mmap_map p9100_mmap_map[] = ;
static int p9100_mmap(struct fb_info *info, struct vm_area_struct *vma)
static int p9100_ioctl(struct fb_info *info, unsigned int cmd,
unsigned long arg)
static void p9100_init_fix(struct fb_info *info, int linebytes, struct device_node *dp)
static int __devinit p9100_probe(struct platform_device *op)
static int __devexit p9100_remove(struct platform_device *op)
static const struct of_device_id p9100_match[] = ;
MODULE_DEVICE_TABLE(of, p9100_match);
static struct platform_driver p9100_driver = ;
static int __init p9100_init(void)
static void __exit p9100_exit(void)
module_init(p9100_init);
module_exit(p9100_exit);
MODULE_DESCRIPTION("framebuffer driver for P9100 chipsets");
MODULE_AUTHOR("David S. Miller <davem@davemloft.net>");
MODULE_VERSION("2.0");
MODULE_LICENSE("GPL");
