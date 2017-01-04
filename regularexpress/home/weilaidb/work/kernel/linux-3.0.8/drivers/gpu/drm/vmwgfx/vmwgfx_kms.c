#define VMWGFX_PRESENT_RATE ((HZ / 60 > 0) ? HZ / 60 : 1)
static int vmw_surface_dmabuf_pin(struct vmw_framebuffer *vfb);
static int vmw_surface_dmabuf_unpin(struct vmw_framebuffer *vfb);
void vmw_display_unit_cleanup(struct vmw_display_unit *du)
int vmw_cursor_update_image(struct vmw_private *dev_priv,
u32 *image, u32 width, u32 height,
u32 hotspotX, u32 hotspotY)
void vmw_cursor_update_position(struct vmw_private *dev_priv,
bool show, int x, int y)
int vmw_du_crtc_cursor_set(struct drm_crtc *crtc, struct drm_file *file_priv,
uint32_t handle, uint32_t width, uint32_t height)
int vmw_du_crtc_cursor_move(struct drm_crtc *crtc, int x, int y)
void vmw_kms_cursor_snoop(struct vmw_surface *srf,
struct ttm_object_file *tfile,
struct ttm_buffer_object *bo,
SVGA3dCmdHeader *header)
void vmw_kms_cursor_post_execbuf(struct vmw_private *dev_priv)
int vmw_framebuffer_create_handle(struct drm_framebuffer *fb,
struct drm_file *file_priv,
unsigned int *handle)
#define vmw_framebuffer_to_vfbs(x) \
container_of(x, struct vmw_framebuffer_surface, base.base)
struct vmw_framebuffer_surface ;
void vmw_kms_idle_workqueues(struct vmw_master *vmaster)
void vmw_framebuffer_surface_destroy(struct drm_framebuffer *framebuffer)
static void vmw_framebuffer_present_fs_callback(struct work_struct *work)
int vmw_framebuffer_surface_dirty(struct drm_framebuffer *framebuffer,
struct drm_file *file_priv,
unsigned flags, unsigned color,
struct drm_clip_rect *clips,
unsigned num_clips)
static struct drm_framebuffer_funcs vmw_framebuffer_surface_funcs = ;
static int vmw_kms_new_framebuffer_surface(struct vmw_private *dev_priv,
struct drm_file *file_priv,
struct vmw_surface *surface,
struct vmw_framebuffer **out,
const struct drm_mode_fb_cmd
*mode_cmd)
#define vmw_framebuffer_to_vfbd(x) \
container_of(x, struct vmw_framebuffer_dmabuf, base.base)
struct vmw_framebuffer_dmabuf ;
void vmw_framebuffer_dmabuf_destroy(struct drm_framebuffer *framebuffer)
int vmw_framebuffer_dmabuf_dirty(struct drm_framebuffer *framebuffer,
struct drm_file *file_priv,
unsigned flags, unsigned color,
struct drm_clip_rect *clips,
unsigned num_clips)
static struct drm_framebuffer_funcs vmw_framebuffer_dmabuf_funcs = ;
static int vmw_surface_dmabuf_pin(struct vmw_framebuffer *vfb)
static int vmw_surface_dmabuf_unpin(struct vmw_framebuffer *vfb)
static int vmw_framebuffer_dmabuf_pin(struct vmw_framebuffer *vfb)
static int vmw_framebuffer_dmabuf_unpin(struct vmw_framebuffer *vfb)
static int vmw_kms_new_framebuffer_dmabuf(struct vmw_private *dev_priv,
struct vmw_dma_buffer *dmabuf,
struct vmw_framebuffer **out,
const struct drm_mode_fb_cmd
*mode_cmd)
static struct drm_framebuffer *vmw_kms_fb_create(struct drm_device *dev,
struct drm_file *file_priv,
struct drm_mode_fb_cmd *mode_cmd)
static struct drm_mode_config_funcs vmw_kms_funcs = ;
int vmw_kms_init(struct vmw_private *dev_priv)
int vmw_kms_close(struct vmw_private *dev_priv)
int vmw_kms_cursor_bypass_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
void vmw_kms_write_svga(struct vmw_private *vmw_priv,
unsigned width, unsigned height, unsigned pitch,
unsigned bbp, unsigned depth)
int vmw_kms_save_vga(struct vmw_private *vmw_priv)
int vmw_kms_restore_vga(struct vmw_private *vmw_priv)
int vmw_kms_update_layout_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
bool vmw_kms_validate_mode_vram(struct vmw_private *dev_priv,
uint32_t pitch,
uint32_t height)
u32 vmw_get_vblank_counter(struct drm_device *dev, int crtc)
