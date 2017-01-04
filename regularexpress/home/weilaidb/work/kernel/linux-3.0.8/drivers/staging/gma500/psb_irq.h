#define _SYSIRQ_H_
bool sysirq_init(struct drm_device *dev);
void sysirq_uninit(struct drm_device *dev);
void psb_irq_preinstall(struct drm_device *dev);
int  psb_irq_postinstall(struct drm_device *dev);
void psb_irq_uninstall(struct drm_device *dev);
irqreturn_t psb_irq_handler(DRM_IRQ_ARGS);
void psb_irq_preinstall_islands(struct drm_device *dev, int hw_islands);
int  psb_irq_postinstall_islands(struct drm_device *dev, int hw_islands);
void psb_irq_uninstall_islands(struct drm_device *dev, int hw_islands);
int psb_irq_enable_dpst(struct drm_device *dev);
int psb_irq_disable_dpst(struct drm_device *dev);
void psb_irq_turn_on_dpst(struct drm_device *dev);
void psb_irq_turn_off_dpst(struct drm_device *dev);
int  psb_enable_vblank(struct drm_device *dev, int pipe);
void psb_disable_vblank(struct drm_device *dev, int pipe);
u32  psb_get_vblank_counter(struct drm_device *dev, int pipe);
