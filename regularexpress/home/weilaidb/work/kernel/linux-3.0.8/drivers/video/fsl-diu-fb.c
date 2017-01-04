static struct fb_videomode __devinitdata fsl_diu_default_mode = ;
static struct fb_videomode __devinitdata fsl_diu_mode_db[] = ;
static char *fb_mode = "1024x768-32@60";
static unsigned long default_bpp = 32;
static int monitor_port;
#if defined(CONFIG_NOT_COHERENT_CACHE)
static u8 *coherence_data;
static size_t coherence_data_size;
static unsigned int d_cache_line_size;
static DEFINE_SPINLOCK(diu_lock);
struct fsl_diu_data ;
struct mfb_info ;
static struct mfb_info mfb_template[] = ;
static struct diu_hw dr = ;
static struct diu_pool pool;
static void *fsl_diu_alloc(size_t size, phys_addr_t *phys)
static void fsl_diu_free(void *virt, size_t size)
void wr_reg_wa(u32 *reg, u32 val)
static int fsl_diu_enable_panel(struct fb_info *info)
static int fsl_diu_disable_panel(struct fb_info *info)
static void enable_lcdc(struct fb_info *info)
static void disable_lcdc(struct fb_info *info)
static void adjust_aoi_size_position(struct fb_var_screeninfo *var,
struct fb_info *info)
static int fsl_diu_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static void set_fix(struct fb_info *info)
static void update_lcdc(struct fb_info *info)
static int map_video_memory(struct fb_info *info)
static void unmap_video_memory(struct fb_info *info)
static int fsl_diu_set_aoi(struct fb_info *info)
static int fsl_diu_set_par(struct fb_info *info)
static inline __u32 CNVT_TOHW(__u32 val, __u32 width)
static int fsl_diu_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp, struct fb_info *info)
static int fsl_diu_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int fsl_diu_blank(int blank_mode, struct fb_info *info)
static int fsl_diu_ioctl(struct fb_info *info, unsigned int cmd,
unsigned long arg)
static int fsl_diu_open(struct fb_info *info, int user)
static int fsl_diu_release(struct fb_info *info, int user)
static struct fb_ops fsl_diu_ops = ;
static int init_fbinfo(struct fb_info *info)
static int __devinit install_fb(struct fb_info *info)
static void uninstall_fb(struct fb_info *info)
static irqreturn_t fsl_diu_isr(int irq, void *dev_id)
static int request_irq_local(int irq)
static void free_irq_local(int irq)
static int fsl_diu_suspend(struct platform_device *ofdev, pm_message_t state)
static int fsl_diu_resume(struct platform_device *ofdev)
#define fsl_diu_suspend NULL
#define fsl_diu_resume NULL
static int allocate_buf(struct device *dev, struct diu_addr *buf, u32 size,
u32 bytes_align)
static void free_buf(struct device *dev, struct diu_addr *buf, u32 size,
u32 bytes_align)
static ssize_t store_monitor(struct device *device,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t show_monitor(struct device *device,
struct device_attribute *attr, char *buf)
static int __devinit fsl_diu_probe(struct platform_device *ofdev)
static int fsl_diu_remove(struct platform_device *ofdev)
static int __init fsl_diu_setup(char *options)
static struct of_device_id fsl_diu_match[] = ;
MODULE_DEVICE_TABLE(of, fsl_diu_match);
static struct platform_driver fsl_diu_driver = ;
static int __init fsl_diu_init(void)
static void __exit fsl_diu_exit(void)
module_init(fsl_diu_init);
module_exit(fsl_diu_exit);
MODULE_AUTHOR("York Sun <yorksun@freescale.com>");
MODULE_DESCRIPTION("Freescale DIU framebuffer driver");
MODULE_LICENSE("GPL");
module_param_named(mode, fb_mode, charp, 0);
MODULE_PARM_DESC(mode,
"Specify resolution as \"<xres>x<yres>[-<bpp>][@<refresh>]\" ");
module_param_named(bpp, default_bpp, ulong, 0);
MODULE_PARM_DESC(bpp, "Specify bit-per-pixel if not specified mode");
module_param_named(monitor, monitor_port, int, 0);
MODULE_PARM_DESC(monitor,
"Specify the monitor port (0, 1 or 2) if supported by the platform");
