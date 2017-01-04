static uint32 mdp_last_dma2_update_width;
static uint32 mdp_last_dma2_update_height;
static uint32 mdp_curr_dma2_update_width;
static uint32 mdp_curr_dma2_update_height;
ktime_t mdp_dma2_last_update_time = ;
int mdp_lcd_rd_cnt_offset_slow = 20;
int mdp_lcd_rd_cnt_offset_fast = 20;
int mdp_vsync_usec_wait_line_too_short = 5;
uint32 mdp_dma2_update_time_in_usec;
uint32 mdp_total_vdopkts;
extern u32 msm_fb_debug_enabled;
extern struct workqueue_struct *mdp_dma_wq;
int vsync_start_y_adjust = 4;
static void mdp_dma2_update_lcd(struct msm_fb_data_type *mfd)
static ktime_t vt = ;
int mdp_usec_diff_threshold = 100;
int mdp_expected_usec_wait;
enum hrtimer_restart mdp_dma2_vsync_hrtimer_handler(struct hrtimer *ht)
static void mdp_dma_schedule(struct msm_fb_data_type *mfd, uint32 term)
void mdp_dma2_update(struct msm_fb_data_type *mfd)
void mdp_dma2_update_sub(struct msm_fb_data_type *mfd)
void mdp_dma2_update(struct msm_fb_data_type *mfd)
void mdp_lcd_update_workqueue_handler(struct work_struct *work)
void mdp_set_dma_pan_info(struct fb_info *info, struct mdp_dirty_region *dirty,
boolean sync)
void mdp_set_offset_info(struct fb_info *info, uint32 addr, uint32 sync)
void mdp_dma_pan_update(struct fb_info *info)
void mdp_refresh_screen(unsigned long data)
