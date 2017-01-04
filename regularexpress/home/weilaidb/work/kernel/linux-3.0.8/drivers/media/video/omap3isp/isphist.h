#define OMAP3_ISP_HIST_H
#define ISPHIST_IN_BIT_WIDTH_CCDC	10
struct isp_device;
int omap3isp_hist_init(struct isp_device *isp);
void omap3isp_hist_cleanup(struct isp_device *isp);
