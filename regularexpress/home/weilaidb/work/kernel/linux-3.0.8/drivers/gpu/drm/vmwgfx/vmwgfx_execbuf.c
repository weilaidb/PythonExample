static int vmw_cmd_invalid(struct vmw_private *dev_priv,
struct vmw_sw_context *sw_context,
SVGA3dCmdHeader *header)
static int vmw_cmd_ok(struct vmw_private *dev_priv,
struct vmw_sw_context *sw_context,
SVGA3dCmdHeader *header)
static int vmw_cmd_cid_check(struct vmw_private *dev_priv,
struct vmw_sw_context *sw_context,
SVGA3dCmdHeader *header)
static int vmw_cmd_sid_check(struct vmw_private *dev_priv,
struct vmw_sw_context *sw_context,
uint32_t *sid)
static int vmw_cmd_set_render_target_check(struct vmw_private *dev_priv,
struct vmw_sw_context *sw_context,
SVGA3dCmdHeader *header)
static int vmw_cmd_surface_copy_check(struct vmw_private *dev_priv,
struct vmw_sw_context *sw_context,
SVGA3dCmdHeader *header)
static int vmw_cmd_stretch_blt_check(struct vmw_private *dev_priv,
struct vmw_sw_context *sw_context,
SVGA3dCmdHeader *header)
static int vmw_cmd_blt_surf_screen_check(struct vmw_private *dev_priv,
struct vmw_sw_context *sw_context,
SVGA3dCmdHeader *header)
static int vmw_cmd_present_check(struct vmw_private *dev_priv,
struct vmw_sw_context *sw_context,
SVGA3dCmdHeader *header)
static int vmw_translate_guest_ptr(struct vmw_private *dev_priv,
struct vmw_sw_context *sw_context,
SVGAGuestPtr *ptr,
struct vmw_dma_buffer **vmw_bo_p)
static int vmw_cmd_end_query(struct vmw_private *dev_priv,
struct vmw_sw_context *sw_context,
SVGA3dCmdHeader *header)
static int vmw_cmd_wait_query(struct vmw_private *dev_priv,
struct vmw_sw_context *sw_context,
SVGA3dCmdHeader *header)
static int vmw_cmd_dma(struct vmw_private *dev_priv,
struct vmw_sw_context *sw_context,
SVGA3dCmdHeader *header)
static int vmw_cmd_draw(struct vmw_private *dev_priv,
struct vmw_sw_context *sw_context,
SVGA3dCmdHeader *header)
static int vmw_cmd_tex_state(struct vmw_private *dev_priv,
struct vmw_sw_context *sw_context,
SVGA3dCmdHeader *header)
typedef int (*vmw_cmd_func) (struct vmw_private *,
struct vmw_sw_context *,
SVGA3dCmdHeader *);
#define VMW_CMD_DEF(cmd, func) \
[cmd - SVGA_3D_CMD_BASE] = func
static vmw_cmd_func vmw_cmd_funcs[SVGA_3D_CMD_MAX] = ;
static int vmw_cmd_check(struct vmw_private *dev_priv,
struct vmw_sw_context *sw_context,
void *buf, uint32_t *size)
static int vmw_cmd_check_all(struct vmw_private *dev_priv,
struct vmw_sw_context *sw_context,
void *buf, uint32_t size)
static void vmw_free_relocations(struct vmw_sw_context *sw_context)
static void vmw_apply_relocations(struct vmw_sw_context *sw_context)
static void vmw_clear_validations(struct vmw_sw_context *sw_context)
static int vmw_validate_single_buffer(struct vmw_private *dev_priv,
struct ttm_buffer_object *bo)
static int vmw_validate_buffers(struct vmw_private *dev_priv,
struct vmw_sw_context *sw_context)
int vmw_execbuf_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
