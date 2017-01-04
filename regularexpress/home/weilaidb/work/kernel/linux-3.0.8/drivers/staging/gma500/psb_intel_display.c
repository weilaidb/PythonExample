struct psb_intel_clock_t ;
struct psb_intel_range_t ;
struct psb_intel_p2_t ;
#define INTEL_P2_NUM		      2
struct psb_intel_limit_t ;
#define I8XX_DOT_MIN		  25000
#define I8XX_DOT_MAX		 350000
#define I8XX_VCO_MIN		 930000
#define I8XX_VCO_MAX		1400000
#define I8XX_N_MIN		      3
#define I8XX_N_MAX		     16
#define I8XX_M_MIN		     96
#define I8XX_M_MAX		    140
#define I8XX_M1_MIN		     18
#define I8XX_M1_MAX		     26
#define I8XX_M2_MIN		      6
#define I8XX_M2_MAX		     16
#define I8XX_P_MIN		      4
#define I8XX_P_MAX		    128
#define I8XX_P1_MIN		      2
#define I8XX_P1_MAX		     33
#define I8XX_P1_LVDS_MIN	      1
#define I8XX_P1_LVDS_MAX	      6
#define I8XX_P2_SLOW		      4
#define I8XX_P2_FAST		      2
#define I8XX_P2_LVDS_SLOW	      14
#define I8XX_P2_LVDS_FAST	      14
#define I8XX_P2_SLOW_LIMIT	 165000
#define I9XX_DOT_MIN		  20000
#define I9XX_DOT_MAX		 400000
#define I9XX_VCO_MIN		1400000
#define I9XX_VCO_MAX		2800000
#define I9XX_N_MIN		      3
#define I9XX_N_MAX		      8
#define I9XX_M_MIN		     70
#define I9XX_M_MAX		    120
#define I9XX_M1_MIN		     10
#define I9XX_M1_MAX		     20
#define I9XX_M2_MIN		      5
#define I9XX_M2_MAX		      9
#define I9XX_P_SDVO_DAC_MIN	      5
#define I9XX_P_SDVO_DAC_MAX	     80
#define I9XX_P_LVDS_MIN		      7
#define I9XX_P_LVDS_MAX		     98
#define I9XX_P1_MIN		      1
#define I9XX_P1_MAX		      8
#define I9XX_P2_SDVO_DAC_SLOW		     10
#define I9XX_P2_SDVO_DAC_FAST		      5
#define I9XX_P2_SDVO_DAC_SLOW_LIMIT	 200000
#define I9XX_P2_LVDS_SLOW		     14
#define I9XX_P2_LVDS_FAST		      7
#define I9XX_P2_LVDS_SLOW_LIMIT		 112000
#define INTEL_LIMIT_I8XX_DVO_DAC    0
#define INTEL_LIMIT_I8XX_LVDS	    1
#define INTEL_LIMIT_I9XX_SDVO_DAC   2
#define INTEL_LIMIT_I9XX_LVDS	    3
static const struct psb_intel_limit_t psb_intel_limits[] = ;
static const struct psb_intel_limit_t *psb_intel_limit(struct drm_crtc *crtc)
static void i8xx_clock(int refclk, struct psb_intel_clock_t *clock)
static void i9xx_clock(int refclk, struct psb_intel_clock_t *clock)
static void psb_intel_clock(struct drm_device *dev, int refclk,
struct psb_intel_clock_t *clock)
bool psb_intel_pipe_has_type(struct drm_crtc *crtc, int type)
#define INTELPllInvalid(s)
static bool psb_intel_PLL_is_valid(struct drm_crtc *crtc,
struct psb_intel_clock_t *clock)
static bool psb_intel_find_best_PLL(struct drm_crtc *crtc, int target,
int refclk,
struct psb_intel_clock_t *best_clock)
void psb_intel_wait_for_vblank(struct drm_device *dev)
int psb_intel_pipe_set_base(struct drm_crtc *crtc,
int x, int y, struct drm_framebuffer *old_fb)
static void psb_intel_crtc_dpms(struct drm_crtc *crtc, int mode)
static void psb_intel_crtc_prepare(struct drm_crtc *crtc)
static void psb_intel_crtc_commit(struct drm_crtc *crtc)
void psb_intel_encoder_prepare(struct drm_encoder *encoder)
void psb_intel_encoder_commit(struct drm_encoder *encoder)
static bool psb_intel_crtc_mode_fixup(struct drm_crtc *crtc,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static int psb_intel_panel_fitter_pipe(struct drm_device *dev)
static int psb_intel_crtc_mode_set(struct drm_crtc *crtc,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode,
int x, int y,
struct drm_framebuffer *old_fb)
void psb_intel_crtc_load_lut(struct drm_crtc *crtc)
static void psb_intel_crtc_save(struct drm_crtc *crtc)
static void psb_intel_crtc_restore(struct drm_crtc *crtc)
static int psb_intel_crtc_cursor_set(struct drm_crtc *crtc,
struct drm_file *file_priv,
uint32_t handle,
uint32_t width, uint32_t height)
static int psb_intel_crtc_cursor_move(struct drm_crtc *crtc, int x, int y)
static void psb_intel_crtc_gamma_set(struct drm_crtc *crtc, u16 *red,
u16 *green, u16 *blue, uint32_t type, uint32_t size)
static int psb_crtc_set_config(struct drm_mode_set *set)
static int psb_intel_crtc_clock_get(struct drm_device *dev,
struct drm_crtc *crtc)
struct drm_display_mode *psb_intel_crtc_mode_get(struct drm_device *dev,
struct drm_crtc *crtc)
static void psb_intel_crtc_destroy(struct drm_crtc *crtc)
static const struct drm_crtc_helper_funcs psb_intel_helper_funcs = ;
const struct drm_crtc_funcs psb_intel_crtc_funcs = ;
void psb_intel_crtc_init(struct drm_device *dev, int pipe,
struct psb_intel_mode_device *mode_dev)
int psb_intel_get_pipe_from_crtc_id(struct drm_device *dev, void *data,
struct drm_file *file_priv)
struct drm_crtc *psb_intel_get_crtc_from_pipe(struct drm_device *dev, int pipe)
int psb_intel_connector_clones(struct drm_device *dev, int type_mask)
void psb_intel_modeset_cleanup(struct drm_device *dev)
struct drm_encoder *psb_intel_best_encoder(struct drm_connector *connector)
