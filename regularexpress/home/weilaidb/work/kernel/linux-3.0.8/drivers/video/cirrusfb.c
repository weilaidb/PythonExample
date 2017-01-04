#define isPReP machine_is(prep)
#define isPReP 0
#define assert(expr) \
if (!(expr))
#define assert(expr)
#define MB_ (1024 * 1024)
enum cirrus_board ;
static const struct cirrusfb_board_info_rec  cirrusfb_board_info[] = ;
#define CHIP(id, btype) \
static struct pci_device_id cirrusfb_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, cirrusfb_pci_table);
#undef CHIP
static const struct zorro_device_id cirrusfb_zorro_table[] = ;
MODULE_DEVICE_TABLE(zorro, cirrusfb_zorro_table);
static const struct  cirrusfb_zorro_table2[] = ;
enum cirrusfb_dbg_reg_class ;
struct cirrusfb_info ;
static int noaccel __devinitdata;
static char *mode_option __devinitdata = "640x480@60";
static int cirrusfb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info);
static void init_vgachip(struct fb_info *info);
static void switch_monitor(struct cirrusfb_info *cinfo, int on);
static void WGen(const struct cirrusfb_info *cinfo,
int regnum, unsigned char val);
static unsigned char RGen(const struct cirrusfb_info *cinfo, int regnum);
static void AttrOn(const struct cirrusfb_info *cinfo);
static void WHDR(const struct cirrusfb_info *cinfo, unsigned char val);
static void WSFR(struct cirrusfb_info *cinfo, unsigned char val);
static void WSFR2(struct cirrusfb_info *cinfo, unsigned char val);
static void WClut(struct cirrusfb_info *cinfo, unsigned char regnum,
unsigned char red, unsigned char green, unsigned char blue);
static void cirrusfb_WaitBLT(u8 __iomem *regbase);
static void cirrusfb_BitBLT(u8 __iomem *regbase, int bits_per_pixel,
u_short curx, u_short cury,
u_short destx, u_short desty,
u_short width, u_short height,
u_short line_length);
static void cirrusfb_RectFill(u8 __iomem *regbase, int bits_per_pixel,
u_short x, u_short y,
u_short width, u_short height,
u32 fg_color, u32 bg_color,
u_short line_length, u_char blitmode);
static void bestclock(long freq, int *nom, int *den, int *div);
static void cirrusfb_dbg_reg_dump(struct fb_info *info, caddr_t regbase);
static void cirrusfb_dbg_print_regs(struct fb_info *info,
caddr_t regbase,
enum cirrusfb_dbg_reg_class reg_class, ...);
static inline int is_laguna(const struct cirrusfb_info *cinfo)
static int opencount;
static int cirrusfb_open(struct fb_info *info, int user)
static int cirrusfb_release(struct fb_info *info, int user)
static int cirrusfb_check_mclk(struct fb_info *info, long freq)
static int cirrusfb_check_pixclock(const struct fb_var_screeninfo *var,
struct fb_info *info)
static int cirrusfb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static void cirrusfb_set_mclk_as_source(const struct fb_info *info, int div)
static int cirrusfb_set_par_foo(struct fb_info *info)
static int cirrusfb_set_par(struct fb_info *info)
static int cirrusfb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static int cirrusfb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int cirrusfb_blank(int blank_mode, struct fb_info *info)
static void init_vgachip(struct fb_info *info)
static void switch_monitor(struct cirrusfb_info *cinfo, int on)
static int cirrusfb_sync(struct fb_info *info)
static void cirrusfb_fillrect(struct fb_info *info,
const struct fb_fillrect *region)
static void cirrusfb_copyarea(struct fb_info *info,
const struct fb_copyarea *area)
static void cirrusfb_imageblit(struct fb_info *info,
const struct fb_image *image)
#define PREP_VIDEO_BASE ((volatile unsigned long) 0xC0000000)
#define PREP_IO_BASE    ((volatile unsigned char *) 0x80000000)
static void get_prep_addrs(unsigned long *display, unsigned long *registers)
static int release_io_ports;
static unsigned int __devinit cirrusfb_get_memsize(struct fb_info *info,
u8 __iomem *regbase)
static void get_pci_addrs(const struct pci_dev *pdev,
unsigned long *display, unsigned long *registers)
static void cirrusfb_pci_unmap(struct fb_info *info)
static void cirrusfb_zorro_unmap(struct fb_info *info)
static struct fb_ops cirrusfb_ops = ;
static int __devinit cirrusfb_set_fbinfo(struct fb_info *info)
static int __devinit cirrusfb_register(struct fb_info *info)
static void __devexit cirrusfb_cleanup(struct fb_info *info)
static int __devinit cirrusfb_pci_register(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit cirrusfb_pci_unregister(struct pci_dev *pdev)
static struct pci_driver cirrusfb_pci_driver = ;
static int __devinit cirrusfb_zorro_register(struct zorro_dev *z,
const struct zorro_device_id *ent)
void __devexit cirrusfb_zorro_unregister(struct zorro_dev *z)
static struct zorro_driver cirrusfb_zorro_driver = ;
static int __init cirrusfb_setup(char *options)
MODULE_AUTHOR("Copyright 1999,2000 Jeff Garzik <jgarzik@pobox.com>");
MODULE_DESCRIPTION("Accelerated FBDev driver for Cirrus Logic chips");
MODULE_LICENSE("GPL");
static int __init cirrusfb_init(void)
static void __exit cirrusfb_exit(void)
module_init(cirrusfb_init);
module_param(mode_option, charp, 0);
MODULE_PARM_DESC(mode_option, "Initial video mode e.g. '648x480-8@60'");
module_param(noaccel, bool, 0);
MODULE_PARM_DESC(noaccel, "Disable acceleration");
module_exit(cirrusfb_exit);
static void WGen(const struct cirrusfb_info *cinfo,
int regnum, unsigned char val)
static unsigned char RGen(const struct cirrusfb_info *cinfo, int regnum)
static void AttrOn(const struct cirrusfb_info *cinfo)
static void WHDR(const struct cirrusfb_info *cinfo, unsigned char val)
static void WSFR(struct cirrusfb_info *cinfo, unsigned char val)
static void WSFR2(struct cirrusfb_info *cinfo, unsigned char val)
static void WClut(struct cirrusfb_info *cinfo, unsigned char regnum, unsigned char red,
unsigned char green, unsigned char blue)
static void cirrusfb_WaitBLT(u8 __iomem *regbase)
static void cirrusfb_set_blitter(u8 __iomem *regbase,
u_short nwidth, u_short nheight,
u_long nsrc, u_long ndest,
u_short bltmode, u_short line_length)
static void cirrusfb_BitBLT(u8 __iomem *regbase, int bits_per_pixel,
u_short curx, u_short cury,
u_short destx, u_short desty,
u_short width, u_short height,
u_short line_length)
static void cirrusfb_RectFill(u8 __iomem *regbase, int bits_per_pixel,
u_short x, u_short y, u_short width, u_short height,
u32 fg_color, u32 bg_color, u_short line_length,
u_char blitmode)
static void bestclock(long freq, int *nom, int *den, int *div)
static void cirrusfb_dbg_print_regs(struct fb_info *info,
caddr_t regbase,
enum cirrusfb_dbg_reg_class reg_class, ...)
static void cirrusfb_dbg_reg_dump(struct fb_info *info, caddr_t regbase)
