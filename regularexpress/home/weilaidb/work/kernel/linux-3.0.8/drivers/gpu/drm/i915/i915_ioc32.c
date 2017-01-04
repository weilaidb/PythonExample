typedef struct _drm_i915_batchbuffer32  drm_i915_batchbuffer32_t;
static int compat_i915_batchbuffer(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct _drm_i915_cmdbuffer32  drm_i915_cmdbuffer32_t;
static int compat_i915_cmdbuffer(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_i915_irq_emit32  drm_i915_irq_emit32_t;
static int compat_i915_irq_emit(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_i915_getparam32  drm_i915_getparam32_t;
static int compat_i915_getparam(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_i915_mem_alloc32  drm_i915_mem_alloc32_t;
static int compat_i915_alloc(struct file *file, unsigned int cmd,
unsigned long arg)
drm_ioctl_compat_t *i915_compat_ioctls[] = ;
long i915_compat_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
