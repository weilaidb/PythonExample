extern uint32_t
radeon_get_encoder_enum(struct drm_device *dev, uint32_t supported_device,
uint8_t dac);
extern void radeon_link_encoder_connector(struct drm_device *dev);
extern void
radeon_add_atom_encoder(struct drm_device *dev, uint32_t encoder_enum,
uint32_t supported_device, u16 caps);
extern void
radeon_add_atom_connector(struct drm_device *dev,
uint32_t connector_id,
uint32_t supported_device,
int connector_type,
struct radeon_i2c_bus_rec *i2c_bus,
uint32_t igp_lane_info,
uint16_t connector_object_id,
struct radeon_hpd *hpd,
struct radeon_router *router);
extern void
radeon_add_legacy_encoder(struct drm_device *dev, uint32_t encoder_enum,
uint32_t supported_device);
union atom_supported_devices ;
static inline struct radeon_i2c_bus_rec radeon_lookup_i2c_gpio(struct radeon_device *rdev,
uint8_t id)
void radeon_atombios_i2c_init(struct radeon_device *rdev)
static inline struct radeon_gpio_rec radeon_lookup_gpio(struct radeon_device *rdev,
u8 id)
static struct radeon_hpd radeon_atom_get_hpd_info_from_gpio(struct radeon_device *rdev,
struct radeon_gpio_rec *gpio)
static bool radeon_atom_apply_quirks(struct drm_device *dev,
uint32_t supported_device,
int *connector_type,
struct radeon_i2c_bus_rec *i2c_bus,
uint16_t *line_mux,
struct radeon_hpd *hpd)
const int supported_devices_connector_convert[] = ;
const uint16_t supported_devices_connector_object_id_convert[] = ;
const int object_connector_convert[] = ;
bool radeon_get_atom_connector_info_from_object_table(struct drm_device *dev)
static uint16_t atombios_get_connector_object_id(struct drm_device *dev,
int connector_type,
uint16_t devices)
struct bios_connector ;
bool radeon_get_atom_connector_info_from_supported_devices_table(struct
drm_device
*dev)
union firmware_info ;
bool radeon_atom_get_clock_info(struct drm_device *dev)
union igp_info ;
bool radeon_atombios_sideport_present(struct radeon_device *rdev)
bool radeon_atombios_get_tmds_info(struct radeon_encoder *encoder,
struct radeon_encoder_int_tmds *tmds)
bool radeon_atombios_get_ppll_ss_info(struct radeon_device *rdev,
struct radeon_atom_ss *ss,
int id)
static void radeon_atombios_get_igp_ss_overrides(struct radeon_device *rdev,
struct radeon_atom_ss *ss,
int id)
union asic_ss_info ;
bool radeon_atombios_get_asic_ss_info(struct radeon_device *rdev,
struct radeon_atom_ss *ss,
int id, u32 clock)
union lvds_info ;
struct radeon_encoder_atom_dig *radeon_atombios_get_lvds_info(struct
radeon_encoder
*encoder)
struct radeon_encoder_primary_dac *
radeon_atombios_get_primary_dac_info(struct radeon_encoder *encoder)
bool radeon_atom_get_tv_timings(struct radeon_device *rdev, int index,
struct drm_display_mode *mode)
enum radeon_tv_std
radeon_atombios_get_tv_info(struct radeon_device *rdev)
struct radeon_encoder_tv_dac *
radeon_atombios_get_tv_dac_info(struct radeon_encoder *encoder)
static const char *thermal_controller_names[] = ;
static const char *pp_lib_thermal_controller_names[] = ;
union power_info ;
union pplib_clock_info ;
union pplib_power_state ;
static void radeon_atombios_parse_misc_flags_1_3(struct radeon_device *rdev,
int state_index,
u32 misc, u32 misc2)
static int radeon_atombios_parse_power_table_1_3(struct radeon_device *rdev)
static void radeon_atombios_add_pplib_thermal_controller(struct radeon_device *rdev,
ATOM_PPLIB_THERMALCONTROLLER *controller)
static void radeon_atombios_get_default_voltages(struct radeon_device *rdev,
u16 *vddc, u16 *vddci)
static void radeon_atombios_parse_pplib_non_clock_info(struct radeon_device *rdev,
int state_index, int mode_index,
struct _ATOM_PPLIB_NONCLOCK_INFO *non_clock_info)
static bool radeon_atombios_parse_pplib_clock_info(struct radeon_device *rdev,
int state_index, int mode_index,
union pplib_clock_info *clock_info)
static int radeon_atombios_parse_power_table_4_5(struct radeon_device *rdev)
static int radeon_atombios_parse_power_table_6(struct radeon_device *rdev)
void radeon_atombios_get_power_modes(struct radeon_device *rdev)
void radeon_atom_set_clock_gating(struct radeon_device *rdev, int enable)
uint32_t radeon_atom_get_engine_clock(struct radeon_device *rdev)
uint32_t radeon_atom_get_memory_clock(struct radeon_device *rdev)
void radeon_atom_set_engine_clock(struct radeon_device *rdev,
uint32_t eng_clock)
void radeon_atom_set_memory_clock(struct radeon_device *rdev,
uint32_t mem_clock)
union set_voltage ;
void radeon_atom_set_voltage(struct radeon_device *rdev, u16 voltage_level, u8 voltage_type)
int radeon_atom_get_max_vddc(struct radeon_device *rdev,
u16 *voltage)
void radeon_atom_initialize_bios_scratch_regs(struct drm_device *dev)
void radeon_save_bios_scratch_regs(struct radeon_device *rdev)
void radeon_restore_bios_scratch_regs(struct radeon_device *rdev)
void radeon_atom_output_lock(struct drm_encoder *encoder, bool lock)
void
radeon_atombios_connected_scratch_regs(struct drm_connector *connector,
struct drm_encoder *encoder,
bool connected)
void
radeon_atombios_encoder_crtc_scratch_regs(struct drm_encoder *encoder, int crtc)
void
radeon_atombios_encoder_dpms_scratch_regs(struct drm_encoder *encoder, bool on)
