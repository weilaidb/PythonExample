#define MDP_SYNC_CFG_0		0x100
#define MDP_SYNC_STATUS_0	0x10c
#define MDP_PRIM_VSYNC_OUT_CTRL	0x118
#define MDP_PRIM_VSYNC_INIT_VAL	0x128
#define MDP_SYNC_CFG_0		0x300
#define MDP_SYNC_STATUS_0	0x30c
#define MDP_PRIM_VSYNC_OUT_CTRL	0x318
#define MDP_PRIM_VSYNC_INIT_VAL	0x328
extern mddi_lcd_type mddi_lcd_idx;
extern spinlock_t mdp_spin_lock;
extern struct workqueue_struct *mdp_vsync_wq;
extern int lcdc_mode;
extern int vsync_mode;
int vsync_above_th = 4;
int vsync_start_th = 1;
int vsync_load_cnt;
struct clk *mdp_vsync_clk;
void mdp_hw_vsync_clk_enable(struct msm_fb_data_type *mfd)
void mdp_hw_vsync_clk_disable(struct msm_fb_data_type *mfd)
static void mdp_set_vsync(unsigned long data)
static void mdp_vsync_handler(void *data)
irqreturn_t mdp_hw_vsync_handler_proxy(int irq, void *data)
static void mdp_set_sync_cfg_0(struct msm_fb_data_type *mfd, int vsync_cnt)
void mdp_config_vsync(struct msm_fb_data_type *mfd)
void mdp_vsync_resync_workqueue_handler(struct work_struct *work)
boolean mdp_hw_vsync_set_handler(msm_fb_vsync_handler_type handler, void *data)
uint32 mdp_get_lcd_line_counter(struct msm_fb_data_type *mfd)
