#define SDVO_TMDS_MASK (SDVO_OUTPUT_TMDS0 | SDVO_OUTPUT_TMDS1)
#define SDVO_RGB_MASK  (SDVO_OUTPUT_RGB0 | SDVO_OUTPUT_RGB1)
#define SDVO_LVDS_MASK (SDVO_OUTPUT_LVDS0 | SDVO_OUTPUT_LVDS1)
#define SDVO_TV_MASK   (SDVO_OUTPUT_CVBS0 | SDVO_OUTPUT_SVID0)
#define SDVO_OUTPUT_MASK (SDVO_TMDS_MASK | SDVO_RGB_MASK | SDVO_LVDS_MASK |\
SDVO_TV_MASK)
#define IS_TV(c)	(c->output_flag & SDVO_TV_MASK)
#define IS_TMDS(c)	(c->output_flag & SDVO_TMDS_MASK)
#define IS_LVDS(c)	(c->output_flag & SDVO_LVDS_MASK)
#define IS_TV_OR_LVDS(c) (c->output_flag & (SDVO_TV_MASK | SDVO_LVDS_MASK))
static const char *tv_format_names[] = ;
#define TV_FORMAT_NUM  (sizeof(tv_format_names) / sizeof(*tv_format_names))
struct intel_sdvo ;
struct intel_sdvo_connector ;
static struct intel_sdvo *to_intel_sdvo(struct drm_encoder *encoder)
static struct intel_sdvo *intel_attached_sdvo(struct drm_connector *connector)
static struct intel_sdvo_connector *to_intel_sdvo_connector(struct drm_connector *connector)
static bool
intel_sdvo_output_setup(struct intel_sdvo *intel_sdvo, uint16_t flags);
static bool
intel_sdvo_tv_create_property(struct intel_sdvo *intel_sdvo,
struct intel_sdvo_connector *intel_sdvo_connector,
int type);
static bool
intel_sdvo_create_enhance_property(struct intel_sdvo *intel_sdvo,
struct intel_sdvo_connector *intel_sdvo_connector);
static void intel_sdvo_write_sdvox(struct intel_sdvo *intel_sdvo, u32 val)
static bool intel_sdvo_read_byte(struct intel_sdvo *intel_sdvo, u8 addr, u8 *ch)
#define SDVO_CMD_NAME_ENTRY(cmd)
static const struct _sdvo_cmd_name  sdvo_cmd_names[] = ;
#define IS_SDVOB(reg)	(reg == SDVOB || reg == PCH_SDVOB)
#define SDVO_NAME(svdo) (IS_SDVOB((svdo)->sdvo_reg) ? "SDVOB" : "SDVOC")
static void intel_sdvo_debug_write(struct intel_sdvo *intel_sdvo, u8 cmd,
const void *args, int args_len)
static const char *cmd_status_names[] = ;
static bool intel_sdvo_write_cmd(struct intel_sdvo *intel_sdvo, u8 cmd,
const void *args, int args_len)
static bool intel_sdvo_read_response(struct intel_sdvo *intel_sdvo,
void *response, int response_len)
static int intel_sdvo_get_pixel_multiplier(struct drm_display_mode *mode)
static bool intel_sdvo_set_control_bus_switch(struct intel_sdvo *intel_sdvo,
u8 ddc_bus)
static bool intel_sdvo_set_value(struct intel_sdvo *intel_sdvo, u8 cmd, const void *data, int len)
static bool
intel_sdvo_get_value(struct intel_sdvo *intel_sdvo, u8 cmd, void *value, int len)
static bool intel_sdvo_set_target_input(struct intel_sdvo *intel_sdvo)
static bool intel_sdvo_get_trained_inputs(struct intel_sdvo *intel_sdvo, bool *input_1, bool *input_2)
static bool intel_sdvo_set_active_outputs(struct intel_sdvo *intel_sdvo,
u16 outputs)
static bool intel_sdvo_set_encoder_power_state(struct intel_sdvo *intel_sdvo,
int mode)
static bool intel_sdvo_get_input_pixel_clock_range(struct intel_sdvo *intel_sdvo,
int *clock_min,
int *clock_max)
static bool intel_sdvo_set_target_output(struct intel_sdvo *intel_sdvo,
u16 outputs)
static bool intel_sdvo_set_timing(struct intel_sdvo *intel_sdvo, u8 cmd,
struct intel_sdvo_dtd *dtd)
static bool intel_sdvo_set_input_timing(struct intel_sdvo *intel_sdvo,
struct intel_sdvo_dtd *dtd)
static bool intel_sdvo_set_output_timing(struct intel_sdvo *intel_sdvo,
struct intel_sdvo_dtd *dtd)
static bool
intel_sdvo_create_preferred_input_timing(struct intel_sdvo *intel_sdvo,
uint16_t clock,
uint16_t width,
uint16_t height)
static bool intel_sdvo_get_preferred_input_timing(struct intel_sdvo *intel_sdvo,
struct intel_sdvo_dtd *dtd)
static bool intel_sdvo_set_clock_rate_mult(struct intel_sdvo *intel_sdvo, u8 val)
static void intel_sdvo_get_dtd_from_mode(struct intel_sdvo_dtd *dtd,
const struct drm_display_mode *mode)
static void intel_sdvo_get_mode_from_dtd(struct drm_display_mode * mode,
const struct intel_sdvo_dtd *dtd)
static bool intel_sdvo_check_supp_encode(struct intel_sdvo *intel_sdvo)
static bool intel_sdvo_set_encode(struct intel_sdvo *intel_sdvo,
uint8_t mode)
static bool intel_sdvo_set_colorimetry(struct intel_sdvo *intel_sdvo,
uint8_t mode)
static bool intel_sdvo_set_avi_infoframe(struct intel_sdvo *intel_sdvo)
static bool intel_sdvo_set_tv_format(struct intel_sdvo *intel_sdvo)
static bool
intel_sdvo_set_output_timings_from_mode(struct intel_sdvo *intel_sdvo,
struct drm_display_mode *mode)
static bool
intel_sdvo_set_input_timings_for_mode(struct intel_sdvo *intel_sdvo,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static bool intel_sdvo_mode_fixup(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void intel_sdvo_mode_set(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void intel_sdvo_dpms(struct drm_encoder *encoder, int mode)
static int intel_sdvo_mode_valid(struct drm_connector *connector,
struct drm_display_mode *mode)
static bool intel_sdvo_get_capabilities(struct intel_sdvo *intel_sdvo, struct intel_sdvo_caps *caps)
static bool
intel_sdvo_multifunc_encoder(struct intel_sdvo *intel_sdvo)
static struct edid *
intel_sdvo_get_edid(struct drm_connector *connector)
static struct edid *
intel_sdvo_get_analog_edid(struct drm_connector *connector)
enum drm_connector_status
intel_sdvo_hdmi_sink_detect(struct drm_connector *connector)
static enum drm_connector_status
intel_sdvo_detect(struct drm_connector *connector, bool force)
static void intel_sdvo_get_ddc_modes(struct drm_connector *connector)
static const struct drm_display_mode sdvo_tv_modes[] = ;
static void intel_sdvo_get_tv_modes(struct drm_connector *connector)
static void intel_sdvo_get_lvds_modes(struct drm_connector *connector)
static int intel_sdvo_get_modes(struct drm_connector *connector)
static void
intel_sdvo_destroy_enhance_property(struct drm_connector *connector)
static void intel_sdvo_destroy(struct drm_connector *connector)
static bool intel_sdvo_detect_hdmi_audio(struct drm_connector *connector)
static int
intel_sdvo_set_property(struct drm_connector *connector,
struct drm_property *property,
uint64_t val)
static const struct drm_encoder_helper_funcs intel_sdvo_helper_funcs = ;
static const struct drm_connector_funcs intel_sdvo_connector_funcs = ;
static const struct drm_connector_helper_funcs intel_sdvo_connector_helper_funcs = ;
static void intel_sdvo_enc_destroy(struct drm_encoder *encoder)
static const struct drm_encoder_funcs intel_sdvo_enc_funcs = ;
static void
intel_sdvo_guess_ddc_bus(struct intel_sdvo *sdvo)
static void
intel_sdvo_select_ddc_bus(struct drm_i915_private *dev_priv,
struct intel_sdvo *sdvo, u32 reg)
static void
intel_sdvo_select_i2c_bus(struct drm_i915_private *dev_priv,
struct intel_sdvo *sdvo, u32 reg)
static bool
intel_sdvo_is_hdmi_connector(struct intel_sdvo *intel_sdvo, int device)
static u8
intel_sdvo_get_slave_addr(struct drm_device *dev, int sdvo_reg)
static void
intel_sdvo_connector_init(struct intel_sdvo_connector *connector,
struct intel_sdvo *encoder)
static void
intel_sdvo_add_hdmi_properties(struct intel_sdvo_connector *connector)
static bool
intel_sdvo_dvi_init(struct intel_sdvo *intel_sdvo, int device)
static bool
intel_sdvo_tv_init(struct intel_sdvo *intel_sdvo, int type)
static bool
intel_sdvo_analog_init(struct intel_sdvo *intel_sdvo, int device)
static bool
intel_sdvo_lvds_init(struct intel_sdvo *intel_sdvo, int device)
static bool
intel_sdvo_output_setup(struct intel_sdvo *intel_sdvo, uint16_t flags)
static bool intel_sdvo_tv_create_property(struct intel_sdvo *intel_sdvo,
struct intel_sdvo_connector *intel_sdvo_connector,
int type)
#define ENHANCEMENT(name, NAME) do  while(0)
static bool
intel_sdvo_create_enhance_property_tv(struct intel_sdvo *intel_sdvo,
struct intel_sdvo_connector *intel_sdvo_connector,
struct intel_sdvo_enhancements_reply enhancements)
static bool
intel_sdvo_create_enhance_property_lvds(struct intel_sdvo *intel_sdvo,
struct intel_sdvo_connector *intel_sdvo_connector,
struct intel_sdvo_enhancements_reply enhancements)
#undef ENHANCEMENT
static bool intel_sdvo_create_enhance_property(struct intel_sdvo *intel_sdvo,
struct intel_sdvo_connector *intel_sdvo_connector)
static int intel_sdvo_ddc_proxy_xfer(struct i2c_adapter *adapter,
struct i2c_msg *msgs,
int num)
static u32 intel_sdvo_ddc_proxy_func(struct i2c_adapter *adapter)
static const struct i2c_algorithm intel_sdvo_ddc_proxy = ;
static bool
intel_sdvo_init_ddc_proxy(struct intel_sdvo *sdvo,
struct drm_device *dev)
bool intel_sdvo_init(struct drm_device *dev, int sdvo_reg)
