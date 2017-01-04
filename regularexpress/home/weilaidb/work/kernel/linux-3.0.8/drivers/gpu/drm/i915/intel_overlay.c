#define IMAGE_MAX_WIDTH		2048
#define IMAGE_MAX_HEIGHT	2046
#define IMAGE_MAX_WIDTH_LEGACY	1024
#define IMAGE_MAX_HEIGHT_LEGACY	1088
#define OCMD_TILED_SURFACE	(0x1<<19)
#define OCMD_MIRROR_MASK	(0x3<<17)
#define OCMD_MIRROR_MODE	(0x3<<17)
#define OCMD_MIRROR_HORIZONTAL	(0x1<<17)
#define OCMD_MIRROR_VERTICAL	(0x2<<17)
#define OCMD_MIRROR_BOTH	(0x3<<17)
#define OCMD_BYTEORDER_MASK	(0x3<<14)
#define OCMD_UV_SWAP		(0x1<<14)
#define OCMD_Y_SWAP		(0x2<<14)
#define OCMD_Y_AND_UV_SWAP	(0x3<<14)
#define OCMD_SOURCE_FORMAT_MASK (0xf<<10)
#define OCMD_RGB_888		(0x1<<10)
#define OCMD_RGB_555		(0x2<<10)
#define OCMD_RGB_565		(0x3<<10)
#define OCMD_YUV_422_PACKED	(0x8<<10)
#define OCMD_YUV_411_PACKED	(0x9<<10)
#define OCMD_YUV_420_PLANAR	(0xc<<10)
#define OCMD_YUV_422_PLANAR	(0xd<<10)
#define OCMD_YUV_410_PLANAR	(0xe<<10)
#define OCMD_TVSYNCFLIP_PARITY	(0x1<<9)
#define OCMD_TVSYNCFLIP_ENABLE	(0x1<<7)
#define OCMD_BUF_TYPE_MASK	(0x1<<5)
#define OCMD_BUF_TYPE_FRAME	(0x0<<5)
#define OCMD_BUF_TYPE_FIELD	(0x1<<5)
#define OCMD_TEST_MODE		(0x1<<4)
#define OCMD_BUFFER_SELECT	(0x3<<2)
#define OCMD_BUFFER0		(0x0<<2)
#define OCMD_BUFFER1		(0x1<<2)
#define OCMD_FIELD_SELECT	(0x1<<2)
#define OCMD_FIELD0		(0x0<<1)
#define OCMD_FIELD1		(0x1<<1)
#define OCMD_ENABLE		(0x1<<0)
#define OCONF_PIPE_MASK		(0x1<<18)
#define OCONF_PIPE_A		(0x0<<18)
#define OCONF_PIPE_B		(0x1<<18)
#define OCONF_GAMMA2_ENABLE	(0x1<<16)
#define OCONF_CSC_MODE_BT601	(0x0<<5)
#define OCONF_CSC_MODE_BT709	(0x1<<5)
#define OCONF_CSC_BYPASS	(0x1<<4)
#define OCONF_CC_OUT_8BIT	(0x1<<3)
#define OCONF_TEST_MODE		(0x1<<2)
#define OCONF_THREE_LINE_BUFFER	(0x1<<0)
#define OCONF_TWO_LINE_BUFFER	(0x0<<0)
#define DST_KEY_ENABLE		(0x1<<31)
#define CLK_RGB24_MASK		0x0
#define CLK_RGB16_MASK		0x070307
#define CLK_RGB15_MASK		0x070707
#define CLK_RGB8I_MASK		0xffffff
#define RGB16_TO_COLORKEY(c) \
(((c & 0xF800) << 8) | ((c & 0x07E0) << 5) | ((c & 0x001F) << 3))
#define RGB15_TO_COLORKEY(c) \
(((c & 0x7c00) << 9) | ((c & 0x03E0) << 6) | ((c & 0x001F) << 3))
#define OFC_UPDATE		0x1
#define N_HORIZ_Y_TAPS          5
#define N_VERT_Y_TAPS           3
#define N_HORIZ_UV_TAPS         3
#define N_VERT_UV_TAPS          3
#define N_PHASES                17
#define MAX_TAPS                5
struct overlay_registers ;
struct intel_overlay ;
static struct overlay_registers *
intel_overlay_map_regs(struct intel_overlay *overlay)
static void intel_overlay_unmap_regs(struct intel_overlay *overlay,
struct overlay_registers *regs)
static int intel_overlay_do_wait_request(struct intel_overlay *overlay,
struct drm_i915_gem_request *request,
void (*tail)(struct intel_overlay *))
static int
i830_activate_pipe_a(struct drm_device *dev)
static void
i830_deactivate_pipe_a(struct drm_device *dev)
static int intel_overlay_on(struct intel_overlay *overlay)
static int intel_overlay_continue(struct intel_overlay *overlay,
bool load_polyphase_filter)
static void intel_overlay_release_old_vid_tail(struct intel_overlay *overlay)
static void intel_overlay_off_tail(struct intel_overlay *overlay)
static int intel_overlay_off(struct intel_overlay *overlay)
static int intel_overlay_recover_from_interrupt(struct intel_overlay *overlay)
static int intel_overlay_release_old_vid(struct intel_overlay *overlay)
struct put_image_params ;
static int packed_depth_bytes(u32 format)
static int packed_width_bytes(u32 format, short width)
static int uv_hsubsampling(u32 format)
static int uv_vsubsampling(u32 format)
static u32 calc_swidthsw(struct drm_device *dev, u32 offset, u32 width)
static const u16 y_static_hcoeffs[N_HORIZ_Y_TAPS * N_PHASES] = ;
static const u16 uv_static_hcoeffs[N_HORIZ_UV_TAPS * N_PHASES] = ;
static void update_polyphase_filter(struct overlay_registers *regs)
static bool update_scaling_factors(struct intel_overlay *overlay,
struct overlay_registers *regs,
struct put_image_params *params)
static void update_colorkey(struct intel_overlay *overlay,
struct overlay_registers *regs)
static u32 overlay_cmd_reg(struct put_image_params *params)
static int intel_overlay_do_put_image(struct intel_overlay *overlay,
struct drm_i915_gem_object *new_bo,
struct put_image_params *params)
int intel_overlay_switch_off(struct intel_overlay *overlay)
static int check_overlay_possible_on_crtc(struct intel_overlay *overlay,
struct intel_crtc *crtc)
static void update_pfit_vscale_ratio(struct intel_overlay *overlay)
static int check_overlay_dst(struct intel_overlay *overlay,
struct drm_intel_overlay_put_image *rec)
static int check_overlay_scaling(struct put_image_params *rec)
static int check_overlay_src(struct drm_device *dev,
struct drm_intel_overlay_put_image *rec,
struct drm_i915_gem_object *new_bo)
static int intel_panel_fitter_pipe(struct drm_device *dev)
int intel_overlay_put_image(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static void update_reg_attrs(struct intel_overlay *overlay,
struct overlay_registers *regs)
static bool check_gamma_bounds(u32 gamma1, u32 gamma2)
static bool check_gamma5_errata(u32 gamma5)
static int check_gamma(struct drm_intel_overlay_attrs *attrs)
int intel_overlay_attrs(struct drm_device *dev, void *data,
struct drm_file *file_priv)
void intel_setup_overlay(struct drm_device *dev)
void intel_cleanup_overlay(struct drm_device *dev)
struct intel_overlay_error_state ;
static struct overlay_registers *
intel_overlay_map_regs_atomic(struct intel_overlay *overlay)
static void intel_overlay_unmap_regs_atomic(struct intel_overlay *overlay,
struct overlay_registers *regs)
struct intel_overlay_error_state *
intel_overlay_capture_error_state(struct drm_device *dev)
void
intel_overlay_print_error_state(struct seq_file *m, struct intel_overlay_error_state *error)
