#define DP_LINK_STATUS_SIZE	6
#define DP_LINK_CHECK_TIMEOUT	(10 * 1000)
#define DP_LINK_CONFIGURATION_SIZE	9
struct intel_dp ;
static bool is_edp(struct intel_dp *intel_dp)
static bool is_pch_edp(struct intel_dp *intel_dp)
static struct intel_dp *enc_to_intel_dp(struct drm_encoder *encoder)
static struct intel_dp *intel_attached_dp(struct drm_connector *connector)
bool intel_encoder_is_pch_edp(struct drm_encoder *encoder)
static void intel_dp_start_link_train(struct intel_dp *intel_dp);
static void intel_dp_complete_link_train(struct intel_dp *intel_dp);
static void intel_dp_link_down(struct intel_dp *intel_dp);
void
intel_edp_link_config (struct intel_encoder *intel_encoder,
int *lane_num, int *link_bw)
static int
intel_dp_max_lane_count(struct intel_dp *intel_dp)
static int
intel_dp_max_link_bw(struct intel_dp *intel_dp)
static int
intel_dp_link_clock(uint8_t link_bw)
static int
intel_dp_link_required(struct drm_device *dev, struct intel_dp *intel_dp, int pixel_clock)
static int
intel_dp_max_data_rate(int max_link_clock, int max_lanes)
static int
intel_dp_mode_valid(struct drm_connector *connector,
struct drm_display_mode *mode)
static uint32_t
pack_aux(uint8_t *src, int src_bytes)
static void
unpack_aux(uint32_t src, uint8_t *dst, int dst_bytes)
static int
intel_hrawclk(struct drm_device *dev)
static int
intel_dp_aux_ch(struct intel_dp *intel_dp,
uint8_t *send, int send_bytes,
uint8_t *recv, int recv_size)
static int
intel_dp_aux_native_write(struct intel_dp *intel_dp,
uint16_t address, uint8_t *send, int send_bytes)
static int
intel_dp_aux_native_write_1(struct intel_dp *intel_dp,
uint16_t address, uint8_t byte)
static int
intel_dp_aux_native_read(struct intel_dp *intel_dp,
uint16_t address, uint8_t *recv, int recv_bytes)
static int
intel_dp_i2c_aux_ch(struct i2c_adapter *adapter, int mode,
uint8_t write_byte, uint8_t *read_byte)
static int
intel_dp_i2c_init(struct intel_dp *intel_dp,
struct intel_connector *intel_connector, const char *name)
static bool
intel_dp_mode_fixup(struct drm_encoder *encoder, struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
struct intel_dp_m_n ;
static void
intel_reduce_ratio(uint32_t *num, uint32_t *den)
static void
intel_dp_compute_m_n(int bpp,
int nlanes,
int pixel_clock,
int link_clock,
struct intel_dp_m_n *m_n)
void
intel_dp_set_m_n(struct drm_crtc *crtc, struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void
intel_dp_mode_set(struct drm_encoder *encoder, struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void ironlake_edp_panel_vdd_on(struct intel_dp *intel_dp)
static void ironlake_edp_panel_vdd_off(struct intel_dp *intel_dp)
static bool ironlake_edp_panel_on (struct intel_dp *intel_dp)
static void ironlake_edp_panel_off (struct drm_device *dev)
static void ironlake_edp_backlight_on (struct drm_device *dev)
static void ironlake_edp_backlight_off (struct drm_device *dev)
static void ironlake_edp_pll_on(struct drm_encoder *encoder)
static void ironlake_edp_pll_off(struct drm_encoder *encoder)
static void intel_dp_sink_dpms(struct intel_dp *intel_dp, int mode)
static void intel_dp_prepare(struct drm_encoder *encoder)
static void intel_dp_commit(struct drm_encoder *encoder)
static void
intel_dp_dpms(struct drm_encoder *encoder, int mode)
static bool
intel_dp_aux_native_read_retry(struct intel_dp *intel_dp, uint16_t address,
uint8_t *recv, int recv_bytes)
static bool
intel_dp_get_link_status(struct intel_dp *intel_dp)
static uint8_t
intel_dp_link_status(uint8_t link_status[DP_LINK_STATUS_SIZE],
int r)
static uint8_t
intel_get_adjust_request_voltage(uint8_t link_status[DP_LINK_STATUS_SIZE],
int lane)
static uint8_t
intel_get_adjust_request_pre_emphasis(uint8_t link_status[DP_LINK_STATUS_SIZE],
int lane)
#define I830_DP_VOLTAGE_MAX	    DP_TRAIN_VOLTAGE_SWING_800
static uint8_t
intel_dp_pre_emphasis_max(uint8_t voltage_swing)
static void
intel_get_adjust_train(struct intel_dp *intel_dp)
static uint32_t
intel_dp_signal_levels(uint8_t train_set, int lane_count)
static uint32_t
intel_gen6_edp_signal_levels(uint8_t train_set)
static uint8_t
intel_get_lane_status(uint8_t link_status[DP_LINK_STATUS_SIZE],
int lane)
static bool
intel_clock_recovery_ok(uint8_t link_status[DP_LINK_STATUS_SIZE], int lane_count)
#define CHANNEL_EQ_BITS (DP_LANE_CR_DONE|\
DP_LANE_CHANNEL_EQ_DONE|\
DP_LANE_SYMBOL_LOCKED)
static bool
intel_channel_eq_ok(struct intel_dp *intel_dp)
static bool
intel_dp_set_link_train(struct intel_dp *intel_dp,
uint32_t dp_reg_value,
uint8_t dp_train_pat)
static void
intel_dp_start_link_train(struct intel_dp *intel_dp)
static void
intel_dp_complete_link_train(struct intel_dp *intel_dp)
static void
intel_dp_link_down(struct intel_dp *intel_dp)
static void
intel_dp_check_link_status(struct intel_dp *intel_dp)
static enum drm_connector_status
ironlake_dp_detect(struct intel_dp *intel_dp)
static enum drm_connector_status
g4x_dp_detect(struct intel_dp *intel_dp)
static enum drm_connector_status
intel_dp_detect(struct drm_connector *connector, bool force)
static int intel_dp_get_modes(struct drm_connector *connector)
static bool
intel_dp_detect_audio(struct drm_connector *connector)
static int
intel_dp_set_property(struct drm_connector *connector,
struct drm_property *property,
uint64_t val)
static void
intel_dp_destroy (struct drm_connector *connector)
static void intel_dp_encoder_destroy(struct drm_encoder *encoder)
static const struct drm_encoder_helper_funcs intel_dp_helper_funcs = ;
static const struct drm_connector_funcs intel_dp_connector_funcs = ;
static const struct drm_connector_helper_funcs intel_dp_connector_helper_funcs = ;
static const struct drm_encoder_funcs intel_dp_enc_funcs = ;
static void
intel_dp_hot_plug(struct intel_encoder *intel_encoder)
int
intel_trans_dp_port_sel (struct drm_crtc *crtc)
bool intel_dpd_is_edp(struct drm_device *dev)
static void
intel_dp_add_properties(struct intel_dp *intel_dp, struct drm_connector *connector)
void
intel_dp_init(struct drm_device *dev, int output_reg)
