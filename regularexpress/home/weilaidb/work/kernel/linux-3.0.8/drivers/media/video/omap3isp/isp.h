#define OMAP3_ISP_CORE_H
#define IOMMU_FLAG (IOVMF_ENDIAN_LITTLE | IOVMF_ELSZ_8)
#define ISP_TOK_TERM		0xFFFFFFFF
#define to_isp_device(ptr_module)				\
container_of(ptr_module, struct isp_device, isp_##ptr_module)
#define to_device(ptr_module)						\
(to_isp_device(ptr_module)->dev)
enum isp_mem_resources ;
enum isp_sbl_resource ;
enum isp_subclk_resource ;
enum isp_interface_type ;
#define ISP_REVISION_1_0		0x10
#define ISP_REVISION_2_0		0x20
#define ISP_REVISION_15_0		0xF0
struct isp_res_mapping ;
struct isp_reg ;
struct isp_parallel_platform_data ;
struct isp_ccp2_platform_data ;
struct isp_csi2_platform_data ;
struct isp_subdev_i2c_board_info ;
struct isp_v4l2_subdevs_group ;
struct isp_platform_data ;
struct isp_platform_callback ;
struct isp_device ;
#define v4l2_dev_to_isp_device(dev) \
container_of(dev, struct isp_device, v4l2_dev)
void omap3isp_hist_dma_done(struct isp_device *isp);
void omap3isp_flush(struct isp_device *isp);
int omap3isp_module_sync_idle(struct media_entity *me, wait_queue_head_t *wait,
atomic_t *stopping);
int omap3isp_module_sync_is_stopping(wait_queue_head_t *wait,
atomic_t *stopping);
int omap3isp_pipeline_set_stream(struct isp_pipeline *pipe,
enum isp_pipeline_stream_state state);
void omap3isp_configure_bridge(struct isp_device *isp,
enum ccdc_input_entity input,
const struct isp_parallel_platform_data *pdata,
unsigned int shift);
#define ISP_XCLK_NONE			0
#define ISP_XCLK_A			1
#define ISP_XCLK_B			2
struct isp_device *omap3isp_get(struct isp_device *isp);
void omap3isp_put(struct isp_device *isp);
void omap3isp_print_status(struct isp_device *isp);
void omap3isp_sbl_enable(struct isp_device *isp, enum isp_sbl_resource res);
void omap3isp_sbl_disable(struct isp_device *isp, enum isp_sbl_resource res);
void omap3isp_subclk_enable(struct isp_device *isp,
enum isp_subclk_resource res);
void omap3isp_subclk_disable(struct isp_device *isp,
enum isp_subclk_resource res);
int omap3isp_pipeline_pm_use(struct media_entity *entity, int use);
int omap3isp_register_entities(struct platform_device *pdev,
struct v4l2_device *v4l2_dev);
void omap3isp_unregister_entities(struct platform_device *pdev);
static inline
u32 isp_reg_readl(struct isp_device *isp, enum isp_mem_resources isp_mmio_range,
u32 reg_offset)
static inline
void isp_reg_writel(struct isp_device *isp, u32 reg_value,
enum isp_mem_resources isp_mmio_range, u32 reg_offset)
static inline
void isp_reg_clr(struct isp_device *isp, enum isp_mem_resources mmio_range,
u32 reg, u32 clr_bits)
static inline
void isp_reg_set(struct isp_device *isp, enum isp_mem_resources mmio_range,
u32 reg, u32 set_bits)
static inline
void isp_reg_clr_set(struct isp_device *isp, enum isp_mem_resources mmio_range,
u32 reg, u32 clr_bits, u32 set_bits)
static inline enum v4l2_buf_type
isp_pad_buffer_type(const struct v4l2_subdev *subdev, int pad)
