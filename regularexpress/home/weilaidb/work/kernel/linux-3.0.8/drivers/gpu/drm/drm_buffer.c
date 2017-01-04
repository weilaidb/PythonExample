int drm_buffer_alloc(struct drm_buffer **buf, int size)
EXPORT_SYMBOL(drm_buffer_alloc);
int drm_buffer_copy_from_user(struct drm_buffer *buf,
void __user *user_data, int size)
EXPORT_SYMBOL(drm_buffer_copy_from_user);
void drm_buffer_free(struct drm_buffer *buf)
EXPORT_SYMBOL(drm_buffer_free);
void *drm_buffer_read_object(struct drm_buffer *buf,
int objsize, void *stack_obj)
EXPORT_SYMBOL(drm_buffer_read_object);
