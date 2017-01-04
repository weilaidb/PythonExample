#define _INTEL_RINGBUFFER_H_
enum ;
struct  intel_hw_status_page ;
#define I915_READ_TAIL(ring) I915_READ(RING_TAIL((ring)->mmio_base))
#define I915_WRITE_TAIL(ring, val) I915_WRITE(RING_TAIL((ring)->mmio_base), val)
#define I915_READ_START(ring) I915_READ(RING_START((ring)->mmio_base))
#define I915_WRITE_START(ring, val) I915_WRITE(RING_START((ring)->mmio_base), val)
#define I915_READ_HEAD(ring)  I915_READ(RING_HEAD((ring)->mmio_base))
#define I915_WRITE_HEAD(ring, val) I915_WRITE(RING_HEAD((ring)->mmio_base), val)
#define I915_READ_CTL(ring) I915_READ(RING_CTL((ring)->mmio_base))
#define I915_WRITE_CTL(ring, val) I915_WRITE(RING_CTL((ring)->mmio_base), val)
#define I915_READ_IMR(ring) I915_READ(RING_IMR((ring)->mmio_base))
#define I915_WRITE_IMR(ring, val) I915_WRITE(RING_IMR((ring)->mmio_base), val)
#define I915_READ_NOPID(ring) I915_READ(RING_NOPID((ring)->mmio_base))
#define I915_READ_SYNC_0(ring) I915_READ(RING_SYNC_0((ring)->mmio_base))
#define I915_READ_SYNC_1(ring) I915_READ(RING_SYNC_1((ring)->mmio_base))
struct  intel_ring_buffer ;
static inline u32
intel_ring_sync_index(struct intel_ring_buffer *ring,
struct intel_ring_buffer *other)
static inline u32
intel_read_status_page(struct intel_ring_buffer *ring,
int reg)
#define READ_HWSP(dev_priv, reg) intel_read_status_page(LP_RING(dev_priv), reg)
#define READ_BREADCRUMB(dev_priv) READ_HWSP(dev_priv, I915_BREADCRUMB_INDEX)
#define I915_GEM_HWS_INDEX		0x20
#define I915_BREADCRUMB_INDEX		0x21
void intel_cleanup_ring_buffer(struct intel_ring_buffer *ring);
int __must_check intel_wait_ring_buffer(struct intel_ring_buffer *ring, int n);
static inline int intel_wait_ring_idle(struct intel_ring_buffer *ring)
int __must_check intel_ring_begin(struct intel_ring_buffer *ring, int n);
static inline void intel_ring_emit(struct intel_ring_buffer *ring,
u32 data)
void intel_ring_advance(struct intel_ring_buffer *ring);
u32 intel_ring_get_seqno(struct intel_ring_buffer *ring);
int intel_ring_sync(struct intel_ring_buffer *ring,
struct intel_ring_buffer *to,
u32 seqno);
int intel_init_render_ring_buffer(struct drm_device *dev);
int intel_init_bsd_ring_buffer(struct drm_device *dev);
int intel_init_blt_ring_buffer(struct drm_device *dev);
u32 intel_ring_get_active_head(struct intel_ring_buffer *ring);
void intel_ring_setup_status_page(struct intel_ring_buffer *ring);
static inline void i915_trace_irq_get(struct intel_ring_buffer *ring, u32 seqno)
int intel_render_ring_init_dri(struct drm_device *dev, u64 start, u32 size);
