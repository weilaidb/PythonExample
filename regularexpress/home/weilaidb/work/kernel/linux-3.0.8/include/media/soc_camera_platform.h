#define __SOC_CAMERA_H__
struct device;
struct soc_camera_platform_info ;
static inline void soc_camera_platform_release(struct platform_device **pdev)
static inline int soc_camera_platform_add(const struct soc_camera_link *icl,
struct device *dev,
struct platform_device **pdev,
struct soc_camera_link *plink,
void (*release)(struct device *dev),
int id)
static inline void soc_camera_platform_del(const struct soc_camera_link *icl,
struct platform_device *pdev,
const struct soc_camera_link *plink)
