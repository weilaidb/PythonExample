extern int atom_debug;
bool radeon_atom_get_tv_timings(struct radeon_device *rdev, int index,
struct drm_display_mode *mode);
static uint32_t radeon_encoder_clones(struct drm_encoder *encoder)
void radeon_setup_encoder_clones(struct drm_device *dev)
uint32_t
radeon_get_encoder_enum(struct drm_device *dev, uint32_t supported_device, uint8_t dac)
static inline bool radeon_encoder_is_digital(struct drm_encoder *encoder)
void
radeon_link_encoder_connector(struct drm_device *dev)
void radeon_encoder_set_active_device(struct drm_encoder *encoder)
struct drm_connector *
radeon_get_connector_for_encoder(struct drm_encoder *encoder)
static struct drm_connector *
radeon_get_connector_for_encoder_init(struct drm_encoder *encoder)
struct drm_encoder *radeon_atom_get_external_encoder(struct drm_encoder *encoder)
bool radeon_encoder_is_dp_bridge(struct drm_encoder *encoder)
void radeon_panel_mode_fixup(struct drm_encoder *encoder,
struct drm_display_mode *adjusted_mode)
static bool radeon_atom_mode_fixup(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void
atombios_dac_setup(struct drm_encoder *encoder, int action)
static void
atombios_tv_setup(struct drm_encoder *encoder, int action)
union dvo_encoder_control ;
void
atombios_dvo_setup(struct drm_encoder *encoder, int action)
union lvds_encoder_control ;
void
atombios_digital_setup(struct drm_encoder *encoder, int action)
int
atombios_get_encoder_mode(struct drm_encoder *encoder)
union dig_encoder_control ;
void
atombios_dig_encoder_setup(struct drm_encoder *encoder, int action, int panel_mode)
union dig_transmitter_control ;
void
atombios_dig_transmitter_setup(struct drm_encoder *encoder, int action, uint8_t lane_num, uint8_t lane_set)
bool
atombios_set_edp_panel_power(struct drm_connector *connector, int action)
union external_encoder_control ;
static void
atombios_external_encoder_setup(struct drm_encoder *encoder,
struct drm_encoder *ext_encoder,
int action)
static void
atombios_yuv_setup(struct drm_encoder *encoder, bool enable)
static void
radeon_atom_encoder_dpms(struct drm_encoder *encoder, int mode)
union crtc_source_param ;
static void
atombios_set_encoder_crtc_source(struct drm_encoder *encoder)
static void
atombios_apply_encoder_quirks(struct drm_encoder *encoder,
struct drm_display_mode *mode)
static int radeon_atom_pick_dig_encoder(struct drm_encoder *encoder)
void
radeon_atom_encoder_init(struct radeon_device *rdev)
static void
radeon_atom_encoder_mode_set(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static bool
atombios_dac_load_detect(struct drm_encoder *encoder, struct drm_connector *connector)
static enum drm_connector_status
radeon_atom_dac_detect(struct drm_encoder *encoder, struct drm_connector *connector)
static enum drm_connector_status
radeon_atom_dig_detect(struct drm_encoder *encoder, struct drm_connector *connector)
void
radeon_atom_ext_encoder_setup_ddc(struct drm_encoder *encoder)
static void radeon_atom_encoder_prepare(struct drm_encoder *encoder)
static void radeon_atom_encoder_commit(struct drm_encoder *encoder)
static void radeon_atom_encoder_disable(struct drm_encoder *encoder)
static void radeon_atom_ext_prepare(struct drm_encoder *encoder)
static void radeon_atom_ext_commit(struct drm_encoder *encoder)
static void
radeon_atom_ext_mode_set(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void radeon_atom_ext_disable(struct drm_encoder *encoder)
static void
radeon_atom_ext_dpms(struct drm_encoder *encoder, int mode)
static bool radeon_atom_ext_mode_fixup(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static const struct drm_encoder_helper_funcs radeon_atom_ext_helper_funcs = ;
static const struct drm_encoder_helper_funcs radeon_atom_dig_helper_funcs = ;
static const struct drm_encoder_helper_funcs radeon_atom_dac_helper_funcs = ;
void radeon_enc_destroy(struct drm_encoder *encoder)
static const struct drm_encoder_funcs radeon_atom_enc_funcs = ;
struct radeon_encoder_atom_dac *
radeon_atombios_set_dac_info(struct radeon_encoder *radeon_encoder)
struct radeon_encoder_atom_dig *
radeon_atombios_set_dig_info(struct radeon_encoder *radeon_encoder)
void
radeon_add_atom_encoder(struct drm_device *dev,
uint32_t encoder_enum,
uint32_t supported_device,
u16 caps)
