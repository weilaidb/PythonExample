#undef SST_DEBUG
static int vgapass;
static int mem;
static int clipping = 1;
static int gfxclk;
static int slowpci;
#define DEFAULT_VIDEO_MODE "640x480@60"
static char *mode_option __devinitdata = DEFAULT_VIDEO_MODE;
enum ;
#define IS_VOODOO2(par) ((par)->type == ID_VOODOO2)
static struct sst_spec voodoo_spec[] __devinitdata = ;
#if (SST_DEBUG_REG > 0)
static void sst_dbg_print_read_reg(u32 reg, u32 val)
static void sst_dbg_print_write_reg(u32 reg, u32 val)
#  define sst_dbg_print_read_reg(reg, val)	do  while(0)
#  define sst_dbg_print_write_reg(reg, val)	do  while(0)
#define sst_read(reg)		__sst_read(par->mmio_vbase, reg)
#define sst_write(reg,val)	__sst_write(par->mmio_vbase, reg, val)
#define sst_set_bits(reg,val)	__sst_set_bits(par->mmio_vbase, reg, val)
#define sst_unset_bits(reg,val)	__sst_unset_bits(par->mmio_vbase, reg, val)
#define sst_dac_read(reg)	__sst_dac_read(par->mmio_vbase, reg)
#define sst_dac_write(reg,val)	__sst_dac_write(par->mmio_vbase, reg, val)
#define dac_i_read(reg)		__dac_i_read(par->mmio_vbase, reg)
#define dac_i_write(reg,val)	__dac_i_write(par->mmio_vbase, reg, val)
static inline u32 __sst_read(u8 __iomem *vbase, u32 reg)
static inline void __sst_write(u8 __iomem *vbase, u32 reg, u32 val)
static inline void __sst_set_bits(u8 __iomem *vbase, u32 reg, u32 val)
static inline void __sst_unset_bits(u8 __iomem *vbase, u32 reg, u32 val)
#define sst_wait_idle() __sst_wait_idle(par->mmio_vbase)
static int __sst_wait_idle(u8 __iomem *vbase)
static u8 __sst_dac_read(u8 __iomem *vbase, u8 reg)
static void __sst_dac_write(u8 __iomem *vbase, u8 reg, u8 val)
static u32 __dac_i_read(u8 __iomem *vbase, u8 reg)
static void __dac_i_write(u8 __iomem *vbase, u8 reg,u8 val)
static int sst_calc_pll(const int freq, int *freq_out, struct pll_timing *t)
static void sstfb_clear_screen(struct fb_info *info)
static int sstfb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static int sstfb_set_par(struct fb_info *info)
static int sstfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
static void sstfb_setvgapass( struct fb_info *info, int enable )
static ssize_t store_vgapass(struct device *device, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_vgapass(struct device *device, struct device_attribute *attr,
char *buf)
static struct device_attribute device_attrs[] = ;
static int sstfb_ioctl(struct fb_info *info, unsigned int cmd,
unsigned long arg)
static int __devinit sst_get_memsize(struct fb_info *info, __u32 *memsize)
static int __devinit sst_detect_att(struct fb_info *info)
static int __devinit sst_detect_ti(struct fb_info *info)
static int __devinit sst_detect_ics(struct fb_info *info)
static int sst_set_pll_att_ti(struct fb_info *info,
const struct pll_timing *t, const int clock)
static int sst_set_pll_ics(struct fb_info *info,
const struct pll_timing *t, const int clock)
static void sst_set_vidmod_att_ti(struct fb_info *info, const int bpp)
static void sst_set_vidmod_ics(struct fb_info *info, const int bpp)
static struct dac_switch dacs[] __devinitdata = ;
static int __devinit sst_detect_dactype(struct fb_info *info, struct sstfb_par *par)
static int __devinit sst_init(struct fb_info *info, struct sstfb_par *par)
static void  __devexit sst_shutdown(struct fb_info *info)
static int  __devinit sstfb_setup(char *options)
static struct fb_ops sstfb_ops = ;
static int __devinit sstfb_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit sstfb_remove(struct pci_dev *pdev)
static const struct pci_device_id sstfb_id_tbl[] = ;
static struct pci_driver sstfb_driver = ;
static int __devinit sstfb_init(void)
static void __devexit sstfb_exit(void)
module_init(sstfb_init);
module_exit(sstfb_exit);
MODULE_AUTHOR("(c) 2000,2002 Ghozlane Toumi <gtoumi@laposte.net>");
MODULE_DESCRIPTION("FBDev driver for 3dfx Voodoo Graphics and Voodoo2 based video boards");
MODULE_LICENSE("GPL");
module_param(mem, int, 0);
MODULE_PARM_DESC(mem, "Size of frame buffer memory in MB (1, 2, 4 MB, default=autodetect)");
module_param(vgapass, bool, 0);
MODULE_PARM_DESC(vgapass, "Enable VGA PassThrough mode (0 or 1) (default=0)");
module_param(clipping, bool, 0);
MODULE_PARM_DESC(clipping, "Enable clipping (slower, safer) (0 or 1) (default=1)");
module_param(gfxclk, int, 0);
MODULE_PARM_DESC(gfxclk, "Force graphic chip frequency in MHz. DANGEROUS. (default=auto)");
module_param(slowpci, bool, 0);
MODULE_PARM_DESC(slowpci, "Uses slow PCI settings (0 or 1) (default=0)");
module_param(mode_option, charp, 0);
MODULE_PARM_DESC(mode_option, "Initial video mode (default=" DEFAULT_VIDEO_MODE ")");
