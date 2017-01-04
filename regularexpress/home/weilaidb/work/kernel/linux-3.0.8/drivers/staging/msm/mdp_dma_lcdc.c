#define LCDC_BASE	0xC0000
#define DTV_BASE	0xD0000
#define DMA_E_BASE      0xB0000
#define LCDC_BASE	0xE0000
#define DMA_P_BASE      0x90000
extern spinlock_t mdp_spin_lock;
extern uint32 mdp_intr_mask;
int first_pixel_start_x;
int first_pixel_start_y;
int mdp_lcdc_on(struct platform_device *pdev)
int mdp_lcdc_off(struct platform_device *pdev)
void mdp_lcdc_update(struct msm_fb_data_type *mfd)
