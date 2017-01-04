typedef struct drm32_mga_init  drm_mga_init32_t;
static int compat_mga_init(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_mga_getparam32  drm_mga_getparam32_t;
static int compat_mga_getparam(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_mga_drm_bootstrap32  drm_mga_dma_bootstrap32_t;
static int compat_mga_dma_bootstrap(struct file *file, unsigned int cmd,
unsigned long arg)
drm_ioctl_compat_t *mga_compat_ioctls[] = ;
long mga_compat_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
