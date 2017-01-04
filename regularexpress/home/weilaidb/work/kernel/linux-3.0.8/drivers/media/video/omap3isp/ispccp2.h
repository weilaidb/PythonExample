#define OMAP3_ISP_CCP2_H
struct isp_device;
struct isp_csiphy;
#define CCP2_PAD_SINK			0
#define CCP2_PAD_SOURCE			1
#define CCP2_PADS_NUM			2
enum ccp2_input_entity ;
enum ccp2_output_entity ;
struct isp_interface_lcx_config ;
struct isp_interface_mem_config ;
struct isp_ccp2_device ;
int omap3isp_ccp2_init(struct isp_device *isp);
void omap3isp_ccp2_cleanup(struct isp_device *isp);
int omap3isp_ccp2_register_entities(struct isp_ccp2_device *ccp2,
struct v4l2_device *vdev);
void omap3isp_ccp2_unregister_entities(struct isp_ccp2_device *ccp2);
int omap3isp_ccp2_isr(struct isp_ccp2_device *ccp2);
