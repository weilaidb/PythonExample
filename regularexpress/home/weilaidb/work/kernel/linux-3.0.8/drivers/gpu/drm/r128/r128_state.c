static void r128_emit_clip_rects(drm_r128_private_t *dev_priv,
struct drm_clip_rect *boxes, int count)
static __inline__ void r128_emit_core(drm_r128_private_t *dev_priv)
static __inline__ void r128_emit_context(drm_r128_private_t *dev_priv)
static __inline__ void r128_emit_setup(drm_r128_private_t *dev_priv)
static __inline__ void r128_emit_masks(drm_r128_private_t *dev_priv)
static __inline__ void r128_emit_window(drm_r128_private_t *dev_priv)
static __inline__ void r128_emit_tex0(drm_r128_private_t *dev_priv)
static __inline__ void r128_emit_tex1(drm_r128_private_t *dev_priv)
static void r128_emit_state(drm_r128_private_t *dev_priv)
#if R128_PERFORMANCE_BOXES
static void r128_clear_box(drm_r128_private_t *dev_priv,
int x, int y, int w, int h, int r, int g, int b)
static void r128_cce_performance_boxes(drm_r128_private_t *dev_priv)
static void r128_print_dirty(const char *msg, unsigned int flags)
static void r128_cce_dispatch_clear(struct drm_device *dev,
drm_r128_clear_t *clear)
static void r128_cce_dispatch_swap(struct drm_device *dev)
static void r128_cce_dispatch_flip(struct drm_device *dev)
static void r128_cce_dispatch_vertex(struct drm_device *dev, struct drm_buf *buf)
static void r128_cce_dispatch_indirect(struct drm_device *dev,
struct drm_buf *buf, int start, int end)
static void r128_cce_dispatch_indices(struct drm_device *dev,
struct drm_buf *buf,
int start, int end, int count)
static int r128_cce_dispatch_blit(struct drm_device *dev,
struct drm_file *file_priv,
drm_r128_blit_t *blit)
static int r128_cce_dispatch_write_span(struct drm_device *dev,
drm_r128_depth_t *depth)
static int r128_cce_dispatch_write_pixels(struct drm_device *dev,
drm_r128_depth_t *depth)
static int r128_cce_dispatch_read_span(struct drm_device *dev,
drm_r128_depth_t *depth)
static int r128_cce_dispatch_read_pixels(struct drm_device *dev,
drm_r128_depth_t *depth)
static void r128_cce_dispatch_stipple(struct drm_device *dev, u32 *stipple)
static int r128_cce_clear(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int r128_do_init_pageflip(struct drm_device *dev)
static int r128_do_cleanup_pageflip(struct drm_device *dev)
static int r128_cce_flip(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int r128_cce_swap(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int r128_cce_vertex(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int r128_cce_indices(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int r128_cce_blit(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int r128_cce_depth(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int r128_cce_stipple(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int r128_cce_indirect(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int r128_getparam(struct drm_device *dev, void *data, struct drm_file *file_priv)
void r128_driver_preclose(struct drm_device *dev, struct drm_file *file_priv)
void r128_driver_lastclose(struct drm_device *dev)
struct drm_ioctl_desc r128_ioctls[] = ;
int r128_max_ioctl = DRM_ARRAY_SIZE(r128_ioctls);
