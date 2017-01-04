static inline u32
psb_pipestat(int pipe)
static inline u32
mid_pipe_event(int pipe)
static inline u32
mid_pipe_vsync(int pipe)
static inline u32
mid_pipeconf(int pipe)
void
psb_enable_pipestat(struct drm_psb_private *dev_priv, int pipe, u32 mask)
void
psb_disable_pipestat(struct drm_psb_private *dev_priv, int pipe, u32 mask)
void mid_enable_pipe_event(struct drm_psb_private *dev_priv, int pipe)
void mid_disable_pipe_event(struct drm_psb_private *dev_priv, int pipe)
static void mid_vblank_handler(struct drm_device *dev, uint32_t pipe)
#define WAIT_STATUS_CLEAR_LOOP_COUNT 0xffff
static void mid_pipe_event_handler(struct drm_device *dev, uint32_t pipe)
static void psb_vdc_interrupt(struct drm_device *dev, uint32_t vdc_stat)
irqreturn_t psb_irq_handler(DRM_IRQ_ARGS)
void psb_irq_preinstall(struct drm_device *dev)
int psb_irq_postinstall(struct drm_device *dev)
void psb_irq_uninstall(struct drm_device *dev)
void psb_irq_turn_on_dpst(struct drm_device *dev)
int psb_irq_enable_dpst(struct drm_device *dev)
void psb_irq_turn_off_dpst(struct drm_device *dev)
int psb_irq_disable_dpst(struct drm_device *dev)
static int psb_vblank_do_wait(struct drm_device *dev,
unsigned int *sequence, atomic_t *counter)
int psb_enable_vblank(struct drm_device *dev, int pipe)
void psb_disable_vblank(struct drm_device *dev, int pipe)
u32 psb_get_vblank_counter(struct drm_device *dev, int pipe)
