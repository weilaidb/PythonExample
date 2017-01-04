void zd_chip_init(struct zd_chip *chip,
struct ieee80211_hw *hw,
struct usb_interface *intf)
void zd_chip_clear(struct zd_chip *chip)
static int scnprint_mac_oui(struct zd_chip *chip, char *buffer, size_t size)
static int scnprint_id(struct zd_chip *chip, char *buffer, size_t size)
static void print_id(struct zd_chip *chip)
static zd_addr_t inc_addr(zd_addr_t addr)
int zd_ioread32v_locked(struct zd_chip *chip, u32 *values, const zd_addr_t *addr,
unsigned int count)
static int _zd_iowrite32v_async_locked(struct zd_chip *chip,
const struct zd_ioreq32 *ioreqs,
unsigned int count)
int _zd_iowrite32v_locked(struct zd_chip *chip, const struct zd_ioreq32 *ioreqs,
unsigned int count)
int zd_iowrite16a_locked(struct zd_chip *chip,
const struct zd_ioreq16 *ioreqs, unsigned int count)
int zd_iowrite32a_locked(struct zd_chip *chip,
const struct zd_ioreq32 *ioreqs, unsigned int count)
int zd_ioread16(struct zd_chip *chip, zd_addr_t addr, u16 *value)
int zd_ioread32(struct zd_chip *chip, zd_addr_t addr, u32 *value)
int zd_iowrite16(struct zd_chip *chip, zd_addr_t addr, u16 value)
int zd_iowrite32(struct zd_chip *chip, zd_addr_t addr, u32 value)
int zd_ioread32v(struct zd_chip *chip, const zd_addr_t *addresses,
u32 *values, unsigned int count)
int zd_iowrite32a(struct zd_chip *chip, const struct zd_ioreq32 *ioreqs,
unsigned int count)
static int read_pod(struct zd_chip *chip, u8 *rf_type)
static int zd_write_mac_addr_common(struct zd_chip *chip, const u8 *mac_addr,
const struct zd_ioreq32 *in_reqs,
const char *type)
int zd_write_mac_addr(struct zd_chip *chip, const u8 *mac_addr)
int zd_write_bssid(struct zd_chip *chip, const u8 *bssid)
int zd_read_regdomain(struct zd_chip *chip, u8 *regdomain)
static int read_values(struct zd_chip *chip, u8 *values, size_t count,
zd_addr_t e2p_addr, u32 guard)
static int read_pwr_cal_values(struct zd_chip *chip)
static int read_pwr_int_values(struct zd_chip *chip)
static int read_ofdm_cal_values(struct zd_chip *chip)
static int read_cal_int_tables(struct zd_chip *chip)
int zd_chip_lock_phy_regs(struct zd_chip *chip)
int zd_chip_unlock_phy_regs(struct zd_chip *chip)
static int patch_cr157(struct zd_chip *chip)
static int patch_6m_band_edge(struct zd_chip *chip, u8 channel)
int zd_chip_generic_patch_6m_band(struct zd_chip *chip, int channel)
static int zd1211_hw_reset_phy(struct zd_chip *chip)
static int zd1211b_hw_reset_phy(struct zd_chip *chip)
static int hw_reset_phy(struct zd_chip *chip)
static int zd1211_hw_init_hmac(struct zd_chip *chip)
static int zd1211b_hw_init_hmac(struct zd_chip *chip)
static int hw_init_hmac(struct zd_chip *chip)
struct aw_pt_bi ;
static int get_aw_pt_bi(struct zd_chip *chip, struct aw_pt_bi *s)
static int set_aw_pt_bi(struct zd_chip *chip, struct aw_pt_bi *s)
static int set_beacon_interval(struct zd_chip *chip, u16 interval,
u8 dtim_period, int type)
int zd_set_beacon_interval(struct zd_chip *chip, u16 interval, u8 dtim_period,
int type)
static int hw_init(struct zd_chip *chip)
static zd_addr_t fw_reg_addr(struct zd_chip *chip, u16 offset)
static int dump_cr(struct zd_chip *chip, const zd_addr_t addr,
const char *addr_string)
static int test_init(struct zd_chip *chip)
static void dump_fw_registers(struct zd_chip *chip)
static int print_fw_version(struct zd_chip *chip)
static int set_mandatory_rates(struct zd_chip *chip, int gmode)
int zd_chip_set_rts_cts_rate_locked(struct zd_chip *chip,
int preamble)
int zd_chip_enable_hwint(struct zd_chip *chip)
static int disable_hwint(struct zd_chip *chip)
int zd_chip_disable_hwint(struct zd_chip *chip)
static int read_fw_regs_offset(struct zd_chip *chip)
int zd_chip_read_mac_addr_fw(struct zd_chip *chip, u8 *addr)
int zd_chip_init_hw(struct zd_chip *chip)
static int update_pwr_int(struct zd_chip *chip, u8 channel)
static int update_pwr_cal(struct zd_chip *chip, u8 channel)
static int update_ofdm_cal(struct zd_chip *chip, u8 channel)
static int update_channel_integration_and_calibration(struct zd_chip *chip,
u8 channel)
static int patch_cck_gain(struct zd_chip *chip)
int zd_chip_set_channel(struct zd_chip *chip, u8 channel)
u8 zd_chip_get_channel(struct zd_chip *chip)
int zd_chip_control_leds(struct zd_chip *chip, enum led_status status)
int zd_chip_set_basic_rates(struct zd_chip *chip, u16 cr_rates)
static inline u8 zd_rate_from_ofdm_plcp_header(const void *rx_frame)
u8 zd_rx_rate(const void *rx_frame, const struct rx_status *status)
int zd_chip_switch_radio_on(struct zd_chip *chip)
int zd_chip_switch_radio_off(struct zd_chip *chip)
int zd_chip_enable_int(struct zd_chip *chip)
void zd_chip_disable_int(struct zd_chip *chip)
int zd_chip_enable_rxtx(struct zd_chip *chip)
void zd_chip_disable_rxtx(struct zd_chip *chip)
int zd_rfwritev_locked(struct zd_chip *chip,
const u32* values, unsigned int count, u8 bits)
int zd_rfwrite_cr_locked(struct zd_chip *chip, u32 value)
int zd_rfwritev_cr_locked(struct zd_chip *chip,
const u32 *values, unsigned int count)
int zd_chip_set_multicast_hash(struct zd_chip *chip,
struct zd_mc_hash *hash)
u64 zd_chip_get_tsf(struct zd_chip *chip)
