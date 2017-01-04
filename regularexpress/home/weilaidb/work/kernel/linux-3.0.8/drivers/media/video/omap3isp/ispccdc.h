#define OMAP3_ISP_CCDC_H
enum ccdc_input_entity ;
#define CCDC_OUTPUT_MEMORY	(1 << 0)
#define CCDC_OUTPUT_PREVIEW	(1 << 1)
#define CCDC_OUTPUT_RESIZER	(1 << 2)
#define	OMAP3ISP_CCDC_NEVENTS	16
struct ispccdc_syncif ;
struct ispccdc_vp ;
enum ispccdc_lsc_state ;
struct ispccdc_lsc_config_req ;
struct ispccdc_lsc ;
#define CCDC_STOP_NOT_REQUESTED		0x00
#define CCDC_STOP_REQUEST		0x01
#define CCDC_STOP_EXECUTED		(0x02 | CCDC_STOP_REQUEST)
#define CCDC_STOP_CCDC_FINISHED		0x04
#define CCDC_STOP_LSC_FINISHED		0x08
#define CCDC_STOP_FINISHED		\
(CCDC_STOP_EXECUTED | CCDC_STOP_CCDC_FINISHED | CCDC_STOP_LSC_FINISHED)
#define CCDC_EVENT_VD1			0x10
#define CCDC_EVENT_VD0			0x20
#define CCDC_EVENT_LSC_DONE		0x40
#define CCDC_PAD_SINK			0
#define CCDC_PAD_SOURCE_OF		1
#define CCDC_PAD_SOURCE_VP		2
#define CCDC_PADS_NUM			3
struct isp_ccdc_device ;
struct isp_device;
int omap3isp_ccdc_init(struct isp_device *isp);
void omap3isp_ccdc_cleanup(struct isp_device *isp);
int omap3isp_ccdc_register_entities(struct isp_ccdc_device *ccdc,
struct v4l2_device *vdev);
void omap3isp_ccdc_unregister_entities(struct isp_ccdc_device *ccdc);
int omap3isp_ccdc_busy(struct isp_ccdc_device *isp_ccdc);
int omap3isp_ccdc_isr(struct isp_ccdc_device *isp_ccdc, u32 events);
void omap3isp_ccdc_restore_context(struct isp_device *isp);
void omap3isp_ccdc_max_rate(struct isp_ccdc_device *ccdc,
unsigned int *max_rate);
