struct vt8623fb_info ;
static const struct svga_fb_format vt8623fb_formats[] = ;
static const struct svga_pll vt8623_pll = ;
static struct vga_regset vt8623_h_total_regs[]       = ;
static struct vga_regset vt8623_h_display_regs[]     = ;
static struct vga_regset vt8623_h_blank_start_regs[] = ;
static struct vga_regset vt8623_h_blank_end_regs[]   = ;
static struct vga_regset vt8623_h_sync_start_regs[]  = ;
static struct vga_regset vt8623_h_sync_end_regs[]    = ;
static struct vga_regset vt8623_v_total_regs[]       = ;
static struct vga_regset vt8623_v_display_regs[]     = ;
static struct vga_regset vt8623_v_blank_start_regs[] = ;
static struct vga_regset vt8623_v_blank_end_regs[]   = ;
static struct vga_regset vt8623_v_sync_start_regs[]  = ;
static struct vga_regset vt8623_v_sync_end_regs[]    = ;
static struct vga_regset vt8623_offset_regs[]        = ;
static struct vga_regset vt8623_line_compare_regs[]  = ;
static struct vga_regset vt8623_fetch_count_regs[]   = ;
static struct vga_regset vt8623_start_address_regs[] = ;
static struct svga_timing_regs vt8623_timing_regs     = ;
static char *mode_option = "640x480-8@60";
static int mtrr = 1;
MODULE_AUTHOR("(c) 2006 Ondrej Zajicek <santiago@crfreenet.org>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("fbdev driver for integrated graphics core in VIA VT8623 [CLE266]");
module_param(mode_option, charp, 0644);
MODULE_PARM_DESC(mode_option, "Default video mode ('640x480-8@60', etc)");
module_param_named(mode, mode_option, charp, 0);
MODULE_PARM_DESC(mode, "Default video mode e.g. '648x480-8@60' (deprecated)");
module_param(mtrr, int, 0444);
MODULE_PARM_DESC(mtrr, "Enable write-combining with MTRR (1=enable, 0=disable, default=1)");
static void vt8623fb_tilecursor(struct fb_info *info, struct fb_tilecursor *cursor)
static struct fb_tile_ops vt8623fb_tile_ops = ;
static inline u32 expand_color(u32 c)
static void vt8623fb_iplan_imageblit(struct fb_info *info, const struct fb_image *image)
static void vt8623fb_iplan_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
static inline u32 expand_pixel(u32 c)
static void vt8623fb_cfb4_imageblit(struct fb_info *info, const struct fb_image *image)
static void vt8623fb_imageblit(struct fb_info *info, const struct fb_image *image)
static void vt8623fb_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
static void vt8623_set_pixclock(struct fb_info *info, u32 pixclock)
static int vt8623fb_open(struct fb_info *info, int user)
static int vt8623fb_release(struct fb_info *info, int user)
static int vt8623fb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int vt8623fb_set_par(struct fb_info *info)
static int vt8623fb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *fb)
static int vt8623fb_blank(int blank_mode, struct fb_info *info)
static int vt8623fb_pan_display(struct fb_var_screeninfo *var, struct fb_info *info)
static struct fb_ops vt8623fb_ops = ;
static int __devinit vt8623_pci_probe(struct pci_dev *dev, const struct pci_device_id *id)
static void __devexit vt8623_pci_remove(struct pci_dev *dev)
static int vt8623_pci_suspend(struct pci_dev* dev, pm_message_t state)
static int vt8623_pci_resume(struct pci_dev* dev)
#define vt8623_pci_suspend NULL
#define vt8623_pci_resume NULL
static struct pci_device_id vt8623_devices[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, vt8623_devices);
static struct pci_driver vt8623fb_pci_driver = ;
static void __exit vt8623fb_cleanup(void)
static int __init vt8623fb_init(void)
module_init(vt8623fb_init);
module_exit(vt8623fb_cleanup);
