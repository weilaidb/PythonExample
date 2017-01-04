void
nouveau_irq_preinstall(struct drm_device *dev)
int
nouveau_irq_postinstall(struct drm_device *dev)
void
nouveau_irq_uninstall(struct drm_device *dev)
irqreturn_t
nouveau_irq_handler(DRM_IRQ_ARGS)
int
nouveau_irq_init(struct drm_device *dev)
void
nouveau_irq_fini(struct drm_device *dev)
void
nouveau_irq_register(struct drm_device *dev, int status_bit,
void (*handler)(struct drm_device *))
void
nouveau_irq_unregister(struct drm_device *dev, int status_bit)
