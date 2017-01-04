#define RADEON_MODE_H
struct radeon_bo;
struct radeon_device;
#define to_radeon_crtc(x) container_of(x, struct radeon_crtc, base)
#define to_radeon_connector(x) container_of(x, struct radeon_connector, base)
#define to_radeon_encoder(x) container_of(x, struct radeon_encoder, base)
#define to_radeon_framebuffer(x) container_of(x, struct radeon_framebuffer, base)
enum radeon_rmx_type ;
enum radeon_tv_std ;
enum radeon_underscan_type ;
enum radeon_hpd_id ;
#define RADEON_MAX_I2C_BUS 16
struct radeon_i2c_bus_rec ;
struct radeon_tmds_pll ;
#define RADEON_MAX_BIOS_CONNECTOR 16
#define RADEON_PLL_USE_BIOS_DIVS        (1 << 0)
#define RADEON_PLL_NO_ODD_POST_DIV      (1 << 1)
#define RADEON_PLL_USE_REF_DIV          (1 << 2)
#define RADEON_PLL_LEGACY               (1 << 3)
#define RADEON_PLL_PREFER_LOW_REF_DIV   (1 << 4)
#define RADEON_PLL_PREFER_HIGH_REF_DIV  (1 << 5)
#define RADEON_PLL_PREFER_LOW_FB_DIV    (1 << 6)
#define RADEON_PLL_PREFER_HIGH_FB_DIV   (1 << 7)
#define RADEON_PLL_PREFER_LOW_POST_DIV  (1 << 8)
#define RADEON_PLL_PREFER_HIGH_POST_DIV (1 << 9)
#define RADEON_PLL_USE_FRAC_FB_DIV      (1 << 10)
#define RADEON_PLL_PREFER_CLOSEST_LOWER (1 << 11)
#define RADEON_PLL_USE_POST_DIV         (1 << 12)
#define RADEON_PLL_IS_LCD               (1 << 13)
#define RADEON_PLL_PREFER_MINM_OVER_MAXP (1 << 14)
struct radeon_pll ;
struct radeon_i2c_chan ;
enum radeon_connector_table ;
enum radeon_dvo_chip ;
struct radeon_fbdev;
struct radeon_mode_info ;
#define MAX_H_CODE_TIMING_LEN 32
#define MAX_V_CODE_TIMING_LEN 32
struct radeon_tv_regs ;
struct radeon_crtc ;
struct radeon_encoder_primary_dac ;
struct radeon_encoder_lvds ;
struct radeon_encoder_tv_dac ;
struct radeon_encoder_int_tmds ;
struct radeon_encoder_ext_tmds ;
struct radeon_atom_ss ;
struct radeon_encoder_atom_dig ;
struct radeon_encoder_atom_dac ;
struct radeon_encoder ;
struct radeon_connector_atom_dig ;
struct radeon_gpio_rec ;
struct radeon_hpd ;
struct radeon_router ;
struct radeon_connector ;
struct radeon_framebuffer ;
extern enum radeon_tv_std
radeon_combios_get_tv_info(struct radeon_device *rdev);
extern enum radeon_tv_std
radeon_atombios_get_tv_info(struct radeon_device *rdev);
extern struct drm_connector *
radeon_get_connector_for_encoder(struct drm_encoder *encoder);
extern bool radeon_encoder_is_dp_bridge(struct drm_encoder *encoder);
extern bool radeon_connector_encoder_is_dp_bridge(struct drm_connector *connector);
extern bool radeon_connector_encoder_is_hbr2(struct drm_connector *connector);
extern bool radeon_connector_is_dp12_capable(struct drm_connector *connector);
extern void radeon_connector_hotplug(struct drm_connector *connector);
extern int radeon_dp_mode_valid_helper(struct drm_connector *connector,
struct drm_display_mode *mode);
extern void radeon_dp_set_link_config(struct drm_connector *connector,
struct drm_display_mode *mode);
extern void radeon_dp_link_train(struct drm_encoder *encoder,
struct drm_connector *connector);
extern bool radeon_dp_needs_link_train(struct radeon_connector *radeon_connector);
extern u8 radeon_dp_getsinktype(struct radeon_connector *radeon_connector);
extern bool radeon_dp_getdpcd(struct radeon_connector *radeon_connector);
extern void atombios_dig_encoder_setup(struct drm_encoder *encoder, int action, int panel_mode);
extern void radeon_atom_encoder_init(struct radeon_device *rdev);
extern void atombios_dig_transmitter_setup(struct drm_encoder *encoder,
int action, uint8_t lane_num,
uint8_t lane_set);
extern void radeon_atom_ext_encoder_setup_ddc(struct drm_encoder *encoder);
extern struct drm_encoder *radeon_atom_get_external_encoder(struct drm_encoder *encoder);
extern int radeon_dp_i2c_aux_ch(struct i2c_adapter *adapter, int mode,
u8 write_byte, u8 *read_byte);
extern void radeon_i2c_init(struct radeon_device *rdev);
extern void radeon_i2c_fini(struct radeon_device *rdev);
extern void radeon_combios_i2c_init(struct radeon_device *rdev);
extern void radeon_atombios_i2c_init(struct radeon_device *rdev);
extern void radeon_i2c_add(struct radeon_device *rdev,
struct radeon_i2c_bus_rec *rec,
const char *name);
extern struct radeon_i2c_chan *radeon_i2c_lookup(struct radeon_device *rdev,
struct radeon_i2c_bus_rec *i2c_bus);
extern struct radeon_i2c_chan *radeon_i2c_create_dp(struct drm_device *dev,
struct radeon_i2c_bus_rec *rec,
const char *name);
extern struct radeon_i2c_chan *radeon_i2c_create(struct drm_device *dev,
struct radeon_i2c_bus_rec *rec,
const char *name);
extern void radeon_i2c_destroy(struct radeon_i2c_chan *i2c);
extern void radeon_i2c_get_byte(struct radeon_i2c_chan *i2c_bus,
u8 slave_addr,
u8 addr,
u8 *val);
extern void radeon_i2c_put_byte(struct radeon_i2c_chan *i2c,
u8 slave_addr,
u8 addr,
u8 val);
extern void radeon_router_select_ddc_port(struct radeon_connector *radeon_connector);
extern void radeon_router_select_cd_port(struct radeon_connector *radeon_connector);
extern bool radeon_ddc_probe(struct radeon_connector *radeon_connector,
bool requires_extended_probe);
extern int radeon_ddc_get_modes(struct radeon_connector *radeon_connector);
extern struct drm_encoder *radeon_best_encoder(struct drm_connector *connector);
extern bool radeon_atombios_get_ppll_ss_info(struct radeon_device *rdev,
struct radeon_atom_ss *ss,
int id);
extern bool radeon_atombios_get_asic_ss_info(struct radeon_device *rdev,
struct radeon_atom_ss *ss,
int id, u32 clock);
extern void radeon_compute_pll_legacy(struct radeon_pll *pll,
uint64_t freq,
uint32_t *dot_clock_p,
uint32_t *fb_div_p,
uint32_t *frac_fb_div_p,
uint32_t *ref_div_p,
uint32_t *post_div_p);
extern void radeon_compute_pll_avivo(struct radeon_pll *pll,
u32 freq,
u32 *dot_clock_p,
u32 *fb_div_p,
u32 *frac_fb_div_p,
u32 *ref_div_p,
u32 *post_div_p);
extern void radeon_setup_encoder_clones(struct drm_device *dev);
struct drm_encoder *radeon_encoder_legacy_lvds_add(struct drm_device *dev, int bios_index);
struct drm_encoder *radeon_encoder_legacy_primary_dac_add(struct drm_device *dev, int bios_index, int with_tv);
struct drm_encoder *radeon_encoder_legacy_tv_dac_add(struct drm_device *dev, int bios_index, int with_tv);
struct drm_encoder *radeon_encoder_legacy_tmds_int_add(struct drm_device *dev, int bios_index);
struct drm_encoder *radeon_encoder_legacy_tmds_ext_add(struct drm_device *dev, int bios_index);
extern void atombios_dvo_setup(struct drm_encoder *encoder, int action);
extern void atombios_digital_setup(struct drm_encoder *encoder, int action);
extern int atombios_get_encoder_mode(struct drm_encoder *encoder);
extern bool atombios_set_edp_panel_power(struct drm_connector *connector, int action);
extern void radeon_encoder_set_active_device(struct drm_encoder *encoder);
extern void radeon_crtc_load_lut(struct drm_crtc *crtc);
extern int atombios_crtc_set_base(struct drm_crtc *crtc, int x, int y,
struct drm_framebuffer *old_fb);
extern int atombios_crtc_set_base_atomic(struct drm_crtc *crtc,
struct drm_framebuffer *fb,
int x, int y,
enum mode_set_atomic state);
extern int atombios_crtc_mode_set(struct drm_crtc *crtc,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode,
int x, int y,
struct drm_framebuffer *old_fb);
extern void atombios_crtc_dpms(struct drm_crtc *crtc, int mode);
extern int radeon_crtc_set_base(struct drm_crtc *crtc, int x, int y,
struct drm_framebuffer *old_fb);
extern int radeon_crtc_set_base_atomic(struct drm_crtc *crtc,
struct drm_framebuffer *fb,
int x, int y,
enum mode_set_atomic state);
extern int radeon_crtc_do_set_base(struct drm_crtc *crtc,
struct drm_framebuffer *fb,
int x, int y, int atomic);
extern int radeon_crtc_cursor_set(struct drm_crtc *crtc,
struct drm_file *file_priv,
uint32_t handle,
uint32_t width,
uint32_t height);
extern int radeon_crtc_cursor_move(struct drm_crtc *crtc,
int x, int y);
extern int radeon_get_crtc_scanoutpos(struct drm_device *dev, int crtc,
int *vpos, int *hpos);
extern bool radeon_combios_check_hardcoded_edid(struct radeon_device *rdev);
extern struct edid *
radeon_bios_get_hardcoded_edid(struct radeon_device *rdev);
extern bool radeon_atom_get_clock_info(struct drm_device *dev);
extern bool radeon_combios_get_clock_info(struct drm_device *dev);
extern struct radeon_encoder_atom_dig *
radeon_atombios_get_lvds_info(struct radeon_encoder *encoder);
extern bool radeon_atombios_get_tmds_info(struct radeon_encoder *encoder,
struct radeon_encoder_int_tmds *tmds);
extern bool radeon_legacy_get_tmds_info_from_combios(struct radeon_encoder *encoder,
struct radeon_encoder_int_tmds *tmds);
extern bool radeon_legacy_get_tmds_info_from_table(struct radeon_encoder *encoder,
struct radeon_encoder_int_tmds *tmds);
extern bool radeon_legacy_get_ext_tmds_info_from_combios(struct radeon_encoder *encoder,
struct radeon_encoder_ext_tmds *tmds);
extern bool radeon_legacy_get_ext_tmds_info_from_table(struct radeon_encoder *encoder,
struct radeon_encoder_ext_tmds *tmds);
extern struct radeon_encoder_primary_dac *
radeon_atombios_get_primary_dac_info(struct radeon_encoder *encoder);
extern struct radeon_encoder_tv_dac *
radeon_atombios_get_tv_dac_info(struct radeon_encoder *encoder);
extern struct radeon_encoder_lvds *
radeon_combios_get_lvds_info(struct radeon_encoder *encoder);
extern void radeon_combios_get_ext_tmds_info(struct radeon_encoder *encoder);
extern struct radeon_encoder_tv_dac *
radeon_combios_get_tv_dac_info(struct radeon_encoder *encoder);
extern struct radeon_encoder_primary_dac *
radeon_combios_get_primary_dac_info(struct radeon_encoder *encoder);
extern bool radeon_combios_external_tmds_setup(struct drm_encoder *encoder);
extern void radeon_external_tmds_setup(struct drm_encoder *encoder);
extern void radeon_combios_output_lock(struct drm_encoder *encoder, bool lock);
extern void radeon_combios_initialize_bios_scratch_regs(struct drm_device *dev);
extern void radeon_atom_output_lock(struct drm_encoder *encoder, bool lock);
extern void radeon_atom_initialize_bios_scratch_regs(struct drm_device *dev);
extern void radeon_save_bios_scratch_regs(struct radeon_device *rdev);
extern void radeon_restore_bios_scratch_regs(struct radeon_device *rdev);
extern void
radeon_atombios_encoder_crtc_scratch_regs(struct drm_encoder *encoder, int crtc);
extern void
radeon_atombios_encoder_dpms_scratch_regs(struct drm_encoder *encoder, bool on);
extern void
radeon_combios_encoder_crtc_scratch_regs(struct drm_encoder *encoder, int crtc);
extern void
radeon_combios_encoder_dpms_scratch_regs(struct drm_encoder *encoder, bool on);
extern void radeon_crtc_fb_gamma_set(struct drm_crtc *crtc, u16 red, u16 green,
u16 blue, int regno);
extern void radeon_crtc_fb_gamma_get(struct drm_crtc *crtc, u16 *red, u16 *green,
u16 *blue, int regno);
void radeon_framebuffer_init(struct drm_device *dev,
struct radeon_framebuffer *rfb,
struct drm_mode_fb_cmd *mode_cmd,
struct drm_gem_object *obj);
int radeonfb_remove(struct drm_device *dev, struct drm_framebuffer *fb);
bool radeon_get_legacy_connector_info_from_bios(struct drm_device *dev);
bool radeon_get_legacy_connector_info_from_table(struct drm_device *dev);
void radeon_atombios_init_crtc(struct drm_device *dev,
struct radeon_crtc *radeon_crtc);
void radeon_legacy_init_crtc(struct drm_device *dev,
struct radeon_crtc *radeon_crtc);
void radeon_get_clock_info(struct drm_device *dev);
extern bool radeon_get_atom_connector_info_from_object_table(struct drm_device *dev);
extern bool radeon_get_atom_connector_info_from_supported_devices_table(struct drm_device *dev);
void radeon_enc_destroy(struct drm_encoder *encoder);
void radeon_copy_fb(struct drm_device *dev, struct drm_gem_object *dst_obj);
void radeon_combios_asic_init(struct drm_device *dev);
bool radeon_crtc_scaling_mode_fixup(struct drm_crtc *crtc,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode);
void radeon_panel_mode_fixup(struct drm_encoder *encoder,
struct drm_display_mode *adjusted_mode);
void atom_rv515_force_tv_scaler(struct radeon_device *rdev, struct radeon_crtc *radeon_crtc);
void radeon_legacy_tv_adjust_crtc_reg(struct drm_encoder *encoder,
uint32_t *h_total_disp, uint32_t *h_sync_strt_wid,
uint32_t *v_total_disp, uint32_t *v_sync_strt_wid);
void radeon_legacy_tv_adjust_pll1(struct drm_encoder *encoder,
uint32_t *htotal_cntl, uint32_t *ppll_ref_div,
uint32_t *ppll_div_3, uint32_t *pixclks_cntl);
void radeon_legacy_tv_adjust_pll2(struct drm_encoder *encoder,
uint32_t *htotal2_cntl, uint32_t *p2pll_ref_div,
uint32_t *p2pll_div_0, uint32_t *pixclks_cntl);
void radeon_legacy_tv_mode_set(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode);
int radeon_fbdev_init(struct radeon_device *rdev);
void radeon_fbdev_fini(struct radeon_device *rdev);
void radeon_fbdev_set_suspend(struct radeon_device *rdev, int state);
int radeon_fbdev_total_size(struct radeon_device *rdev);
bool radeon_fbdev_robj_is_fb(struct radeon_device *rdev, struct radeon_bo *robj);
void radeon_fb_output_poll_changed(struct radeon_device *rdev);
void radeon_crtc_handle_flip(struct radeon_device *rdev, int crtc_id);
int radeon_align_pitch(struct radeon_device *rdev, int width, int bpp, bool tiled);
