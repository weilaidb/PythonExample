void drm_ctxbitmap_free(struct drm_device * dev, int ctx_handle)
static int drm_ctxbitmap_next(struct drm_device * dev)
int drm_ctxbitmap_init(struct drm_device * dev)
void drm_ctxbitmap_cleanup(struct drm_device * dev)
int drm_getsareactx(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_setsareactx(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int drm_context_switch(struct drm_device * dev, int old, int new)
static int drm_context_switch_complete(struct drm_device *dev,
struct drm_file *file_priv, int new)
int drm_resctx(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_addctx(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_modctx(struct drm_device *dev, void *data, struct drm_file *file_priv)
int drm_getctx(struct drm_device *dev, void *data, struct drm_file *file_priv)
int drm_switchctx(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_newctx(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_rmctx(struct drm_device *dev, void *data,
struct drm_file *file_priv)
