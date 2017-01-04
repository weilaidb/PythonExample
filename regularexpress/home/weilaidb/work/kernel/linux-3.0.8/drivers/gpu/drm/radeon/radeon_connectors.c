extern void
radeon_combios_connected_scratch_regs(struct drm_connector *connector,
struct drm_encoder *encoder,
bool connected);
extern void
radeon_atombios_connected_scratch_regs(struct drm_connector *connector,
struct drm_encoder *encoder,
bool connected);
extern void
radeon_legacy_backlight_init(struct radeon_encoder *radeon_encoder,
struct drm_connector *drm_connector);
bool radeon_connector_encoder_is_dp_bridge(struct drm_connector *connector);
void radeon_connector_hotplug(struct drm_connector *connector)
static void radeon_property_change_mode(struct drm_encoder *encoder)
static void
radeon_connector_update_scratch_regs(struct drm_connector *connector, enum drm_connector_status status)
struct drm_encoder *radeon_find_encoder(struct drm_connector *connector, int encoder_type)
struct drm_encoder *radeon_best_single_encoder(struct drm_connector *connector)
static enum drm_connector_status
radeon_connector_analog_encoder_conflict_solve(struct drm_connector *connector,
struct drm_encoder *encoder,
enum drm_connector_status current_status,
bool priority)
static struct drm_display_mode *radeon_fp_native_mode(struct drm_encoder *encoder)
static void radeon_add_common_modes(struct drm_encoder *encoder, struct drm_connector *connector)
int radeon_connector_set_property(struct drm_connector *connector, struct drm_property *property,
uint64_t val)
static bool radeon_connector_needs_extended_probe(struct radeon_device *dev,
uint32_t supported_device,
int connector_type)
static void radeon_fixup_lvds_native_mode(struct drm_encoder *encoder,
struct drm_connector *connector)
static int radeon_lvds_get_modes(struct drm_connector *connector)
static int radeon_lvds_mode_valid(struct drm_connector *connector,
struct drm_display_mode *mode)
static enum drm_connector_status
radeon_lvds_detect(struct drm_connector *connector, bool force)
static void radeon_connector_destroy(struct drm_connector *connector)
static int radeon_lvds_set_property(struct drm_connector *connector,
struct drm_property *property,
uint64_t value)
struct drm_connector_helper_funcs radeon_lvds_connector_helper_funcs = ;
struct drm_connector_funcs radeon_lvds_connector_funcs = ;
static int radeon_vga_get_modes(struct drm_connector *connector)
static int radeon_vga_mode_valid(struct drm_connector *connector,
struct drm_display_mode *mode)
static enum drm_connector_status
radeon_vga_detect(struct drm_connector *connector, bool force)
struct drm_connector_helper_funcs radeon_vga_connector_helper_funcs = ;
struct drm_connector_funcs radeon_vga_connector_funcs = ;
static int radeon_tv_get_modes(struct drm_connector *connector)
static int radeon_tv_mode_valid(struct drm_connector *connector,
struct drm_display_mode *mode)
static enum drm_connector_status
radeon_tv_detect(struct drm_connector *connector, bool force)
struct drm_connector_helper_funcs radeon_tv_connector_helper_funcs = ;
struct drm_connector_funcs radeon_tv_connector_funcs = ;
static int radeon_dvi_get_modes(struct drm_connector *connector)
static enum drm_connector_status
radeon_dvi_detect(struct drm_connector *connector, bool force)
struct drm_encoder *radeon_dvi_encoder(struct drm_connector *connector)
static void radeon_dvi_force(struct drm_connector *connector)
static int radeon_dvi_mode_valid(struct drm_connector *connector,
struct drm_display_mode *mode)
struct drm_connector_helper_funcs radeon_dvi_connector_helper_funcs = ;
struct drm_connector_funcs radeon_dvi_connector_funcs = ;
static void radeon_dp_connector_destroy(struct drm_connector *connector)
static int radeon_dp_get_modes(struct drm_connector *connector)
bool radeon_connector_encoder_is_dp_bridge(struct drm_connector *connector)
bool radeon_connector_encoder_is_hbr2(struct drm_connector *connector)
bool radeon_connector_is_dp12_capable(struct drm_connector *connector)
static enum drm_connector_status
radeon_dp_detect(struct drm_connector *connector, bool force)
static int radeon_dp_mode_valid(struct drm_connector *connector,
struct drm_display_mode *mode)
struct drm_connector_helper_funcs radeon_dp_connector_helper_funcs = ;
struct drm_connector_funcs radeon_dp_connector_funcs = ;
void
radeon_add_atom_connector(struct drm_device *dev,
uint32_t connector_id,
uint32_t supported_device,
int connector_type,
struct radeon_i2c_bus_rec *i2c_bus,
uint32_t igp_lane_info,
uint16_t connector_object_id,
struct radeon_hpd *hpd,
struct radeon_router *router)
void
radeon_add_legacy_connector(struct drm_device *dev,
uint32_t connector_id,
uint32_t supported_device,
int connector_type,
struct radeon_i2c_bus_rec *i2c_bus,
uint16_t connector_object_id,
struct radeon_hpd *hpd)
