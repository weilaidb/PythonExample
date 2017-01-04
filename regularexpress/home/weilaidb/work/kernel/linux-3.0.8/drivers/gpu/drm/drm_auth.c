static struct drm_file *drm_find_file(struct drm_master *master, drm_magic_t magic)
static int drm_add_magic(struct drm_master *master, struct drm_file *priv,
drm_magic_t magic)
static int drm_remove_magic(struct drm_master *master, drm_magic_t magic)
int drm_getmagic(struct drm_device *dev, void *data, struct drm_file *file_priv)
int drm_authmagic(struct drm_device *dev, void *data,
struct drm_file *file_priv)
