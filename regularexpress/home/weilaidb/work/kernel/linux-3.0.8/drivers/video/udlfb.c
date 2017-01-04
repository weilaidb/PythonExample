#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static struct fb_fix_screeninfo dlfb_fix = ;
static const u32 udlfb_info_flags = FBINFO_DEFAULT | FBINFO_READS_FAST |
FBINFO_VIRTFB |
FBINFO_HWACCEL_IMAGEBLIT | FBINFO_HWACCEL_FILLRECT |
FBINFO_HWACCEL_COPYAREA | FBINFO_MISC_ALWAYS_SETPAR;
static struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static int console;
static int fb_defio;
static void dlfb_urb_completion(struct urb *urb);
static struct urb *dlfb_get_urb(struct dlfb_data *dev);
static int dlfb_submit_urb(struct dlfb_data *dev, struct urb * urb, size_t len);
static int dlfb_alloc_urb_list(struct dlfb_data *dev, int count, size_t size);
static void dlfb_free_urb_list(struct dlfb_data *dev);
static char *dlfb_set_register(char *buf, u8 reg, u8 val)
static char *dlfb_vidreg_lock(char *buf)
static char *dlfb_vidreg_unlock(char *buf)
static char *dlfb_enable_hvsync(char *buf, bool enable)
static char *dlfb_set_color_depth(char *buf, u8 selection)
static char *dlfb_set_base16bpp(char *wrptr, u32 base)
static char *dlfb_set_base8bpp(char *wrptr, u32 base)
static char *dlfb_set_register_16(char *wrptr, u8 reg, u16 value)
static char *dlfb_set_register_16be(char *wrptr, u8 reg, u16 value)
static u16 dlfb_lfsr16(u16 actual_count)
static char *dlfb_set_register_lfsr16(char *wrptr, u8 reg, u16 value)
static char *dlfb_set_vid_cmds(char *wrptr, struct fb_var_screeninfo *var)
static int dlfb_set_video_mode(struct dlfb_data *dev,
struct fb_var_screeninfo *var)
static int dlfb_ops_mmap(struct fb_info *info, struct vm_area_struct *vma)
static int dlfb_trim_hline(const u8 *bback, const u8 **bfront, int *width_bytes)
static void dlfb_compress_hline(
const uint16_t **pixel_start_ptr,
const uint16_t *const pixel_end,
uint32_t *device_address_ptr,
uint8_t **command_buffer_ptr,
const uint8_t *const cmd_buffer_end)
static int dlfb_render_hline(struct dlfb_data *dev, struct urb **urb_ptr,
const char *front, char **urb_buf_ptr,
u32 byte_offset, u32 byte_width,
int *ident_ptr, int *sent_ptr)
int dlfb_handle_damage(struct dlfb_data *dev, int x, int y,
int width, int height, char *data)
static ssize_t dlfb_ops_write(struct fb_info *info, const char __user *buf,
size_t count, loff_t *ppos)
static void dlfb_ops_copyarea(struct fb_info *info,
const struct fb_copyarea *area)
static void dlfb_ops_imageblit(struct fb_info *info,
const struct fb_image *image)
static void dlfb_ops_fillrect(struct fb_info *info,
const struct fb_fillrect *rect)
static void dlfb_dpy_deferred_io(struct fb_info *info,
struct list_head *pagelist)
static int dlfb_get_edid(struct dlfb_data *dev, char *edid, int len)
static int dlfb_ops_ioctl(struct fb_info *info, unsigned int cmd,
unsigned long arg)
static int
dlfb_ops_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp, struct fb_info *info)
static int dlfb_ops_open(struct fb_info *info, int user)
static void dlfb_free(struct kref *kref)
static void dlfb_release_urb_work(struct work_struct *work)
static void dlfb_free_framebuffer_work(struct work_struct *work)
static int dlfb_ops_release(struct fb_info *info, int user)
static int dlfb_is_valid_mode(struct fb_videomode *mode,
struct fb_info *info)
static void dlfb_var_color_format(struct fb_var_screeninfo *var)
static int dlfb_ops_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static int dlfb_ops_set_par(struct fb_info *info)
static int dlfb_ops_blank(int blank_mode, struct fb_info *info)
static struct fb_ops dlfb_ops = ;
static int dlfb_realloc_framebuffer(struct dlfb_data *dev, struct fb_info *info)
static int dlfb_setup_modes(struct dlfb_data *dev,
struct fb_info *info,
char *default_edid, size_t default_edid_size)
static ssize_t metrics_bytes_rendered_show(struct device *fbdev,
struct device_attribute *a, char *buf)
static ssize_t metrics_bytes_identical_show(struct device *fbdev,
struct device_attribute *a, char *buf)
static ssize_t metrics_bytes_sent_show(struct device *fbdev,
struct device_attribute *a, char *buf)
static ssize_t metrics_cpu_kcycles_used_show(struct device *fbdev,
struct device_attribute *a, char *buf)
static ssize_t edid_show(
struct file *filp,
struct kobject *kobj, struct bin_attribute *a,
char *buf, loff_t off, size_t count)
static ssize_t edid_store(
struct file *filp,
struct kobject *kobj, struct bin_attribute *a,
char *src, loff_t src_off, size_t src_size)
static ssize_t metrics_reset_store(struct device *fbdev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct bin_attribute edid_attr = ;
static struct device_attribute fb_device_attrs[] = ;
static int dlfb_select_std_channel(struct dlfb_data *dev)
static int dlfb_parse_vendor_descriptor(struct dlfb_data *dev,
struct usb_device *usbdev)
static int dlfb_usb_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void dlfb_usb_disconnect(struct usb_interface *interface)
static struct usb_driver dlfb_driver = ;
static int __init dlfb_module_init(void)
static void __exit dlfb_module_exit(void)
module_init(dlfb_module_init);
module_exit(dlfb_module_exit);
static void dlfb_urb_completion(struct urb *urb)
static void dlfb_free_urb_list(struct dlfb_data *dev)
static int dlfb_alloc_urb_list(struct dlfb_data *dev, int count, size_t size)
static struct urb *dlfb_get_urb(struct dlfb_data *dev)
static int dlfb_submit_urb(struct dlfb_data *dev, struct urb *urb, size_t len)
module_param(console, bool, S_IWUSR | S_IRUSR | S_IWGRP | S_IRGRP);
MODULE_PARM_DESC(console, "Allow fbcon to consume first framebuffer found");
module_param(fb_defio, bool, S_IWUSR | S_IRUSR | S_IWGRP | S_IRGRP);
MODULE_PARM_DESC(fb_defio, "Enable fb_defio mmap support. *Experimental*");
MODULE_AUTHOR("Roberto De Ioris <roberto@unbit.it>, "
"Jaya Kumar <jayakumar.lkml@gmail.com>, "
"Bernie Thompson <bernie@plugable.com>");
MODULE_DESCRIPTION("DisplayLink kernel framebuffer driver");
MODULE_LICENSE("GPL");
