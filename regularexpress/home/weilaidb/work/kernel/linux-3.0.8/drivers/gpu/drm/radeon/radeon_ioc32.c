typedef struct drm_radeon_init32  drm_radeon_init32_t;
static int compat_radeon_cp_init(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_radeon_clear32  drm_radeon_clear32_t;
static int compat_radeon_cp_clear(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_radeon_stipple32  drm_radeon_stipple32_t;
static int compat_radeon_cp_stipple(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_radeon_tex_image32  drm_radeon_tex_image32_t;
typedef struct drm_radeon_texture32  drm_radeon_texture32_t;
static int compat_radeon_cp_texture(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_radeon_vertex2_32  drm_radeon_vertex2_32_t;
static int compat_radeon_cp_vertex2(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_radeon_cmd_buffer32  drm_radeon_cmd_buffer32_t;
static int compat_radeon_cp_cmdbuf(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_radeon_getparam32  drm_radeon_getparam32_t;
static int compat_radeon_cp_getparam(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_radeon_mem_alloc32  drm_radeon_mem_alloc32_t;
static int compat_radeon_mem_alloc(struct file *file, unsigned int cmd,
unsigned long arg)
typedef struct drm_radeon_irq_emit32  drm_radeon_irq_emit32_t;
static int compat_radeon_irq_emit(struct file *file, unsigned int cmd,
unsigned long arg)
#if defined (CONFIG_X86_64) || defined(CONFIG_IA64)
typedef struct drm_radeon_setparam32  __attribute__((packed)) drm_radeon_setparam32_t;
static int compat_radeon_cp_setparam(struct file *file, unsigned int cmd,
unsigned long arg)
#define compat_radeon_cp_setparam NULL
drm_ioctl_compat_t *radeon_compat_ioctls[] = ;
long radeon_compat_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
long radeon_kms_compat_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
