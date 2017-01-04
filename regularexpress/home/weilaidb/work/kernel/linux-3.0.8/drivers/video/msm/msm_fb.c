#define PRINT_FPS 0
#define PRINT_BLIT_TIME 0
#define SLEEPING 0x4
#define UPDATING 0x3
#define FULL_UPDATE_DONE 0x2
#define WAKING 0x1
#define AWAKE 0x0
#define NONE 0
#define SUSPEND_RESUME 0x1
#define FPS 0x2
#define BLIT_TIME 0x4
#define SHOW_UPDATES 0x8
#define DLOG(mask, fmt, args...) \
do  while (0)
static int msmfb_debug_mask;
module_param_named(msmfb_debug_mask, msmfb_debug_mask, int,
S_IRUGO | S_IWUSR | S_IWGRP);
struct mdp_device *mdp;
struct msmfb_info ;
static int msmfb_open(struct fb_info *info, int user)
static int msmfb_release(struct fb_info *info, int user)
static void msmfb_handle_dma_interrupt(struct msmfb_callback *callback)
static int msmfb_start_dma(struct msmfb_info *msmfb)
static void msmfb_handle_vsync_interrupt(struct msmfb_callback *callback)
static enum hrtimer_restart msmfb_fake_vsync(struct hrtimer *timer)
static void msmfb_pan_update(struct fb_info *info, uint32_t left, uint32_t top,
uint32_t eright, uint32_t ebottom,
uint32_t yoffset, int pan_display)
static void msmfb_update(struct fb_info *info, uint32_t left, uint32_t top,
uint32_t eright, uint32_t ebottom)
static void power_on_panel(struct work_struct *work)
static int msmfb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
int msmfb_pan_display(struct fb_var_screeninfo *var, struct fb_info *info)
static void msmfb_fillrect(struct fb_info *p, const struct fb_fillrect *rect)
static void msmfb_copyarea(struct fb_info *p, const struct fb_copyarea *area)
static void msmfb_imageblit(struct fb_info *p, const struct fb_image *image)
static int msmfb_blit(struct fb_info *info,
void __user *p)
DEFINE_MUTEX(mdp_ppp_lock);
static int msmfb_ioctl(struct fb_info *p, unsigned int cmd, unsigned long arg)
static struct fb_ops msmfb_ops = ;
static unsigned PP[16];
#define BITS_PER_PIXEL 16
static void setup_fb_info(struct msmfb_info *msmfb)
static int setup_fbmem(struct msmfb_info *msmfb, struct platform_device *pdev)
static int msmfb_probe(struct platform_device *pdev)
static struct platform_driver msm_panel_driver = ;
static int msmfb_add_mdp_device(struct device *dev,
struct class_interface *class_intf)
static void msmfb_remove_mdp_device(struct device *dev,
struct class_interface *class_intf)
static struct class_interface msm_fb_interface = ;
static int __init msmfb_init(void)
module_init(msmfb_init);
