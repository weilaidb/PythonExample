struct panel_info ;
static int mddi_dummy_suspend(struct msm_panel_data *panel_data)
static int mddi_dummy_resume(struct msm_panel_data *panel_data)
static int mddi_dummy_blank(struct msm_panel_data *panel_data)
static int mddi_dummy_unblank(struct msm_panel_data *panel_data)
static int mddi_dummy_probe(struct platform_device *pdev)
static int mddi_dummy_remove(struct platform_device *pdev)
static struct platform_driver mddi_client_dummy = ;
static int __init mddi_client_dummy_init(void)
module_init(mddi_client_dummy_init);
