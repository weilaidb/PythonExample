static int tcx_setcolreg(unsigned, unsigned, unsigned, unsigned,
unsigned, struct fb_info *);
static int tcx_blank(int, struct fb_info *);
static int tcx_mmap(struct fb_info *, struct vm_area_struct *);
static int tcx_ioctl(struct fb_info *, unsigned int, unsigned long);
static int tcx_pan_display(struct fb_var_screeninfo *, struct fb_info *);
static struct fb_ops tcx_ops = ;
#define TCX_THC_MISC_REV_SHIFT       16
#define TCX_THC_MISC_REV_MASK        15
#define TCX_THC_MISC_VSYNC_DIS       (1 << 25)
#define TCX_THC_MISC_HSYNC_DIS       (1 << 24)
#define TCX_THC_MISC_RESET           (1 << 12)
#define TCX_THC_MISC_VIDEO           (1 << 10)
#define TCX_THC_MISC_SYNC            (1 << 9)
#define TCX_THC_MISC_VSYNC           (1 << 8)
#define TCX_THC_MISC_SYNC_ENAB       (1 << 7)
#define TCX_THC_MISC_CURS_RES        (1 << 6)
#define TCX_THC_MISC_INT_ENAB        (1 << 5)
#define TCX_THC_MISC_INT             (1 << 4)
#define TCX_THC_MISC_INIT            0x9f
#define TCX_THC_REV_REV_SHIFT        20
#define TCX_THC_REV_REV_MASK         15
#define TCX_THC_REV_MINREV_SHIFT     28
#define TCX_THC_REV_MINREV_MASK      15
struct tcx_tec ;
struct tcx_thc ;
struct bt_regs ;
#define TCX_MMAP_ENTRIES 14
struct tcx_par ;
static void __tcx_set_control_plane(struct fb_info *info)
static void tcx_reset(struct fb_info *info)
static int tcx_pan_display(struct fb_var_screeninfo *var, struct fb_info *info)
static int tcx_setcolreg(unsigned regno,
unsigned red, unsigned green, unsigned blue,
unsigned transp, struct fb_info *info)
static int
tcx_blank(int blank, struct fb_info *info)
static struct sbus_mmap_map __tcx_mmap_map[TCX_MMAP_ENTRIES] = ;
static int tcx_mmap(struct fb_info *info, struct vm_area_struct *vma)
static int tcx_ioctl(struct fb_info *info, unsigned int cmd,
unsigned long arg)
static void
tcx_init_fix(struct fb_info *info, int linebytes)
static void tcx_unmap_regs(struct platform_device *op, struct fb_info *info,
struct tcx_par *par)
static int __devinit tcx_probe(struct platform_device *op)
static int __devexit tcx_remove(struct platform_device *op)
static const struct of_device_id tcx_match[] = ;
MODULE_DEVICE_TABLE(of, tcx_match);
static struct platform_driver tcx_driver = ;
static int __init tcx_init(void)
static void __exit tcx_exit(void)
module_init(tcx_init);
module_exit(tcx_exit);
MODULE_DESCRIPTION("framebuffer driver for TCX chipsets");
MODULE_AUTHOR("David S. Miller <davem@davemloft.net>");
MODULE_VERSION("2.0");
MODULE_LICENSE("GPL");
