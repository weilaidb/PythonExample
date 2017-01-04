static unsigned int autoidle;
module_param(autoidle, int, 0444);
MODULE_PARM_DESC(autoidle, "Enable OMAP3ISP AUTOIDLE support");
static void isp_save_ctx(struct isp_device *isp);
static void isp_restore_ctx(struct isp_device *isp);
static const struct isp_res_mapping isp_res_maps[] = ;
static struct isp_reg isp_reg_list[] = ;
void omap3isp_flush(struct isp_device *isp)
static void isp_enable_interrupts(struct isp_device *isp)
static void isp_disable_interrupts(struct isp_device *isp)
static u32 isp_set_xclk(struct isp_device *isp, u32 xclk, u8 xclksel)
static void isp_power_settings(struct isp_device *isp, int idle)
void omap3isp_configure_bridge(struct isp_device *isp,
enum ccdc_input_entity input,
const struct isp_parallel_platform_data *pdata,
unsigned int shift)
static void isp_set_pixel_clock(struct isp_device *isp, unsigned int pixelclk)
void omap3isp_hist_dma_done(struct isp_device *isp)
static inline void isp_isr_dbg(struct isp_device *isp, u32 irqstatus)
static void isp_isr_sbl(struct isp_device *isp)
static irqreturn_t isp_isr(int irq, void *_isp)
static int isp_pipeline_pm_use_count(struct media_entity *entity)
static int isp_pipeline_pm_power_one(struct media_entity *entity, int change)
static int isp_pipeline_pm_power(struct media_entity *entity, int change)
int omap3isp_pipeline_pm_use(struct media_entity *entity, int use)
static int isp_pipeline_link_notify(struct media_pad *source,
struct media_pad *sink, u32 flags)
static int isp_pipeline_enable(struct isp_pipeline *pipe,
enum isp_pipeline_stream_state mode)
static int isp_pipeline_wait_resizer(struct isp_device *isp)
static int isp_pipeline_wait_preview(struct isp_device *isp)
static int isp_pipeline_wait_ccdc(struct isp_device *isp)
#define ISP_STOP_TIMEOUT	msecs_to_jiffies(1000)
static int isp_pipeline_wait(struct isp_device *isp,
int(*busy)(struct isp_device *isp))
static int isp_pipeline_disable(struct isp_pipeline *pipe)
int omap3isp_pipeline_set_stream(struct isp_pipeline *pipe,
enum isp_pipeline_stream_state state)
static void isp_pipeline_resume(struct isp_pipeline *pipe)
static void isp_pipeline_suspend(struct isp_pipeline *pipe)
static int isp_pipeline_is_last(struct media_entity *me)
static void isp_suspend_module_pipeline(struct media_entity *me)
static void isp_resume_module_pipeline(struct media_entity *me)
static int isp_suspend_modules(struct isp_device *isp)
static void isp_resume_modules(struct isp_device *isp)
static int isp_reset(struct isp_device *isp)
static void
isp_save_context(struct isp_device *isp, struct isp_reg *reg_list)
static void
isp_restore_context(struct isp_device *isp, struct isp_reg *reg_list)
static void isp_save_ctx(struct isp_device *isp)
static void isp_restore_ctx(struct isp_device *isp)
#define OMAP3_ISP_SBL_READ	(OMAP3_ISP_SBL_CSI1_READ | \
OMAP3_ISP_SBL_CCDC_LSC_READ | \
OMAP3_ISP_SBL_PREVIEW_READ | \
OMAP3_ISP_SBL_RESIZER_READ)
#define OMAP3_ISP_SBL_WRITE	(OMAP3_ISP_SBL_CSI1_WRITE | \
OMAP3_ISP_SBL_CSI2A_WRITE | \
OMAP3_ISP_SBL_CSI2C_WRITE | \
OMAP3_ISP_SBL_CCDC_WRITE | \
OMAP3_ISP_SBL_PREVIEW_WRITE)
void omap3isp_sbl_enable(struct isp_device *isp, enum isp_sbl_resource res)
void omap3isp_sbl_disable(struct isp_device *isp, enum isp_sbl_resource res)
int omap3isp_module_sync_idle(struct media_entity *me, wait_queue_head_t *wait,
atomic_t *stopping)
int omap3isp_module_sync_is_stopping(wait_queue_head_t *wait,
atomic_t *stopping)
#define ISPCTRL_CLKS_MASK	(ISPCTRL_H3A_CLK_EN | \
ISPCTRL_HIST_CLK_EN | \
ISPCTRL_RSZ_CLK_EN | \
(ISPCTRL_CCDC_CLK_EN | ISPCTRL_CCDC_RAM_EN) | \
(ISPCTRL_PREV_CLK_EN | ISPCTRL_PREV_RAM_EN))
static void __isp_subclk_update(struct isp_device *isp)
void omap3isp_subclk_enable(struct isp_device *isp,
enum isp_subclk_resource res)
void omap3isp_subclk_disable(struct isp_device *isp,
enum isp_subclk_resource res)
static int isp_enable_clocks(struct isp_device *isp)
static void isp_disable_clocks(struct isp_device *isp)
static const char *isp_clocks[] = ;
static void isp_put_clocks(struct isp_device *isp)
static int isp_get_clocks(struct isp_device *isp)
struct isp_device *omap3isp_get(struct isp_device *isp)
void omap3isp_put(struct isp_device *isp)
#define ISP_PRINT_REGISTER(isp, name)\
dev_dbg(isp->dev, "###ISP " #name "=0x%08x\n", \
isp_reg_readl(isp, OMAP3_ISP_IOMEM_MAIN, ISP_##name))
#define SBL_PRINT_REGISTER(isp, name)\
dev_dbg(isp->dev, "###SBL " #name "=0x%08x\n", \
isp_reg_readl(isp, OMAP3_ISP_IOMEM_SBL, ISPSBL_##name))
void omap3isp_print_status(struct isp_device *isp)
static int isp_pm_prepare(struct device *dev)
static int isp_pm_suspend(struct device *dev)
static int isp_pm_resume(struct device *dev)
static void isp_pm_complete(struct device *dev)
#define isp_pm_prepare	NULL
#define isp_pm_suspend	NULL
#define isp_pm_resume	NULL
#define isp_pm_complete	NULL
static void isp_unregister_entities(struct isp_device *isp)
static struct v4l2_subdev *
isp_register_subdev_group(struct isp_device *isp,
struct isp_subdev_i2c_board_info *board_info)
static int isp_register_entities(struct isp_device *isp)
static void isp_cleanup_modules(struct isp_device *isp)
static int isp_initialize_modules(struct isp_device *isp)
static int isp_remove(struct platform_device *pdev)
static int isp_map_mem_resource(struct platform_device *pdev,
struct isp_device *isp,
enum isp_mem_resources res)
static int isp_probe(struct platform_device *pdev)
static const struct dev_pm_ops omap3isp_pm_ops = ;
static struct platform_device_id omap3isp_id_table[] = ;
MODULE_DEVICE_TABLE(platform, omap3isp_id_table);
static struct platform_driver omap3isp_driver = ;
static int __init isp_init(void)
static void __exit isp_cleanup(void)
module_init(isp_init);
module_exit(isp_cleanup);
MODULE_AUTHOR("Nokia Corporation");
MODULE_DESCRIPTION("TI OMAP3 ISP driver");
MODULE_LICENSE("GPL");
