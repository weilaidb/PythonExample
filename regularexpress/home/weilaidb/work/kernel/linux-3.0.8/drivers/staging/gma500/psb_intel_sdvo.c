struct psb_intel_sdvo_priv ;
void psb_intel_sdvo_write_sdvox(struct psb_intel_output *psb_intel_output,
u32 val)
static bool psb_intel_sdvo_read_byte(
struct psb_intel_output *psb_intel_output,
u8 addr, u8 *ch)
static bool psb_intel_sdvo_write_byte(
struct psb_intel_output *psb_intel_output,
int addr, u8 ch)
#define SDVO_CMD_NAME_ENTRY(cmd)
static const struct _sdvo_cmd_name  sdvo_cmd_names[] = ;
#define SDVO_NAME(dev_priv) \
((dev_priv)->output_device == SDVOB ? "SDVOB" : "SDVOC")
#define SDVO_PRIV(output)   ((struct psb_intel_sdvo_priv *) (output)->dev_priv)
static void psb_intel_sdvo_write_cmd(struct psb_intel_output *psb_intel_output,
u8 cmd,
void *args,
int args_len)
static const char *const cmd_status_names[] = ;
static u8 psb_intel_sdvo_read_response(
struct psb_intel_output *psb_intel_output,
void *response, int response_len)
int psb_intel_sdvo_get_pixel_multiplier(struct drm_display_mode *mode)
void psb_intel_sdvo_set_control_bus_switch(
struct psb_intel_output *psb_intel_output,
u8 target)
static bool psb_intel_sdvo_set_target_input(
struct psb_intel_output *psb_intel_output,
bool target_0, bool target_1)
static bool psb_intel_sdvo_get_trained_inputs(struct psb_intel_output
*psb_intel_output, bool *input_1,
bool *input_2)
static bool psb_intel_sdvo_get_active_outputs(struct psb_intel_output
*psb_intel_output, u16 *outputs)
static bool psb_intel_sdvo_set_active_outputs(struct psb_intel_output
*psb_intel_output, u16 outputs)
static bool psb_intel_sdvo_set_encoder_power_state(struct psb_intel_output
*psb_intel_output, int mode)
static bool psb_intel_sdvo_get_input_pixel_clock_range(struct psb_intel_output
*psb_intel_output,
int *clock_min,
int *clock_max)
static bool psb_intel_sdvo_set_target_output(
struct psb_intel_output *psb_intel_output,
u16 outputs)
static bool psb_intel_sdvo_get_timing(struct psb_intel_output *psb_intel_output,
u8 cmd, struct psb_intel_sdvo_dtd *dtd)
static bool psb_intel_sdvo_get_input_timing(
struct psb_intel_output *psb_intel_output,
struct psb_intel_sdvo_dtd *dtd)
static bool psb_intel_sdvo_set_timing(
struct psb_intel_output *psb_intel_output,
u8 cmd,
struct psb_intel_sdvo_dtd *dtd)
static bool psb_intel_sdvo_set_input_timing(
struct psb_intel_output *psb_intel_output,
struct psb_intel_sdvo_dtd *dtd)
static bool psb_intel_sdvo_set_output_timing(
struct psb_intel_output *psb_intel_output,
struct psb_intel_sdvo_dtd *dtd)
static int psb_intel_sdvo_get_clock_rate_mult(struct psb_intel_output
*psb_intel_output)
static bool psb_intel_sdvo_set_clock_rate_mult(struct psb_intel_output
*psb_intel_output, u8 val)
static bool psb_sdvo_set_current_inoutmap(struct psb_intel_output *output,
u32 in0outputmask,
u32 in1outputmask)
static void psb_intel_sdvo_set_iomap(struct psb_intel_output *output)
static bool psb_intel_sdvo_mode_fixup(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void psb_intel_sdvo_mode_set(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void psb_intel_sdvo_dpms(struct drm_encoder *encoder, int mode)
static void psb_intel_sdvo_save(struct drm_connector *connector)
static void psb_intel_sdvo_restore(struct drm_connector *connector)
static int psb_intel_sdvo_mode_valid(struct drm_connector *connector,
struct drm_display_mode *mode)
static bool psb_intel_sdvo_get_capabilities(
struct psb_intel_output *psb_intel_output,
struct psb_intel_sdvo_caps *caps)
struct drm_connector *psb_intel_sdvo_find(struct drm_device *dev, int sdvoB)
int psb_intel_sdvo_supports_hotplug(struct drm_connector *connector)
void psb_intel_sdvo_set_hotplug(struct drm_connector *connector, int on)
static enum drm_connector_status psb_intel_sdvo_detect(struct drm_connector
*connector, bool force)
static int psb_intel_sdvo_get_modes(struct drm_connector *connector)
static void psb_intel_sdvo_destroy(struct drm_connector *connector)
static const struct drm_encoder_helper_funcs psb_intel_sdvo_helper_funcs = ;
static const struct drm_connector_funcs psb_intel_sdvo_connector_funcs = ;
static const struct drm_connector_helper_funcs
psb_intel_sdvo_connector_helper_funcs = ;
void psb_intel_sdvo_enc_destroy(struct drm_encoder *encoder)
static const struct drm_encoder_funcs psb_intel_sdvo_enc_funcs = ;
void psb_intel_sdvo_init(struct drm_device *dev, int output_device)
