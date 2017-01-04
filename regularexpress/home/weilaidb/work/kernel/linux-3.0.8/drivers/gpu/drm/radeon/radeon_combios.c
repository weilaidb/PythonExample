extern uint32_t
radeon_get_encoder_enum(struct drm_device *dev, uint32_t supported_device,
uint8_t dac);
extern void radeon_link_encoder_connector(struct drm_device *dev);
extern void
radeon_add_legacy_connector(struct drm_device *dev,
uint32_t connector_id,
uint32_t supported_device,
int connector_type,
struct radeon_i2c_bus_rec *i2c_bus,
uint16_t connector_object_id,
struct radeon_hpd *hpd);
extern void
radeon_add_legacy_encoder(struct drm_device *dev, uint32_t encoder_enum,
uint32_t supported_device);
enum radeon_combios_table_offset ;
enum radeon_combios_ddc ;
enum radeon_combios_connector ;
const int legacy_connector_convert[] = ;
static uint16_t combios_get_table_offset(struct drm_device *dev,
enum radeon_combios_table_offset table)
bool radeon_combios_check_hardcoded_edid(struct radeon_device *rdev)
struct edid *
radeon_bios_get_hardcoded_edid(struct radeon_device *rdev)
static struct radeon_i2c_bus_rec combios_setup_i2c_bus(struct radeon_device *rdev,
enum radeon_combios_ddc ddc,
u32 clk_mask,
u32 data_mask)
void radeon_combios_i2c_init(struct radeon_device *rdev)
bool radeon_combios_get_clock_info(struct drm_device *dev)
bool radeon_combios_sideport_present(struct radeon_device *rdev)
static const uint32_t default_primarydac_adj[CHIP_LAST] = ;
static void radeon_legacy_get_primary_dac_info_from_table(struct radeon_device *rdev,
struct radeon_encoder_primary_dac *p_dac)
struct radeon_encoder_primary_dac *radeon_combios_get_primary_dac_info(struct
radeon_encoder
*encoder)
enum radeon_tv_std
radeon_combios_get_tv_info(struct radeon_device *rdev)
static const uint32_t default_tvdac_adj[CHIP_LAST] = ;
static void radeon_legacy_get_tv_dac_info_from_table(struct radeon_device *rdev,
struct radeon_encoder_tv_dac *tv_dac)
struct radeon_encoder_tv_dac *radeon_combios_get_tv_dac_info(struct
radeon_encoder
*encoder)
static struct radeon_encoder_lvds *radeon_legacy_get_lvds_info_from_regs(struct
radeon_device
*rdev)
struct radeon_encoder_lvds *radeon_combios_get_lvds_info(struct radeon_encoder
*encoder)
static const struct radeon_tmds_pll default_tmds_pll[CHIP_LAST][4] = ;
bool radeon_legacy_get_tmds_info_from_table(struct radeon_encoder *encoder,
struct radeon_encoder_int_tmds *tmds)
bool radeon_legacy_get_tmds_info_from_combios(struct radeon_encoder *encoder,
struct radeon_encoder_int_tmds *tmds)
bool radeon_legacy_get_ext_tmds_info_from_table(struct radeon_encoder *encoder,
struct radeon_encoder_ext_tmds *tmds)
bool radeon_legacy_get_ext_tmds_info_from_combios(struct radeon_encoder *encoder,
struct radeon_encoder_ext_tmds *tmds)
bool radeon_get_legacy_connector_info_from_table(struct drm_device *dev)
static bool radeon_apply_legacy_quirks(struct drm_device *dev,
int bios_index,
enum radeon_combios_connector
*legacy_connector,
struct radeon_i2c_bus_rec *ddc_i2c,
struct radeon_hpd *hpd)
static bool radeon_apply_legacy_tv_quirks(struct drm_device *dev)
static uint16_t combios_check_dl_dvi(struct drm_device *dev, int is_dvi_d)
bool radeon_get_legacy_connector_info_from_bios(struct drm_device *dev)
static const char *thermal_controller_names[] = ;
void radeon_combios_get_power_modes(struct radeon_device *rdev)
void radeon_external_tmds_setup(struct drm_encoder *encoder)
bool radeon_combios_external_tmds_setup(struct drm_encoder *encoder)
static void combios_parse_mmio_table(struct drm_device *dev, uint16_t offset)
static void combios_parse_pll_table(struct drm_device *dev, uint16_t offset)
{
struct radeon_device *rdev = dev->dev_private;
if (offset) {
while (RBIOS8(offset)) {
uint8_t cmd = ((RBIOS8(offset) & 0xc0) >> 6);
uint8_t addr = (RBIOS8(offset) & 0x3f);
uint32_t val, shift, tmp;
uint32_t and_mask, or_mask;
offset++;
switch (cmd) {
case 0:
val = RBIOS32(offset);
offset += 4;
WREG32_PLL(addr, val);
break;
case 1:
shift = RBIOS8(offset) * 8;
offset++;
and_mask = RBIOS8(offset) << shift;
and_mask |= ~(0xff << shift);
offset++;
or_mask = RBIOS8(offset) << shift;
offset++;
tmp = RREG32_PLL(addr);
tmp &= and_mask;
tmp |= or_mask;
WREG32_PLL(addr, tmp);
break;
case 2:
case 3:
tmp = 1000;
switch (addr) {
case 1:
udelay(150);
break;
case 2:
udelay(1000);
break;
case 3:
while (tmp--)
break;
case 4:
while (tmp--)
break;
case 5:
tmp =
RREG32_PLL(RADEON_CLK_PWRMGT_CNTL);
if (tmp & RADEON_CG_NO1_DEBUG_0)
static void combios_write_ram_size(struct drm_device *dev)
void radeon_combios_dyn_clk_setup(struct drm_device *dev, int enable)
void radeon_combios_asic_init(struct drm_device *dev)
void radeon_combios_initialize_bios_scratch_regs(struct drm_device *dev)
void radeon_combios_output_lock(struct drm_encoder *encoder, bool lock)
void
radeon_combios_connected_scratch_regs(struct drm_connector *connector,
struct drm_encoder *encoder,
bool connected)
void
radeon_combios_encoder_crtc_scratch_regs(struct drm_encoder *encoder, int crtc)
void
radeon_combios_encoder_dpms_scratch_regs(struct drm_encoder *encoder, bool on)
