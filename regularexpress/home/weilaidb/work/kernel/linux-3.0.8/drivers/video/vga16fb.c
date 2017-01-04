#define VGA_FB_PHYS 0xA0000
#define VGA_FB_PHYS_LEN 65536
#define MODE_SKIP4	1
#define MODE_8BPP	2
#define MODE_CFB	4
#define MODE_TEXT	8
struct vga16fb_par ;
static struct fb_var_screeninfo vga16fb_defined __devinitdata = ;
static struct fb_fix_screeninfo vga16fb_fix __devinitdata = ;
static inline void rmw(volatile char __iomem *p)
static inline int setmode(int mode)
static inline int selectmask(void)
static inline void setmask(int mask)
static inline int setop(int op)
static inline int setsr(int sr)
static inline int setcolor(int color)
static inline int getindex(void)
static inline void setindex(int index)
static void vga16fb_pan_var(struct fb_info *info,
struct fb_var_screeninfo *var)
static void vga16fb_update_fix(struct fb_info *info)
static void vga16fb_clock_chip(struct vga16fb_par *par,
unsigned int pixclock,
const struct fb_info *info,
int mul, int div)
#define FAIL(X) return -EINVAL
static int vga16fb_open(struct fb_info *info, int user)
static int vga16fb_release(struct fb_info *info, int user)
static int vga16fb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
#undef FAIL
static int vga16fb_set_par(struct fb_info *info)
static void ega16_setpalette(int regno, unsigned red, unsigned green, unsigned blue)
static void vga16_setpalette(int regno, unsigned red, unsigned green, unsigned blue)
static int vga16fb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static int vga16fb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static void vga_vesa_blank(struct vga16fb_par *par, int mode)
static void vga_vesa_unblank(struct vga16fb_par *par)
static void vga_pal_blank(void)
static int vga16fb_blank(int blank, struct fb_info *info)
static void vga_8planes_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
static void vga16fb_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
static void vga_8planes_copyarea(struct fb_info *info, const struct fb_copyarea *area)
static void vga16fb_copyarea(struct fb_info *info, const struct fb_copyarea *area)
#define TRANS_MASK_LOW
#define TRANS_MASK_HIGH
#if defined(__LITTLE_ENDIAN)
static const u16 transl_l[] = TRANS_MASK_LOW;
static const u16 transl_h[] = TRANS_MASK_HIGH;
#elif defined(__BIG_ENDIAN)
static const u16 transl_l[] = TRANS_MASK_HIGH;
static const u16 transl_h[] = TRANS_MASK_LOW;
#error "Only __BIG_ENDIAN and __LITTLE_ENDIAN are supported in vga-planes"
static void vga_8planes_imageblit(struct fb_info *info, const struct fb_image *image)
static void vga_imageblit_expand(struct fb_info *info, const struct fb_image *image)
static void vga_imageblit_color(struct fb_info *info, const struct fb_image *image)
static void vga16fb_imageblit(struct fb_info *info, const struct fb_image *image)
static void vga16fb_destroy(struct fb_info *info)
static struct fb_ops vga16fb_ops = ;
static int __init vga16fb_setup(char *options)
static int __devinit vga16fb_probe(struct platform_device *dev)
static int __devexit vga16fb_remove(struct platform_device *dev)
static struct platform_driver vga16fb_driver = ;
static struct platform_device *vga16fb_device;
static int __init vga16fb_init(void)
static void __exit vga16fb_exit(void)
MODULE_DESCRIPTION("Legacy VGA framebuffer device driver");
MODULE_LICENSE("GPL");
module_init(vga16fb_init);
module_exit(vga16fb_exit);
