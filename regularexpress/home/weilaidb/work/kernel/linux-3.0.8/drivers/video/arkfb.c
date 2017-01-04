struct arkfb_info ;
static const struct svga_fb_format arkfb_formats[] = ;
static const struct vga_regset ark_h_total_regs[]        = ;
static const struct vga_regset ark_h_display_regs[]      = ;
static const struct vga_regset ark_h_blank_start_regs[]  = ;
static const struct vga_regset ark_h_blank_end_regs[]    = ;
static const struct vga_regset ark_h_sync_start_regs[]   = ;
static const struct vga_regset ark_h_sync_end_regs[]     = ;
static const struct vga_regset ark_v_total_regs[]        = ;
static const struct vga_regset ark_v_display_regs[]      = ;
static const struct vga_regset ark_v_blank_start_regs[]  = ;
static const struct vga_regset ark_v_blank_end_regs[]    = ;
static const struct vga_regset ark_v_sync_start_regs[]   = ;
static const struct vga_regset ark_v_sync_end_regs[]     = ;
static const struct vga_regset ark_line_compare_regs[]   = ;
static const struct vga_regset ark_start_address_regs[]  = ;
static const struct vga_regset ark_offset_regs[]         = ;
static const struct svga_timing_regs ark_timing_regs     = ;
static char *mode_option __devinitdata = "640x480-8@60";
static int mtrr = 1;
MODULE_AUTHOR("(c) 2007 Ondrej Zajicek <santiago@crfreenet.org>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("fbdev driver for ARK 2000PV");
module_param(mode_option, charp, 0444);
MODULE_PARM_DESC(mode_option, "Default video mode ('640x480-8@60', etc)");
module_param_named(mode, mode_option, charp, 0444);
MODULE_PARM_DESC(mode, "Default video mode ('640x480-8@60', etc) (deprecated)");
module_param(mtrr, int, 0444);
MODULE_PARM_DESC(mtrr, "Enable write-combining with MTRR (1=enable, 0=disable, default=1)");
static int threshold = 4;
module_param(threshold, int, 0644);
MODULE_PARM_DESC(threshold, "FIFO threshold");
static void arkfb_settile(struct fb_info *info, struct fb_tilemap *map)
static void arkfb_tilecursor(struct fb_info *info, struct fb_tilecursor *cursor)
static struct fb_tile_ops arkfb_tile_ops = ;
static inline u32 expand_color(u32 c)
static void arkfb_iplan_imageblit(struct fb_info *info, const struct fb_image *image)
static void arkfb_iplan_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
static inline u32 expand_pixel(u32 c)
static void arkfb_cfb4_imageblit(struct fb_info *info, const struct fb_image *image)
static void arkfb_imageblit(struct fb_info *info, const struct fb_image *image)
static void arkfb_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
enum
;
struct dac_ops ;
typedef void (*dac_read_regs_t)(void *data, u8 *code, int count);
typedef void (*dac_write_regs_t)(void *data, u8 *code, int count);
struct dac_info
;
static inline u8 dac_read_reg(struct dac_info *info, u8 reg)
static inline void dac_read_regs(struct dac_info *info, u8 *code, int count)
static inline void dac_write_reg(struct dac_info *info, u8 reg, u8 val)
static inline void dac_write_regs(struct dac_info *info, u8 *code, int count)
static inline int dac_set_mode(struct dac_info *info, int mode)
static inline int dac_set_freq(struct dac_info *info, int channel, u32 freq)
static inline void dac_release(struct dac_info *info)
struct ics5342_info
;
#define DAC_PAR(info) ((struct ics5342_info *) info)
static const u8 ics5342_mode_table[DAC_MAX] = ;
static int ics5342_set_mode(struct dac_info *info, int mode)
static const struct svga_pll ics5342_pll = ;
static const struct svga_pll ics5342_pll_pd4 = ;
static int ics5342_set_freq(struct dac_info *info, int channel, u32 freq)
static void ics5342_release(struct dac_info *info)
static struct dac_ops ics5342_ops = ;
static struct dac_info * ics5342_init(dac_read_regs_t drr, dac_write_regs_t dwr, void *data)
static unsigned short dac_regs[4] = ;
static void ark_dac_read_regs(void *data, u8 *code, int count)
static void ark_dac_write_regs(void *data, u8 *code, int count)
static void ark_set_pixclock(struct fb_info *info, u32 pixclock)
static int arkfb_open(struct fb_info *info, int user)
static int arkfb_release(struct fb_info *info, int user)
static int arkfb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int arkfb_set_par(struct fb_info *info)
static int arkfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *fb)
static int arkfb_blank(int blank_mode, struct fb_info *info)
static int arkfb_pan_display(struct fb_var_screeninfo *var, struct fb_info *info)
static struct fb_ops arkfb_ops = ;
static int __devinit ark_pci_probe(struct pci_dev *dev, const struct pci_device_id *id)
static void __devexit ark_pci_remove(struct pci_dev *dev)
static int ark_pci_suspend (struct pci_dev* dev, pm_message_t state)
static int ark_pci_resume (struct pci_dev* dev)
#define ark_pci_suspend NULL
#define ark_pci_resume NULL
static struct pci_device_id ark_devices[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, ark_devices);
static struct pci_driver arkfb_pci_driver = ;
static void __exit arkfb_cleanup(void)
static int __init arkfb_init(void)
module_init(arkfb_init);
module_exit(arkfb_cleanup);
