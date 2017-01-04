#define OMAP3_ISP_RESIZER_H
#define COEFF_CNT		32
struct isprsz_coef ;
enum resizer_chroma_algo ;
enum resizer_colors_type ;
struct resizer_ratio ;
struct resizer_luma_yenh ;
enum resizer_input_entity ;
#define RESZ_PAD_SINK			0
#define RESZ_PAD_SOURCE			1
#define RESZ_PADS_NUM			2
struct isp_res_device ;
struct isp_device;
int omap3isp_resizer_init(struct isp_device *isp);
void omap3isp_resizer_cleanup(struct isp_device *isp);
int omap3isp_resizer_register_entities(struct isp_res_device *res,
struct v4l2_device *vdev);
void omap3isp_resizer_unregister_entities(struct isp_res_device *res);
void omap3isp_resizer_isr_frame_sync(struct isp_res_device *res);
void omap3isp_resizer_isr(struct isp_res_device *isp_res);
void omap3isp_resizer_max_rate(struct isp_res_device *res,
unsigned int *max_rate);
void omap3isp_resizer_suspend(struct isp_res_device *isp_res);
void omap3isp_resizer_resume(struct isp_res_device *isp_res);
int omap3isp_resizer_busy(struct isp_res_device *isp_res);
