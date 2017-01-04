#define __INTEL_DRV_H__
#define DELAY_TIME1 2000
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
#define INTEL_OUTPUT_MIPI 7
#define INTEL_OUTPUT_MIPI2 8
#define INTEL_DVO_CHIP_NONE 0
#define INTEL_DVO_CHIP_LVDS 1
#define INTEL_DVO_CHIP_TMDS 2
#define INTEL_DVO_CHIP_TVOUT 4
enum mipi_panel_type ;
struct psb_intel_mode_device ;
struct psb_intel_i2c_chan ;
struct psb_intel_output ;
struct psb_intel_crtc_state ;
struct psb_intel_crtc ;
#define to_psb_intel_crtc(x)	\
container_of(x, struct psb_intel_crtc, base)
#define to_psb_intel_output(x)	\
container_of(x, struct psb_intel_output, base)
#define enc_to_psb_intel_output(x)	\
container_of(x, struct psb_intel_output, enc)
#define to_psb_intel_framebuffer(x)	\
container_of(x, struct psb_intel_framebuffer, base)
struct psb_intel_i2c_chan *psb_intel_i2c_create(struct drm_device *dev,
const u32 reg, const char *name);
void psb_intel_i2c_destroy(struct psb_intel_i2c_chan *chan);
int psb_intel_ddc_get_modes(struct psb_intel_output *psb_intel_output);
extern bool psb_intel_ddc_probe(struct psb_intel_output *psb_intel_output);
extern void psb_intel_crtc_init(struct drm_device *dev, int pipe,
struct psb_intel_mode_device *mode_dev);
extern void psb_intel_crt_init(struct drm_device *dev);
extern void psb_intel_sdvo_init(struct drm_device *dev, int output_device);
extern void psb_intel_dvo_init(struct drm_device *dev);
extern void psb_intel_tv_init(struct drm_device *dev);
extern void psb_intel_lvds_init(struct drm_device *dev,
struct psb_intel_mode_device *mode_dev);
extern void psb_intel_lvds_set_brightness(struct drm_device *dev, int level);
extern void mrst_lvds_init(struct drm_device *dev,
struct psb_intel_mode_device *mode_dev);
extern void mrst_wait_for_INTR_PKT_SENT(struct drm_device *dev);
extern void mrst_dsi_init(struct drm_device *dev,
struct psb_intel_mode_device *mode_dev);
extern void mid_dsi_init(struct drm_device *dev,
struct psb_intel_mode_device *mode_dev, int dsi_num);
extern void psb_intel_crtc_load_lut(struct drm_crtc *crtc);
extern void psb_intel_encoder_prepare(struct drm_encoder *encoder);
extern void psb_intel_encoder_commit(struct drm_encoder *encoder);
extern struct drm_encoder *psb_intel_best_encoder(struct drm_connector
*connector);
extern struct drm_display_mode *psb_intel_crtc_mode_get(struct drm_device *dev,
struct drm_crtc *crtc);
extern void psb_intel_wait_for_vblank(struct drm_device *dev);
extern int psb_intel_get_pipe_from_crtc_id(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern struct drm_crtc *psb_intel_get_crtc_from_pipe(struct drm_device *dev,
int pipe);
extern struct drm_connector *psb_intel_sdvo_find(struct drm_device *dev,
int sdvoB);
extern int psb_intel_sdvo_supports_hotplug(struct drm_connector *connector);
extern void psb_intel_sdvo_set_hotplug(struct drm_connector *connector,
int enable);
extern int intelfb_probe(struct drm_device *dev);
extern int intelfb_remove(struct drm_device *dev,
struct drm_framebuffer *fb);
extern struct drm_framebuffer *psb_intel_framebuffer_create(struct drm_device
*dev, struct
drm_mode_fb_cmd
*mode_cmd,
void *mm_private);
extern bool psb_intel_lvds_mode_fixup(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode);
extern int psb_intel_lvds_mode_valid(struct drm_connector *connector,
struct drm_display_mode *mode);
extern int psb_intel_lvds_set_property(struct drm_connector *connector,
struct drm_property *property,
uint64_t value);
extern void psb_intel_lvds_destroy(struct drm_connector *connector);
extern const struct drm_encoder_funcs psb_intel_lvds_enc_funcs;
