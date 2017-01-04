int radeon_driver_unload_kms(struct drm_device *dev)
int radeon_driver_load_kms(struct drm_device *dev, unsigned long flags)
static void radeon_set_filp_rights(struct drm_device *dev,
struct drm_file **owner,
struct drm_file *applier,
uint32_t *value)
int radeon_info_ioctl(struct drm_device *dev, void *data, struct drm_file *filp)
int radeon_driver_firstopen_kms(struct drm_device *dev)
void radeon_driver_lastclose_kms(struct drm_device *dev)
int radeon_driver_open_kms(struct drm_device *dev, struct drm_file *file_priv)
void radeon_driver_postclose_kms(struct drm_device *dev,
struct drm_file *file_priv)
void radeon_driver_preclose_kms(struct drm_device *dev,
struct drm_file *file_priv)
u32 radeon_get_vblank_counter_kms(struct drm_device *dev, int crtc)
int radeon_enable_vblank_kms(struct drm_device *dev, int crtc)
void radeon_disable_vblank_kms(struct drm_device *dev, int crtc)
int radeon_get_vblank_timestamp_kms(struct drm_device *dev, int crtc,
int *max_error,
struct timeval *vblank_time,
unsigned flags)
int radeon_dma_ioctl_kms(struct drm_device *dev, void *data,
struct drm_file *file_priv)
#define KMS_INVALID_IOCTL(name)						\
int name(struct drm_device *dev, void *data, struct drm_file *file_priv)\
KMS_INVALID_IOCTL(radeon_cp_init_kms)
KMS_INVALID_IOCTL(radeon_cp_start_kms)
KMS_INVALID_IOCTL(radeon_cp_stop_kms)
KMS_INVALID_IOCTL(radeon_cp_reset_kms)
KMS_INVALID_IOCTL(radeon_cp_idle_kms)
KMS_INVALID_IOCTL(radeon_cp_resume_kms)
KMS_INVALID_IOCTL(radeon_engine_reset_kms)
KMS_INVALID_IOCTL(radeon_fullscreen_kms)
KMS_INVALID_IOCTL(radeon_cp_swap_kms)
KMS_INVALID_IOCTL(radeon_cp_clear_kms)
KMS_INVALID_IOCTL(radeon_cp_vertex_kms)
KMS_INVALID_IOCTL(radeon_cp_indices_kms)
KMS_INVALID_IOCTL(radeon_cp_texture_kms)
KMS_INVALID_IOCTL(radeon_cp_stipple_kms)
KMS_INVALID_IOCTL(radeon_cp_indirect_kms)
KMS_INVALID_IOCTL(radeon_cp_vertex2_kms)
KMS_INVALID_IOCTL(radeon_cp_cmdbuf_kms)
KMS_INVALID_IOCTL(radeon_cp_getparam_kms)
KMS_INVALID_IOCTL(radeon_cp_flip_kms)
KMS_INVALID_IOCTL(radeon_mem_alloc_kms)
KMS_INVALID_IOCTL(radeon_mem_free_kms)
KMS_INVALID_IOCTL(radeon_mem_init_heap_kms)
KMS_INVALID_IOCTL(radeon_irq_emit_kms)
KMS_INVALID_IOCTL(radeon_irq_wait_kms)
KMS_INVALID_IOCTL(radeon_cp_setparam_kms)
KMS_INVALID_IOCTL(radeon_surface_alloc_kms)
KMS_INVALID_IOCTL(radeon_surface_free_kms)
struct drm_ioctl_desc radeon_ioctls_kms[] = ;
int radeon_max_kms_ioctl = DRM_ARRAY_SIZE(radeon_ioctls_kms);
