#define MODULE_NAME	"omapfb"
static unsigned int	def_accel;
static unsigned long	def_vram[OMAPFB_PLANE_NUM];
static unsigned int	def_vram_cnt;
static unsigned long	def_vxres;
static unsigned long	def_vyres;
static unsigned int	def_rotate;
static unsigned int	def_mirror;
static int		manual_update = 1;
static int		manual_update;
static struct platform_device	*fbdev_pdev;
static struct lcd_panel		*fbdev_panel;
static struct omapfb_device	*omapfb_dev;
struct caps_table_struct ;
static struct caps_table_struct ctrl_caps[] = ;
static struct caps_table_struct color_caps[] = ;
static void omapdss_release(struct device *dev)
static struct platform_device omapdss_device = ;
extern struct lcd_ctrl hwa742_ctrl;
extern struct lcd_ctrl blizzard_ctrl;
static const struct lcd_ctrl *ctrls[] = ;
extern struct lcd_ctrl_extif omap1_ext_if;
extern struct lcd_ctrl_extif omap2_ext_if;
static void omapfb_rqueue_lock(struct omapfb_device *fbdev)
static void omapfb_rqueue_unlock(struct omapfb_device *fbdev)
static const int dma_elem_type[] = ;
static int ctrl_init(struct omapfb_device *fbdev)
static void ctrl_cleanup(struct omapfb_device *fbdev)
static int ctrl_change_mode(struct fb_info *fbi)
static int omapfb_open(struct fb_info *info, int user)
static void omapfb_sync(struct fb_info *info);
static int omapfb_release(struct fb_info *info, int user)
static int _setcolreg(struct fb_info *info, u_int regno, u_int red, u_int green,
u_int blue, u_int transp, int update_hw_pal)
static int omapfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
static int omapfb_setcmap(struct fb_cmap *cmap, struct fb_info *info)
static int omapfb_update_full_screen(struct fb_info *fbi);
static int omapfb_blank(int blank, struct fb_info *fbi)
static void omapfb_sync(struct fb_info *fbi)
static void set_fb_fix(struct fb_info *fbi, int from_init)
static int set_color_mode(struct omapfb_plane_struct *plane,
struct fb_var_screeninfo *var)
static int set_fb_var(struct fb_info *fbi,
struct fb_var_screeninfo *var)
static void omapfb_rotate(struct fb_info *fbi, int rotate)
static int omapfb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *fbi)
static int omapfb_mirror(struct fb_info *fbi, int mirror)
static int omapfb_check_var(struct fb_var_screeninfo *var, struct fb_info *fbi)
static int omapfb_set_par(struct fb_info *fbi)
int omapfb_update_window_async(struct fb_info *fbi,
struct omapfb_update_window *win,
void (*callback)(void *),
void *callback_data)
EXPORT_SYMBOL(omapfb_update_window_async);
static int omapfb_update_win(struct fb_info *fbi,
struct omapfb_update_window *win)
static int omapfb_update_full_screen(struct fb_info *fbi)
static int omapfb_setup_plane(struct fb_info *fbi, struct omapfb_plane_info *pi)
static int omapfb_query_plane(struct fb_info *fbi, struct omapfb_plane_info *pi)
static int omapfb_setup_mem(struct fb_info *fbi, struct omapfb_mem_info *mi)
static int omapfb_query_mem(struct fb_info *fbi, struct omapfb_mem_info *mi)
static int omapfb_set_color_key(struct omapfb_device *fbdev,
struct omapfb_color_key *ck)
static int omapfb_get_color_key(struct omapfb_device *fbdev,
struct omapfb_color_key *ck)
static struct blocking_notifier_head omapfb_client_list[OMAPFB_PLANE_NUM];
static int notifier_inited;
static void omapfb_init_notifier(void)
int omapfb_register_client(struct omapfb_notifier_block *omapfb_nb,
omapfb_notifier_callback_t callback,
void *callback_data)
EXPORT_SYMBOL(omapfb_register_client);
int omapfb_unregister_client(struct omapfb_notifier_block *omapfb_nb)
EXPORT_SYMBOL(omapfb_unregister_client);
void omapfb_notify_clients(struct omapfb_device *fbdev, unsigned long event)
EXPORT_SYMBOL(omapfb_notify_clients);
static int omapfb_set_update_mode(struct omapfb_device *fbdev,
enum omapfb_update_mode mode)
static enum omapfb_update_mode omapfb_get_update_mode(struct omapfb_device *fbdev)
static void omapfb_get_caps(struct omapfb_device *fbdev, int plane,
struct omapfb_caps *caps)
void omapfb_write_first_pixel(struct omapfb_device *fbdev, u16 pixval)
EXPORT_SYMBOL(omapfb_write_first_pixel);
static int omapfb_ioctl(struct fb_info *fbi, unsigned int cmd,
unsigned long arg)
static int omapfb_mmap(struct fb_info *info, struct vm_area_struct *vma)
static struct fb_ops omapfb_ops = ;
static ssize_t omapfb_show_caps_num(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t omapfb_show_caps_text(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(caps_num, 0444, omapfb_show_caps_num, NULL);
static DEVICE_ATTR(caps_text, 0444, omapfb_show_caps_text, NULL);
static ssize_t omapfb_show_panel_name(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t omapfb_show_bklight_level(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t omapfb_store_bklight_level(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
static ssize_t omapfb_show_bklight_max(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute dev_attr_panel_name =
__ATTR(name, 0444, omapfb_show_panel_name, NULL);
static DEVICE_ATTR(backlight_level, 0664,
omapfb_show_bklight_level, omapfb_store_bklight_level);
static DEVICE_ATTR(backlight_max, 0444, omapfb_show_bklight_max, NULL);
static struct attribute *panel_attrs[] = ;
static struct attribute_group panel_attr_grp = ;
static ssize_t omapfb_show_ctrl_name(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute dev_attr_ctrl_name =
__ATTR(name, 0444, omapfb_show_ctrl_name, NULL);
static struct attribute *ctrl_attrs[] = ;
static struct attribute_group ctrl_attr_grp = ;
static int omapfb_register_sysfs(struct omapfb_device *fbdev)
static void omapfb_unregister_sysfs(struct omapfb_device *fbdev)
static int fbinfo_init(struct omapfb_device *fbdev, struct fb_info *info)
static void fbinfo_cleanup(struct omapfb_device *fbdev, struct fb_info *fbi)
static void planes_cleanup(struct omapfb_device *fbdev)
static int planes_init(struct omapfb_device *fbdev)
static void omapfb_free_resources(struct omapfb_device *fbdev, int state)
static int omapfb_find_ctrl(struct omapfb_device *fbdev)
static void check_required_callbacks(struct omapfb_device *fbdev)
static int omapfb_do_probe(struct platform_device *pdev,
struct lcd_panel *panel)
static int omapfb_probe(struct platform_device *pdev)
void omapfb_register_panel(struct lcd_panel *panel)
static int omapfb_remove(struct platform_device *pdev)
static int omapfb_suspend(struct platform_device *pdev, pm_message_t mesg)
static int omapfb_resume(struct platform_device *pdev)
static struct platform_driver omapfb_driver = ;
static int __init omapfb_setup(char *options)
static int __init omapfb_init(void)
static void __exit omapfb_cleanup(void)
module_param_named(accel, def_accel, uint, 0664);
module_param_array_named(vram, def_vram, ulong, &def_vram_cnt, 0664);
module_param_named(vxres, def_vxres, long, 0664);
module_param_named(vyres, def_vyres, long, 0664);
module_param_named(rotate, def_rotate, uint, 0664);
module_param_named(mirror, def_mirror, uint, 0664);
module_param_named(manual_update, manual_update, bool, 0664);
module_init(omapfb_init);
module_exit(omapfb_cleanup);
MODULE_DESCRIPTION("TI OMAP framebuffer driver");
MODULE_AUTHOR("Imre Deak <imre.deak@nokia.com>");
MODULE_LICENSE("GPL");
