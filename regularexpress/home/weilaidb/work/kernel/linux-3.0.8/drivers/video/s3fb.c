struct s3fb_info ;
static const struct svga_fb_format s3fb_formats[] = ;
static const struct svga_pll s3_pll = ;
static const struct svga_pll s3_trio3d_pll = ;
static const int s3_memsizes[] = ;
static const char * const s3_names[] = ;
#define CHIP_UNKNOWN		0x00
#define CHIP_732_TRIO32		0x01
#define CHIP_764_TRIO64		0x02
#define CHIP_765_TRIO64VP	0x03
#define CHIP_767_TRIO64UVP	0x04
#define CHIP_775_TRIO64V2_DX	0x05
#define CHIP_785_TRIO64V2_GX	0x06
#define CHIP_551_PLATO_PX	0x07
#define CHIP_M65_AURORA64VP	0x08
#define CHIP_325_VIRGE		0x09
#define CHIP_988_VIRGE_VX	0x0A
#define CHIP_375_VIRGE_DX	0x0B
#define CHIP_385_VIRGE_GX	0x0C
#define CHIP_357_VIRGE_GX2	0x0D
#define CHIP_359_VIRGE_GX2P	0x0E
#define CHIP_360_TRIO3D_1X	0x10
#define CHIP_362_TRIO3D_2X	0x11
#define CHIP_368_TRIO3D_2X	0x12
#define CHIP_365_TRIO3D		0x13
#define CHIP_XXX_TRIO		0x80
#define CHIP_XXX_TRIO64V2_DXGX	0x81
#define CHIP_XXX_VIRGE_DXGX	0x82
#define CHIP_36X_TRIO3D_1X_2X	0x83
#define CHIP_UNDECIDED_FLAG	0x80
#define CHIP_MASK		0xFF
#define MMIO_OFFSET		0x1000000
#define MMIO_SIZE		0x10000
static const struct vga_regset s3_h_total_regs[]        = ;
static const struct vga_regset s3_h_display_regs[]      = ;
static const struct vga_regset s3_h_blank_start_regs[]  = ;
static const struct vga_regset s3_h_blank_end_regs[]    = ;
static const struct vga_regset s3_h_sync_start_regs[]   = ;
static const struct vga_regset s3_h_sync_end_regs[]     = ;
static const struct vga_regset s3_v_total_regs[]        = ;
static const struct vga_regset s3_v_display_regs[]      = ;
static const struct vga_regset s3_v_blank_start_regs[]  = ;
static const struct vga_regset s3_v_blank_end_regs[]    = ;
static const struct vga_regset s3_v_sync_start_regs[]   = ;
static const struct vga_regset s3_v_sync_end_regs[]     = ;
static const struct vga_regset s3_line_compare_regs[]   = ;
static const struct vga_regset s3_start_address_regs[]  = ;
static const struct vga_regset s3_offset_regs[]         = ;
static const struct vga_regset s3_dtpc_regs[]		= ;
static const struct svga_timing_regs s3_timing_regs     = ;
static char *mode_option __devinitdata;
static int mtrr __devinitdata = 1;
static int fasttext = 1;
MODULE_AUTHOR("(c) 2006-2007 Ondrej Zajicek <santiago@crfreenet.org>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("fbdev driver for S3 Trio/Virge");
module_param(mode_option, charp, 0444);
MODULE_PARM_DESC(mode_option, "Default video mode ('640x480-8@60', etc)");
module_param_named(mode, mode_option, charp, 0444);
MODULE_PARM_DESC(mode, "Default video mode ('640x480-8@60', etc) (deprecated)");
module_param(mtrr, int, 0444);
MODULE_PARM_DESC(mtrr, "Enable write-combining with MTRR (1=enable, 0=disable, default=1)");
module_param(fasttext, int, 0644);
MODULE_PARM_DESC(fasttext, "Enable S3 fast text mode (1=enable, 0=disable, default=1)");
#define DDC_REG		0xaa
#define DDC_MMIO_REG	0xff20
#define DDC_SCL_OUT	(1 << 0)
#define DDC_SDA_OUT	(1 << 1)
#define DDC_SCL_IN	(1 << 2)
#define DDC_SDA_IN	(1 << 3)
#define DDC_DRIVE_EN	(1 << 4)
static bool s3fb_ddc_needs_mmio(int chip)
static u8 s3fb_ddc_read(struct s3fb_info *par)
static void s3fb_ddc_write(struct s3fb_info *par, u8 val)
static void s3fb_ddc_setscl(void *data, int val)
static void s3fb_ddc_setsda(void *data, int val)
static int s3fb_ddc_getscl(void *data)
static int s3fb_ddc_getsda(void *data)
static int __devinit s3fb_setup_ddc_bus(struct fb_info *info)
static void s3fb_settile_fast(struct fb_info *info, struct fb_tilemap *map)
static void s3fb_tilecursor(struct fb_info *info, struct fb_tilecursor *cursor)
static struct fb_tile_ops s3fb_tile_ops = ;
static struct fb_tile_ops s3fb_fast_tile_ops = ;
static inline u32 expand_color(u32 c)
static void s3fb_iplan_imageblit(struct fb_info *info, const struct fb_image *image)
static void s3fb_iplan_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
static inline u32 expand_pixel(u32 c)
static void s3fb_cfb4_imageblit(struct fb_info *info, const struct fb_image *image)
static void s3fb_imageblit(struct fb_info *info, const struct fb_image *image)
static void s3fb_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
static void s3_set_pixclock(struct fb_info *info, u32 pixclock)
static int s3fb_open(struct fb_info *info, int user)
static int s3fb_release(struct fb_info *info, int user)
static int s3fb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int s3fb_set_par(struct fb_info *info)
static int s3fb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *fb)
static int s3fb_blank(int blank_mode, struct fb_info *info)
static int s3fb_pan_display(struct fb_var_screeninfo *var, struct fb_info *info)
static struct fb_ops s3fb_ops = ;
static int __devinit s3_identification(struct s3fb_info *par)
static int __devinit s3_pci_probe(struct pci_dev *dev, const struct pci_device_id *id)
static void __devexit s3_pci_remove(struct pci_dev *dev)
static int s3_pci_suspend(struct pci_dev* dev, pm_message_t state)
static int s3_pci_resume(struct pci_dev* dev)
static struct pci_device_id s3_devices[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, s3_devices);
static struct pci_driver s3fb_pci_driver = ;
static int  __init s3fb_setup(char *options)
static void __exit s3fb_cleanup(void)
static int __init s3fb_init(void)
module_init(s3fb_init);
module_exit(s3fb_cleanup);
