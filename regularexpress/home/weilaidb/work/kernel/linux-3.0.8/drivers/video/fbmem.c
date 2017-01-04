#define FBPIXMAPSIZE	(1024 * 8)
static DEFINE_MUTEX(registration_lock);
struct fb_info *registered_fb[FB_MAX] __read_mostly;
int num_registered_fb __read_mostly;
static struct fb_info *get_fb_info(unsigned int idx)
static void put_fb_info(struct fb_info *fb_info)
int lock_fb_info(struct fb_info *info)
EXPORT_SYMBOL(lock_fb_info);
int fb_get_color_depth(struct fb_var_screeninfo *var,
struct fb_fix_screeninfo *fix)
EXPORT_SYMBOL(fb_get_color_depth);
void fb_pad_aligned_buffer(u8 *dst, u32 d_pitch, u8 *src, u32 s_pitch, u32 height)
EXPORT_SYMBOL(fb_pad_aligned_buffer);
void fb_pad_unaligned_buffer(u8 *dst, u32 d_pitch, u8 *src, u32 idx, u32 height,
u32 shift_high, u32 shift_low, u32 mod)
EXPORT_SYMBOL(fb_pad_unaligned_buffer);
char* fb_get_buffer_offset(struct fb_info *info, struct fb_pixmap *buf, u32 size)
static inline unsigned safe_shift(unsigned d, int n)
static void fb_set_logocmap(struct fb_info *info,
const struct linux_logo *logo)
static void  fb_set_logo_truepalette(struct fb_info *info,
const struct linux_logo *logo,
u32 *palette)
static void fb_set_logo_directpalette(struct fb_info *info,
const struct linux_logo *logo,
u32 *palette)
static void fb_set_logo(struct fb_info *info,
const struct linux_logo *logo, u8 *dst,
int depth)
static struct logo_data  fb_logo __read_mostly;
static void fb_rotate_logo_ud(const u8 *in, u8 *out, u32 width, u32 height)
static void fb_rotate_logo_cw(const u8 *in, u8 *out, u32 width, u32 height)
static void fb_rotate_logo_ccw(const u8 *in, u8 *out, u32 width, u32 height)
static void fb_rotate_logo(struct fb_info *info, u8 *dst,
struct fb_image *image, int rotate)
static void fb_do_show_logo(struct fb_info *info, struct fb_image *image,
int rotate, unsigned int num)
static int fb_show_logo_line(struct fb_info *info, int rotate,
const struct linux_logo *logo, int y,
unsigned int n)
#define FB_LOGO_EX_NUM_MAX 10
static struct logo_data_extra  fb_logo_ex[FB_LOGO_EX_NUM_MAX];
static unsigned int fb_logo_ex_num;
void fb_append_extra_logo(const struct linux_logo *logo, unsigned int n)
static int fb_prepare_extra_logos(struct fb_info *info, unsigned int height,
unsigned int yres)
static int fb_show_extra_logos(struct fb_info *info, int y, int rotate)
static inline int fb_prepare_extra_logos(struct fb_info *info,
unsigned int height,
unsigned int yres)
static inline int fb_show_extra_logos(struct fb_info *info, int y, int rotate)
int fb_prepare_logo(struct fb_info *info, int rotate)
int fb_show_logo(struct fb_info *info, int rotate)
int fb_prepare_logo(struct fb_info *info, int rotate)
int fb_show_logo(struct fb_info *info, int rotate)
static void *fb_seq_start(struct seq_file *m, loff_t *pos)
static void *fb_seq_next(struct seq_file *m, void *v, loff_t *pos)
static void fb_seq_stop(struct seq_file *m, void *v)
static int fb_seq_show(struct seq_file *m, void *v)
static const struct seq_operations proc_fb_seq_ops = ;
static int proc_fb_open(struct inode *inode, struct file *file)
static const struct file_operations fb_proc_fops = ;
static struct fb_info *file_fb_info(struct file *file)
static ssize_t
fb_read(struct file *file, char __user *buf, size_t count, loff_t *ppos)
static ssize_t
fb_write(struct file *file, const char __user *buf, size_t count, loff_t *ppos)
int
fb_pan_display(struct fb_info *info, struct fb_var_screeninfo *var)
static int fb_check_caps(struct fb_info *info, struct fb_var_screeninfo *var,
u32 activate)
int
fb_set_var(struct fb_info *info, struct fb_var_screeninfo *var)
int
fb_blank(struct fb_info *info, int blank)
static long do_fb_ioctl(struct fb_info *info, unsigned int cmd,
unsigned long arg)
static long fb_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
struct fb_fix_screeninfo32 ;
struct fb_cmap32 ;
static int fb_getput_cmap(struct fb_info *info, unsigned int cmd,
unsigned long arg)
static int do_fscreeninfo_to_user(struct fb_fix_screeninfo *fix,
struct fb_fix_screeninfo32 __user *fix32)
static int fb_get_fscreeninfo(struct fb_info *info, unsigned int cmd,
unsigned long arg)
static long fb_compat_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int
fb_mmap(struct file *file, struct vm_area_struct * vma)
static int
fb_open(struct inode *inode, struct file *file)
__acquires(&info->lock)
__releases(&info->lock)
static int
fb_release(struct inode *inode, struct file *file)
__acquires(&info->lock)
__releases(&info->lock)
static const struct file_operations fb_fops = ;
struct class *fb_class;
EXPORT_SYMBOL(fb_class);
static int fb_check_foreignness(struct fb_info *fi)
static bool apertures_overlap(struct aperture *gen, struct aperture *hw)
static bool fb_do_apertures_overlap(struct apertures_struct *gena,
struct apertures_struct *hwa)
static int do_unregister_framebuffer(struct fb_info *fb_info);
#define VGA_FB_PHYS 0xA0000
static void do_remove_conflicting_framebuffers(struct apertures_struct *a,
const char *name, bool primary)
static int do_register_framebuffer(struct fb_info *fb_info)
static int do_unregister_framebuffer(struct fb_info *fb_info)
void remove_conflicting_framebuffers(struct apertures_struct *a,
const char *name, bool primary)
EXPORT_SYMBOL(remove_conflicting_framebuffers);
int
register_framebuffer(struct fb_info *fb_info)
int
unregister_framebuffer(struct fb_info *fb_info)
void fb_set_suspend(struct fb_info *info, int state)
static int __init
fbmem_init(void)
module_init(fbmem_init);
static void __exit
fbmem_exit(void)
module_exit(fbmem_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Framebuffer base");
subsys_initcall(fbmem_init);
int fb_new_modelist(struct fb_info *info)
static char *video_options[FB_MAX] __read_mostly;
static int ofonly __read_mostly;
int fb_get_options(char *name, char **option)
static int __init video_setup(char *options)
__setup("video=", video_setup);
EXPORT_SYMBOL(register_framebuffer);
EXPORT_SYMBOL(unregister_framebuffer);
EXPORT_SYMBOL(num_registered_fb);
EXPORT_SYMBOL(registered_fb);
EXPORT_SYMBOL(fb_show_logo);
EXPORT_SYMBOL(fb_set_var);
EXPORT_SYMBOL(fb_blank);
EXPORT_SYMBOL(fb_pan_display);
EXPORT_SYMBOL(fb_get_buffer_offset);
EXPORT_SYMBOL(fb_set_suspend);
EXPORT_SYMBOL(fb_get_options);
MODULE_LICENSE("GPL");
