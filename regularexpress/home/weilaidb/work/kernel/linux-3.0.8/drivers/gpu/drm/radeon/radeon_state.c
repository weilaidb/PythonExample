static __inline__ int radeon_check_and_fixup_offset(drm_radeon_private_t *
dev_priv,
struct drm_file * file_priv,
u32 *offset)
static __inline__ int radeon_check_and_fixup_packets(drm_radeon_private_t *
dev_priv,
struct drm_file *file_priv,
int id, struct drm_buffer *buf)
static __inline__ int radeon_check_and_fixup_packet3(drm_radeon_private_t *
dev_priv,
struct drm_file *file_priv,
drm_radeon_kcmd_buffer_t *
cmdbuf,
unsigned int *cmdsz)
static __inline__ void radeon_emit_clip_rect(drm_radeon_private_t * dev_priv,
struct drm_clip_rect * box)
static int radeon_emit_state(drm_radeon_private_t * dev_priv,
struct drm_file *file_priv,
drm_radeon_context_regs_t * ctx,
drm_radeon_texture_regs_t * tex,
unsigned int dirty)
static int radeon_emit_state2(drm_radeon_private_t * dev_priv,
struct drm_file *file_priv,
drm_radeon_state_t * state)
static struct  packet[RADEON_MAX_STATE_PACKETS] = ;
static void radeon_clear_box(drm_radeon_private_t * dev_priv,
struct drm_radeon_master_private *master_priv,
int x, int y, int w, int h, int r, int g, int b)
static void radeon_cp_performance_boxes(drm_radeon_private_t *dev_priv, struct drm_radeon_master_private *master_priv)
static void radeon_cp_dispatch_clear(struct drm_device * dev,
struct drm_master *master,
drm_radeon_clear_t * clear,
drm_radeon_clear_rect_t * depth_boxes)
static void radeon_cp_dispatch_swap(struct drm_device *dev, struct drm_master *master)
void radeon_cp_dispatch_flip(struct drm_device *dev, struct drm_master *master)
static int bad_prim_vertex_nr(int primitive, int nr)
typedef struct  drm_radeon_tcl_prim_t;
static void radeon_cp_dispatch_vertex(struct drm_device * dev,
struct drm_file *file_priv,
struct drm_buf * buf,
drm_radeon_tcl_prim_t * prim)
void radeon_cp_discard_buffer(struct drm_device *dev, struct drm_master *master, struct drm_buf *buf)
static void radeon_cp_dispatch_indirect(struct drm_device * dev,
struct drm_buf * buf, int start, int end)
static void radeon_cp_dispatch_indices(struct drm_device *dev,
struct drm_master *master,
struct drm_buf * elt_buf,
drm_radeon_tcl_prim_t * prim)
#define RADEON_MAX_TEXTURE_SIZE RADEON_BUFFER_SIZE
static int radeon_cp_dispatch_texture(struct drm_device * dev,
struct drm_file *file_priv,
drm_radeon_texture_t * tex,
drm_radeon_tex_image_t * image)
static void radeon_cp_dispatch_stipple(struct drm_device * dev, u32 * stipple)
static void radeon_apply_surface_regs(int surf_index,
drm_radeon_private_t *dev_priv)
static int alloc_surface(drm_radeon_surface_alloc_t *new,
drm_radeon_private_t *dev_priv,
struct drm_file *file_priv)
static int free_surface(struct drm_file *file_priv,
drm_radeon_private_t * dev_priv,
int lower)
static void radeon_surfaces_release(struct drm_file *file_priv,
drm_radeon_private_t * dev_priv)
static int radeon_surface_alloc(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int radeon_surface_free(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int radeon_cp_clear(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int radeon_do_init_pageflip(struct drm_device *dev, struct drm_master *master)
static int radeon_cp_flip(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int radeon_cp_swap(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int radeon_cp_vertex(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int radeon_cp_indices(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int radeon_cp_texture(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int radeon_cp_stipple(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int radeon_cp_indirect(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int radeon_cp_vertex2(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int radeon_emit_packets(drm_radeon_private_t * dev_priv,
struct drm_file *file_priv,
drm_radeon_cmd_header_t header,
drm_radeon_kcmd_buffer_t *cmdbuf)
static __inline__ int radeon_emit_scalars(drm_radeon_private_t *dev_priv,
drm_radeon_cmd_header_t header,
drm_radeon_kcmd_buffer_t *cmdbuf)
static __inline__ int radeon_emit_scalars2(drm_radeon_private_t *dev_priv,
drm_radeon_cmd_header_t header,
drm_radeon_kcmd_buffer_t *cmdbuf)
static __inline__ int radeon_emit_vectors(drm_radeon_private_t *dev_priv,
drm_radeon_cmd_header_t header,
drm_radeon_kcmd_buffer_t *cmdbuf)
static __inline__ int radeon_emit_veclinear(drm_radeon_private_t *dev_priv,
drm_radeon_cmd_header_t header,
drm_radeon_kcmd_buffer_t *cmdbuf)
static int radeon_emit_packet3(struct drm_device * dev,
struct drm_file *file_priv,
drm_radeon_kcmd_buffer_t *cmdbuf)
static int radeon_emit_packet3_cliprect(struct drm_device *dev,
struct drm_file *file_priv,
drm_radeon_kcmd_buffer_t *cmdbuf,
int orig_nbox)
static int radeon_emit_wait(struct drm_device * dev, int flags)
static int radeon_cp_cmdbuf(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int radeon_cp_getparam(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int radeon_cp_setparam(struct drm_device *dev, void *data, struct drm_file *file_priv)
void radeon_driver_preclose(struct drm_device *dev, struct drm_file *file_priv)
void radeon_driver_lastclose(struct drm_device *dev)
int radeon_driver_open(struct drm_device *dev, struct drm_file *file_priv)
void radeon_driver_postclose(struct drm_device *dev, struct drm_file *file_priv)
struct drm_ioctl_desc radeon_ioctls[] = ;
int radeon_max_ioctl = DRM_ARRAY_SIZE(radeon_ioctls);
