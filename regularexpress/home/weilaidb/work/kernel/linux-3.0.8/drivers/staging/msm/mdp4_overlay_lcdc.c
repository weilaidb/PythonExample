#define LCDC_BASE	0xC0000
#define LCDC_BASE	0xE0000
int first_pixel_start_x;
int first_pixel_start_y;
static struct mdp4_overlay_pipe *lcdc_pipe;
int mdp_lcdc_on(struct platform_device *pdev)
int mdp_lcdc_off(struct platform_device *pdev)
void mdp4_overlay0_done_lcdc()
void mdp4_lcdc_overlay(struct msm_fb_data_type *mfd)
