static inline int ring_space(struct intel_ring_buffer *ring)
static u32 i915_gem_get_seqno(struct drm_device *dev)
static int
render_ring_flush(struct intel_ring_buffer *ring,
u32	invalidate_domains,
u32	flush_domains)
static void ring_write_tail(struct intel_ring_buffer *ring,
u32 value)
u32 intel_ring_get_active_head(struct intel_ring_buffer *ring)
static int init_ring_common(struct intel_ring_buffer *ring)
struct pipe_control ;
static int
init_pipe_control(struct intel_ring_buffer *ring)
static void
cleanup_pipe_control(struct intel_ring_buffer *ring)
static int init_render_ring(struct intel_ring_buffer *ring)
static void render_ring_cleanup(struct intel_ring_buffer *ring)
static void
update_semaphore(struct intel_ring_buffer *ring, int i, u32 seqno)
static int
gen6_add_request(struct intel_ring_buffer *ring,
u32 *result)
int
intel_ring_sync(struct intel_ring_buffer *ring,
struct intel_ring_buffer *to,
u32 seqno)
#define PIPE_CONTROL_FLUSH(ring__, addr__)					\
do  while (0)
static int
pc_render_add_request(struct intel_ring_buffer *ring,
u32 *result)
static int
render_ring_add_request(struct intel_ring_buffer *ring,
u32 *result)
static u32
ring_get_seqno(struct intel_ring_buffer *ring)
static u32
pc_render_get_seqno(struct intel_ring_buffer *ring)
static void
ironlake_enable_irq(drm_i915_private_t *dev_priv, u32 mask)
static void
ironlake_disable_irq(drm_i915_private_t *dev_priv, u32 mask)
static void
i915_enable_irq(drm_i915_private_t *dev_priv, u32 mask)
static void
i915_disable_irq(drm_i915_private_t *dev_priv, u32 mask)
static bool
render_ring_get_irq(struct intel_ring_buffer *ring)
static void
render_ring_put_irq(struct intel_ring_buffer *ring)
void intel_ring_setup_status_page(struct intel_ring_buffer *ring)
static int
bsd_ring_flush(struct intel_ring_buffer *ring,
u32     invalidate_domains,
u32     flush_domains)
static int
ring_add_request(struct intel_ring_buffer *ring,
u32 *result)
static bool
gen6_ring_get_irq(struct intel_ring_buffer *ring, u32 gflag, u32 rflag)
static void
gen6_ring_put_irq(struct intel_ring_buffer *ring, u32 gflag, u32 rflag)
static bool
bsd_ring_get_irq(struct intel_ring_buffer *ring)
static void
bsd_ring_put_irq(struct intel_ring_buffer *ring)
static int
ring_dispatch_execbuffer(struct intel_ring_buffer *ring, u32 offset, u32 length)
static int
render_ring_dispatch_execbuffer(struct intel_ring_buffer *ring,
u32 offset, u32 len)
static void cleanup_status_page(struct intel_ring_buffer *ring)
static int init_status_page(struct intel_ring_buffer *ring)
int intel_init_ring_buffer(struct drm_device *dev,
struct intel_ring_buffer *ring)
void intel_cleanup_ring_buffer(struct intel_ring_buffer *ring)
static int intel_wrap_ring_buffer(struct intel_ring_buffer *ring)
int intel_wait_ring_buffer(struct intel_ring_buffer *ring, int n)
int intel_ring_begin(struct intel_ring_buffer *ring,
int num_dwords)
void intel_ring_advance(struct intel_ring_buffer *ring)
static const struct intel_ring_buffer render_ring = ;
static const struct intel_ring_buffer bsd_ring = ;
static void gen6_bsd_ring_write_tail(struct intel_ring_buffer *ring,
u32 value)
static int gen6_ring_flush(struct intel_ring_buffer *ring,
u32 invalidate, u32 flush)
static int
gen6_ring_dispatch_execbuffer(struct intel_ring_buffer *ring,
u32 offset, u32 len)
static bool
gen6_render_ring_get_irq(struct intel_ring_buffer *ring)
static void
gen6_render_ring_put_irq(struct intel_ring_buffer *ring)
static bool
gen6_bsd_ring_get_irq(struct intel_ring_buffer *ring)
static void
gen6_bsd_ring_put_irq(struct intel_ring_buffer *ring)
static const struct intel_ring_buffer gen6_bsd_ring = ;
static bool
blt_ring_get_irq(struct intel_ring_buffer *ring)
static void
blt_ring_put_irq(struct intel_ring_buffer *ring)
#define NEED_BLT_WORKAROUND(dev) \
(IS_GEN6(dev) && (dev->pdev->revision < 8))
static inline struct drm_i915_gem_object *
to_blt_workaround(struct intel_ring_buffer *ring)
static int blt_ring_init(struct intel_ring_buffer *ring)
static int blt_ring_begin(struct intel_ring_buffer *ring,
int num_dwords)
static int blt_ring_flush(struct intel_ring_buffer *ring,
u32 invalidate, u32 flush)
static void blt_ring_cleanup(struct intel_ring_buffer *ring)
static const struct intel_ring_buffer gen6_blt_ring = ;
int intel_init_render_ring_buffer(struct drm_device *dev)
int intel_render_ring_init_dri(struct drm_device *dev, u64 start, u32 size)
int intel_init_bsd_ring_buffer(struct drm_device *dev)
int intel_init_blt_ring_buffer(struct drm_device *dev)
