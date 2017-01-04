static struct clk *mdp_clk;
static struct clk *mdp_pclk;
struct completion mdp_ppp_comp;
struct semaphore mdp_ppp_mutex;
struct semaphore mdp_pipe_ctrl_mutex;
unsigned long mdp_timer_duration = (HZ);
boolean mdp_ppp_waiting = FALSE;
uint32 mdp_tv_underflow_cnt;
uint32 mdp_lcdc_underflow_cnt;
boolean mdp_current_clk_on = FALSE;
boolean mdp_is_in_isr = FALSE;
uint32 mdp_in_processing = FALSE;
uint32 mdp_intr_mask = MDP4_ANY_INTR_MASK;
uint32 mdp_intr_mask = MDP_ANY_INTR_MASK;
MDP_BLOCK_TYPE mdp_debug[MDP_MAX_BLOCK];
int32 mdp_block_power_cnt[MDP_MAX_BLOCK];
spinlock_t mdp_spin_lock;
struct workqueue_struct *mdp_dma_wq;
struct workqueue_struct *mdp_vsync_wq;
static struct workqueue_struct *mdp_pipe_ctrl_wq;
static struct delayed_work mdp_pipe_ctrl_worker;
struct mdp_dma_data dma2_data;
struct mdp_dma_data dma_s_data;
struct mdp_dma_data dma_e_data;
static struct mdp_dma_data dma2_data;
static struct mdp_dma_data dma_s_data;
static struct mdp_dma_data dma_e_data;
static struct mdp_dma_data dma3_data;
extern ktime_t mdp_dma2_last_update_time;
extern uint32 mdp_dma2_update_time_in_usec;
extern int mdp_lcd_rd_cnt_offset_slow;
extern int mdp_lcd_rd_cnt_offset_fast;
extern int mdp_usec_diff_threshold;
extern int mdp_lcdc_pclk_clk_rate;
extern int mdp_lcdc_pad_pclk_clk_rate;
extern int first_pixel_start_x;
extern int first_pixel_start_y;
struct dentry *mdp_dir;
#if defined(CONFIG_PM) && !defined(CONFIG_HAS_EARLYSUSPEND)
static int mdp_suspend(struct platform_device *pdev, pm_message_t state);
#define mdp_suspend NULL
struct timeval mdp_dma2_timeval;
struct timeval mdp_ppp_timeval;
static struct early_suspend early_suspend;
DEFINE_MUTEX(mdp_lut_push_sem);
static int mdp_lut_i;
static int mdp_lut_hw_update(struct fb_cmap *cmap)
static int mdp_lut_push;
static int mdp_lut_push_i;
static int mdp_lut_update_nonlcdc(struct fb_info *info, struct fb_cmap *cmap)
static int mdp_lut_update_lcdc(struct fb_info *info, struct fb_cmap *cmap)
#define MDP_HIST_MAX_BIN 32
static __u32 mdp_hist_r[MDP_HIST_MAX_BIN];
static __u32 mdp_hist_g[MDP_HIST_MAX_BIN];
static __u32 mdp_hist_b[MDP_HIST_MAX_BIN];
struct mdp_histogram mdp_hist;
struct completion mdp_hist_comp;
static struct mdp_histogram mdp_hist;
static struct completion mdp_hist_comp;
static int mdp_do_histogram(struct fb_info *info, struct mdp_histogram *hist)
int mdp_ppp_pipe_wait(void)
static DEFINE_SPINLOCK(mdp_lock);
static int mdp_irq_mask;
static int mdp_irq_enabled;
void mdp_enable_irq(uint32 term)
void mdp_disable_irq(uint32 term)
void mdp_disable_irq_nolock(uint32 term)
void mdp_pipe_kickoff(uint32 term, struct msm_fb_data_type *mfd)
else if (term == MDP_DMA_S_TERM)
}
static void mdp_pipe_ctrl_workqueue_handler(struct work_struct *work)
void mdp_pipe_ctrl(MDP_BLOCK_TYPE block, MDP_BLOCK_POWER_STATE state,
boolean isr)
irqreturn_t mdp_isr(int irq, void *ptr)
static void mdp_drv_init(void)
static int mdp_probe(struct platform_device *pdev);
static int mdp_remove(struct platform_device *pdev);
static struct platform_driver mdp_driver = ;
static int mdp_off(struct platform_device *pdev)
static int mdp_on(struct platform_device *pdev)
static int mdp_irq_clk_setup(void)
static struct platform_device *pdev_list[MSM_FB_MAX_DEV_LIST];
static int pdev_list_cnt;
static int mdp_resource_initialized;
static struct msm_panel_common_pdata *mdp_pdata;
static int mdp_probe(struct platform_device *pdev)
static void mdp_suspend_sub(void)
#if defined(CONFIG_PM) && !defined(CONFIG_HAS_EARLYSUSPEND)
static int mdp_suspend(struct platform_device *pdev, pm_message_t state)
static void mdp_early_suspend(struct early_suspend *h)
static int mdp_remove(struct platform_device *pdev)
static int mdp_register_driver(void)
static int __init mdp_driver_init(void)
module_init(mdp_driver_init);
