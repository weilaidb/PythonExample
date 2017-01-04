struct cfb_info ;
static char *default_font = "Acorn8x8";
module_param(default_font, charp, 0);
MODULE_PARM_DESC(default_font, "Default font name");
#define cyber2000fb_writel(val, reg, cfb)	writel(val, (cfb)->regs + (reg))
#define cyber2000fb_writew(val, reg, cfb)	writew(val, (cfb)->regs + (reg))
#define cyber2000fb_writeb(val, reg, cfb)	writeb(val, (cfb)->regs + (reg))
#define cyber2000fb_readb(reg, cfb)		readb((cfb)->regs + (reg))
static inline void
cyber2000_crtcw(unsigned int reg, unsigned int val, struct cfb_info *cfb)
static inline void
cyber2000_grphw(unsigned int reg, unsigned int val, struct cfb_info *cfb)
static inline unsigned int
cyber2000_grphr(unsigned int reg, struct cfb_info *cfb)
static inline void
cyber2000_attrw(unsigned int reg, unsigned int val, struct cfb_info *cfb)
static inline void
cyber2000_seqw(unsigned int reg, unsigned int val, struct cfb_info *cfb)
static void
cyber2000fb_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
static void
cyber2000fb_copyarea(struct fb_info *info, const struct fb_copyarea *region)
static void
cyber2000fb_imageblit(struct fb_info *info, const struct fb_image *image)
static int cyber2000fb_sync(struct fb_info *info)
static inline u32 convert_bitfield(u_int val, struct fb_bitfield *bf)
static int
cyber2000fb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
struct par_info ;
static const u_char crtc_idx[] = ;
static void cyber2000fb_write_ramdac_ctrl(struct cfb_info *cfb)
static void cyber2000fb_set_timing(struct cfb_info *cfb, struct par_info *hw)
static inline int
cyber2000fb_update_start(struct cfb_info *cfb, struct fb_var_screeninfo *var)
static int
cyber2000fb_decode_crtc(struct par_info *hw, struct cfb_info *cfb,
struct fb_var_screeninfo *var)
static int
cyber2000fb_decode_clock(struct par_info *hw, struct cfb_info *cfb,
struct fb_var_screeninfo *var)
static int
cyber2000fb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int cyber2000fb_set_par(struct fb_info *info)
static int
cyber2000fb_pan_display(struct fb_var_screeninfo *var, struct fb_info *info)
static int cyber2000fb_blank(int blank, struct fb_info *info)
static struct fb_ops cyber2000fb_ops = ;
static struct cfb_info *int_cfb_info;
void cyber2000fb_enable_extregs(struct cfb_info *cfb)
EXPORT_SYMBOL(cyber2000fb_enable_extregs);
void cyber2000fb_disable_extregs(struct cfb_info *cfb)
EXPORT_SYMBOL(cyber2000fb_disable_extregs);
int cyber2000fb_attach(struct cyberpro_info *info, int idx)
EXPORT_SYMBOL(cyber2000fb_attach);
void cyber2000fb_detach(int idx)
EXPORT_SYMBOL(cyber2000fb_detach);
#define DDC_REG		0xb0
#define DDC_SCL_OUT	(1 << 0)
#define DDC_SDA_OUT	(1 << 4)
#define DDC_SCL_IN	(1 << 2)
#define DDC_SDA_IN	(1 << 6)
static void cyber2000fb_enable_ddc(struct cfb_info *cfb)
static void cyber2000fb_disable_ddc(struct cfb_info *cfb)
static void cyber2000fb_ddc_setscl(void *data, int val)
static void cyber2000fb_ddc_setsda(void *data, int val)
static int cyber2000fb_ddc_getscl(void *data)
static int cyber2000fb_ddc_getsda(void *data)
static int __devinit cyber2000fb_setup_ddc_bus(struct cfb_info *cfb)
static void cyber2000fb_i2c_setsda(void *data, int state)
static void cyber2000fb_i2c_setscl(void *data, int state)
static int cyber2000fb_i2c_getsda(void *data)
static int cyber2000fb_i2c_getscl(void *data)
static int __devinit cyber2000fb_i2c_register(struct cfb_info *cfb)
static void cyber2000fb_i2c_unregister(struct cfb_info *cfb)
#define cyber2000fb_i2c_register(cfb)	(0)
#define cyber2000fb_i2c_unregister(cfb)	do  while (0)
static struct fb_videomode __devinitdata cyber2000fb_default_mode = ;
static char igs_regs[] = ;
static void cyberpro_init_hw(struct cfb_info *cfb)
static struct cfb_info __devinit *cyberpro_alloc_fb_info(unsigned int id,
char *name)
static void cyberpro_free_fb_info(struct cfb_info *cfb)
static int cyber2000fb_setup(char *options)
static int __devinit cyberpro_common_probe(struct cfb_info *cfb)
static void __devexit cyberpro_common_remove(struct cfb_info *cfb)
static void cyberpro_common_resume(struct cfb_info *cfb)
static int __devinit cyberpro_vl_probe(void)
static int cyberpro_pci_enable_mmio(struct cfb_info *cfb)
static int __devinit
cyberpro_pci_probe(struct pci_dev *dev, const struct pci_device_id *id)
static void __devexit cyberpro_pci_remove(struct pci_dev *dev)
static int cyberpro_pci_suspend(struct pci_dev *dev, pm_message_t state)
static int cyberpro_pci_resume(struct pci_dev *dev)
static struct pci_device_id cyberpro_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, cyberpro_pci_table);
static struct pci_driver cyberpro_driver = ;
static int __init cyber2000fb_init(void)
module_init(cyber2000fb_init);
static void __exit cyberpro_exit(void)
module_exit(cyberpro_exit);
MODULE_AUTHOR("Russell King");
MODULE_DESCRIPTION("CyberPro 2000, 2010 and 5000 framebuffer driver");
MODULE_LICENSE("GPL");
