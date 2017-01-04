static DECLARE_WAIT_QUEUE_HEAD(nt35399_vsync_wait);
struct panel_info ;
static void
nt35399_request_vsync(struct msm_panel_data *panel_data,
struct msmfb_callback *callback)
static void nt35399_wait_vsync(struct msm_panel_data *panel_data)
static int nt35399_suspend(struct msm_panel_data *panel_data)
static int nt35399_resume(struct msm_panel_data *panel_data)
static int nt35399_blank(struct msm_panel_data *panel_data)
static int nt35399_unblank(struct msm_panel_data *panel_data)
irqreturn_t nt35399_vsync_interrupt(int irq, void *data)
static int setup_vsync(struct panel_info *panel, int init)
static int mddi_nt35399_probe(struct platform_device *pdev)
static int mddi_nt35399_remove(struct platform_device *pdev)
static struct platform_driver mddi_client_0bda_8a47 = ;
static int __init mddi_client_nt35399_init(void)
module_init(mddi_client_nt35399_init);
