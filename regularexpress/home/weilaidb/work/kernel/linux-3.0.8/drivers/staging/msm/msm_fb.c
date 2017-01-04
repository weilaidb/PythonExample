#define MSM_FB_C
#define INIT_IMAGE_FILE "/logo.rle"
extern int load_565rle_image(char *filename);
#define pgprot_noncached(prot) \
__pgprot_modify(prot, L_PTE_MT_MASK, L_PTE_MT_UNCACHED)
#define pgprot_writecombine(prot) \
__pgprot_modify(prot, L_PTE_MT_MASK, L_PTE_MT_BUFFERABLE)
#define pgprot_device(prot) \
__pgprot_modify(prot, L_PTE_MT_MASK|L_PTE_EXEC, L_PTE_MT_DEV_NONSHARED)
#define pgprot_writethroughcache(prot) \
__pgprot((pgprot_val(prot) & ~L_PTE_MT_MASK) | L_PTE_MT_WRITETHROUGH)
#define pgprot_writebackcache(prot) \
__pgprot((pgprot_val(prot) & ~L_PTE_MT_MASK) | L_PTE_MT_WRITEBACK)
#define pgprot_writebackwacache(prot) \
__pgprot((pgprot_val(prot) & ~L_PTE_MT_MASK) | L_PTE_MT_WRITEALLOC)
static unsigned char *fbram;
static unsigned char *fbram_phys;
static int fbram_size;
static struct platform_device *pdev_list[MSM_FB_MAX_DEV_LIST];
static int pdev_list_cnt;
int vsync_mode = 1;
#define MAX_FBI_LIST 32
static struct fb_info *fbi_list[MAX_FBI_LIST];
static int fbi_list_index;
static struct msm_fb_data_type *mfd_list[MAX_FBI_LIST];
static int mfd_list_index;
static u32 msm_fb_pseudo_palette[16] = ;
u32 msm_fb_debug_enabled;
u32 msm_fb_msg_level = 7;
u32 mddi_msg_level = 5;
extern int32 mdp_block_power_cnt[MDP_MAX_BLOCK];
extern unsigned long mdp_timer_duration;
static int msm_fb_register(struct msm_fb_data_type *mfd);
static int msm_fb_open(struct fb_info *info, int user);
static int msm_fb_release(struct fb_info *info, int user);
static int msm_fb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info);
static int msm_fb_stop_sw_refresher(struct msm_fb_data_type *mfd);
int msm_fb_resume_sw_refresher(struct msm_fb_data_type *mfd);
static int msm_fb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info);
static int msm_fb_set_par(struct fb_info *info);
static int msm_fb_blank_sub(int blank_mode, struct fb_info *info,
boolean op_enable);
static int msm_fb_suspend_sub(struct msm_fb_data_type *mfd);
static int msm_fb_resume_sub(struct msm_fb_data_type *mfd);
static int msm_fb_ioctl(struct fb_info *info, unsigned int cmd,
unsigned long arg);
static int msm_fb_mmap(struct fb_info *info, struct vm_area_struct * vma);
#define MSM_FB_MAX_DBGFS 1024
#define MAX_BACKLIGHT_BRIGHTNESS 255
int msm_fb_debugfs_file_index;
struct dentry *msm_fb_debugfs_root;
struct dentry *msm_fb_debugfs_file[MSM_FB_MAX_DBGFS];
struct dentry *msm_fb_get_debugfs_root(void)
void msm_fb_debugfs_file_create(struct dentry *root, const char *name,
u32 *var)
int msm_fb_cursor(struct fb_info *info, struct fb_cursor *cursor)
static int msm_fb_resource_initialized;
static int lcd_backlight_registered;
static void msm_fb_set_bl_brightness(struct led_classdev *led_cdev,
enum led_brightness value)
static struct led_classdev backlight_led = ;
static struct msm_fb_platform_data *msm_fb_pdata;
int msm_fb_detect_client(const char *name)
static int msm_fb_probe(struct platform_device *pdev)
static int msm_fb_remove(struct platform_device *pdev)
#if defined(CONFIG_PM) && !defined(CONFIG_HAS_EARLYSUSPEND)
static int msm_fb_suspend(struct platform_device *pdev, pm_message_t state)
#define msm_fb_suspend NULL
static int msm_fb_suspend_sub(struct msm_fb_data_type *mfd)
#if defined(CONFIG_PM) && !defined(CONFIG_HAS_EARLYSUSPEND)
static int msm_fb_resume(struct platform_device *pdev)
#define msm_fb_resume NULL
static int msm_fb_resume_sub(struct msm_fb_data_type *mfd)
static struct platform_driver msm_fb_driver = ;
static void msmfb_early_suspend(struct early_suspend *h)
static void msmfb_early_resume(struct early_suspend *h)
void msm_fb_set_backlight(struct msm_fb_data_type *mfd, __u32 bkl_lvl, u32 save)
static int msm_fb_blank_sub(int blank_mode, struct fb_info *info,
boolean op_enable)
static void msm_fb_fillrect(struct fb_info *info,
const struct fb_fillrect *rect)
static void msm_fb_copyarea(struct fb_info *info,
const struct fb_copyarea *area)
static void msm_fb_imageblit(struct fb_info *info, const struct fb_image *image)
static int msm_fb_blank(int blank_mode, struct fb_info *info)
static int msm_fb_set_lut(struct fb_cmap *cmap, struct fb_info *info)
static int msm_fb_mmap(struct fb_info *info, struct vm_area_struct * vma)
static struct fb_ops msm_fb_ops = ;
static int msm_fb_register(struct msm_fb_data_type *mfd)
static int msm_fb_open(struct fb_info *info, int user)
static int msm_fb_release(struct fb_info *info, int user)
DEFINE_SEMAPHORE(msm_fb_pan_sem);
static int msm_fb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int msm_fb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int msm_fb_set_par(struct fb_info *info)
static int msm_fb_stop_sw_refresher(struct msm_fb_data_type *mfd)
int msm_fb_resume_sw_refresher(struct msm_fb_data_type *mfd)
void mdp_ppp_put_img(struct file *p_src_file, struct file *p_dst_file)
int mdp_blit(struct fb_info *info, struct mdp_blit_req *req)
typedef void (*msm_dma_barrier_function_pointer) (void *, size_t);
static inline void msm_fb_dma_barrier_for_rect(struct fb_info *info,
struct mdp_img *img, struct mdp_rect *rect,
msm_dma_barrier_function_pointer dma_barrier_fp
)
static inline void msm_dma_nc_pre(void)
static inline void msm_dma_wt_pre(void)
static inline void msm_dma_todevice_wb_pre(void *start, size_t size)
static inline void msm_dma_fromdevice_wb_pre(void *start, size_t size)
static inline void msm_dma_nc_post(void)
static inline void msm_dma_fromdevice_wt_post(void *start, size_t size)
static inline void msm_dma_todevice_wb_post(void *start, size_t size)
static inline void msm_dma_fromdevice_wb_post(void *start, size_t size)
static void msm_fb_ensure_memory_coherency_before_dma(struct fb_info *info,
struct mdp_blit_req *req_list,
int req_list_count)
static void msm_fb_ensure_memory_coherency_after_dma(struct fb_info *info,
struct mdp_blit_req *req_list,
int req_list_count)
void msm_fb_ensure_mem_coherency_after_dma(struct fb_info *info,
struct mdp_blit_req *req_list, int req_list_count)
static int msmfb_async_blit(struct fb_info *info, void __user *p)
static int msmfb_blit(struct fb_info *info, void __user *p)
static int msmfb_overlay_get(struct fb_info *info, void __user *p)
static int msmfb_overlay_set(struct fb_info *info, void __user *p)
static int msmfb_overlay_unset(struct fb_info *info, unsigned long *argp)
static int msmfb_overlay_play(struct fb_info *info, unsigned long *argp)
DEFINE_SEMAPHORE(msm_fb_ioctl_ppp_sem);
DEFINE_MUTEX(msm_fb_ioctl_lut_sem);
DEFINE_MUTEX(msm_fb_ioctl_hist_sem);
static void msmfb_set_color_conv(struct mdp_ccs *p)
static int msm_fb_ioctl(struct fb_info *info, unsigned int cmd,
unsigned long arg)
static int msm_fb_register_driver(void)
void msm_fb_add_device(struct platform_device *pdev)
EXPORT_SYMBOL(msm_fb_add_device);
int __init msm_fb_init(void)
module_init(msm_fb_init);
