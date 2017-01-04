#define R300_SIMULTANEOUS_CLIPRECTS		4
static const int r300_cliprect_cntl[4] = ;
static int r300_emit_cliprects(drm_radeon_private_t *dev_priv,
drm_radeon_kcmd_buffer_t *cmdbuf, int n)
static u8 r300_reg_flags[0x10000 >> 2];
void r300_init_reg_flags(struct drm_device *dev)
static __inline__ int r300_check_range(unsigned reg, int count)
static __inline__ int r300_emit_carefully_checked_packet0(drm_radeon_private_t *
dev_priv,
drm_radeon_kcmd_buffer_t
* cmdbuf,
drm_r300_cmd_header_t
header)
static __inline__ int r300_emit_packet0(drm_radeon_private_t *dev_priv,
drm_radeon_kcmd_buffer_t *cmdbuf,
drm_r300_cmd_header_t header)
static __inline__ int r300_emit_vpu(drm_radeon_private_t *dev_priv,
drm_radeon_kcmd_buffer_t *cmdbuf,
drm_r300_cmd_header_t header)
static __inline__ int r300_emit_clear(drm_radeon_private_t *dev_priv,
drm_radeon_kcmd_buffer_t *cmdbuf)
static __inline__ int r300_emit_3d_load_vbpntr(drm_radeon_private_t *dev_priv,
drm_radeon_kcmd_buffer_t *cmdbuf,
u32 header)
static __inline__ int r300_emit_bitblt_multi(drm_radeon_private_t *dev_priv,
drm_radeon_kcmd_buffer_t *cmdbuf)
static __inline__ int r300_emit_draw_indx_2(drm_radeon_private_t *dev_priv,
drm_radeon_kcmd_buffer_t *cmdbuf)
static __inline__ int r300_emit_raw_packet3(drm_radeon_private_t *dev_priv,
drm_radeon_kcmd_buffer_t *cmdbuf)
static __inline__ int r300_emit_packet3(drm_radeon_private_t *dev_priv,
drm_radeon_kcmd_buffer_t *cmdbuf,
drm_r300_cmd_header_t header)
static __inline__ void r300_pacify(drm_radeon_private_t *dev_priv)
static void r300_discard_buffer(struct drm_device *dev, struct drm_master *master, struct drm_buf *buf)
static void r300_cmd_wait(drm_radeon_private_t * dev_priv,
drm_r300_cmd_header_t header)
static int r300_scratch(drm_radeon_private_t *dev_priv,
drm_radeon_kcmd_buffer_t *cmdbuf,
drm_r300_cmd_header_t header)
static inline int r300_emit_r500fp(drm_radeon_private_t *dev_priv,
drm_radeon_kcmd_buffer_t *cmdbuf,
drm_r300_cmd_header_t header)
int r300_do_cp_cmdbuf(struct drm_device *dev,
struct drm_file *file_priv,
drm_radeon_kcmd_buffer_t *cmdbuf)
