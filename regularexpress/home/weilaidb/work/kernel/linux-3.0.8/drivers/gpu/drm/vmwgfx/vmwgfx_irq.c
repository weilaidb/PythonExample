#define VMW_FENCE_WRAP (1 << 24)
irqreturn_t vmw_irq_handler(DRM_IRQ_ARGS)
static bool vmw_fifo_idle(struct vmw_private *dev_priv, uint32_t sequence)
void vmw_update_sequence(struct vmw_private *dev_priv,
struct vmw_fifo_state *fifo_state)
bool vmw_fence_signaled(struct vmw_private *dev_priv,
uint32_t sequence)
int vmw_fallback_wait(struct vmw_private *dev_priv,
bool lazy,
bool fifo_idle,
uint32_t sequence,
bool interruptible,
unsigned long timeout)
int vmw_wait_fence(struct vmw_private *dev_priv,
bool lazy, uint32_t sequence,
bool interruptible, unsigned long timeout)
void vmw_irq_preinstall(struct drm_device *dev)
int vmw_irq_postinstall(struct drm_device *dev)
void vmw_irq_uninstall(struct drm_device *dev)
#define VMW_FENCE_WAIT_TIMEOUT 3*HZ;
int vmw_fence_wait_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
