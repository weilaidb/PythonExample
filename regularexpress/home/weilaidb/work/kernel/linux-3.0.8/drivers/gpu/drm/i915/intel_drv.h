#define __INTEL_DRV_H__
#define _wait_for(COND, MS, W) ()
#define wait_for(COND, MS) _wait_for(COND, MS, 1)
#define wait_for_atomic(COND, MS) _wait_for(COND, MS, 0)
#define MSLEEP(x) do  while(0)
#define KHz(x) (1000*x)
#define MHz(x) KHz(1000*x)
#define MAX_OUTPUTS 6
#define INTELFB_CONN_LIMIT 4
#define INTEL_I2C_BUS_DVO 1
#define INTEL_I2C_BUS_SDVO 2
#define INTEL_OUTPUT_UNUSED 0
#define INTEL_OUTPUT_ANALOG 1
#define INTEL_OUTPUT_DVO 2
#define INTEL_OUTPUT_SDVO 3
#define INTEL_OUTPUT_LVDS 4
#define INTEL_OUTPUT_TVOUT 5
#define INTEL_OUTPUT_HDMI 6
#define INTEL_OUTPUT_DISPLAYPORT 7
#define INTEL_OUTPUT_EDP 8
#define INTEL_HDMIB_CLONE_BIT 1
#define INTEL_HDMIC_CLONE_BIT 2
#define INTEL_HDMID_CLONE_BIT 3
#define INTEL_HDMIE_CLONE_BIT 4
#define INTEL_HDMIF_CLONE_BIT 5
#define INTEL_SDVO_NON_TV_CLONE_BIT 6
#define INTEL_SDVO_TV_CLONE_BIT 7
#define INTEL_SDVO_LVDS_CLONE_BIT 8
#define INTEL_ANALOG_CLONE_BIT 9
#define INTEL_TV_CLONE_BIT 10
#define INTEL_DP_B_CLONE_BIT 11
#define INTEL_DP_C_CLONE_BIT 12
#define INTEL_DP_D_CLONE_BIT 13
#define INTEL_LVDS_CLONE_BIT 14
#define INTEL_DVO_TMDS_CLONE_BIT 15
#define INTEL_DVO_LVDS_CLONE_BIT 16
#define INTEL_EDP_CLONE_BIT 17
#define INTEL_DVO_CHIP_NONE 0
#define INTEL_DVO_CHIP_LVDS 1
#define INTEL_DVO_CHIP_TMDS 2
#define INTEL_DVO_CHIP_TVOUT 4
#define INTEL_MODE_PIXEL_MULTIPLIER_SHIFT (0x0)
#define INTEL_MODE_PIXEL_MULTIPLIER_MASK (0xf << INTEL_MODE_PIXEL_MULTIPLIER_SHIFT)
static inline void
intel_mode_set_pixel_multiplier(struct drm_display_mode *mode,
int multiplier)
static inline int
intel_mode_get_pixel_multiplier(const struct drm_display_mode *mode)
struct intel_framebuffer ;
struct intel_fbdev ;
struct intel_encoder ;
struct intel_connector ;
struct intel_crtc ;
#define to_intel_crtc(x) container_of(x, struct intel_crtc, base)
#define to_intel_connector(x) container_of(x, struct intel_connector, base)
#define to_intel_encoder(x) container_of(x, struct intel_encoder, base)
#define to_intel_framebuffer(x) container_of(x, struct intel_framebuffer, base)
#define DIP_TYPE_AVI    0x82
#define DIP_VERSION_AVI 0x2
#define DIP_LEN_AVI     13
struct dip_infoframe  __attribute__((packed));
static inline struct drm_crtc *
intel_get_crtc_for_pipe(struct drm_device *dev, int pipe)
static inline struct drm_crtc *
intel_get_crtc_for_plane(struct drm_device *dev, int plane)
struct intel_unpin_work ;
int intel_ddc_get_modes(struct drm_connector *c, struct i2c_adapter *adapter);
extern bool intel_ddc_probe(struct intel_encoder *intel_encoder, int ddc_bus);
extern void intel_attach_force_audio_property(struct drm_connector *connector);
extern void intel_attach_broadcast_rgb_property(struct drm_connector *connector);
extern void intel_crt_init(struct drm_device *dev);
extern void intel_hdmi_init(struct drm_device *dev, int sdvox_reg);
void intel_dip_infoframe_csum(struct dip_infoframe *avi_if);
extern bool intel_sdvo_init(struct drm_device *dev, int output_device);
extern void intel_dvo_init(struct drm_device *dev);
extern void intel_tv_init(struct drm_device *dev);
extern void intel_mark_busy(struct drm_device *dev,
struct drm_i915_gem_object *obj);
extern bool intel_lvds_init(struct drm_device *dev);
extern void intel_dp_init(struct drm_device *dev, int dp_reg);
void
intel_dp_set_m_n(struct drm_crtc *crtc, struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode);
extern bool intel_dpd_is_edp(struct drm_device *dev);
extern void intel_edp_link_config (struct intel_encoder *, int *, int *);
extern bool intel_encoder_is_pch_edp(struct drm_encoder *encoder);
extern void intel_fixed_panel_mode(struct drm_display_mode *fixed_mode,
struct drm_display_mode *adjusted_mode);
extern void intel_pch_panel_fitting(struct drm_device *dev,
int fitting_mode,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode);
extern u32 intel_panel_get_max_backlight(struct drm_device *dev);
extern u32 intel_panel_get_backlight(struct drm_device *dev);
extern void intel_panel_set_backlight(struct drm_device *dev, u32 level);
extern void intel_panel_setup_backlight(struct drm_device *dev);
extern void intel_panel_enable_backlight(struct drm_device *dev);
extern void intel_panel_disable_backlight(struct drm_device *dev);
extern enum drm_connector_status intel_panel_detect(struct drm_device *dev);
extern void intel_crtc_load_lut(struct drm_crtc *crtc);
extern void intel_encoder_prepare (struct drm_encoder *encoder);
extern void intel_encoder_commit (struct drm_encoder *encoder);
extern void intel_encoder_destroy(struct drm_encoder *encoder);
static inline struct intel_encoder *intel_attached_encoder(struct drm_connector *connector)
extern void intel_connector_attach_encoder(struct intel_connector *connector,
struct intel_encoder *encoder);
extern struct drm_encoder *intel_best_encoder(struct drm_connector *connector);
extern struct drm_display_mode *intel_crtc_mode_get(struct drm_device *dev,
struct drm_crtc *crtc);
int intel_get_pipe_from_crtc_id(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern void intel_wait_for_vblank(struct drm_device *dev, int pipe);
extern void intel_wait_for_pipe_off(struct drm_device *dev, int pipe);
struct intel_load_detect_pipe ;
extern bool intel_get_load_detect_pipe(struct intel_encoder *intel_encoder,
struct drm_connector *connector,
struct drm_display_mode *mode,
struct intel_load_detect_pipe *old);
extern void intel_release_load_detect_pipe(struct intel_encoder *intel_encoder,
struct drm_connector *connector,
struct intel_load_detect_pipe *old);
extern struct drm_connector* intel_sdvo_find(struct drm_device *dev, int sdvoB);
extern int intel_sdvo_supports_hotplug(struct drm_connector *connector);
extern void intel_sdvo_set_hotplug(struct drm_connector *connector, int enable);
extern void intelfb_restore(void);
extern void intel_crtc_fb_gamma_set(struct drm_crtc *crtc, u16 red, u16 green,
u16 blue, int regno);
extern void intel_crtc_fb_gamma_get(struct drm_crtc *crtc, u16 *red, u16 *green,
u16 *blue, int regno);
extern void intel_enable_clock_gating(struct drm_device *dev);
extern void ironlake_enable_drps(struct drm_device *dev);
extern void ironlake_disable_drps(struct drm_device *dev);
extern void gen6_enable_rps(struct drm_i915_private *dev_priv);
extern void gen6_disable_rps(struct drm_device *dev);
extern void intel_init_emon(struct drm_device *dev);
extern int intel_pin_and_fence_fb_obj(struct drm_device *dev,
struct drm_i915_gem_object *obj,
struct intel_ring_buffer *pipelined);
extern int intel_framebuffer_init(struct drm_device *dev,
struct intel_framebuffer *ifb,
struct drm_mode_fb_cmd *mode_cmd,
struct drm_i915_gem_object *obj);
extern int intel_fbdev_init(struct drm_device *dev);
extern void intel_fbdev_fini(struct drm_device *dev);
extern void intel_prepare_page_flip(struct drm_device *dev, int plane);
extern void intel_finish_page_flip(struct drm_device *dev, int pipe);
extern void intel_finish_page_flip_plane(struct drm_device *dev, int plane);
extern void intel_setup_overlay(struct drm_device *dev);
extern void intel_cleanup_overlay(struct drm_device *dev);
extern int intel_overlay_switch_off(struct intel_overlay *overlay);
extern int intel_overlay_put_image(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int intel_overlay_attrs(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern void intel_fb_output_poll_changed(struct drm_device *dev);
extern void intel_fb_restore_mode(struct drm_device *dev);
extern void intel_init_clock_gating(struct drm_device *dev);
