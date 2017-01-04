static u32 v_offset_default __devinitdata;
static u32 voffset          __devinitdata;
static int i810fb_cursor(struct fb_info *info, struct fb_cursor *cursor);
static int  __devinit i810fb_init_pci (struct pci_dev *dev,
const struct pci_device_id *entry);
static void __exit i810fb_remove_pci(struct pci_dev *dev);
static int i810fb_resume(struct pci_dev *dev);
static int i810fb_suspend(struct pci_dev *dev, pm_message_t state);
static int i810fb_set_par    (struct fb_info *info);
static int i810fb_getcolreg  (u8 regno, u8 *red, u8 *green, u8 *blue,
u8 *transp, struct fb_info *info);
static int i810fb_setcolreg  (unsigned regno, unsigned red, unsigned green, unsigned blue,
unsigned transp, struct fb_info *info);
static int i810fb_pan_display(struct fb_var_screeninfo *var, struct fb_info *info);
static int i810fb_blank      (int blank_mode, struct fb_info *info);
static void i810fb_release_resource       (struct fb_info *info, struct i810fb_par *par);
static const char *i810_pci_list[] __devinitdata = ;
static struct pci_device_id i810fb_pci_tbl[] = ;
static struct pci_driver i810fb_driver = ;
static char *mode_option __devinitdata = NULL;
static int vram       __devinitdata = 4;
static int bpp        __devinitdata = 8;
static int mtrr       __devinitdata;
static int accel      __devinitdata;
static int hsync1     __devinitdata;
static int hsync2     __devinitdata;
static int vsync1     __devinitdata;
static int vsync2     __devinitdata;
static int xres       __devinitdata;
static int yres;
static int vyres      __devinitdata;
static int sync       __devinitdata;
static int extvga     __devinitdata;
static int dcolor     __devinitdata;
static int ddc3       __devinitdata = 2;
static void i810_screen_off(u8 __iomem *mmio, u8 mode)
static void i810_dram_off(u8 __iomem *mmio, u8 mode)
static void i810_protect_regs(u8 __iomem *mmio, int mode)
static void i810_load_pll(struct i810fb_par *par)
static void i810_load_vga(struct i810fb_par *par)
static void i810_load_vgax(struct i810fb_par *par)
static void i810_load_2d(struct i810fb_par *par)
static void i810_hires(u8 __iomem *mmio)
static void i810_load_pitch(struct i810fb_par *par)
static void i810_load_color(struct i810fb_par *par)
static void i810_load_regs(struct i810fb_par *par)
static void i810_write_dac(u8 regno, u8 red, u8 green, u8 blue,
u8 __iomem *mmio)
static void i810_read_dac(u8 regno, u8 *red, u8 *green, u8 *blue,
u8 __iomem *mmio)
static void i810_restore_pll(struct i810fb_par *par)
static void i810_restore_dac(struct i810fb_par *par)
static void i810_restore_vgax(struct i810fb_par *par)
static void i810_restore_vga(struct i810fb_par *par)
static void i810_restore_addr_map(struct i810fb_par *par)
static void i810_restore_2d(struct i810fb_par *par)
static void i810_restore_vga_state(struct i810fb_par *par)
static void i810_save_vgax(struct i810fb_par *par)
static void i810_save_vga(struct i810fb_par *par)
static void i810_save_2d(struct i810fb_par *par)
static void i810_save_vga_state(struct i810fb_par *par)
static u32 get_line_length(struct i810fb_par *par, int xres_virtual, int bpp)
static void i810_calc_dclk(u32 freq, u32 *m, u32 *n, u32 *p)
static void i810_enable_cursor(u8 __iomem *mmio, int mode)
static void i810_reset_cursor_image(struct i810fb_par *par)
static void i810_load_cursor_image(int width, int height, u8 *data,
struct i810fb_par *par)
static void i810_load_cursor_colors(int fg, int bg, struct fb_info *info)
static void i810_init_cursor(struct i810fb_par *par)
static void i810_round_off(struct fb_var_screeninfo *var)
static void set_color_bitfields(struct fb_var_screeninfo *var)
static int i810_check_params(struct fb_var_screeninfo *var,
struct fb_info *info)
static int encode_fix(struct fb_fix_screeninfo *fix, struct fb_info *info)
static void decode_var(const struct fb_var_screeninfo *var,
struct i810fb_par *par)
static int i810fb_getcolreg(u8 regno, u8 *red, u8 *green, u8 *blue,
u8 *transp, struct fb_info *info)
static int i810fb_open(struct fb_info *info, int user)
static int i810fb_release(struct fb_info *info, int user)
static int i810fb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static int i810fb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int i810fb_blank (int blank_mode, struct fb_info *info)
static int i810fb_set_par(struct fb_info *info)
static int i810fb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static int i810fb_cursor(struct fb_info *info, struct fb_cursor *cursor)
static struct fb_ops i810fb_ops __devinitdata = ;
static int i810fb_suspend(struct pci_dev *dev, pm_message_t mesg)
static int i810fb_resume(struct pci_dev *dev)
static void __devinit i810_fix_pointers(struct i810fb_par *par)
static void __devinit i810_fix_offsets(struct i810fb_par *par)
static int __devinit i810_alloc_agp_mem(struct fb_info *info)
static void __devinit i810_init_monspecs(struct fb_info *info)
static void __devinit i810_init_defaults(struct i810fb_par *par,
struct fb_info *info)
static void __devinit i810_init_device(struct i810fb_par *par)
static int __devinit
i810_allocate_pci_resource(struct i810fb_par *par,
const struct pci_device_id *entry)
static void __devinit i810fb_find_init_mode(struct fb_info *info)
static int __devinit i810fb_setup(char *options)
static int __devinit i810fb_init_pci (struct pci_dev *dev,
const struct pci_device_id *entry)
static void i810fb_release_resource(struct fb_info *info,
struct i810fb_par *par)
static void __exit i810fb_remove_pci(struct pci_dev *dev)
static int __devinit i810fb_init(void)
static int __devinit i810fb_init(void)
module_param(vram, int, 0);
MODULE_PARM_DESC(vram, "System RAM to allocate to framebuffer in MiB"
" (default=4)");
module_param(voffset, int, 0);
MODULE_PARM_DESC(voffset, "at what offset to place start of framebuffer "
"memory (0 to maximum aperture size), in MiB (default = 48)");
module_param(bpp, int, 0);
MODULE_PARM_DESC(bpp, "Color depth for display in bits per pixel"
" (default = 8)");
module_param(xres, int, 0);
MODULE_PARM_DESC(xres, "Horizontal resolution in pixels (default = 640)");
module_param(yres, int, 0);
MODULE_PARM_DESC(yres, "Vertical resolution in scanlines (default = 480)");
module_param(vyres,int, 0);
MODULE_PARM_DESC(vyres, "Virtual vertical resolution in scanlines"
" (default = 480)");
module_param(hsync1, int, 0);
MODULE_PARM_DESC(hsync1, "Minimum horizontal frequency of monitor in KHz"
" (default = 29)");
module_param(hsync2, int, 0);
MODULE_PARM_DESC(hsync2, "Maximum horizontal frequency of monitor in KHz"
" (default = 30)");
module_param(vsync1, int, 0);
MODULE_PARM_DESC(vsync1, "Minimum vertical frequency of monitor in Hz"
" (default = 50)");
module_param(vsync2, int, 0);
MODULE_PARM_DESC(vsync2, "Maximum vertical frequency of monitor in Hz"
" (default = 60)");
module_param(accel, bool, 0);
MODULE_PARM_DESC(accel, "Use Acceleration (BLIT) engine (default = 0)");
module_param(mtrr, bool, 0);
MODULE_PARM_DESC(mtrr, "Use MTRR (default = 0)");
module_param(extvga, bool, 0);
MODULE_PARM_DESC(extvga, "Enable external VGA connector (default = 0)");
module_param(sync, bool, 0);
MODULE_PARM_DESC(sync, "wait for accel engine to finish drawing"
" (default = 0)");
module_param(dcolor, bool, 0);
MODULE_PARM_DESC(dcolor, "use DirectColor visuals"
" (default = 0 = TrueColor)");
module_param(ddc3, bool, 0);
MODULE_PARM_DESC(ddc3, "Probe DDC bus 3 (default = 0 = no)");
module_param(mode_option, charp, 0);
MODULE_PARM_DESC(mode_option, "Specify initial video mode");
MODULE_AUTHOR("Tony A. Daplas");
MODULE_DESCRIPTION("Framebuffer device for the Intel 810/815 and"
" compatible cards");
MODULE_LICENSE("GPL");
static void __exit i810fb_exit(void)
module_exit(i810fb_exit);
module_init(i810fb_init);
