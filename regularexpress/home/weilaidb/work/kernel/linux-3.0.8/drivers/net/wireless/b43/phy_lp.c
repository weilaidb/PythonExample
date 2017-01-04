static inline u16 channel2freq_lp(u8 channel)
static unsigned int b43_lpphy_op_get_default_chan(struct b43_wldev *dev)
static int b43_lpphy_op_allocate(struct b43_wldev *dev)
static void b43_lpphy_op_prepare_structs(struct b43_wldev *dev)
static void b43_lpphy_op_free(struct b43_wldev *dev)
B43_WARN_ON(bus->sprom.revision < 8);
ofdmpo = bus->sprom.ofdm2gpo;
if (cckpo)  else
} else
}
static void lpphy_adjust_gain_table(struct b43_wldev *dev, u32 freq)
static void lpphy_table_init(struct b43_wldev *dev)
static void lpphy_baseband_rev0_1_init(struct b43_wldev *dev)
static void lpphy_save_dig_flt_state(struct b43_wldev *dev)
static void lpphy_restore_dig_flt_state(struct b43_wldev *dev)
static void lpphy_baseband_rev2plus_init(struct b43_wldev *dev)
static void lpphy_baseband_init(struct b43_wldev *dev)
struct b2062_freqdata ;
static void lpphy_2062_init(struct b43_wldev *dev)
static void lpphy_2063_init(struct b43_wldev *dev)
struct lpphy_stx_table_entry ;
static const struct lpphy_stx_table_entry lpphy_stx_table[] = ;
static void lpphy_sync_stx(struct b43_wldev *dev)
static void lpphy_radio_init(struct b43_wldev *dev)
struct lpphy_iq_est ;
static void lpphy_set_rc_cap(struct b43_wldev *dev)
static u8 lpphy_get_bb_mult(struct b43_wldev *dev)
static void lpphy_set_bb_mult(struct b43_wldev *dev, u8 bb_mult)
static void lpphy_set_deaf(struct b43_wldev *dev, bool user)
static void lpphy_clear_deaf(struct b43_wldev *dev, bool user)
static void lpphy_set_trsw_over(struct b43_wldev *dev, bool tx, bool rx)
static void lpphy_disable_crs(struct b43_wldev *dev, bool user)
static void lpphy_restore_crs(struct b43_wldev *dev, bool user)
struct lpphy_tx_gains ;
static void lpphy_disable_rx_gain_override(struct b43_wldev *dev)
static void lpphy_enable_rx_gain_override(struct b43_wldev *dev)
static void lpphy_disable_tx_gain_override(struct b43_wldev *dev)
static void lpphy_enable_tx_gain_override(struct b43_wldev *dev)
static struct lpphy_tx_gains lpphy_get_tx_gains(struct b43_wldev *dev)
static void lpphy_set_dac_gain(struct b43_wldev *dev, u16 dac)
static u16 lpphy_get_pa_gain(struct b43_wldev *dev)
static void lpphy_set_pa_gain(struct b43_wldev *dev, u16 gain)
static void lpphy_set_tx_gains(struct b43_wldev *dev,
struct lpphy_tx_gains gains)
static void lpphy_rev0_1_set_rx_gain(struct b43_wldev *dev, u32 gain)
static void lpphy_rev2plus_set_rx_gain(struct b43_wldev *dev, u32 gain)
static void lpphy_set_rx_gain(struct b43_wldev *dev, u32 gain)
static void lpphy_set_rx_gain_by_index(struct b43_wldev *dev, u16 idx)
static void lpphy_stop_ddfs(struct b43_wldev *dev)
static void lpphy_run_ddfs(struct b43_wldev *dev, int i_on, int q_on,
int incr1, int incr2, int scale_idx)
static bool lpphy_rx_iq_est(struct b43_wldev *dev, u16 samples, u8 time,
struct lpphy_iq_est *iq_est)
static int lpphy_loopback(struct b43_wldev *dev)
static u32 lpphy_qdiv_roundup(u32 dividend, u32 divisor, u8 precision)
static void lpphy_read_tx_pctl_mode_from_hardware(struct b43_wldev *dev)
static void lpphy_write_tx_pctl_mode_to_hardware(struct b43_wldev *dev)
static void lpphy_set_tx_power_control(struct b43_wldev *dev,
enum b43_lpphy_txpctl_mode mode)
static int b43_lpphy_op_switch_channel(struct b43_wldev *dev,
unsigned int new_channel);
static void lpphy_rev0_1_rc_calib(struct b43_wldev *dev)
static void lpphy_rev2plus_rc_calib(struct b43_wldev *dev)
static void lpphy_calibrate_rc(struct b43_wldev *dev)
static void b43_lpphy_op_set_rx_antenna(struct b43_wldev *dev, int antenna)
static void lpphy_set_tx_iqcc(struct b43_wldev *dev, u16 a, u16 b)
static void lpphy_set_tx_power_by_index(struct b43_wldev *dev, u8 index)
static void lpphy_btcoex_override(struct b43_wldev *dev)
static void b43_lpphy_op_software_rfkill(struct b43_wldev *dev,
bool blocked)
static void lpphy_set_analog_filter(struct b43_wldev *dev, int channel)
static void lpphy_set_tssi_mux(struct b43_wldev *dev, enum tssi_mux_mode mode)
static void lpphy_tx_pctl_init_hw(struct b43_wldev *dev)
static void lpphy_tx_pctl_init_sw(struct b43_wldev *dev)
static void lpphy_tx_pctl_init(struct b43_wldev *dev)
static void lpphy_pr41573_workaround(struct b43_wldev *dev)
struct lpphy_rx_iq_comp ;
static const struct lpphy_rx_iq_comp lpphy_5354_iq_table[] = ;
static const struct lpphy_rx_iq_comp lpphy_rev0_1_iq_table[] = ;
static const struct lpphy_rx_iq_comp lpphy_rev2plus_iq_comp = ;
static int lpphy_calc_rx_iq_comp(struct b43_wldev *dev, u16 samples)
static void lpphy_run_samples(struct b43_wldev *dev, u16 samples, u16 loops,
u16 wait)
static void lpphy_start_tx_tone(struct b43_wldev *dev, s32 freq, u16 max)
static void lpphy_stop_tx_tone(struct b43_wldev *dev)
static void lpphy_papd_cal(struct b43_wldev *dev, struct lpphy_tx_gains gains,
int mode, bool useindex, u8 index)
static void lpphy_papd_cal_txpwr(struct b43_wldev *dev)
static int lpphy_rx_iq_cal(struct b43_wldev *dev, bool noise, bool tx,
bool rx, bool pa, struct lpphy_tx_gains *gains)
static void lpphy_calibration(struct b43_wldev *dev)
static u16 b43_lpphy_op_read(struct b43_wldev *dev, u16 reg)
static void b43_lpphy_op_write(struct b43_wldev *dev, u16 reg, u16 value)
static void b43_lpphy_op_maskset(struct b43_wldev *dev, u16 reg, u16 mask,
u16 set)
static u16 b43_lpphy_op_radio_read(struct b43_wldev *dev, u16 reg)
static void b43_lpphy_op_radio_write(struct b43_wldev *dev, u16 reg, u16 value)
struct b206x_channel ;
static const struct b206x_channel b2062_chantbl[] = ;
static const struct b206x_channel b2063_chantbl[] = ;
static void lpphy_b2062_reset_pll_bias(struct b43_wldev *dev)
static void lpphy_b2062_vco_calib(struct b43_wldev *dev)
static int lpphy_b2062_tune(struct b43_wldev *dev,
unsigned int channel)
static void lpphy_b2063_vco_calib(struct b43_wldev *dev)
static int lpphy_b2063_tune(struct b43_wldev *dev,
unsigned int channel)
static int b43_lpphy_op_switch_channel(struct b43_wldev *dev,
unsigned int new_channel)
static int b43_lpphy_op_init(struct b43_wldev *dev)
static void b43_lpphy_op_adjust_txpower(struct b43_wldev *dev)
static enum b43_txpwr_result b43_lpphy_op_recalc_txpower(struct b43_wldev *dev,
bool ignore_tssi)
static void b43_lpphy_op_switch_analog(struct b43_wldev *dev, bool on)
static void b43_lpphy_op_pwork_15sec(struct b43_wldev *dev)
const struct b43_phy_operations b43_phyops_lp = ;
