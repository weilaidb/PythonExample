#define _SIS_DRV_H_
#define DRIVER_AUTHOR		"SIS, Tungsten Graphics"
#define DRIVER_NAME		"sis"
#define DRIVER_DESC		"SIS 300/630/540 and XGI V3XE/V5/V8"
#define DRIVER_DATE		"20070626"
#define DRIVER_MAJOR		1
#define DRIVER_MINOR		3
#define DRIVER_PATCHLEVEL	0
enum sis_family ;
#define SIS_BASE (dev_priv->mmio)
#define SIS_READ(reg)         DRM_READ32(SIS_BASE, reg);
#define SIS_WRITE(reg, val)   DRM_WRITE32(SIS_BASE, reg, val);
typedef struct drm_sis_private  drm_sis_private_t;
extern int sis_idle(struct drm_device *dev);
extern void sis_reclaim_buffers_locked(struct drm_device *dev,
struct drm_file *file_priv);
extern void sis_lastclose(struct drm_device *dev);
extern struct drm_ioctl_desc sis_ioctls[];
extern int sis_max_ioctl;
