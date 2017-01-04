#define _MASTER_FILE
static char *viafb_name = "Via";
static u32 pseudo_pal[17];
static char *viafb_mode;
static char *viafb_mode1;
static int viafb_bpp = 32;
static int viafb_bpp1 = 32;
static unsigned int viafb_second_xres = 640;
static unsigned int viafb_second_yres = 480;
static unsigned int viafb_second_offset;
static int viafb_second_size;
static int viafb_accel = 1;
static char *viafb_active_dev;
static char *viafb_lcd_port = "";
static char *viafb_dvi_port = "";
static void retrieve_device_setting(struct viafb_ioctl_setting
*setting_info);
static int viafb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info);
static struct fb_ops viafb_ops;
static const u32 supported_odev_map[] = ;
static void viafb_fill_var_color_info(struct fb_var_screeninfo *var, u8 depth)
static void viafb_update_fix(struct fb_info *info)
static void viafb_setup_fixinfo(struct fb_fix_screeninfo *fix,
struct viafb_par *viaparinfo)
static int viafb_open(struct fb_info *info, int user)
static int viafb_release(struct fb_info *info, int user)
static inline int get_var_refresh(struct fb_var_screeninfo *var)
static int viafb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static int viafb_set_par(struct fb_info *info)
static int viafb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp, struct fb_info *info)
static int viafb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int viafb_blank(int blank_mode, struct fb_info *info)
static int viafb_ioctl(struct fb_info *info, u_int cmd, u_long arg)
static void viafb_fillrect(struct fb_info *info,
const struct fb_fillrect *rect)
static void viafb_copyarea(struct fb_info *info,
const struct fb_copyarea *area)
static void viafb_imageblit(struct fb_info *info,
const struct fb_image *image)
static int viafb_cursor(struct fb_info *info, struct fb_cursor *cursor)
static int viafb_sync(struct fb_info *info)
static int get_primary_device(void)
static void retrieve_device_setting(struct viafb_ioctl_setting
*setting_info)
static int __init parse_active_dev(void)
static int __devinit parse_port(char *opt_str, int *output_interface)
static void __devinit parse_lcd_port(void)
static void __devinit parse_dvi_port(void)
static int viafb_dvp0_proc_show(struct seq_file *m, void *v)
static int viafb_dvp0_proc_open(struct inode *inode, struct file *file)
static ssize_t viafb_dvp0_proc_write(struct file *file,
const char __user *buffer, size_t count, loff_t *pos)
static const struct file_operations viafb_dvp0_proc_fops = ;
static int viafb_dvp1_proc_show(struct seq_file *m, void *v)
static int viafb_dvp1_proc_open(struct inode *inode, struct file *file)
static ssize_t viafb_dvp1_proc_write(struct file *file,
const char __user *buffer, size_t count, loff_t *pos)
static const struct file_operations viafb_dvp1_proc_fops = ;
static int viafb_dfph_proc_show(struct seq_file *m, void *v)
static int viafb_dfph_proc_open(struct inode *inode, struct file *file)
static ssize_t viafb_dfph_proc_write(struct file *file,
const char __user *buffer, size_t count, loff_t *pos)
static const struct file_operations viafb_dfph_proc_fops = ;
static int viafb_dfpl_proc_show(struct seq_file *m, void *v)
static int viafb_dfpl_proc_open(struct inode *inode, struct file *file)
static ssize_t viafb_dfpl_proc_write(struct file *file,
const char __user *buffer, size_t count, loff_t *pos)
static const struct file_operations viafb_dfpl_proc_fops = ;
static int viafb_vt1636_proc_show(struct seq_file *m, void *v)
static int viafb_vt1636_proc_open(struct inode *inode, struct file *file)
static ssize_t viafb_vt1636_proc_write(struct file *file,
const char __user *buffer, size_t count, loff_t *pos)
static const struct file_operations viafb_vt1636_proc_fops = ;
static int viafb_sup_odev_proc_show(struct seq_file *m, void *v)
static int viafb_sup_odev_proc_open(struct inode *inode, struct file *file)
static const struct file_operations viafb_sup_odev_proc_fops = ;
static ssize_t odev_update(const char __user *buffer, size_t count, u32 *odev)
static int viafb_iga1_odev_proc_show(struct seq_file *m, void *v)
static int viafb_iga1_odev_proc_open(struct inode *inode, struct file *file)
static ssize_t viafb_iga1_odev_proc_write(struct file *file,
const char __user *buffer, size_t count, loff_t *pos)
static const struct file_operations viafb_iga1_odev_proc_fops = ;
static int viafb_iga2_odev_proc_show(struct seq_file *m, void *v)
static int viafb_iga2_odev_proc_open(struct inode *inode, struct file *file)
static ssize_t viafb_iga2_odev_proc_write(struct file *file,
const char __user *buffer, size_t count, loff_t *pos)
static const struct file_operations viafb_iga2_odev_proc_fops = ;
#define IS_VT1636(lvds_chip)	((lvds_chip).lvds_chip_name == VT1636_LVDS)
static void viafb_init_proc(struct viafb_shared *shared)
static void viafb_remove_proc(struct viafb_shared *shared)
#undef IS_VT1636
static int parse_mode(const char *str, u32 *xres, u32 *yres)
static int viafb_suspend(void *unused)
static int viafb_resume(void *unused)
static struct viafb_pm_hooks viafb_fb_pm_hooks = ;
int __devinit via_fb_pci_probe(struct viafb_dev *vdev)
void __devexit via_fb_pci_remove(struct pci_dev *pdev)
static int __init viafb_setup(void)
int __init viafb_init(void)
void __exit viafb_exit(void)
static struct fb_ops viafb_ops = ;
module_param(viafb_mode, charp, S_IRUSR);
MODULE_PARM_DESC(viafb_mode, "Set resolution (default=640x480)");
module_param(viafb_mode1, charp, S_IRUSR);
MODULE_PARM_DESC(viafb_mode1, "Set resolution (default=640x480)");
module_param(viafb_bpp, int, S_IRUSR);
MODULE_PARM_DESC(viafb_bpp, "Set color depth (default=32bpp)");
module_param(viafb_bpp1, int, S_IRUSR);
MODULE_PARM_DESC(viafb_bpp1, "Set color depth (default=32bpp)");
module_param(viafb_refresh, int, S_IRUSR);
MODULE_PARM_DESC(viafb_refresh,
"Set CRT viafb_refresh rate (default = 60)");
module_param(viafb_refresh1, int, S_IRUSR);
MODULE_PARM_DESC(viafb_refresh1,
"Set CRT refresh rate (default = 60)");
module_param(viafb_lcd_panel_id, int, S_IRUSR);
MODULE_PARM_DESC(viafb_lcd_panel_id,
"Set Flat Panel type(Default=1024x768)");
module_param(viafb_lcd_dsp_method, int, S_IRUSR);
MODULE_PARM_DESC(viafb_lcd_dsp_method,
"Set Flat Panel display scaling method.(Default=Expandsion)");
module_param(viafb_SAMM_ON, int, S_IRUSR);
MODULE_PARM_DESC(viafb_SAMM_ON,
"Turn on/off flag of SAMM(Default=OFF)");
module_param(viafb_accel, int, S_IRUSR);
MODULE_PARM_DESC(viafb_accel,
"Set 2D Hardware Acceleration: 0 = OFF, 1 = ON (default)");
module_param(viafb_active_dev, charp, S_IRUSR);
MODULE_PARM_DESC(viafb_active_dev, "Specify active devices.");
module_param(viafb_display_hardware_layout, int, S_IRUSR);
MODULE_PARM_DESC(viafb_display_hardware_layout,
"Display Hardware Layout (LCD Only, DVI Only...,etc)");
module_param(viafb_second_size, int, S_IRUSR);
MODULE_PARM_DESC(viafb_second_size,
"Set secondary device memory size");
module_param(viafb_dual_fb, int, S_IRUSR);
MODULE_PARM_DESC(viafb_dual_fb,
"Turn on/off flag of dual framebuffer devices.(Default = OFF)");
module_param(viafb_platform_epia_dvi, int, S_IRUSR);
MODULE_PARM_DESC(viafb_platform_epia_dvi,
"Turn on/off flag of DVI devices on EPIA board.(Default = OFF)");
module_param(viafb_device_lcd_dualedge, int, S_IRUSR);
MODULE_PARM_DESC(viafb_device_lcd_dualedge,
"Turn on/off flag of dual edge panel.(Default = OFF)");
module_param(viafb_bus_width, int, S_IRUSR);
MODULE_PARM_DESC(viafb_bus_width,
"Set bus width of panel.(Default = 12)");
module_param(viafb_lcd_mode, int, S_IRUSR);
MODULE_PARM_DESC(viafb_lcd_mode,
"Set Flat Panel mode(Default=OPENLDI)");
module_param(viafb_lcd_port, charp, S_IRUSR);
MODULE_PARM_DESC(viafb_lcd_port, "Specify LCD output port.");
module_param(viafb_dvi_port, charp, S_IRUSR);
MODULE_PARM_DESC(viafb_dvi_port, "Specify DVI output port.");
MODULE_LICENSE("GPL");
