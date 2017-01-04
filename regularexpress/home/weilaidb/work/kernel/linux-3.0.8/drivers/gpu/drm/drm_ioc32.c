#define DRM_IOCTL_VERSION32		DRM_IOWR(0x00, drm_version32_t)
#define DRM_IOCTL_GET_UNIQUE32		DRM_IOWR(0x01, drm_unique32_t)
#define DRM_IOCTL_GET_MAP32		DRM_IOWR(0x04, drm_map32_t)
#define DRM_IOCTL_GET_CLIENT32		DRM_IOWR(0x05, drm_client32_t)
#define DRM_IOCTL_GET_STATS32		DRM_IOR( 0x06, drm_stats32_t)
#define DRM_IOCTL_SET_UNIQUE32		DRM_IOW( 0x10, drm_unique32_t)
#define DRM_IOCTL_ADD_MAP32		DRM_IOWR(0x15, drm_map32_t)
#define DRM_IOCTL_ADD_BUFS32		DRM_IOWR(0x16, drm_buf_desc32_t)
#define DRM_IOCTL_MARK_BUFS32		DRM_IOW( 0x17, drm_buf_desc32_t)
#define DRM_IOCTL_INFO_BUFS32		DRM_IOWR(0x18, drm_buf_info32_t)
#define DRM_IOCTL_MAP_BUFS32		DRM_IOWR(0x19, drm_buf_map32_t)
#define DRM_IOCTL_FREE_BUFS32		DRM_IOW( 0x1a, drm_buf_free32_t)
#define DRM_IOCTL_RM_MAP32		DRM_IOW( 0x1b, drm_map32_t)
#define DRM_IOCTL_SET_SAREA_CTX32	DRM_IOW( 0x1c, drm_ctx_priv_map32_t)
#define DRM_IOCTL_GET_SAREA_CTX32	DRM_IOWR(0x1d, drm_ctx_priv_map32_t)
#define DRM_IOCTL_RES_CTX32		DRM_IOWR(0x26, drm_ctx_res32_t)
#define DRM_IOCTL_DMA32			DRM_IOWR(0x29, drm_dma32_t)
#define DRM_IOCTL_AGP_ENABLE32		DRM_IOW( 0x32, drm_agp_mode32_t)
#define DRM_IOCTL_AGP_INFO32		DRM_IOR( 0x33, drm_agp_info32_t)
#define DRM_IOCTL_AGP_ALLOC32		DRM_IOWR(0x34, drm_agp_buffer32_t)
#define DRM_IOCTL_AGP_FREE32		DRM_IOW( 0x35, drm_agp_buffer32_t)
#define DRM_IOCTL_AGP_BIND32		DRM_IOW( 0x36, drm_agp_binding32_t)
#define DRM_IOCTL_AGP_UNBIND32		DRM_IOW( 0x37, drm_agp_binding32_t)
#define DRM_IOCTL_SG_ALLOC32		DRM_IOW( 0x38, drm_scatter_gather32_t)
#define DRM_IOCTL_SG_FREE32		DRM_IOW( 0x39, drm_scatter_gather32_t)
#define DRM_IOCTL_UPDATE_DRAW32		DRM_IOW( 0x3f, drm_update_draw32_t)
#define DRM_IOCTL_WAIT_VBLANK32		DRM_IOWR(0x3a, drm_wait_vblank32_t)
typedef struct drm_version_32  drm_version32_t;
static int compat_drm_version(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_unique32  drm_unique32_t;
static int compat_drm_getunique(struct file *file, unsigned int cmd,
unsigned long arg)
static int compat_drm_setunique(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_map32  drm_map32_t;
static int compat_drm_getmap(struct file *file, unsigned int cmd,
unsigned long arg)
static int compat_drm_addmap(struct file *file, unsigned int cmd,
unsigned long arg)
static int compat_drm_rmmap(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_client32  drm_client32_t;
static int compat_drm_getclient(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_stats32  drm_stats32_t;
static int compat_drm_getstats(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_buf_desc32  drm_buf_desc32_t;
static int compat_drm_addbufs(struct file *file, unsigned int cmd,
unsigned long arg)
static int compat_drm_markbufs(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_buf_info32  drm_buf_info32_t;
static int compat_drm_infobufs(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_buf_pub32  drm_buf_pub32_t;
typedef struct drm_buf_map32  drm_buf_map32_t;
static int compat_drm_mapbufs(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_buf_free32  drm_buf_free32_t;
static int compat_drm_freebufs(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_ctx_priv_map32  drm_ctx_priv_map32_t;
static int compat_drm_setsareactx(struct file *file, unsigned int cmd,
unsigned long arg)
static int compat_drm_getsareactx(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_ctx_res32  drm_ctx_res32_t;
static int compat_drm_resctx(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_dma32  drm_dma32_t;
static int compat_drm_dma(struct file *file, unsigned int cmd,
unsigned long arg)
#if __OS_HAS_AGP
typedef struct drm_agp_mode32  drm_agp_mode32_t;
static int compat_drm_agp_enable(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_agp_info32  drm_agp_info32_t;
static int compat_drm_agp_info(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_agp_buffer32  drm_agp_buffer32_t;
static int compat_drm_agp_alloc(struct file *file, unsigned int cmd,
unsigned long arg)
static int compat_drm_agp_free(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_agp_binding32  drm_agp_binding32_t;
static int compat_drm_agp_bind(struct file *file, unsigned int cmd,
unsigned long arg)
static int compat_drm_agp_unbind(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_scatter_gather32  drm_scatter_gather32_t;
static int compat_drm_sg_alloc(struct file *file, unsigned int cmd,
unsigned long arg)
static int compat_drm_sg_free(struct file *file, unsigned int cmd,
unsigned long arg)
#if defined(CONFIG_X86) || defined(CONFIG_IA64)
typedef struct drm_update_draw32  __attribute__((packed)) drm_update_draw32_t;
static int compat_drm_update_draw(struct file *file, unsigned int cmd,
unsigned long arg)
struct drm_wait_vblank_request32 ;
struct drm_wait_vblank_reply32 ;
typedef union drm_wait_vblank32  drm_wait_vblank32_t;
static int compat_drm_wait_vblank(struct file *file, unsigned int cmd,
unsigned long arg)
drm_ioctl_compat_t *drm_compat_ioctls[] = ;
long drm_compat_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
EXPORT_SYMBOL(drm_compat_ioctl);
