#define HAS_eDP (intel_pipe_has_type(crtc, INTEL_OUTPUT_EDP))
bool intel_pipe_has_type (struct drm_crtc *crtc, int type);
static void intel_update_watermarks(struct drm_device *dev);
static void intel_increase_pllclock(struct drm_crtc *crtc);
static void intel_crtc_update_cursor(struct drm_crtc *crtc, bool on);
typedef struct  intel_clock_t;
typedef struct  intel_range_t;
typedef struct  intel_p2_t;
#define INTEL_P2_NUM		      2
typedef struct intel_limit intel_limit_t;
struct intel_limit ;
#define IRONLAKE_FDI_FREQ		2700000
static bool
intel_find_best_PLL(const intel_limit_t *limit, struct drm_crtc *crtc,
int target, int refclk, intel_clock_t *best_clock);
static bool
intel_g4x_find_best_PLL(const intel_limit_t *limit, struct drm_crtc *crtc,
int target, int refclk, intel_clock_t *best_clock);
static bool
intel_find_pll_g4x_dp(const intel_limit_t *, struct drm_crtc *crtc,
int target, int refclk, intel_clock_t *best_clock);
static bool
intel_find_pll_ironlake_dp(const intel_limit_t *, struct drm_crtc *crtc,
int target, int refclk, intel_clock_t *best_clock);
static inline u32
intel_fdi_link_freq(struct drm_device *dev)
static const intel_limit_t intel_limits_i8xx_dvo = ;
static const intel_limit_t intel_limits_i8xx_lvds = ;
static const intel_limit_t intel_limits_i9xx_sdvo = ;
static const intel_limit_t intel_limits_i9xx_lvds = ;
static const intel_limit_t intel_limits_g4x_sdvo = ;
static const intel_limit_t intel_limits_g4x_hdmi = ;
static const intel_limit_t intel_limits_g4x_single_channel_lvds = ;
static const intel_limit_t intel_limits_g4x_dual_channel_lvds = ;
static const intel_limit_t intel_limits_g4x_display_port = ;
static const intel_limit_t intel_limits_pineview_sdvo = ;
static const intel_limit_t intel_limits_pineview_lvds = ;
static const intel_limit_t intel_limits_ironlake_dac = ;
static const intel_limit_t intel_limits_ironlake_single_lvds = ;
static const intel_limit_t intel_limits_ironlake_dual_lvds = ;
static const intel_limit_t intel_limits_ironlake_single_lvds_100m = ;
static const intel_limit_t intel_limits_ironlake_dual_lvds_100m = ;
static const intel_limit_t intel_limits_ironlake_display_port = ;
static const intel_limit_t *intel_ironlake_limit(struct drm_crtc *crtc,
int refclk)
static const intel_limit_t *intel_g4x_limit(struct drm_crtc *crtc)
static const intel_limit_t *intel_limit(struct drm_crtc *crtc, int refclk)
static void pineview_clock(int refclk, intel_clock_t *clock)
static void intel_clock(struct drm_device *dev, int refclk, intel_clock_t *clock)
bool intel_pipe_has_type(struct drm_crtc *crtc, int type)
#define INTELPllInvalid(s)   do  while (0)
static bool intel_PLL_is_valid(struct drm_device *dev,
const intel_limit_t *limit,
const intel_clock_t *clock)
static bool
intel_find_best_PLL(const intel_limit_t *limit, struct drm_crtc *crtc,
int target, int refclk, intel_clock_t *best_clock)
static bool
intel_g4x_find_best_PLL(const intel_limit_t *limit, struct drm_crtc *crtc,
int target, int refclk, intel_clock_t *best_clock)
static bool
intel_find_pll_ironlake_dp(const intel_limit_t *limit, struct drm_crtc *crtc,
int target, int refclk, intel_clock_t *best_clock)
static bool
intel_find_pll_g4x_dp(const intel_limit_t *limit, struct drm_crtc *crtc,
int target, int refclk, intel_clock_t *best_clock)
void intel_wait_for_vblank(struct drm_device *dev, int pipe)
void intel_wait_for_pipe_off(struct drm_device *dev, int pipe)
static const char *state_string(bool enabled)
static void assert_pll(struct drm_i915_private *dev_priv,
enum pipe pipe, bool state)
#define assert_pll_enabled(d, p) assert_pll(d, p, true)
#define assert_pll_disabled(d, p) assert_pll(d, p, false)
static void assert_pch_pll(struct drm_i915_private *dev_priv,
enum pipe pipe, bool state)
#define assert_pch_pll_enabled(d, p) assert_pch_pll(d, p, true)
#define assert_pch_pll_disabled(d, p) assert_pch_pll(d, p, false)
static void assert_fdi_tx(struct drm_i915_private *dev_priv,
enum pipe pipe, bool state)
#define assert_fdi_tx_enabled(d, p) assert_fdi_tx(d, p, true)
#define assert_fdi_tx_disabled(d, p) assert_fdi_tx(d, p, false)
static void assert_fdi_rx(struct drm_i915_private *dev_priv,
enum pipe pipe, bool state)
#define assert_fdi_rx_enabled(d, p) assert_fdi_rx(d, p, true)
#define assert_fdi_rx_disabled(d, p) assert_fdi_rx(d, p, false)
static void assert_fdi_tx_pll_enabled(struct drm_i915_private *dev_priv,
enum pipe pipe)
static void assert_fdi_rx_pll_enabled(struct drm_i915_private *dev_priv,
enum pipe pipe)
static void assert_panel_unlocked(struct drm_i915_private *dev_priv,
enum pipe pipe)
static void assert_pipe(struct drm_i915_private *dev_priv,
enum pipe pipe, bool state)
#define assert_pipe_enabled(d, p) assert_pipe(d, p, true)
#define assert_pipe_disabled(d, p) assert_pipe(d, p, false)
static void assert_plane_enabled(struct drm_i915_private *dev_priv,
enum plane plane)
static void assert_planes_disabled(struct drm_i915_private *dev_priv,
enum pipe pipe)
static void assert_pch_refclk_enabled(struct drm_i915_private *dev_priv)
static void assert_transcoder_disabled(struct drm_i915_private *dev_priv,
enum pipe pipe)
static void assert_pch_dp_disabled(struct drm_i915_private *dev_priv,
enum pipe pipe, int reg)
static void assert_pch_hdmi_disabled(struct drm_i915_private *dev_priv,
enum pipe pipe, int reg)
static void assert_pch_ports_disabled(struct drm_i915_private *dev_priv,
enum pipe pipe)
static void intel_enable_pll(struct drm_i915_private *dev_priv, enum pipe pipe)
static void intel_disable_pll(struct drm_i915_private *dev_priv, enum pipe pipe)
static void intel_enable_pch_pll(struct drm_i915_private *dev_priv,
enum pipe pipe)
static void intel_disable_pch_pll(struct drm_i915_private *dev_priv,
enum pipe pipe)
static void intel_enable_transcoder(struct drm_i915_private *dev_priv,
enum pipe pipe)
static void intel_disable_transcoder(struct drm_i915_private *dev_priv,
enum pipe pipe)
static void intel_enable_pipe(struct drm_i915_private *dev_priv, enum pipe pipe,
bool pch_port)
static void intel_disable_pipe(struct drm_i915_private *dev_priv,
enum pipe pipe)
static void intel_enable_plane(struct drm_i915_private *dev_priv,
enum plane plane, enum pipe pipe)
static void intel_flush_display_plane(struct drm_i915_private *dev_priv,
enum plane plane)
static void intel_disable_plane(struct drm_i915_private *dev_priv,
enum plane plane, enum pipe pipe)
static void disable_pch_dp(struct drm_i915_private *dev_priv,
enum pipe pipe, int reg)
static void disable_pch_hdmi(struct drm_i915_private *dev_priv,
enum pipe pipe, int reg)
static void intel_disable_pch_ports(struct drm_i915_private *dev_priv,
enum pipe pipe)
static void i8xx_enable_fbc(struct drm_crtc *crtc, unsigned long interval)
void i8xx_disable_fbc(struct drm_device *dev)
static bool i8xx_fbc_enabled(struct drm_device *dev)
static void g4x_enable_fbc(struct drm_crtc *crtc, unsigned long interval)
void g4x_disable_fbc(struct drm_device *dev)
static bool g4x_fbc_enabled(struct drm_device *dev)
static void sandybridge_blit_fbc_update(struct drm_device *dev)
static void ironlake_enable_fbc(struct drm_crtc *crtc, unsigned long interval)
void ironlake_disable_fbc(struct drm_device *dev)
static bool ironlake_fbc_enabled(struct drm_device *dev)
bool intel_fbc_enabled(struct drm_device *dev)
void intel_enable_fbc(struct drm_crtc *crtc, unsigned long interval)
void intel_disable_fbc(struct drm_device *dev)
static void intel_update_fbc(struct drm_device *dev)
int
intel_pin_and_fence_fb_obj(struct drm_device *dev,
struct drm_i915_gem_object *obj,
struct intel_ring_buffer *pipelined)
static int
intel_pipe_set_base_atomic(struct drm_crtc *crtc, struct drm_framebuffer *fb,
int x, int y, enum mode_set_atomic state)
static int
intel_pipe_set_base(struct drm_crtc *crtc, int x, int y,
struct drm_framebuffer *old_fb)
static void ironlake_set_pll_edp(struct drm_crtc *crtc, int clock)
static void intel_fdi_normal_train(struct drm_crtc *crtc)
static void ironlake_fdi_link_train(struct drm_crtc *crtc)
static const int snb_b_fdi_train_param [] = ;
static void gen6_fdi_link_train(struct drm_crtc *crtc)
static void ivb_manual_fdi_link_train(struct drm_crtc *crtc)
static void ironlake_fdi_pll_enable(struct drm_crtc *crtc)
static void ironlake_fdi_disable(struct drm_crtc *crtc)
static void intel_clear_scanline_wait(struct drm_device *dev)
static void intel_crtc_wait_for_pending_flips(struct drm_crtc *crtc)
static bool intel_crtc_driving_pch(struct drm_crtc *crtc)
static void ironlake_pch_enable(struct drm_crtc *crtc)
static void ironlake_crtc_enable(struct drm_crtc *crtc)
static void ironlake_crtc_disable(struct drm_crtc *crtc)
static void ironlake_crtc_dpms(struct drm_crtc *crtc, int mode)
static void intel_crtc_dpms_overlay(struct intel_crtc *intel_crtc, bool enable)
static void i9xx_crtc_enable(struct drm_crtc *crtc)
static void i9xx_crtc_disable(struct drm_crtc *crtc)
static void i9xx_crtc_dpms(struct drm_crtc *crtc, int mode)
static void intel_crtc_dpms(struct drm_crtc *crtc, int mode)
static void intel_crtc_disable(struct drm_crtc *crtc)
static void i9xx_crtc_prepare(struct drm_crtc *crtc)
static void i9xx_crtc_commit(struct drm_crtc *crtc)
static void ironlake_crtc_prepare(struct drm_crtc *crtc)
static void ironlake_crtc_commit(struct drm_crtc *crtc)
void intel_encoder_prepare (struct drm_encoder *encoder)
void intel_encoder_commit (struct drm_encoder *encoder)
void intel_encoder_destroy(struct drm_encoder *encoder)
static bool intel_crtc_mode_fixup(struct drm_crtc *crtc,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static int i945_get_display_clock_speed(struct drm_device *dev)
static int i915_get_display_clock_speed(struct drm_device *dev)
static int i9xx_misc_get_display_clock_speed(struct drm_device *dev)
static int i915gm_get_display_clock_speed(struct drm_device *dev)
static int i865_get_display_clock_speed(struct drm_device *dev)
static int i855_get_display_clock_speed(struct drm_device *dev)
static int i830_get_display_clock_speed(struct drm_device *dev)
struct fdi_m_n ;
static void
fdi_reduce_ratio(u32 *num, u32 *den)
static void
ironlake_compute_m_n(int bits_per_pixel, int nlanes, int pixel_clock,
int link_clock, struct fdi_m_n *m_n)
struct intel_watermark_params ;
static const struct intel_watermark_params pineview_display_wm = ;
static const struct intel_watermark_params pineview_display_hplloff_wm = ;
static const struct intel_watermark_params pineview_cursor_wm = ;
static const struct intel_watermark_params pineview_cursor_hplloff_wm = ;
static const struct intel_watermark_params g4x_wm_info = ;
static const struct intel_watermark_params g4x_cursor_wm_info = ;
static const struct intel_watermark_params i965_cursor_wm_info = ;
static const struct intel_watermark_params i945_wm_info = ;
static const struct intel_watermark_params i915_wm_info = ;
static const struct intel_watermark_params i855_wm_info = ;
static const struct intel_watermark_params i830_wm_info = ;
static const struct intel_watermark_params ironlake_display_wm_info = ;
static const struct intel_watermark_params ironlake_cursor_wm_info = ;
static const struct intel_watermark_params ironlake_display_srwm_info = ;
static const struct intel_watermark_params ironlake_cursor_srwm_info = ;
static const struct intel_watermark_params sandybridge_display_wm_info = ;
static const struct intel_watermark_params sandybridge_cursor_wm_info = ;
static const struct intel_watermark_params sandybridge_display_srwm_info = ;
static const struct intel_watermark_params sandybridge_cursor_srwm_info = ;
static unsigned long intel_calculate_wm(unsigned long clock_in_khz,
const struct intel_watermark_params *wm,
int fifo_size,
int pixel_size,
unsigned long latency_ns)
struct cxsr_latency ;
static const struct cxsr_latency cxsr_latency_table[] = ;
static const struct cxsr_latency *intel_get_cxsr_latency(int is_desktop,
int is_ddr3,
int fsb,
int mem)
static void pineview_disable_cxsr(struct drm_device *dev)
static const int latency_ns = 5000;
static int i9xx_get_fifo_size(struct drm_device *dev, int plane)
static int i85x_get_fifo_size(struct drm_device *dev, int plane)
static int i845_get_fifo_size(struct drm_device *dev, int plane)
static int i830_get_fifo_size(struct drm_device *dev, int plane)
static struct drm_crtc *single_enabled_crtc(struct drm_device *dev)
static void pineview_update_wm(struct drm_device *dev)
static bool g4x_compute_wm0(struct drm_device *dev,
int plane,
const struct intel_watermark_params *display,
int display_latency_ns,
const struct intel_watermark_params *cursor,
int cursor_latency_ns,
int *plane_wm,
int *cursor_wm)
static bool g4x_check_srwm(struct drm_device *dev,
int display_wm, int cursor_wm,
const struct intel_watermark_params *display,
const struct intel_watermark_params *cursor)
static bool g4x_compute_srwm(struct drm_device *dev,
int plane,
int latency_ns,
const struct intel_watermark_params *display,
const struct intel_watermark_params *cursor,
int *display_wm, int *cursor_wm)
#define single_plane_enabled(mask) is_power_of_2(mask)
static void g4x_update_wm(struct drm_device *dev)
static void i965_update_wm(struct drm_device *dev)
static void i9xx_update_wm(struct drm_device *dev)
static void i830_update_wm(struct drm_device *dev)
#define ILK_LP0_PLANE_LATENCY		700
#define ILK_LP0_CURSOR_LATENCY		1300
static bool ironlake_check_srwm(struct drm_device *dev, int level,
int fbc_wm, int display_wm, int cursor_wm,
const struct intel_watermark_params *display,
const struct intel_watermark_params *cursor)
static bool ironlake_compute_srwm(struct drm_device *dev, int level, int plane,
int latency_ns,
const struct intel_watermark_params *display,
const struct intel_watermark_params *cursor,
int *fbc_wm, int *display_wm, int *cursor_wm)
static void ironlake_update_wm(struct drm_device *dev)
static void sandybridge_update_wm(struct drm_device *dev)
static void intel_update_watermarks(struct drm_device *dev)
static inline bool intel_panel_use_ssc(struct drm_i915_private *dev_priv)
static int i9xx_crtc_mode_set(struct drm_crtc *crtc,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode,
int x, int y,
struct drm_framebuffer *old_fb)
static int ironlake_crtc_mode_set(struct drm_crtc *crtc,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode,
int x, int y,
struct drm_framebuffer *old_fb)
static int intel_crtc_mode_set(struct drm_crtc *crtc,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode,
int x, int y,
struct drm_framebuffer *old_fb)
void intel_crtc_load_lut(struct drm_crtc *crtc)
static void i845_update_cursor(struct drm_crtc *crtc, u32 base)
static void i9xx_update_cursor(struct drm_crtc *crtc, u32 base)
static void intel_crtc_update_cursor(struct drm_crtc *crtc,
bool on)
static int intel_crtc_cursor_set(struct drm_crtc *crtc,
struct drm_file *file,
uint32_t handle,
uint32_t width, uint32_t height)
static int intel_crtc_cursor_move(struct drm_crtc *crtc, int x, int y)
void intel_crtc_fb_gamma_set(struct drm_crtc *crtc, u16 red, u16 green,
u16 blue, int regno)
void intel_crtc_fb_gamma_get(struct drm_crtc *crtc, u16 *red, u16 *green,
u16 *blue, int regno)
static void intel_crtc_gamma_set(struct drm_crtc *crtc, u16 *red, u16 *green,
u16 *blue, uint32_t start, uint32_t size)
static struct drm_display_mode load_detect_mode = ;
static struct drm_framebuffer *
intel_framebuffer_create(struct drm_device *dev,
struct drm_mode_fb_cmd *mode_cmd,
struct drm_i915_gem_object *obj)
static u32
intel_framebuffer_pitch_for_width(int width, int bpp)
static u32
intel_framebuffer_size_for_mode(struct drm_display_mode *mode, int bpp)
static struct drm_framebuffer *
intel_framebuffer_create_for_mode(struct drm_device *dev,
struct drm_display_mode *mode,
int depth, int bpp)
static struct drm_framebuffer *
mode_fits_in_fbdev(struct drm_device *dev,
struct drm_display_mode *mode)
bool intel_get_load_detect_pipe(struct intel_encoder *intel_encoder,
struct drm_connector *connector,
struct drm_display_mode *mode,
struct intel_load_detect_pipe *old)
void intel_release_load_detect_pipe(struct intel_encoder *intel_encoder,
struct drm_connector *connector,
struct intel_load_detect_pipe *old)
static int intel_crtc_clock_get(struct drm_device *dev, struct drm_crtc *crtc)
struct drm_display_mode *intel_crtc_mode_get(struct drm_device *dev,
struct drm_crtc *crtc)
#define GPU_IDLE_TIMEOUT 500
static void intel_gpu_idle_timer(unsigned long arg)
#define CRTC_IDLE_TIMEOUT 1000
static void intel_crtc_idle_timer(unsigned long arg)
static void intel_increase_pllclock(struct drm_crtc *crtc)
static void intel_decrease_pllclock(struct drm_crtc *crtc)
static void intel_idle_update(struct work_struct *work)
void intel_mark_busy(struct drm_device *dev, struct drm_i915_gem_object *obj)
static void intel_crtc_destroy(struct drm_crtc *crtc)
static void intel_unpin_work_fn(struct work_struct *__work)
static void do_intel_finish_page_flip(struct drm_device *dev,
struct drm_crtc *crtc)
void intel_finish_page_flip(struct drm_device *dev, int pipe)
void intel_finish_page_flip_plane(struct drm_device *dev, int plane)
void intel_prepare_page_flip(struct drm_device *dev, int plane)
static int intel_gen2_queue_flip(struct drm_device *dev,
struct drm_crtc *crtc,
struct drm_framebuffer *fb,
struct drm_i915_gem_object *obj)
static int intel_gen3_queue_flip(struct drm_device *dev,
struct drm_crtc *crtc,
struct drm_framebuffer *fb,
struct drm_i915_gem_object *obj)
static int intel_gen4_queue_flip(struct drm_device *dev,
struct drm_crtc *crtc,
struct drm_framebuffer *fb,
struct drm_i915_gem_object *obj)
static int intel_gen6_queue_flip(struct drm_device *dev,
struct drm_crtc *crtc,
struct drm_framebuffer *fb,
struct drm_i915_gem_object *obj)
static int intel_gen7_queue_flip(struct drm_device *dev,
struct drm_crtc *crtc,
struct drm_framebuffer *fb,
struct drm_i915_gem_object *obj)
static int intel_default_queue_flip(struct drm_device *dev,
struct drm_crtc *crtc,
struct drm_framebuffer *fb,
struct drm_i915_gem_object *obj)
static int intel_crtc_page_flip(struct drm_crtc *crtc,
struct drm_framebuffer *fb,
struct drm_pending_vblank_event *event)
static void intel_sanitize_modesetting(struct drm_device *dev,
int pipe, int plane)
static void intel_crtc_reset(struct drm_crtc *crtc)
static struct drm_crtc_helper_funcs intel_helper_funcs = ;
static const struct drm_crtc_funcs intel_crtc_funcs = ;
static void intel_crtc_init(struct drm_device *dev, int pipe)
int intel_get_pipe_from_crtc_id(struct drm_device *dev, void *data,
struct drm_file *file)
static int intel_encoder_clones(struct drm_device *dev, int type_mask)
static bool has_edp_a(struct drm_device *dev)
static void intel_setup_outputs(struct drm_device *dev)
static void intel_user_framebuffer_destroy(struct drm_framebuffer *fb)
static int intel_user_framebuffer_create_handle(struct drm_framebuffer *fb,
struct drm_file *file,
unsigned int *handle)
static const struct drm_framebuffer_funcs intel_fb_funcs = ;
int intel_framebuffer_init(struct drm_device *dev,
struct intel_framebuffer *intel_fb,
struct drm_mode_fb_cmd *mode_cmd,
struct drm_i915_gem_object *obj)
static struct drm_framebuffer *
intel_user_framebuffer_create(struct drm_device *dev,
struct drm_file *filp,
struct drm_mode_fb_cmd *mode_cmd)
static const struct drm_mode_config_funcs intel_mode_funcs = ;
static struct drm_i915_gem_object *
intel_alloc_context_page(struct drm_device *dev)
bool ironlake_set_drps(struct drm_device *dev, u8 val)
void ironlake_enable_drps(struct drm_device *dev)
void ironlake_disable_drps(struct drm_device *dev)
void gen6_set_rps(struct drm_device *dev, u8 val)
void gen6_disable_rps(struct drm_device *dev)
static unsigned long intel_pxfreq(u32 vidfreq)
void intel_init_emon(struct drm_device *dev)
void gen6_enable_rps(struct drm_i915_private *dev_priv)
static void ironlake_init_clock_gating(struct drm_device *dev)
static void gen6_init_clock_gating(struct drm_device *dev)
static void ivybridge_init_clock_gating(struct drm_device *dev)
static void g4x_init_clock_gating(struct drm_device *dev)
static void crestline_init_clock_gating(struct drm_device *dev)
static void broadwater_init_clock_gating(struct drm_device *dev)
static void gen3_init_clock_gating(struct drm_device *dev)
static void i85x_init_clock_gating(struct drm_device *dev)
static void i830_init_clock_gating(struct drm_device *dev)
static void ibx_init_clock_gating(struct drm_device *dev)
static void cpt_init_clock_gating(struct drm_device *dev)
static void ironlake_teardown_rc6(struct drm_device *dev)
static void ironlake_disable_rc6(struct drm_device *dev)
static int ironlake_setup_rc6(struct drm_device *dev)
void ironlake_enable_rc6(struct drm_device *dev)
void intel_init_clock_gating(struct drm_device *dev)
static void intel_init_display(struct drm_device *dev)
static void quirk_pipea_force (struct drm_device *dev)
static void quirk_ssc_force_disable(struct drm_device *dev)
struct intel_quirk ;
struct intel_quirk intel_quirks[] = ;
static void intel_init_quirks(struct drm_device *dev)
static void i915_disable_vga(struct drm_device *dev)
void intel_modeset_init(struct drm_device *dev)
void intel_modeset_gem_init(struct drm_device *dev)
void intel_modeset_cleanup(struct drm_device *dev)
struct drm_encoder *intel_best_encoder(struct drm_connector *connector)
void intel_connector_attach_encoder(struct intel_connector *connector,
struct intel_encoder *encoder)
int intel_modeset_vga_set_state(struct drm_device *dev, bool state)
struct intel_display_error_state ;
struct intel_display_error_state *
intel_display_capture_error_state(struct drm_device *dev)
void
intel_display_print_error_state(struct seq_file *m,
struct drm_device *dev,
struct intel_display_error_state *error)
