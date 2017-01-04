#define PLL_2064_NDIV		90
#define PLL_2064_LOW_END_VCO 	3000
#define PLL_2064_LOW_END_KVCO 	27
#define PLL_2064_HIGH_END_VCO	4200
#define PLL_2064_HIGH_END_KVCO	68
#define PLL_2064_LOOP_BW_DOUBLER	200
#define PLL_2064_D30_DOUBLER		10500
#define PLL_2064_LOOP_BW	260
#define PLL_2064_D30		8000
#define PLL_2064_CAL_REF_TO	8
#define PLL_2064_MHZ		1000000
#define PLL_2064_OPEN_LOOP_DELAY	5
#define TEMPSENSE 			1
#define VBATSENSE           2
#define NOISE_IF_UPD_CHK_INTERVAL	1
#define NOISE_IF_UPD_RST_INTERVAL	60
#define NOISE_IF_UPD_THRESHOLD_CNT	1
#define NOISE_IF_UPD_TRHRESHOLD	50
#define NOISE_IF_UPD_TIMEOUT		1000
#define NOISE_IF_OFF			0
#define NOISE_IF_CHK			1
#define NOISE_IF_ON			2
#define PAPD_BLANKING_PROFILE 		3
#define PAPD2LUT			0
#define PAPD_CORR_NORM 			0
#define PAPD_BLANKING_THRESHOLD 	0
#define PAPD_STOP_AFTER_LAST_UPDATE	0
#define LCN_TARGET_PWR  60
#define LCN_VBAT_OFFSET_433X 34649679
#define LCN_VBAT_SLOPE_433X  8258032
#define LCN_VBAT_SCALE_NOM  53
#define LCN_VBAT_SCALE_DEN  432
#define LCN_TEMPSENSE_OFFSET  80812
#define LCN_TEMPSENSE_DEN  2647
#define LCNPHY_txgainctrlovrval1_pagain_ovr_val1_SHIFT \
(0 + 8)
#define LCNPHY_txgainctrlovrval1_pagain_ovr_val1_MASK \
(0x7f << LCNPHY_txgainctrlovrval1_pagain_ovr_val1_SHIFT)
#define LCNPHY_stxtxgainctrlovrval1_pagain_ovr_val1_SHIFT \
(0 + 8)
#define LCNPHY_stxtxgainctrlovrval1_pagain_ovr_val1_MASK \
(0x7f << LCNPHY_stxtxgainctrlovrval1_pagain_ovr_val1_SHIFT)
#define wlc_lcnphy_enable_tx_gain_override(pi) \
wlc_lcnphy_set_tx_gain_override(pi, true)
#define wlc_lcnphy_disable_tx_gain_override(pi) \
wlc_lcnphy_set_tx_gain_override(pi, false)
#define wlc_lcnphy_iqcal_active(pi)	\
(read_phy_reg((pi), 0x451) & \
((0x1 << 15) | (0x1 << 14)))
#define txpwrctrl_off(pi) (0x7 != ((read_phy_reg(pi, 0x4a4) & 0xE000) >> 13))
#define wlc_lcnphy_tempsense_based_pwr_ctrl_enabled(pi) \
(pi->temppwrctrl_capable)
#define wlc_lcnphy_tssi_based_pwr_ctrl_enabled(pi) \
(pi->hwpwrctrl_capable)
#define SWCTRL_BT_TX		0x18
#define SWCTRL_OVR_DISABLE	0x40
#define	AFE_CLK_INIT_MODE_TXRX2X	1
#define	AFE_CLK_INIT_MODE_PAPD		0
#define LCNPHY_TBL_ID_IQLOCAL			0x00
#define LCNPHY_TBL_ID_RFSEQ         0x08
#define LCNPHY_TBL_ID_GAIN_IDX		0x0d
#define LCNPHY_TBL_ID_SW_CTRL			0x0f
#define LCNPHY_TBL_ID_GAIN_TBL		0x12
#define LCNPHY_TBL_ID_SPUR			0x14
#define LCNPHY_TBL_ID_SAMPLEPLAY		0x15
#define LCNPHY_TBL_ID_SAMPLEPLAY1		0x16
#define LCNPHY_TX_PWR_CTRL_RATE_OFFSET 	832
#define LCNPHY_TX_PWR_CTRL_MAC_OFFSET 	128
#define LCNPHY_TX_PWR_CTRL_GAIN_OFFSET 	192
#define LCNPHY_TX_PWR_CTRL_IQ_OFFSET		320
#define LCNPHY_TX_PWR_CTRL_LO_OFFSET		448
#define LCNPHY_TX_PWR_CTRL_PWR_OFFSET		576
#define LCNPHY_TX_PWR_CTRL_START_INDEX_2G_4313	140
#define LCNPHY_TX_PWR_CTRL_START_NPT		1
#define LCNPHY_TX_PWR_CTRL_MAX_NPT			7
#define LCNPHY_NOISE_SAMPLES_DEFAULT 5000
#define LCNPHY_ACI_DETECT_START      1
#define LCNPHY_ACI_DETECT_PROGRESS   2
#define LCNPHY_ACI_DETECT_STOP       3
#define LCNPHY_ACI_CRSHIFRMLO_TRSH 100
#define LCNPHY_ACI_GLITCH_TRSH 2000
#define	LCNPHY_ACI_TMOUT 250
#define LCNPHY_ACI_DETECT_TIMEOUT  2
#define LCNPHY_ACI_START_DELAY 0
#define wlc_lcnphy_tx_gain_override_enabled(pi) \
(0 != (read_phy_reg((pi), 0x43b) & (0x1 << 6)))
#define wlc_lcnphy_total_tx_frames(pi) \
wlapi_bmac_read_shm((pi)->sh->physhim, M_UCODE_MACSTAT + offsetof(macstat_t, txallfrm))
typedef struct  lcnphy_txgains_t;
typedef enum  lcnphy_cal_mode_t;
typedef struct  lcnphy_txcalgains_t;
typedef struct  lcnphy_rx_iqcomp_t;
typedef struct  lcnphy_spb_tone_t;
typedef struct  lcnphy_unsign16_struct;
typedef struct  lcnphy_iq_est_t;
typedef struct  lcnphy_sfo_cfg_t;
typedef enum  lcnphy_papd_cal_type_t;
typedef u16 iqcal_gain_params_lcnphy[9];
static const iqcal_gain_params_lcnphy tbl_iqcal_gainparams_lcnphy_2G[] = ;
static const iqcal_gain_params_lcnphy *tbl_iqcal_gainparams_lcnphy[1] = ;
static const u16 iqcal_gainparams_numgains_lcnphy[1] = ;
static const lcnphy_sfo_cfg_t lcnphy_sfo_cfg[] = ;
static const
u16 lcnphy_iqcal_loft_gainladder[] = ;
static const
u16 lcnphy_iqcal_ir_gainladder[] = ;
static const
lcnphy_spb_tone_t lcnphy_spb_tone_3750[] = ;
static const
u16 iqlo_loopback_rf_regs[20] = ;
static const
u16 tempsense_phy_regs[14] = ;
static const
u16 rxiq_cal_rf_reg[11] = ;
static const
lcnphy_rx_iqcomp_t lcnphy_rx_iqcomp_table_rev0[] = ;
static const u32 lcnphy_23bitgaincode_table[] = ;
static const s8 lcnphy_gain_table[] = ;
static const s8 lcnphy_gain_index_offset_for_rssi[] = ;
extern const u8 spur_tbl_rev0[];
extern const u32 dot11lcnphytbl_rx_gain_info_sz_rev1;
extern const dot11lcnphytbl_info_t dot11lcnphytbl_rx_gain_info_rev1[];
extern const dot11lcnphytbl_info_t dot11lcn_sw_ctrl_tbl_info_4313_bt_epa;
extern const dot11lcnphytbl_info_t dot11lcn_sw_ctrl_tbl_info_4313_bt_epa_p250;
typedef struct _chan_info_2064_lcnphy  chan_info_2064_lcnphy_t;
static chan_info_2064_lcnphy_t chan_info_2064_lcnphy[] = ;
lcnphy_radio_regs_t lcnphy_radio_regs_2064[] = ;
#define LCNPHY_NUM_DIG_FILT_COEFFS 16
#define LCNPHY_NUM_TX_DIG_FILTERS_CCK 13
u16
LCNPHY_txdigfiltcoeffs_cck[LCNPHY_NUM_TX_DIG_FILTERS_CCK]
[LCNPHY_NUM_DIG_FILT_COEFFS + 1] = ;
#define LCNPHY_NUM_TX_DIG_FILTERS_OFDM 3
u16
LCNPHY_txdigfiltcoeffs_ofdm[LCNPHY_NUM_TX_DIG_FILTERS_OFDM]
[LCNPHY_NUM_DIG_FILT_COEFFS + 1] = ;
#define wlc_lcnphy_set_start_tx_pwr_idx(pi, idx) \
mod_phy_reg(pi, 0x4a4, \
(0x1ff << 0), \
(u16)(idx) << 0)
#define wlc_lcnphy_set_tx_pwr_npt(pi, npt) \
mod_phy_reg(pi, 0x4a5, \
(0x7 << 8), \
(u16)(npt) << 8)
#define wlc_lcnphy_get_tx_pwr_ctrl(pi) \
(read_phy_reg((pi), 0x4a4) & \
((0x1 << 15) | \
(0x1 << 14) | \
(0x1 << 13)))
#define wlc_lcnphy_get_tx_pwr_npt(pi) \
((read_phy_reg(pi, 0x4a5) & \
(0x7 << 8)) >> \
8)
#define wlc_lcnphy_get_current_tx_pwr_idx_if_pwrctrl_on(pi) \
(read_phy_reg(pi, 0x473) & 0x1ff)
#define wlc_lcnphy_get_target_tx_pwr(pi) \
((read_phy_reg(pi, 0x4a7) & \
(0xff << 0)) >> \
0)
#define wlc_lcnphy_set_target_tx_pwr(pi, target) \
mod_phy_reg(pi, 0x4a7, \
(0xff << 0), \
(u16)(target) << 0)
#define wlc_radio_2064_rcal_done(pi) (0 != (read_radio_reg(pi, RADIO_2064_REG05C) & 0x20))
#define tempsense_done(pi) (0x8000 == (read_phy_reg(pi, 0x476) & 0x8000))
#define LCNPHY_IQLOCC_READ(val) ((u8)(-(s8)(((val) & 0xf0) >> 4) + (s8)((val) & 0x0f)))
#define FIXED_TXPWR 78
#define LCNPHY_TEMPSENSE(val) ((s16)((val > 255) ? (val - 512) : val))
static u32 wlc_lcnphy_qdiv_roundup(u32 divident, u32 divisor,
u8 precision);
static void wlc_lcnphy_set_rx_gain_by_distribution(phy_info_t *pi,
u16 ext_lna, u16 trsw,
u16 biq2, u16 biq1,
u16 tia, u16 lna2,
u16 lna1);
static void wlc_lcnphy_clear_tx_power_offsets(phy_info_t *pi);
static void wlc_lcnphy_set_pa_gain(phy_info_t *pi, u16 gain);
static void wlc_lcnphy_set_trsw_override(phy_info_t *pi, bool tx, bool rx);
static void wlc_lcnphy_set_bbmult(phy_info_t *pi, u8 m0);
static u8 wlc_lcnphy_get_bbmult(phy_info_t *pi);
static void wlc_lcnphy_get_tx_gain(phy_info_t *pi, lcnphy_txgains_t *gains);
static void wlc_lcnphy_set_tx_gain_override(phy_info_t *pi, bool bEnable);
static void wlc_lcnphy_toggle_afe_pwdn(phy_info_t *pi);
static void wlc_lcnphy_rx_gain_override_enable(phy_info_t *pi, bool enable);
static void wlc_lcnphy_set_tx_gain(phy_info_t *pi,
lcnphy_txgains_t *target_gains);
static bool wlc_lcnphy_rx_iq_est(phy_info_t *pi, u16 num_samps,
u8 wait_time, lcnphy_iq_est_t *iq_est);
static bool wlc_lcnphy_calc_rx_iq_comp(phy_info_t *pi, u16 num_samps);
static u16 wlc_lcnphy_get_pa_gain(phy_info_t *pi);
static void wlc_lcnphy_afe_clk_init(phy_info_t *pi, u8 mode);
extern void wlc_lcnphy_tx_pwr_ctrl_init(wlc_phy_t *ppi);
static void wlc_lcnphy_radio_2064_channel_tune_4313(phy_info_t *pi,
u8 channel);
static void wlc_lcnphy_load_tx_gain_table(phy_info_t *pi,
const lcnphy_tx_gain_tbl_entry *g);
static void wlc_lcnphy_samp_cap(phy_info_t *pi, int clip_detect_algo,
u16 thresh, s16 *ptr, int mode);
static int wlc_lcnphy_calc_floor(s16 coeff, int type);
static void wlc_lcnphy_tx_iqlo_loopback(phy_info_t *pi,
u16 *values_to_save);
static void wlc_lcnphy_tx_iqlo_loopback_cleanup(phy_info_t *pi,
u16 *values_to_save);
static void wlc_lcnphy_set_cc(phy_info_t *pi, int cal_type, s16 coeff_x,
s16 coeff_y);
static lcnphy_unsign16_struct wlc_lcnphy_get_cc(phy_info_t *pi, int cal_type);
static void wlc_lcnphy_a1(phy_info_t *pi, int cal_type,
int num_levels, int step_size_lg2);
static void wlc_lcnphy_tx_iqlo_soft_cal_full(phy_info_t *pi);
static void wlc_lcnphy_set_chanspec_tweaks(phy_info_t *pi,
chanspec_t chanspec);
static void wlc_lcnphy_agc_temp_init(phy_info_t *pi);
static void wlc_lcnphy_temp_adj(phy_info_t *pi);
static void wlc_lcnphy_clear_papd_comptable(phy_info_t *pi);
static void wlc_lcnphy_baseband_init(phy_info_t *pi);
static void wlc_lcnphy_radio_init(phy_info_t *pi);
static void wlc_lcnphy_rc_cal(phy_info_t *pi);
static void wlc_lcnphy_rcal(phy_info_t *pi);
static void wlc_lcnphy_txrx_spur_avoidance_mode(phy_info_t *pi, bool enable);
static int wlc_lcnphy_load_tx_iir_filter(phy_info_t *pi, bool is_ofdm,
s16 filt_type);
static void wlc_lcnphy_set_rx_iq_comp(phy_info_t *pi, u16 a, u16 b);
void wlc_lcnphy_write_table(phy_info_t *pi, const phytbl_info_t *pti)
void wlc_lcnphy_read_table(phy_info_t *pi, phytbl_info_t *pti)
static void
wlc_lcnphy_common_read_table(phy_info_t *pi, u32 tbl_id,
const void *tbl_ptr, u32 tbl_len,
u32 tbl_width, u32 tbl_offset)
static void
wlc_lcnphy_common_write_table(phy_info_t *pi, u32 tbl_id,
const void *tbl_ptr, u32 tbl_len,
u32 tbl_width, u32 tbl_offset)
static u32
wlc_lcnphy_qdiv_roundup(u32 dividend, u32 divisor, u8 precision)
static int wlc_lcnphy_calc_floor(s16 coeff_x, int type)
s8 wlc_lcnphy_get_current_tx_pwr_idx(phy_info_t *pi)
static u32 wlc_lcnphy_measure_digital_power(phy_info_t *pi, u16 nsamples)
void wlc_lcnphy_crsuprs(phy_info_t *pi, int channel)
static void wlc_lcnphy_toggle_afe_pwdn(phy_info_t *pi)
static void wlc_lcnphy_txrx_spur_avoidance_mode(phy_info_t *pi, bool enable)
void wlc_phy_chanspec_set_lcnphy(phy_info_t *pi, chanspec_t chanspec)
static void wlc_lcnphy_set_dac_gain(phy_info_t *pi, u16 dac_gain)
static void wlc_lcnphy_set_tx_gain_override(phy_info_t *pi, bool bEnable)
static u16 wlc_lcnphy_get_pa_gain(phy_info_t *pi)
static void
wlc_lcnphy_set_tx_gain(phy_info_t *pi, lcnphy_txgains_t *target_gains)
static void wlc_lcnphy_set_bbmult(phy_info_t *pi, u8 m0)
static void wlc_lcnphy_clear_tx_power_offsets(phy_info_t *pi)
typedef enum  lcnphy_tssi_mode_t;
static void wlc_lcnphy_set_tssi_mux(phy_info_t *pi, lcnphy_tssi_mode_t pos)
static u16 wlc_lcnphy_rfseq_tbl_adc_pwrup(phy_info_t *pi)
static void wlc_lcnphy_pwrctrl_rssiparams(phy_info_t *pi)
static void wlc_lcnphy_tssi_setup(phy_info_t *pi)
void wlc_lcnphy_tx_pwr_update_npt(phy_info_t *pi)
s32 wlc_lcnphy_tssi2dbm(s32 tssi, s32 a1, s32 b0, s32 b1)
static void wlc_lcnphy_txpower_reset_npt(phy_info_t *pi)
void wlc_lcnphy_txpower_recalc_target(phy_info_t *pi)
static void wlc_lcnphy_set_tx_pwr_soft_ctrl(phy_info_t *pi, s8 index)
static s8 wlc_lcnphy_tempcompensated_txpwrctrl(phy_info_t *pi)
static u16 wlc_lcnphy_set_tx_pwr_ctrl_mode(phy_info_t *pi, u16 mode)
void wlc_lcnphy_set_tx_pwr_ctrl(phy_info_t *pi, u16 mode)
static bool wlc_lcnphy_iqcal_wait(phy_info_t *pi)
static void
wlc_lcnphy_tx_iqlo_cal(phy_info_t *pi,
lcnphy_txgains_t *target_gains,
lcnphy_cal_mode_t cal_mode, bool keep_tone)
static void wlc_lcnphy_idle_tssi_est(wlc_phy_t *ppi)
static void wlc_lcnphy_vbat_temp_sense_setup(phy_info_t *pi, u8 mode)
void WLBANDINITFN(wlc_lcnphy_tx_pwr_ctrl_init) (wlc_phy_t *ppi)
static u8 wlc_lcnphy_get_bbmult(phy_info_t *pi)
static void wlc_lcnphy_set_pa_gain(phy_info_t *pi, u16 gain)
void
wlc_lcnphy_get_radio_loft(phy_info_t *pi,
u8 *ei0, u8 *eq0, u8 *fi0, u8 *fq0)
static void wlc_lcnphy_get_tx_gain(phy_info_t *pi, lcnphy_txgains_t *gains)
void wlc_lcnphy_set_tx_iqcc(phy_info_t *pi, u16 a, u16 b)
void wlc_lcnphy_set_tx_locc(phy_info_t *pi, u16 didq)
void wlc_lcnphy_set_tx_pwr_by_index(phy_info_t *pi, int index)
static void wlc_lcnphy_set_trsw_override(phy_info_t *pi, bool tx, bool rx)
static void wlc_lcnphy_clear_papd_comptable(phy_info_t *pi)
static void
wlc_lcnphy_set_rx_gain_by_distribution(phy_info_t *pi,
u16 trsw,
u16 ext_lna,
u16 biq2,
u16 biq1,
u16 tia, u16 lna2, u16 lna1)
static void wlc_lcnphy_rx_gain_override_enable(phy_info_t *pi, bool enable)
void wlc_lcnphy_tx_pu(phy_info_t *pi, bool bEnable)
static void
wlc_lcnphy_run_samples(phy_info_t *pi,
u16 num_samps,
u16 num_loops, u16 wait, bool iqcalmode)
void wlc_lcnphy_deaf_mode(phy_info_t *pi, bool mode)
void
wlc_lcnphy_start_tx_tone(phy_info_t *pi, s32 f_kHz, u16 max_val,
bool iqcalmode)
void wlc_lcnphy_stop_tx_tone(phy_info_t *pi)
static void wlc_lcnphy_clear_trsw_override(phy_info_t *pi)
void wlc_lcnphy_get_tx_iqcc(phy_info_t *pi, u16 *a, u16 *b)
u16 wlc_lcnphy_get_tx_locc(phy_info_t *pi)
static void wlc_lcnphy_txpwrtbl_iqlo_cal(phy_info_t *pi)
s16 wlc_lcnphy_tempsense_new(phy_info_t *pi, bool mode)
u16 wlc_lcnphy_tempsense(phy_info_t *pi, bool mode)
s8 wlc_lcnphy_tempsense_degree(phy_info_t *pi, bool mode)
s8 wlc_lcnphy_vbatsense(phy_info_t *pi, bool mode)
static void wlc_lcnphy_afe_clk_init(phy_info_t *pi, u8 mode)
static bool
wlc_lcnphy_rx_iq_est(phy_info_t *pi,
u16 num_samps,
u8 wait_time, lcnphy_iq_est_t *iq_est)
static bool wlc_lcnphy_calc_rx_iq_comp(phy_info_t *pi, u16 num_samps)
static bool
wlc_lcnphy_rx_iq_cal(phy_info_t *pi, const lcnphy_rx_iqcomp_t *iqcomp,
int iqcomp_sz, bool tx_switch, bool rx_switch, int module,
int tx_gain_idx)
static void wlc_lcnphy_temp_adj(phy_info_t *pi)
static void wlc_lcnphy_glacial_timer_based_cal(phy_info_t *pi)
static void wlc_lcnphy_periodic_cal(phy_info_t *pi)
void wlc_lcnphy_calib_modes(phy_info_t *pi, uint mode)
void wlc_lcnphy_get_tssi(phy_info_t *pi, s8 *ofdm_pwr, s8 *cck_pwr)
void WLBANDINITFN(wlc_phy_cal_init_lcnphy) (phy_info_t *pi)
static void wlc_lcnphy_set_chanspec_tweaks(phy_info_t *pi, chanspec_t chanspec)
void wlc_lcnphy_tx_power_adjustment(wlc_phy_t *ppi)
static void wlc_lcnphy_set_rx_iq_comp(phy_info_t *pi, u16 a, u16 b)
void WLBANDINITFN(wlc_phy_init_lcnphy) (phy_info_t *pi)
static void
wlc_lcnphy_tx_iqlo_loopback(phy_info_t *pi, u16 *values_to_save)
static void
wlc_lcnphy_samp_cap(phy_info_t *pi, int clip_detect_algo, u16 thresh,
s16 *ptr, int mode)
static void wlc_lcnphy_tx_iqlo_soft_cal_full(phy_info_t *pi)
static void
wlc_lcnphy_set_cc(phy_info_t *pi, int cal_type, s16 coeff_x, s16 coeff_y)
static lcnphy_unsign16_struct wlc_lcnphy_get_cc(phy_info_t *pi, int cal_type)
static void
wlc_lcnphy_a1(phy_info_t *pi, int cal_type, int num_levels, int step_size_lg2)
static void
wlc_lcnphy_tx_iqlo_loopback_cleanup(phy_info_t *pi, u16 *values_to_save)
static void
WLBANDINITFN(wlc_lcnphy_load_tx_gain_table) (phy_info_t *pi,
const lcnphy_tx_gain_tbl_entry *
gain_table)
static void wlc_lcnphy_load_rfpower(phy_info_t *pi)
static void WLBANDINITFN(wlc_lcnphy_tbl_init) (phy_info_t *pi)
static void WLBANDINITFN(wlc_lcnphy_rev0_baseband_init) (phy_info_t *pi)
static void WLBANDINITFN(wlc_lcnphy_rev2_baseband_init) (phy_info_t *pi)
static void wlc_lcnphy_agc_temp_init(phy_info_t *pi)
static void WLBANDINITFN(wlc_lcnphy_bu_tweaks) (phy_info_t *pi)
static void WLBANDINITFN(wlc_lcnphy_baseband_init) (phy_info_t *pi)
static void WLBANDINITFN(wlc_radio_2064_init) (phy_info_t *pi)
static void WLBANDINITFN(wlc_lcnphy_radio_init) (phy_info_t *pi)
static void wlc_lcnphy_rcal(phy_info_t *pi)
static void wlc_lcnphy_rc_cal(phy_info_t *pi)
static bool wlc_phy_txpwr_srom_read_lcnphy(phy_info_t *pi)
void wlc_2064_vco_cal(phy_info_t *pi)
static void
wlc_lcnphy_radio_2064_channel_tune_4313(phy_info_t *pi, u8 channel)
bool wlc_phy_tpc_isenabled_lcnphy(phy_info_t *pi)
void wlc_phy_txpower_recalc_target_lcnphy(phy_info_t *pi)
void wlc_phy_detach_lcnphy(phy_info_t *pi)
bool wlc_phy_attach_lcnphy(phy_info_t *pi)
static void wlc_lcnphy_set_rx_gain(phy_info_t *pi, u32 gain)
static u32 wlc_lcnphy_get_receive_power(phy_info_t *pi, s32 *gain_index)
s32 wlc_lcnphy_rx_signal_power(phy_info_t *pi, s32 gain_index)
static int
wlc_lcnphy_load_tx_iir_filter(phy_info_t *pi, bool is_ofdm, s16 filt_type)
