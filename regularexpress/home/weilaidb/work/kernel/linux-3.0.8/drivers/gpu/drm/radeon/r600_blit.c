#define DI_PT_RECTLIST        0x11
#define DI_INDEX_SIZE_16_BIT  0x0
#define DI_SRC_SEL_AUTO_INDEX 0x2
#define FMT_8                 0x1
#define FMT_5_6_5             0x8
#define FMT_8_8_8_8           0x1a
#define COLOR_8               0x1
#define COLOR_5_6_5           0x8
#define COLOR_8_8_8_8         0x1a
static inline void
set_render_target(drm_radeon_private_t *dev_priv, int format, int w, int h, u64 gpu_addr)
static inline void
cp_set_surface_sync(drm_radeon_private_t *dev_priv,
u32 sync_type, u32 size, u64 mc_addr)
static inline void
set_shaders(struct drm_device *dev)
static inline void
set_vtx_resource(drm_radeon_private_t *dev_priv, u64 gpu_addr)
static inline void
set_tex_resource(drm_radeon_private_t *dev_priv,
int format, int w, int h, int pitch, u64 gpu_addr)
static inline void
set_scissors(drm_radeon_private_t *dev_priv, int x1, int y1, int x2, int y2)
static inline void
draw_auto(drm_radeon_private_t *dev_priv)
static inline void
set_default_state(drm_radeon_private_t *dev_priv)
static inline uint32_t i2f(uint32_t input)
static inline int r600_nomm_get_vb(struct drm_device *dev)
static inline void r600_nomm_put_vb(struct drm_device *dev)
static inline void *r600_nomm_get_vb_ptr(struct drm_device *dev)
int
r600_prepare_blit_copy(struct drm_device *dev, struct drm_file *file_priv)
void
r600_done_blit_copy(struct drm_device *dev)
void
r600_blit_copy(struct drm_device *dev,
uint64_t src_gpu_addr, uint64_t dst_gpu_addr,
int size_bytes)
void
r600_blit_swap(struct drm_device *dev,
uint64_t src_gpu_addr, uint64_t dst_gpu_addr,
int sx, int sy, int dx, int dy,
int w, int h, int src_pitch, int dst_pitch, int cpp)
