#define DPRINTK(a, b...) pr_debug("fb: %s: " a, __func__ , ## b)
#define MTRR_TYPE_WRCOMB     1
static inline int mtrr_add(unsigned long base, unsigned long size,
unsigned int type, char increment)
static inline int mtrr_del(int reg, unsigned long base,
unsigned long size)
#define BANSHEE_MAX_PIXCLOCK 270000
#define VOODOO3_MAX_PIXCLOCK 300000
#define VOODOO5_MAX_PIXCLOCK 350000
static struct fb_fix_screeninfo tdfx_fix __devinitdata = ;
static struct fb_var_screeninfo tdfx_var __devinitdata = ;
static int __devinit tdfxfb_probe(struct pci_dev *pdev,
const struct pci_device_id *id);
static void __devexit tdfxfb_remove(struct pci_dev *pdev);
static struct pci_device_id tdfxfb_id_table[] = ;
static struct pci_driver tdfxfb_driver = ;
MODULE_DEVICE_TABLE(pci, tdfxfb_id_table);
static int nopan;
static int nowrap = 1;
static int hwcursor = 1;
static char *mode_option __devinitdata;
static int nomtrr __devinitdata;
static inline u8 vga_inb(struct tdfx_par *par, u32 reg)
static inline void vga_outb(struct tdfx_par *par, u32 reg, u8 val)
static inline void gra_outb(struct tdfx_par *par, u32 idx, u8 val)
static inline void seq_outb(struct tdfx_par *par, u32 idx, u8 val)
static inline u8 seq_inb(struct tdfx_par *par, u32 idx)
static inline void crt_outb(struct tdfx_par *par, u32 idx, u8 val)
static inline u8 crt_inb(struct tdfx_par *par, u32 idx)
static inline void att_outb(struct tdfx_par *par, u32 idx, u8 val)
static inline void vga_disable_video(struct tdfx_par *par)
static inline void vga_enable_video(struct tdfx_par *par)
static inline void vga_enable_palette(struct tdfx_par *par)
static inline u32 tdfx_inl(struct tdfx_par *par, unsigned int reg)
static inline void tdfx_outl(struct tdfx_par *par, unsigned int reg, u32 val)
static inline void banshee_make_room(struct tdfx_par *par, int size)
static int banshee_wait_idle(struct fb_info *info)
static inline void do_setpalentry(struct tdfx_par *par, unsigned regno, u32 c)
static u32 do_calc_pll(int freq, int *freq_out)
static void do_write_regs(struct fb_info *info, struct banshee_reg *reg)
static unsigned long do_lfb_size(struct tdfx_par *par, unsigned short dev_id)
static int tdfxfb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int tdfxfb_set_par(struct fb_info *info)
#define CNVT_TOHW(val, width) ((((val) << (width)) + 0x7FFF - (val)) >> 16)
static int tdfxfb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static int tdfxfb_blank(int blank, struct fb_info *info)
static int tdfxfb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static void tdfxfb_fillrect(struct fb_info *info,
const struct fb_fillrect *rect)
static void tdfxfb_copyarea(struct fb_info *info,
const struct fb_copyarea *area)
static void tdfxfb_imageblit(struct fb_info *info, const struct fb_image *image)
static int tdfxfb_cursor(struct fb_info *info, struct fb_cursor *cursor)
static struct fb_ops tdfxfb_ops = ;
static void tdfxfb_i2c_setscl(void *data, int val)
static void tdfxfb_i2c_setsda(void *data, int val)
static int tdfxfb_i2c_getscl(void *data)
static int tdfxfb_i2c_getsda(void *data)
static void tdfxfb_ddc_setscl(void *data, int val)
static void tdfxfb_ddc_setsda(void *data, int val)
static int tdfxfb_ddc_getscl(void *data)
static int tdfxfb_ddc_getsda(void *data)
static int __devinit tdfxfb_setup_ddc_bus(struct tdfxfb_i2c_chan *chan,
const char *name, struct device *dev)
static int __devinit tdfxfb_setup_i2c_bus(struct tdfxfb_i2c_chan *chan,
const char *name, struct device *dev)
static void __devinit tdfxfb_create_i2c_busses(struct fb_info *info)
static void tdfxfb_delete_i2c_busses(struct tdfx_par *par)
static int tdfxfb_probe_i2c_connector(struct tdfx_par *par,
struct fb_monspecs *specs)
static int __devinit tdfxfb_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __init tdfxfb_setup(char *options)
static void __devexit tdfxfb_remove(struct pci_dev *pdev)
static int __init tdfxfb_init(void)
static void __exit tdfxfb_exit(void)
MODULE_AUTHOR("Hannu Mallat <hmallat@cc.hut.fi>");
MODULE_DESCRIPTION("3Dfx framebuffer device driver");
MODULE_LICENSE("GPL");
module_param(hwcursor, int, 0644);
MODULE_PARM_DESC(hwcursor, "Enable hardware cursor "
"(1=enable, 0=disable, default=1)");
module_param(mode_option, charp, 0);
MODULE_PARM_DESC(mode_option, "Initial video mode e.g. '648x480-8@60'");
module_param(nomtrr, bool, 0);
MODULE_PARM_DESC(nomtrr, "Disable MTRR support (default: enabled)");
module_init(tdfxfb_init);
module_exit(tdfxfb_exit);
