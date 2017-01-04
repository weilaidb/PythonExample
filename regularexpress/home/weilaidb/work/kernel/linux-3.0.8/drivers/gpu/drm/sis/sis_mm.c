#define VIDEO_TYPE 0
#define AGP_TYPE 1
#if defined(CONFIG_FB_SIS) || defined(CONFIG_FB_SIS_MODULE)
#define SIS_MM_ALIGN_SHIFT 0
#define SIS_MM_ALIGN_MASK 0
static void *sis_sman_mm_allocate(void *private, unsigned long size,
unsigned alignment)
static void sis_sman_mm_free(void *private, void *ref)
static void sis_sman_mm_destroy(void *private)
static unsigned long sis_sman_mm_offset(void *private, void *ref)
#define SIS_MM_ALIGN_SHIFT 4
#define SIS_MM_ALIGN_MASK ((1 << SIS_MM_ALIGN_SHIFT) - 1)
static int sis_fb_init(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int sis_drm_alloc(struct drm_device *dev, struct drm_file *file_priv,
void *data, int pool)
static int sis_drm_free(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int sis_fb_alloc(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int sis_ioctl_agp_init(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int sis_ioctl_agp_alloc(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static drm_local_map_t *sis_reg_init(struct drm_device *dev)
int sis_idle(struct drm_device *dev)
void sis_lastclose(struct drm_device *dev)
void sis_reclaim_buffers_locked(struct drm_device *dev,
struct drm_file *file_priv)
struct drm_ioctl_desc sis_ioctls[] = ;
int sis_max_ioctl = DRM_ARRAY_SIZE(sis_ioctls);
