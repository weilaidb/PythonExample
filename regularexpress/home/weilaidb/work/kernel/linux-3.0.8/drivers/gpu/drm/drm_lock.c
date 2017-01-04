static int drm_notifier(void *priv);
static int drm_lock_take(struct drm_lock_data *lock_data, unsigned int context);
int drm_lock(struct drm_device *dev, void *data, struct drm_file *file_priv)
int drm_unlock(struct drm_device *dev, void *data, struct drm_file *file_priv)
static
int drm_lock_take(struct drm_lock_data *lock_data,
unsigned int context)
static int drm_lock_transfer(struct drm_lock_data *lock_data,
unsigned int context)
int drm_lock_free(struct drm_lock_data *lock_data, unsigned int context)
static int drm_notifier(void *priv)
void drm_idlelock_take(struct drm_lock_data *lock_data)
void drm_idlelock_release(struct drm_lock_data *lock_data)
int drm_i_have_hw_lock(struct drm_device *dev, struct drm_file *file_priv)
