typedef struct drm_r128_init32  drm_r128_init32_t;
static int compat_r128_init(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_r128_depth32  drm_r128_depth32_t;
static int compat_r128_depth(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_r128_stipple32  drm_r128_stipple32_t;
static int compat_r128_stipple(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_r128_getparam32  drm_r128_getparam32_t;
static int compat_r128_getparam(struct file *file, unsigned int cmd,
unsigned long arg)
drm_ioctl_compat_t *r128_compat_ioctls[] = ;
long r128_compat_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
