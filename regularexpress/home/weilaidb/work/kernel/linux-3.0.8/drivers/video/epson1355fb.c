struct epson1355_par ;
#if defined(CONFIG_ARM)
# ifdef CONFIG_ARCH_CEIVA
#  include <mach/hardware.h>
#  define EPSON1355FB_BASE_PHYS	(CEIVA_PHYS_SED1355)
# endif
static inline u8 epson1355_read_reg(struct epson1355_par *par, int index)
static inline void epson1355_write_reg(struct epson1355_par *par, u8 data, int index)
# error "no architecture-specific epson1355__reg"
# error  "EPSON1355FB_BASE_PHYS is not defined"
#define EPSON1355FB_REGS_OFS	(0)
#define EPSON1355FB_REGS_PHYS	(EPSON1355FB_BASE_PHYS + EPSON1355FB_REGS_OFS)
#define EPSON1355FB_REGS_LEN	(64)
#define EPSON1355FB_FB_OFS	(0x00200000)
#define EPSON1355FB_FB_PHYS	(EPSON1355FB_BASE_PHYS + EPSON1355FB_FB_OFS)
#define EPSON1355FB_FB_LEN	(2 * 1024 * 1024)
static inline u16 epson1355_read_reg16(struct epson1355_par *par, int index)
static inline void epson1355_write_reg16(struct epson1355_par *par, u16 data, int index)
static inline u32 epson1355_read_reg20(struct epson1355_par *par, int index)
static inline void epson1355_write_reg20(struct epson1355_par *par, u32 data, int index)
static void set_lut(struct epson1355_par *par, u8 index, u8 r, u8 g, u8 b)
static int epson1355fb_setcolreg(unsigned regno, unsigned r, unsigned g,
unsigned b, unsigned transp,
struct fb_info *info)
static int epson1355fb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static void lcd_enable(struct epson1355_par *par, int enable)
#if defined(CONFIG_ARCH_CEIVA)
static void backlight_enable(int enable)
static void backlight_enable(int enable)
static int epson1355fb_blank(int blank_mode, struct fb_info *info)
static inline void epson1355fb_fb_writel(unsigned long v, unsigned long *a)
static inline unsigned long epson1355fb_fb_readl(const unsigned long *a)
#define FB_READL epson1355fb_fb_readl
#define FB_WRITEL epson1355fb_fb_writel
static inline unsigned long copy_from_user16(void *to, const void *from,
unsigned long n)
static inline unsigned long copy_to_user16(void *to, const void *from,
unsigned long n)
static ssize_t
epson1355fb_read(struct fb_info *info, char *buf, size_t count, loff_t * ppos)
static ssize_t
epson1355fb_write(struct fb_info *info, const char *buf,
size_t count, loff_t * ppos)
static struct fb_ops epson1355fb_fbops = ;
static __init unsigned int get_fb_size(struct fb_info *info)
static int epson1355_width_tab[2][4] __initdata =
;
static int epson1355_bpp_tab[8] __initdata = ;
static void __init fetch_hw_state(struct fb_info *info, struct epson1355_par *par)
static void clearfb16(struct fb_info *info)
static int epson1355fb_remove(struct platform_device *dev)
int __devinit epson1355fb_probe(struct platform_device *dev)
static struct platform_driver epson1355fb_driver = ;
static struct platform_device *epson1355fb_device;
int __init epson1355fb_init(void)
module_init(epson1355fb_init);
static void __exit epson1355fb_exit(void)
module_exit(epson1355fb_exit);
MODULE_AUTHOR("Christopher Hoover <ch@hpl.hp.com>");
MODULE_DESCRIPTION("Framebuffer driver for Epson S1D13505");
MODULE_LICENSE("GPL");
