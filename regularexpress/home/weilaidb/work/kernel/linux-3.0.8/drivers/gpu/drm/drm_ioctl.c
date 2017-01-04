int drm_getunique(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static void
drm_unset_busid(struct drm_device *dev,
struct drm_master *master)
int drm_setunique(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int drm_set_busid(struct drm_device *dev, struct drm_file *file_priv)
int drm_getmap(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_getclient(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_getstats(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_getcap(struct drm_device *dev, void *data, struct drm_file *file_priv)
int drm_setversion(struct drm_device *dev, void *data, struct drm_file *file_priv)
int drm_noop(struct drm_device *dev, void *data,
struct drm_file *file_priv)
