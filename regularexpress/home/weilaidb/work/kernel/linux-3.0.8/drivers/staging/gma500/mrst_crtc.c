struct psb_intel_range_t ;
struct mrst_limit_t ;
struct mrst_clock_t ;
#define MRST_LIMIT_LVDS_100L	    0
#define MRST_LIMIT_LVDS_83	    1
#define MRST_LIMIT_LVDS_100	    2
#define MRST_DOT_MIN		  19750
#define MRST_DOT_MAX		  120000
#define MRST_M_MIN_100L		    20
#define MRST_M_MIN_100		    10
#define MRST_M_MIN_83		    12
#define MRST_M_MAX_100L		    34
#define MRST_M_MAX_100		    17
#define MRST_M_MAX_83		    20
#define MRST_P1_MIN		    2
#define MRST_P1_MAX_0		    7
#define MRST_P1_MAX_1		    8
static const struct mrst_limit_t mrst_limits[] = ;
#define MRST_M_MIN	    10
static const u32 mrst_m_converts[] = ;
static const struct mrst_limit_t *mrst_limit(struct drm_crtc *crtc)
static void mrst_clock(int refclk, struct mrst_clock_t *clock)
void mrstPrintPll(char *prefix, struct mrst_clock_t *clock)
static bool
mrstFindBestPLL(struct drm_crtc *crtc, int target, int refclk,
struct mrst_clock_t *best_clock)
static void mrst_crtc_dpms(struct drm_crtc *crtc, int mode)
static int mrst_panel_fitter_pipe(struct drm_device *dev)
static int mrst_crtc_mode_set(struct drm_crtc *crtc,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode,
int x, int y,
struct drm_framebuffer *old_fb)
static bool mrst_crtc_mode_fixup(struct drm_crtc *crtc,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
int mrst_pipe_set_base(struct drm_crtc *crtc,
int x, int y, struct drm_framebuffer *old_fb)
static void mrst_crtc_prepare(struct drm_crtc *crtc)
static void mrst_crtc_commit(struct drm_crtc *crtc)
const struct drm_crtc_helper_funcs mrst_helper_funcs = ;
