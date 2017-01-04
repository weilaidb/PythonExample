#define DEVICE_NAME		"ps3fb"
#define GPU_CMD_BUF_SIZE			(2 * 1024 * 1024)
#define GPU_FB_START				(64 * 1024)
#define GPU_IOIF				(0x0d000000UL)
#define GPU_ALIGN_UP(x)				_ALIGN_UP((x), 64)
#define GPU_MAX_LINE_LENGTH			(65536 - 64)
#define GPU_INTR_STATUS_VSYNC_0			0
#define GPU_INTR_STATUS_VSYNC_1			1
#define GPU_INTR_STATUS_FLIP_0			3
#define GPU_INTR_STATUS_FLIP_1			4
#define GPU_INTR_STATUS_QUEUE_0			5
#define GPU_INTR_STATUS_QUEUE_1			6
#define GPU_DRIVER_INFO_VERSION			0x211
struct display_head ;
struct gpu_irq ;
struct gpu_driver_info ;
struct ps3fb_priv ;
static struct ps3fb_priv ps3fb;
struct ps3fb_par ;
#define FIRST_NATIVE_MODE_INDEX	10
static const struct fb_videomode ps3fb_modedb[] = ;
#define HEAD_A
#define HEAD_B
#define BPP		4
static int ps3fb_mode;
module_param(ps3fb_mode, int, 0);
static char *mode_option __devinitdata;
static int ps3fb_cmp_mode(const struct fb_videomode *vmode,
const struct fb_var_screeninfo *var)
static const struct fb_videomode *ps3fb_native_vmode(enum ps3av_mode_num id)
static const struct fb_videomode *ps3fb_vmode(int id)
static unsigned int ps3fb_find_mode(struct fb_var_screeninfo *var,
u32 *ddr_line_length, u32 *xdr_line_length)
static void ps3fb_sync_image(struct device *dev, u64 frame_offset,
u64 dst_offset, u64 src_offset, u32 width,
u32 height, u32 dst_line_length,
u32 src_line_length)
static int ps3fb_sync(struct fb_info *info, u32 frame)
static int ps3fb_open(struct fb_info *info, int user)
static int ps3fb_release(struct fb_info *info, int user)
static int ps3fb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int ps3fb_set_par(struct fb_info *info)
static int ps3fb_setcolreg(unsigned int regno, unsigned int red,
unsigned int green, unsigned int blue,
unsigned int transp, struct fb_info *info)
static int ps3fb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int ps3fb_mmap(struct fb_info *info, struct vm_area_struct *vma)
static int ps3fb_blank(int blank, struct fb_info *info)
static int ps3fb_get_vblank(struct fb_vblank *vblank)
static int ps3fb_wait_for_vsync(u32 crtc)
static int ps3fb_ioctl(struct fb_info *info, unsigned int cmd,
unsigned long arg)
static int ps3fbd(void *arg)
static irqreturn_t ps3fb_vsync_interrupt(int irq, void *ptr)
static struct fb_ops ps3fb_ops = ;
static struct fb_fix_screeninfo ps3fb_fix __initdata = ;
static int __devinit ps3fb_probe(struct ps3_system_bus_device *dev)
static int ps3fb_shutdown(struct ps3_system_bus_device *dev)
static struct ps3_system_bus_driver ps3fb_driver = ;
static int __init ps3fb_setup(void)
static int __init ps3fb_init(void)
static void __exit ps3fb_exit(void)
module_init(ps3fb_init);
module_exit(ps3fb_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("PS3 GPU Frame Buffer Driver");
MODULE_AUTHOR("Sony Computer Entertainment Inc.");
MODULE_ALIAS(PS3_MODULE_ALIAS_GPU_FB);
