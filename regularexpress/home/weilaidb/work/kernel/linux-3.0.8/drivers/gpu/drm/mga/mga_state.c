static void mga_emit_clip_rect(drm_mga_private_t *dev_priv,
struct drm_clip_rect *box)
static __inline__ void mga_g200_emit_context(drm_mga_private_t *dev_priv)
static __inline__ void mga_g400_emit_context(drm_mga_private_t *dev_priv)
static __inline__ void mga_g200_emit_tex0(drm_mga_private_t *dev_priv)
static __inline__ void mga_g400_emit_tex0(drm_mga_private_t *dev_priv)
static __inline__ void mga_g400_emit_tex1(drm_mga_private_t *dev_priv)
static __inline__ void mga_g200_emit_pipe(drm_mga_private_t *dev_priv)
static __inline__ void mga_g400_emit_pipe(drm_mga_private_t *dev_priv)
static void mga_g200_emit_state(drm_mga_private_t *dev_priv)
static void mga_g400_emit_state(drm_mga_private_t *dev_priv)
static int mga_verify_context(drm_mga_private_t *dev_priv)
static int mga_verify_tex(drm_mga_private_t *dev_priv, int unit)
static int mga_verify_state(drm_mga_private_t *dev_priv)
static int mga_verify_iload(drm_mga_private_t *dev_priv,
unsigned int dstorg, unsigned int length)
static int mga_verify_blit(drm_mga_private_t *dev_priv,
unsigned int srcorg, unsigned int dstorg)
static void mga_dma_dispatch_clear(struct drm_device *dev, drm_mga_clear_t *clear)
static void mga_dma_dispatch_swap(struct drm_device *dev)
static void mga_dma_dispatch_vertex(struct drm_device *dev, struct drm_buf *buf)
static void mga_dma_dispatch_indices(struct drm_device *dev, struct drm_buf *buf,
unsigned int start, unsigned int end)
static void mga_dma_dispatch_iload(struct drm_device *dev, struct drm_buf *buf,
unsigned int dstorg, unsigned int length)
static void mga_dma_dispatch_blit(struct drm_device *dev, drm_mga_blit_t *blit)
static int mga_dma_clear(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int mga_dma_swap(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int mga_dma_vertex(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int mga_dma_indices(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int mga_dma_iload(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int mga_dma_blit(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int mga_getparam(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int mga_set_fence(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int mga_wait_fence(struct drm_device *dev, void *data, struct drm_file *
file_priv)
struct drm_ioctl_desc mga_ioctls[] = ;
int mga_max_ioctl = DRM_ARRAY_SIZE(mga_ioctls);
