#define DI_PT_RECTLIST        0x11
#define DI_INDEX_SIZE_16_BIT  0x0
#define DI_SRC_SEL_AUTO_INDEX 0x2
#define FMT_8                 0x1
#define FMT_5_6_5             0x8
#define FMT_8_8_8_8           0x1a
#define COLOR_8               0x1
#define COLOR_5_6_5           0x8
#define COLOR_8_8_8_8         0x1a
static void
set_render_target(struct radeon_device *rdev, int format,
int w, int h, u64 gpu_addr)
static void
cp_set_surface_sync(struct radeon_device *rdev,
u32 sync_type, u32 size,
u64 mc_addr)
static void
set_shaders(struct radeon_device *rdev)
static void
set_vtx_resource(struct radeon_device *rdev, u64 gpu_addr)
static void
set_tex_resource(struct radeon_device *rdev,
int format, int w, int h, int pitch,
u64 gpu_addr)
static void
set_scissors(struct radeon_device *rdev, int x1, int y1,
int x2, int y2)
static void
draw_auto(struct radeon_device *rdev)
static void
set_default_state(struct radeon_device *rdev)
static inline uint32_t i2f(uint32_t input)
int r600_blit_init(struct radeon_device *rdev)
void r600_blit_fini(struct radeon_device *rdev)
static int r600_vb_ib_get(struct radeon_device *rdev)
static void r600_vb_ib_put(struct radeon_device *rdev)
int r600_blit_prepare_copy(struct radeon_device *rdev, int size_bytes)
void r600_blit_done_copy(struct radeon_device *rdev, struct radeon_fence *fence)
void r600_kms_blit_copy(struct radeon_device *rdev,
u64 src_gpu_addr, u64 dst_gpu_addr,
int size_bytes)
