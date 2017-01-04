#define OMAP3_ISP_CSI2_H
struct isp_csiphy;
enum isp_csi2_pix_formats ;
enum isp_csi2_irqevents ;
enum isp_csi2_ctx_irqevents ;
enum isp_csi2_frame_mode ;
#define ISP_CSI2_MAX_CTX_NUM	7
struct isp_csi2_ctx_cfg ;
struct isp_csi2_timing_cfg ;
struct isp_csi2_ctrl_cfg ;
#define CSI2_PAD_SINK		0
#define CSI2_PAD_SOURCE		1
#define CSI2_PADS_NUM		2
#define CSI2_OUTPUT_CCDC	(1 << 0)
#define CSI2_OUTPUT_MEMORY	(1 << 1)
struct isp_csi2_device ;
int omap3isp_csi2_isr(struct isp_csi2_device *csi2);
int omap3isp_csi2_reset(struct isp_csi2_device *csi2);
int omap3isp_csi2_init(struct isp_device *isp);
void omap3isp_csi2_cleanup(struct isp_device *isp);
void omap3isp_csi2_unregister_entities(struct isp_csi2_device *csi2);
int omap3isp_csi2_register_entities(struct isp_csi2_device *csi2,
struct v4l2_device *vdev);
