#undef DEBUG
#define DBG(fmt, args...)		printk(KERN_DEBUG "aty128fb: %s " fmt, __func__, ##args);
#define DBG(fmt, args...)
static struct fb_var_screeninfo default_var __devinitdata = ;
static struct fb_var_screeninfo default_var = ;
static struct fb_videomode defaultmode __devinitdata = ;
enum ;
static const char *r128_family[] __devinitdata = ;
static int aty128_probe(struct pci_dev *pdev,
const struct pci_device_id *ent);
static void aty128_remove(struct pci_dev *pdev);
static int aty128_pci_suspend(struct pci_dev *pdev, pm_message_t state);
static int aty128_pci_resume(struct pci_dev *pdev);
static int aty128_do_resume(struct pci_dev *pdev);
static struct pci_device_id aty128_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, aty128_pci_tbl);
static struct pci_driver aty128fb_driver = ;
typedef struct  __attribute__ ((packed)) PLL_BLOCK;
struct aty128_meminfo ;
static const struct aty128_meminfo sdr_128   =
;
static const struct aty128_meminfo sdr_64    =
;
static const struct aty128_meminfo sdr_sgram =
;
static const struct aty128_meminfo ddr_sgram =
;
static struct fb_fix_screeninfo aty128fb_fix __devinitdata = ;
static char *mode_option __devinitdata = NULL;
static int default_vmode __devinitdata = VMODE_1024_768_60;
static int default_cmode __devinitdata = CMODE_8;
static int default_crt_on __devinitdata = 0;
static int default_lcd_on __devinitdata = 1;
static bool mtrr = true;
static int backlight __devinitdata = 1;
static int backlight __devinitdata = 0;
struct aty128_constants ;
struct aty128_crtc ;
struct aty128_pll ;
struct aty128_ddafifo ;
struct aty128fb_par ;
#define round_div(n, d) ((n+(d/2))/d)
static int aty128fb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info);
static int aty128fb_set_par(struct fb_info *info);
static int aty128fb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info);
static int aty128fb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *fb);
static int aty128fb_blank(int blank, struct fb_info *fb);
static int aty128fb_ioctl(struct fb_info *info, u_int cmd, unsigned long arg);
static int aty128fb_sync(struct fb_info *info);
static int aty128_encode_var(struct fb_var_screeninfo *var,
const struct aty128fb_par *par);
static int aty128_decode_var(struct fb_var_screeninfo *var,
struct aty128fb_par *par);
static void aty128_timings(struct aty128fb_par *par);
static void aty128_init_engine(struct aty128fb_par *par);
static void aty128_reset_engine(const struct aty128fb_par *par);
static void aty128_flush_pixel_cache(const struct aty128fb_par *par);
static void do_wait_for_fifo(u16 entries, struct aty128fb_par *par);
static void wait_for_fifo(u16 entries, struct aty128fb_par *par);
static void wait_for_idle(struct aty128fb_par *par);
static u32 depth_to_dst(u32 depth);
static void aty128_bl_set_power(struct fb_info *info, int power);
#define BIOS_IN8(v)  	(readb(bios + (v)))
#define BIOS_IN16(v) 	(readb(bios + (v)) | \
(readb(bios + (v) + 1) << 8))
#define BIOS_IN32(v) 	(readb(bios + (v)) | \
(readb(bios + (v) + 1) << 8) | \
(readb(bios + (v) + 2) << 16) | \
(readb(bios + (v) + 3) << 24))
static struct fb_ops aty128fb_ops = ;
static inline u32 _aty_ld_le32(volatile unsigned int regindex,
const struct aty128fb_par *par)
static inline void _aty_st_le32(volatile unsigned int regindex, u32 val,
const struct aty128fb_par *par)
static inline u8 _aty_ld_8(unsigned int regindex,
const struct aty128fb_par *par)
static inline void _aty_st_8(unsigned int regindex, u8 val,
const struct aty128fb_par *par)
#define aty_ld_le32(regindex)		_aty_ld_le32(regindex, par)
#define aty_st_le32(regindex, val)	_aty_st_le32(regindex, val, par)
#define aty_ld_8(regindex)		_aty_ld_8(regindex, par)
#define aty_st_8(regindex, val)		_aty_st_8(regindex, val, par)
#define aty_ld_pll(pll_index)		_aty_ld_pll(pll_index, par)
#define aty_st_pll(pll_index, val)	_aty_st_pll(pll_index, val, par)
static u32 _aty_ld_pll(unsigned int pll_index,
const struct aty128fb_par *par)
static void _aty_st_pll(unsigned int pll_index, u32 val,
const struct aty128fb_par *par)
static int aty_pll_readupdate(const struct aty128fb_par *par)
static void aty_pll_wait_readupdate(const struct aty128fb_par *par)
static void aty_pll_writeupdate(const struct aty128fb_par *par)
static int __devinit register_test(const struct aty128fb_par *par)
static void do_wait_for_fifo(u16 entries, struct aty128fb_par *par)
static void wait_for_idle(struct aty128fb_par *par)
static void wait_for_fifo(u16 entries, struct aty128fb_par *par)
static void aty128_flush_pixel_cache(const struct aty128fb_par *par)
static void aty128_reset_engine(const struct aty128fb_par *par)
static void aty128_init_engine(struct aty128fb_par *par)
static u32 depth_to_dst(u32 depth)
static void __iomem * __devinit aty128_map_ROM(const struct aty128fb_par *par, struct pci_dev *dev)
static void __devinit aty128_get_pllinfo(struct aty128fb_par *par, unsigned char __iomem *bios)
static void __iomem *  __devinit aty128_find_mem_vbios(struct aty128fb_par *par)
static void __devinit aty128_timings(struct aty128fb_par *par)
static void aty128_set_crtc(const struct aty128_crtc *crtc,
const struct aty128fb_par *par)
static int aty128_var_to_crtc(const struct fb_var_screeninfo *var,
struct aty128_crtc *crtc,
const struct aty128fb_par *par)
static int aty128_pix_width_to_var(int pix_width, struct fb_var_screeninfo *var)
static int aty128_crtc_to_var(const struct aty128_crtc *crtc,
struct fb_var_screeninfo *var)
static void aty128_set_crt_enable(struct aty128fb_par *par, int on)
static void aty128_set_lcd_enable(struct aty128fb_par *par, int on)
static void aty128_set_pll(struct aty128_pll *pll, const struct aty128fb_par *par)
static int aty128_var_to_pll(u32 period_in_ps, struct aty128_pll *pll,
const struct aty128fb_par *par)
static int aty128_pll_to_var(const struct aty128_pll *pll, struct fb_var_screeninfo *var)
static void aty128_set_fifo(const struct aty128_ddafifo *dsp,
const struct aty128fb_par *par)
static int aty128_ddafifo(struct aty128_ddafifo *dsp,
const struct aty128_pll *pll,
u32 depth,
const struct aty128fb_par *par)
static int aty128fb_set_par(struct fb_info *info)
static int aty128_decode_var(struct fb_var_screeninfo *var, struct aty128fb_par *par)
static int aty128_encode_var(struct fb_var_screeninfo *var,
const struct aty128fb_par *par)
static int aty128fb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int aty128fb_pan_display(struct fb_var_screeninfo *var, struct fb_info *fb)
static void aty128_st_pal(u_int regno, u_int red, u_int green, u_int blue,
struct aty128fb_par *par)
static int aty128fb_sync(struct fb_info *info)
static int __devinit aty128fb_setup(char *options)
#define MAX_LEVEL 0xFF
static int aty128_bl_get_level_brightness(struct aty128fb_par *par,
int level)
#define BACKLIGHT_LVDS_OFF
#undef BACKLIGHT_DAC_OFF
static int aty128_bl_update_status(struct backlight_device *bd)
static int aty128_bl_get_brightness(struct backlight_device *bd)
static const struct backlight_ops aty128_bl_data = ;
static void aty128_bl_set_power(struct fb_info *info, int power)
static void aty128_bl_init(struct aty128fb_par *par)
static void aty128_bl_exit(struct backlight_device *bd)
static void aty128_early_resume(void *data)
static int __devinit aty128_init(struct pci_dev *pdev, const struct pci_device_id *ent)
static int __devinit aty128_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit aty128_remove(struct pci_dev *pdev)
static int aty128fb_blank(int blank, struct fb_info *fb)
static int aty128fb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
#define ATY_MIRROR_LCD_ON	0x00000001
#define ATY_MIRROR_CRT_ON	0x00000002
#define FBIO_ATY128_GET_MIRROR	_IOR('@', 1, __u32)
#define FBIO_ATY128_SET_MIRROR	_IOW('@', 2, __u32)
static int aty128fb_ioctl(struct fb_info *info, u_int cmd, u_long arg)
static void aty128_set_suspend(struct aty128fb_par *par, int suspend)
static int aty128_pci_suspend(struct pci_dev *pdev, pm_message_t state)
static int aty128_do_resume(struct pci_dev *pdev)
static int aty128_pci_resume(struct pci_dev *pdev)
static int __devinit aty128fb_init(void)
static void __exit aty128fb_exit(void)
module_init(aty128fb_init);
module_exit(aty128fb_exit);
MODULE_AUTHOR("(c)1999-2003 Brad Douglas <brad@neruo.com>");
MODULE_DESCRIPTION("FBDev driver for ATI Rage128 / Pro cards");
MODULE_LICENSE("GPL");
module_param(mode_option, charp, 0);
MODULE_PARM_DESC(mode_option, "Specify resolution as \"<xres>x<yres>[-<bpp>][@<refresh>]\" ");
module_param_named(nomtrr, mtrr, invbool, 0);
MODULE_PARM_DESC(nomtrr, "bool: Disable MTRR support (0 or 1=disabled) (default=0)");
