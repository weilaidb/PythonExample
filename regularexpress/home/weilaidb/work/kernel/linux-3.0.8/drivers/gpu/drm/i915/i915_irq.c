#define MAX_NOPID ((u32)~0)
#define I915_INTERRUPT_ENABLE_FIX			\
(I915_ASLE_INTERRUPT |				\
I915_DISPLAY_PIPE_A_EVENT_INTERRUPT |		\
I915_DISPLAY_PIPE_B_EVENT_INTERRUPT |		\
I915_DISPLAY_PLANE_A_FLIP_PENDING_INTERRUPT |	\
I915_DISPLAY_PLANE_B_FLIP_PENDING_INTERRUPT |	\
I915_RENDER_COMMAND_PARSER_ERROR_INTERRUPT)
#define I915_INTERRUPT_ENABLE_VAR (I915_USER_INTERRUPT | I915_BSD_USER_INTERRUPT)
#define I915_PIPE_VBLANK_STATUS	(PIPE_START_VBLANK_INTERRUPT_STATUS |\
PIPE_VBLANK_INTERRUPT_STATUS)
#define I915_PIPE_VBLANK_ENABLE	(PIPE_START_VBLANK_INTERRUPT_ENABLE |\
PIPE_VBLANK_INTERRUPT_ENABLE)
#define DRM_I915_VBLANK_PIPE_ALL	(DRM_I915_VBLANK_PIPE_A | \
DRM_I915_VBLANK_PIPE_B)
static void
ironlake_enable_display_irq(drm_i915_private_t *dev_priv, u32 mask)
static inline void
ironlake_disable_display_irq(drm_i915_private_t *dev_priv, u32 mask)
void
i915_enable_pipestat(drm_i915_private_t *dev_priv, int pipe, u32 mask)
void
i915_disable_pipestat(drm_i915_private_t *dev_priv, int pipe, u32 mask)
void intel_enable_asle(struct drm_device *dev)
static int
i915_pipe_enabled(struct drm_device *dev, int pipe)
static u32 i915_get_vblank_counter(struct drm_device *dev, int pipe)
static u32 gm45_get_vblank_counter(struct drm_device *dev, int pipe)
static int i915_get_crtc_scanoutpos(struct drm_device *dev, int pipe,
int *vpos, int *hpos)
static int i915_get_vblank_timestamp(struct drm_device *dev, int pipe,
int *max_error,
struct timeval *vblank_time,
unsigned flags)
static void i915_hotplug_work_func(struct work_struct *work)
static void i915_handle_rps_change(struct drm_device *dev)
static void notify_ring(struct drm_device *dev,
struct intel_ring_buffer *ring)
static void gen6_pm_rps_work(struct work_struct *work)
static void pch_irq_handler(struct drm_device *dev)
static irqreturn_t ivybridge_irq_handler(DRM_IRQ_ARGS)
static irqreturn_t ironlake_irq_handler(DRM_IRQ_ARGS)
static void i915_error_work_func(struct work_struct *work)
static struct drm_i915_error_object *
i915_error_object_create(struct drm_i915_private *dev_priv,
struct drm_i915_gem_object *src)
static void
i915_error_object_free(struct drm_i915_error_object *obj)
static void
i915_error_state_free(struct drm_device *dev,
struct drm_i915_error_state *error)
static u32 capture_bo_list(struct drm_i915_error_buffer *err,
int count,
struct list_head *head)
static void i915_gem_record_fences(struct drm_device *dev,
struct drm_i915_error_state *error)
static struct drm_i915_error_object *
i915_error_first_batchbuffer(struct drm_i915_private *dev_priv,
struct intel_ring_buffer *ring)
static void i915_capture_error_state(struct drm_device *dev)
void i915_destroy_error_state(struct drm_device *dev)
#define i915_capture_error_state(x)
static void i915_report_and_clear_eir(struct drm_device *dev)
void i915_handle_error(struct drm_device *dev, bool wedged)
static void i915_pageflip_stall_check(struct drm_device *dev, int pipe)
static irqreturn_t i915_driver_irq_handler(DRM_IRQ_ARGS)
static int i915_emit_irq(struct drm_device * dev)
static int i915_wait_irq(struct drm_device * dev, int irq_nr)
int i915_irq_emit(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int i915_irq_wait(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int i915_enable_vblank(struct drm_device *dev, int pipe)
static int ironlake_enable_vblank(struct drm_device *dev, int pipe)
static int ivybridge_enable_vblank(struct drm_device *dev, int pipe)
static void i915_disable_vblank(struct drm_device *dev, int pipe)
static void ironlake_disable_vblank(struct drm_device *dev, int pipe)
static void ivybridge_disable_vblank(struct drm_device *dev, int pipe)
int i915_vblank_pipe_set(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int i915_vblank_pipe_get(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int i915_vblank_swap(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static u32
ring_last_seqno(struct intel_ring_buffer *ring)
static bool i915_hangcheck_ring_idle(struct intel_ring_buffer *ring, bool *err)
static bool kick_ring(struct intel_ring_buffer *ring)
void i915_hangcheck_elapsed(unsigned long data)
static void ironlake_irq_preinstall(struct drm_device *dev)
static int ironlake_irq_postinstall(struct drm_device *dev)
static int ivybridge_irq_postinstall(struct drm_device *dev)
static void i915_driver_irq_preinstall(struct drm_device * dev)
static int i915_driver_irq_postinstall(struct drm_device *dev)
static void ironlake_irq_uninstall(struct drm_device *dev)
static void i915_driver_irq_uninstall(struct drm_device * dev)
void intel_irq_init(struct drm_device *dev)
