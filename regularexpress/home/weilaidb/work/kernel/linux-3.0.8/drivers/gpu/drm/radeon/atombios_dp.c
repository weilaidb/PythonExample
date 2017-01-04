#define DP_LINK_CONFIGURATION_SIZE 9
#define DP_LINK_STATUS_SIZE	   6
#define DP_DPCD_SIZE	           8
static char *voltage_names[] = ;
static char *pre_emph_names[] = ;
union aux_channel_transaction ;
static int radeon_process_aux_ch(struct radeon_i2c_chan *chan,
u8 *send, int send_bytes,
u8 *recv, int recv_size,
u8 delay, u8 *ack)
static int radeon_dp_aux_native_write(struct radeon_connector *radeon_connector,
u16 address, u8 *send, u8 send_bytes, u8 delay)
static int radeon_dp_aux_native_read(struct radeon_connector *radeon_connector,
u16 address, u8 *recv, int recv_bytes, u8 delay)
static void radeon_write_dpcd_reg(struct radeon_connector *radeon_connector,
u16 reg, u8 val)
static u8 radeon_read_dpcd_reg(struct radeon_connector *radeon_connector,
u16 reg)
int radeon_dp_i2c_aux_ch(struct i2c_adapter *adapter, int mode,
u8 write_byte, u8 *read_byte)
static u8 dp_link_status(u8 link_status[DP_LINK_STATUS_SIZE], int r)
static u8 dp_get_lane_status(u8 link_status[DP_LINK_STATUS_SIZE],
int lane)
static bool dp_clock_recovery_ok(u8 link_status[DP_LINK_STATUS_SIZE],
int lane_count)
static bool dp_channel_eq_ok(u8 link_status[DP_LINK_STATUS_SIZE],
int lane_count)
static u8 dp_get_adjust_request_voltage(u8 link_status[DP_LINK_STATUS_SIZE],
int lane)
static u8 dp_get_adjust_request_pre_emphasis(u8 link_status[DP_LINK_STATUS_SIZE],
int lane)
#define DP_VOLTAGE_MAX         DP_TRAIN_VOLTAGE_SWING_1200
#define DP_PRE_EMPHASIS_MAX    DP_TRAIN_PRE_EMPHASIS_9_5
static void dp_get_adjust_train(u8 link_status[DP_LINK_STATUS_SIZE],
int lane_count,
u8 train_set[4])
static int convert_bpc_to_bpp(int bpc)
static int dp_get_max_dp_pix_clock(int link_rate,
int lane_num,
int bpp)
static int dp_get_max_link_rate(u8 dpcd[DP_DPCD_SIZE])
static u8 dp_get_max_lane_number(u8 dpcd[DP_DPCD_SIZE])
static u8 dp_get_dp_link_rate_coded(int link_rate)
static int radeon_dp_get_dp_lane_number(struct drm_connector *connector,
u8 dpcd[DP_DPCD_SIZE],
int pix_clock)
static int radeon_dp_get_dp_link_clock(struct drm_connector *connector,
u8 dpcd[DP_DPCD_SIZE],
int pix_clock)
static u8 radeon_dp_encoder_service(struct radeon_device *rdev,
int action, int dp_clock,
u8 ucconfig, u8 lane_num)
u8 radeon_dp_getsinktype(struct radeon_connector *radeon_connector)
bool radeon_dp_getdpcd(struct radeon_connector *radeon_connector)
static void radeon_dp_set_panel_mode(struct drm_encoder *encoder,
struct drm_connector *connector)
void radeon_dp_set_link_config(struct drm_connector *connector,
struct drm_display_mode *mode)
int radeon_dp_mode_valid_helper(struct drm_connector *connector,
struct drm_display_mode *mode)
static bool radeon_dp_get_link_status(struct radeon_connector *radeon_connector,
u8 link_status[DP_LINK_STATUS_SIZE])
bool radeon_dp_needs_link_train(struct radeon_connector *radeon_connector)
struct radeon_dp_link_train_info ;
static void radeon_dp_update_vs_emph(struct radeon_dp_link_train_info *dp_info)
static void radeon_dp_set_tp(struct radeon_dp_link_train_info *dp_info, int tp)
static int radeon_dp_link_train_init(struct radeon_dp_link_train_info *dp_info)
static int radeon_dp_link_train_finish(struct radeon_dp_link_train_info *dp_info)
static int radeon_dp_link_train_cr(struct radeon_dp_link_train_info *dp_info)
static int radeon_dp_link_train_ce(struct radeon_dp_link_train_info *dp_info)
void radeon_dp_link_train(struct drm_encoder *encoder,
struct drm_connector *connector)
