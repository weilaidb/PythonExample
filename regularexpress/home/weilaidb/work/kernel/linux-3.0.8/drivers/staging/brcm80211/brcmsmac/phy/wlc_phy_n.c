#define	READ_RADIO_REG2(pi, radio_type, jspace, core, reg_name) \
read_radio_reg(pi, radio_type##_##jspace##_##reg_name | \
((core == PHY_CORE_0) ? radio_type##_##jspace##0 : radio_type##_##jspace##1))
#define	WRITE_RADIO_REG2(pi, radio_type, jspace, core, reg_name, value) \
write_radio_reg(pi, radio_type##_##jspace##_##reg_name | \
((core == PHY_CORE_0) ? radio_type##_##jspace##0 : radio_type##_##jspace##1), value);
#define	WRITE_RADIO_SYN(pi, radio_type, reg_name, value) \
write_radio_reg(pi, radio_type##_##SYN##_##reg_name, value);
#define	READ_RADIO_REG3(pi, radio_type, jspace, core, reg_name) \
read_radio_reg(pi, ((core == PHY_CORE_0) ? radio_type##_##jspace##0##_##reg_name : \
radio_type##_##jspace##1##_##reg_name));
#define	WRITE_RADIO_REG3(pi, radio_type, jspace, core, reg_name, value) \
write_radio_reg(pi, ((core == PHY_CORE_0) ? radio_type##_##jspace##0##_##reg_name : \
radio_type##_##jspace##1##_##reg_name), value);
#define	READ_RADIO_REG4(pi, radio_type, jspace, core, reg_name) \
read_radio_reg(pi, ((core == PHY_CORE_0) ? radio_type##_##reg_name##_##jspace##0 : \
radio_type##_##reg_name##_##jspace##1));
#define	WRITE_RADIO_REG4(pi, radio_type, jspace, core, reg_name, value) \
write_radio_reg(pi, ((core == PHY_CORE_0) ? radio_type##_##reg_name##_##jspace##0 : \
radio_type##_##reg_name##_##jspace##1), value);
#define NPHY_ACI_MAX_UNDETECT_WINDOW_SZ 40
#define NPHY_ACI_CHANNEL_DELTA 5
#define NPHY_ACI_CHANNEL_SKIP 4
#define NPHY_ACI_40MHZ_CHANNEL_DELTA 6
#define NPHY_ACI_40MHZ_CHANNEL_SKIP 5
#define NPHY_ACI_40MHZ_CHANNEL_DELTA_GE_REV3 6
#define NPHY_ACI_40MHZ_CHANNEL_SKIP_GE_REV3 5
#define NPHY_ACI_CHANNEL_DELTA_GE_REV3 4
#define NPHY_ACI_CHANNEL_SKIP_GE_REV3 3
#define NPHY_NOISE_NOASSOC_GLITCH_TH_UP 2
#define NPHY_NOISE_NOASSOC_GLITCH_TH_DN 8
#define NPHY_NOISE_ASSOC_GLITCH_TH_UP 2
#define NPHY_NOISE_ASSOC_GLITCH_TH_DN 8
#define NPHY_NOISE_ASSOC_ACI_GLITCH_TH_UP 2
#define NPHY_NOISE_ASSOC_ACI_GLITCH_TH_DN 8
#define NPHY_NOISE_NOASSOC_ENTER_TH  400
#define NPHY_NOISE_ASSOC_ENTER_TH  400
#define NPHY_NOISE_ASSOC_RX_GLITCH_BADPLCP_ENTER_TH  400
#define NPHY_NOISE_CRSMINPWR_ARRAY_MAX_INDEX 44
#define NPHY_NOISE_CRSMINPWR_ARRAY_MAX_INDEX_REV_7 56
#define NPHY_NOISE_NOASSOC_CRSIDX_INCR 16
#define NPHY_NOISE_ASSOC_CRSIDX_INCR 8
#define NPHY_IS_SROM_REINTERPRET NREV_GE(pi->pubpi.phy_rev, 5)
#define NPHY_RSSICAL_MAXREAD 31
#define NPHY_RSSICAL_NPOLL 8
#define NPHY_RSSICAL_MAXD  (1<<20)
#define NPHY_MIN_RXIQ_PWR 2
#define NPHY_RSSICAL_W1_TARGET 25
#define NPHY_RSSICAL_W2_TARGET NPHY_RSSICAL_W1_TARGET
#define NPHY_RSSICAL_NB_TARGET 0
#define NPHY_RSSICAL_W1_TARGET_REV3 29
#define NPHY_RSSICAL_W2_TARGET_REV3 NPHY_RSSICAL_W1_TARGET_REV3
#define NPHY_CALSANITY_RSSI_NB_MAX_POS  9
#define NPHY_CALSANITY_RSSI_NB_MAX_NEG -9
#define NPHY_CALSANITY_RSSI_W1_MAX_POS  12
#define NPHY_CALSANITY_RSSI_W1_MAX_NEG (NPHY_RSSICAL_W1_TARGET - NPHY_RSSICAL_MAXREAD)
#define NPHY_CALSANITY_RSSI_W2_MAX_POS  NPHY_CALSANITY_RSSI_W1_MAX_POS
#define NPHY_CALSANITY_RSSI_W2_MAX_NEG (NPHY_RSSICAL_W2_TARGET - NPHY_RSSICAL_MAXREAD)
#define NPHY_RSSI_SXT(x) ((s8) (-((x) & 0x20) + ((x) & 0x1f)))
#define NPHY_RSSI_NB_VIOL(x)  (((x) > NPHY_CALSANITY_RSSI_NB_MAX_POS) || \
((x) < NPHY_CALSANITY_RSSI_NB_MAX_NEG))
#define NPHY_RSSI_W1_VIOL(x)  (((x) > NPHY_CALSANITY_RSSI_W1_MAX_POS) || \
((x) < NPHY_CALSANITY_RSSI_W1_MAX_NEG))
#define NPHY_RSSI_W2_VIOL(x)  (((x) > NPHY_CALSANITY_RSSI_W2_MAX_POS) || \
((x) < NPHY_CALSANITY_RSSI_W2_MAX_NEG))
#define NPHY_IQCAL_NUMGAINS 9
#define NPHY_N_GCTL 0x66
#define NPHY_PAPD_EPS_TBL_SIZE 64
#define NPHY_PAPD_SCL_TBL_SIZE 64
#define NPHY_NUM_DIG_FILT_COEFFS 15
#define NPHY_PAPD_COMP_OFF 0
#define NPHY_PAPD_COMP_ON  1
#define NPHY_SROM_TEMPSHIFT		32
#define NPHY_SROM_MAXTEMPOFFSET		16
#define NPHY_SROM_MINTEMPOFFSET		-16
#define NPHY_CAL_MAXTEMPDELTA		64
#define NPHY_NOISEVAR_TBLLEN40 256
#define NPHY_NOISEVAR_TBLLEN20 128
#define NPHY_ANARXLPFBW_REDUCTIONFACT 7
#define NPHY_ADJUSTED_MINCRSPOWER 0x1e
typedef struct _nphy_iqcal_params  nphy_iqcal_params_t;
typedef struct _nphy_txiqcal_ladder  nphy_txiqcal_ladder_t;
typedef struct  nphy_ipa_txcalgains_t;
typedef struct nphy_papd_restore_state_t  nphy_papd_restore_state;
typedef struct _nphy_ipa_txrxgain  nphy_ipa_txrxgain_t;
#define NPHY_IPA_RXCAL_MAXGAININDEX (6 - 1)
nphy_ipa_txrxgain_t nphy_ipa_rxcal_gaintbl_5GHz[] = ;
nphy_ipa_txrxgain_t nphy_ipa_rxcal_gaintbl_2GHz[] = ;
nphy_ipa_txrxgain_t nphy_ipa_rxcal_gaintbl_5GHz_rev7[] = ;
nphy_ipa_txrxgain_t nphy_ipa_rxcal_gaintbl_2GHz_rev7[] = ;
#define NPHY_RXCAL_TONEAMP 181
#define NPHY_RXCAL_TONEFREQ_40MHz 4000
#define NPHY_RXCAL_TONEFREQ_20MHz 2000
enum ;
#define wlc_phy_get_papd_nphy(pi) \
(read_phy_reg((pi), 0x1e7) & \
((0x1 << 15) | \
(0x1 << 14) | \
(0x1 << 13)))
#define TXFILT_SHAPING_OFDM20   0
#define TXFILT_SHAPING_OFDM40   1
#define TXFILT_SHAPING_CCK      2
#define TXFILT_DEFAULT_OFDM20   3
#define TXFILT_DEFAULT_OFDM40   4
u16 NPHY_IPA_REV4_txdigi_filtcoeffs[][NPHY_NUM_DIG_FILT_COEFFS] = ;
typedef struct _chan_info_nphy_2055  chan_info_nphy_2055_t;
typedef struct _chan_info_nphy_radio205x  chan_info_nphy_radio205x_t;
typedef struct _chan_info_nphy_radio2057  chan_info_nphy_radio2057_t;
typedef struct _chan_info_nphy_radio2057_rev5  chan_info_nphy_radio2057_rev5_t;
typedef struct nphy_sfo_cfg  nphy_sfo_cfg_t;
static chan_info_nphy_2055_t chan_info_nphy_2055[] = ;
static chan_info_nphy_radio205x_t chan_info_nphyrev3_2056[] = ;
static chan_info_nphy_radio205x_t chan_info_nphyrev4_2056_A1[] = ;
static chan_info_nphy_radio205x_t chan_info_nphyrev5_2056v5[] = ;
static chan_info_nphy_radio205x_t chan_info_nphyrev6_2056v6[] = ;
static chan_info_nphy_radio205x_t chan_info_nphyrev5n6_2056v7[] = ;
static chan_info_nphy_radio205x_t chan_info_nphyrev6_2056v8[] = ;
static chan_info_nphy_radio205x_t chan_info_nphyrev6_2056v11[] = ;
static chan_info_nphy_radio2057_t chan_info_nphyrev7_2057_rev4[] = ;
static chan_info_nphy_radio2057_rev5_t chan_info_nphyrev8_2057_rev5[] = ;
static chan_info_nphy_radio2057_rev5_t chan_info_nphyrev9_2057_rev5v1[] = ;
static chan_info_nphy_radio2057_t chan_info_nphyrev8_2057_rev7[] = ;
static chan_info_nphy_radio2057_t chan_info_nphyrev8_2057_rev8[] = ;
radio_regs_t regs_2055[] = ;
radio_regs_t regs_SYN_2056[] = ;
radio_regs_t regs_TX_2056[] = ;
radio_regs_t regs_RX_2056[] = ;
radio_regs_t regs_SYN_2056_A1[] = ;
radio_regs_t regs_TX_2056_A1[] = ;
radio_regs_t regs_RX_2056_A1[] = ;
radio_regs_t regs_SYN_2056_rev5[] = ;
radio_regs_t regs_TX_2056_rev5[] = ;
radio_regs_t regs_RX_2056_rev5[] = ;
radio_regs_t regs_SYN_2056_rev6[] = ;
radio_regs_t regs_TX_2056_rev6[] = ;
radio_regs_t regs_RX_2056_rev6[] = ;
radio_regs_t regs_SYN_2056_rev7[] = ;
radio_regs_t regs_TX_2056_rev7[] = ;
radio_regs_t regs_RX_2056_rev7[] = ;
radio_regs_t regs_SYN_2056_rev8[] = ;
radio_regs_t regs_TX_2056_rev8[] = ;
radio_regs_t regs_RX_2056_rev8[] = ;
radio_regs_t regs_SYN_2056_rev11[] = ;
radio_regs_t regs_TX_2056_rev11[] = ;
radio_regs_t regs_RX_2056_rev11[] = ;
radio_20xx_regs_t regs_2057_rev4[] = ;
radio_20xx_regs_t regs_2057_rev5[] = ;
radio_20xx_regs_t regs_2057_rev5v1[] = ;
radio_20xx_regs_t regs_2057_rev7[] = ;
radio_20xx_regs_t regs_2057_rev8[] = ;
static s16 nphy_def_lnagains[] = ;
static s32 nphy_lnagain_est0[] = ;
static s32 nphy_lnagain_est1[] = ;
static const u16 tbl_iqcal_gainparams_nphy[2][NPHY_IQCAL_NUMGAINS][8] = ;
static const u32 nphy_tpc_txgain[] = ;
static const u16 nphy_tpc_loscale[] = ;
static u32 nphy_tpc_txgain_ipa[] = ;
static u32 nphy_tpc_txgain_ipa_rev5[] = ;
static u32 nphy_tpc_txgain_ipa_rev6[] = ;
static u32 nphy_tpc_txgain_ipa_2g_2057rev3[] = ;
static u32 nphy_tpc_txgain_ipa_2g_2057rev4n6[] = ;
static u32 nphy_tpc_txgain_ipa_2g_2057rev5[] = ;
static u32 nphy_tpc_txgain_ipa_2g_2057rev7[] = ;
static u32 nphy_tpc_txgain_ipa_5g[] = ;
static u32 nphy_tpc_txgain_ipa_5g_2057[] = ;
static u32 nphy_tpc_txgain_ipa_5g_2057rev7[] = ;
static s8 nphy_papd_pga_gain_delta_ipa_2g[] = ;
static s8 nphy_papd_pga_gain_delta_ipa_5g[] = ;
static s16 nphy_papd_padgain_dlt_2g_2057rev3n4[] = ;
static s16 nphy_papd_padgain_dlt_2g_2057rev5[] = ;
static s16 nphy_papd_padgain_dlt_2g_2057rev7[] = ;
static s8 nphy_papd_pgagain_dlt_5g_2057[] = ;
static s8 nphy_papd_pgagain_dlt_5g_2057rev7[] = ;
static u8 pad_gain_codes_used_2057rev5[] = ;
static u8 pad_gain_codes_used_2057rev7[] = ;
static u8 pad_all_gain_codes_2057[] = ;
static u8 pga_all_gain_codes_2057[] = ;
static u32 nphy_papd_scaltbl[] = ;
static u32 nphy_tpc_txgain_rev3[] = ;
static u32 nphy_tpc_txgain_HiPwrEPA[] = ;
static u32 nphy_tpc_txgain_epa_2057rev3[] = ;
static u32 nphy_tpc_txgain_epa_2057rev5[] = ;
static u32 nphy_tpc_5GHz_txgain_rev3[] = ;
static u32 nphy_tpc_5GHz_txgain_rev4[] = ;
static u32 nphy_tpc_5GHz_txgain_rev5[] = ;
static u32 nphy_tpc_5GHz_txgain_HiPwrEPA[] = ;
static u8 ant_sw_ctrl_tbl_rev8_2o3[] = ;
static u8 ant_sw_ctrl_tbl_rev8[] = ;
static u8 ant_sw_ctrl_tbl_rev8_2057v7_core0[] = ;
static u8 ant_sw_ctrl_tbl_rev8_2057v7_core1[] = ;
static bool wlc_phy_chan2freq_nphy(phy_info_t *pi, uint channel, int *f,
chan_info_nphy_radio2057_t **t0,
chan_info_nphy_radio205x_t **t1,
chan_info_nphy_radio2057_rev5_t **t2,
chan_info_nphy_2055_t **t3);
static void wlc_phy_chanspec_nphy_setup(phy_info_t *pi, chanspec_t chans,
const nphy_sfo_cfg_t *c);
static void wlc_phy_adjust_rx_analpfbw_nphy(phy_info_t *pi,
u16 reduction_factr);
static void wlc_phy_adjust_min_noisevar_nphy(phy_info_t *pi, int ntones, int *,
u32 *buf);
static void wlc_phy_adjust_crsminpwr_nphy(phy_info_t *pi, u8 minpwr);
static void wlc_phy_txlpfbw_nphy(phy_info_t *pi);
static void wlc_phy_spurwar_nphy(phy_info_t *pi);
static void wlc_phy_radio_preinit_2055(phy_info_t *pi);
static void wlc_phy_radio_init_2055(phy_info_t *pi);
static void wlc_phy_radio_postinit_2055(phy_info_t *pi);
static void wlc_phy_radio_preinit_205x(phy_info_t *pi);
static void wlc_phy_radio_init_2056(phy_info_t *pi);
static void wlc_phy_radio_postinit_2056(phy_info_t *pi);
static void wlc_phy_radio_init_2057(phy_info_t *pi);
static void wlc_phy_radio_postinit_2057(phy_info_t *pi);
static void wlc_phy_workarounds_nphy(phy_info_t *pi);
static void wlc_phy_workarounds_nphy_gainctrl(phy_info_t *pi);
static void wlc_phy_workarounds_nphy_gainctrl_2057_rev5(phy_info_t *pi);
static void wlc_phy_workarounds_nphy_gainctrl_2057_rev6(phy_info_t *pi);
static void wlc_phy_adjust_lnagaintbl_nphy(phy_info_t *pi);
static void wlc_phy_restore_rssical_nphy(phy_info_t *pi);
static void wlc_phy_reapply_txcal_coeffs_nphy(phy_info_t *pi);
static void wlc_phy_tx_iq_war_nphy(phy_info_t *pi);
static int wlc_phy_cal_rxiq_nphy_rev3(phy_info_t *pi, nphy_txgains_t tg,
u8 type, bool d);
static void wlc_phy_rxcal_gainctrl_nphy_rev5(phy_info_t *pi, u8 rxcore,
u16 *rg, u8 type);
static void wlc_phy_update_mimoconfig_nphy(phy_info_t *pi, s32 preamble);
static void wlc_phy_savecal_nphy(phy_info_t *pi);
static void wlc_phy_restorecal_nphy(phy_info_t *pi);
static void wlc_phy_resetcca_nphy(phy_info_t *pi);
static void wlc_phy_txpwrctrl_config_nphy(phy_info_t *pi);
static void wlc_phy_internal_cal_txgain_nphy(phy_info_t *pi);
static void wlc_phy_precal_txgain_nphy(phy_info_t *pi);
static void wlc_phy_update_txcal_ladder_nphy(phy_info_t *pi, u16 core);
static void wlc_phy_extpa_set_tx_digi_filts_nphy(phy_info_t *pi);
static void wlc_phy_ipa_set_tx_digi_filts_nphy(phy_info_t *pi);
static void wlc_phy_ipa_restore_tx_digi_filts_nphy(phy_info_t *pi);
static u16 wlc_phy_ipa_get_bbmult_nphy(phy_info_t *pi);
static void wlc_phy_ipa_set_bbmult_nphy(phy_info_t *pi, u8 m0, u8 m1);
static u32 *wlc_phy_get_ipa_gaintbl_nphy(phy_info_t *pi);
static void wlc_phy_a1_nphy(phy_info_t *pi, u8 core, u32 winsz, u32,
u32 e);
static u8 wlc_phy_a3_nphy(phy_info_t *pi, u8 start_gain, u8 core);
static void wlc_phy_a2_nphy(phy_info_t *pi, nphy_ipa_txcalgains_t *,
phy_cal_mode_t, u8);
static void wlc_phy_papd_cal_cleanup_nphy(phy_info_t *pi,
nphy_papd_restore_state *state);
static void wlc_phy_papd_cal_setup_nphy(phy_info_t *pi,
nphy_papd_restore_state *state, u8);
static void wlc_phy_clip_det_nphy(phy_info_t *pi, u8 write, u16 *vals);
static void wlc_phy_set_rfseq_nphy(phy_info_t *pi, u8 cmd, u8 *evts,
u8 *dlys, u8 len);
static u16 wlc_phy_read_lpf_bw_ctl_nphy(phy_info_t *pi, u16 offset);
static void
wlc_phy_rfctrl_override_nphy_rev7(phy_info_t *pi, u16 field, u16 value,
u8 core_mask, u8 off,
u8 override_id);
static void wlc_phy_rssi_cal_nphy_rev2(phy_info_t *pi, u8 rssi_type);
static void wlc_phy_rssi_cal_nphy_rev3(phy_info_t *pi);
static bool wlc_phy_txpwr_srom_read_nphy(phy_info_t *pi);
static void wlc_phy_txpwr_nphy_srom_convert(u8 *srom_max,
u16 *pwr_offset,
u8 tmp_max_pwr, u8 rate_start,
u8 rate_end);
static void wlc_phy_txpwr_limit_to_tbl_nphy(phy_info_t *pi);
static void wlc_phy_txpwrctrl_coeff_setup_nphy(phy_info_t *pi);
static void wlc_phy_txpwrctrl_idle_tssi_nphy(phy_info_t *pi);
static void wlc_phy_txpwrctrl_pwr_setup_nphy(phy_info_t *pi);
static bool wlc_phy_txpwr_ison_nphy(phy_info_t *pi);
static u8 wlc_phy_txpwr_idx_cur_get_nphy(phy_info_t *pi, u8 core);
static void wlc_phy_txpwr_idx_cur_set_nphy(phy_info_t *pi, u8 idx0,
u8 idx1);
static void wlc_phy_a4(phy_info_t *pi, bool full_cal);
static u16 wlc_phy_radio205x_rcal(phy_info_t *pi);
static u16 wlc_phy_radio2057_rccal(phy_info_t *pi);
static u16 wlc_phy_gen_load_samples_nphy(phy_info_t *pi, u32 f_kHz,
u16 max_val,
u8 dac_test_mode);
static void wlc_phy_loadsampletable_nphy(phy_info_t *pi, cs32 *tone_buf,
u16 num_samps);
static void wlc_phy_runsamples_nphy(phy_info_t *pi, u16 n, u16 lps,
u16 wait, u8 iq, u8 dac_test_mode,
bool modify_bbmult);
bool wlc_phy_bist_check_phy(wlc_phy_t *pih)
static void WLBANDINITFN(wlc_phy_bphy_init_nphy) (phy_info_t *pi)
void
wlc_phy_table_write_nphy(phy_info_t *pi, u32 id, u32 len, u32 offset,
u32 width, const void *data)
void
wlc_phy_table_read_nphy(phy_info_t *pi, u32 id, u32 len, u32 offset,
u32 width, void *data)
static void WLBANDINITFN(wlc_phy_static_table_download_nphy) (phy_info_t *pi)
static void WLBANDINITFN(wlc_phy_tbl_init_nphy) (phy_info_t *pi)
static void
wlc_phy_write_txmacreg_nphy(phy_info_t *pi, u16 holdoff, u16 delay)
void wlc_phy_nphy_tkip_rifs_war(phy_info_t *pi, u8 rifs)
bool wlc_phy_attach_nphy(phy_info_t *pi)
static void wlc_phy_txpwrctrl_config_nphy(phy_info_t *pi)
void WLBANDINITFN(wlc_phy_init_nphy) (phy_info_t *pi)
static void wlc_phy_update_mimoconfig_nphy(phy_info_t *pi, s32 preamble)
static void wlc_phy_resetcca_nphy(phy_info_t *pi)
void wlc_phy_pa_override_nphy(phy_info_t *pi, bool en)
void wlc_phy_stf_chain_upd_nphy(phy_info_t *pi)
void wlc_phy_rxcore_setstate_nphy(wlc_phy_t *pih, u8 rxcore_bitmask)
u8 wlc_phy_rxcore_getstate_nphy(wlc_phy_t *pih)
bool wlc_phy_n_txpower_ipa_ison(phy_info_t *pi)
static void wlc_phy_txpwr_limit_to_tbl_nphy(phy_info_t *pi)
void wlc_phy_cal_init_nphy(phy_info_t *pi)
static void wlc_phy_war_force_trsw_to_R_cliplo_nphy(phy_info_t *pi, u8 core)
static void wlc_phy_war_txchain_upd_nphy(phy_info_t *pi, u8 txchain)
static void wlc_phy_workarounds_nphy(phy_info_t *pi)
static void wlc_phy_workarounds_nphy_gainctrl(phy_info_t *pi)
static void wlc_phy_workarounds_nphy_gainctrl_2057_rev5(phy_info_t *pi)
static void wlc_phy_workarounds_nphy_gainctrl_2057_rev6(phy_info_t *pi)
static void wlc_phy_adjust_lnagaintbl_nphy(phy_info_t *pi)
void wlc_phy_switch_radio_nphy(phy_info_t *pi, bool on)
static void wlc_phy_radio_preinit_2055(phy_info_t *pi)
static void wlc_phy_radio_init_2055(phy_info_t *pi)
static void wlc_phy_radio_postinit_2055(phy_info_t *pi)
static void wlc_phy_radio_preinit_205x(phy_info_t *pi)
static void wlc_phy_radio_init_2056(phy_info_t *pi)
static void wlc_phy_radio_postinit_2056(phy_info_t *pi)
static void wlc_phy_radio_init_2057(phy_info_t *pi)
static void wlc_phy_radio_postinit_2057(phy_info_t *pi)
static bool
wlc_phy_chan2freq_nphy(phy_info_t *pi, uint channel, int *f,
chan_info_nphy_radio2057_t **t0,
chan_info_nphy_radio205x_t **t1,
chan_info_nphy_radio2057_rev5_t **t2,
chan_info_nphy_2055_t **t3)
u8 wlc_phy_get_chan_freq_range_nphy(phy_info_t *pi, uint channel)
static void
wlc_phy_chanspec_radio2055_setup(phy_info_t *pi, chan_info_nphy_2055_t *ci)
static void
wlc_phy_chanspec_radio2056_setup(phy_info_t *pi,
const chan_info_nphy_radio205x_t *ci)
void wlc_phy_radio205x_vcocal_nphy(phy_info_t *pi)
#define MAX_205x_RCAL_WAITLOOPS 10000
static u16 wlc_phy_radio205x_rcal(phy_info_t *pi)
static void
wlc_phy_chanspec_radio2057_setup(phy_info_t *pi,
const chan_info_nphy_radio2057_t *ci,
const chan_info_nphy_radio2057_rev5_t *ci2)
static u16 wlc_phy_radio2057_rccal(phy_info_t *pi)
static void
wlc_phy_adjust_rx_analpfbw_nphy(phy_info_t *pi, u16 reduction_factr)
static void
wlc_phy_adjust_min_noisevar_nphy(phy_info_t *pi, int ntones, int *tone_id_buf,
u32 *noise_var_buf)
static void wlc_phy_adjust_crsminpwr_nphy(phy_info_t *pi, u8 minpwr)
static void wlc_phy_txlpfbw_nphy(phy_info_t *pi)
static void wlc_phy_spurwar_nphy(phy_info_t *pi)
static void
wlc_phy_chanspec_nphy_setup(phy_info_t *pi, chanspec_t chanspec,
const nphy_sfo_cfg_t *ci)
void wlc_phy_chanspec_set_nphy(phy_info_t *pi, chanspec_t chanspec)
static void wlc_phy_savecal_nphy(phy_info_t *pi)
static void wlc_phy_restorecal_nphy(phy_info_t *pi)
void wlc_phy_antsel_init(wlc_phy_t *ppi, bool lut_init)
u16 wlc_phy_classifier_nphy(phy_info_t *pi, u16 mask, u16 val)
static void wlc_phy_clip_det_nphy(phy_info_t *pi, u8 write, u16 *vals)
void wlc_phy_force_rfseq_nphy(phy_info_t *pi, u8 cmd)
static void
wlc_phy_set_rfseq_nphy(phy_info_t *pi, u8 cmd, u8 *events, u8 *dlys,
u8 len)
static u16 wlc_phy_read_lpf_bw_ctl_nphy(phy_info_t *pi, u16 offset)
static void
wlc_phy_rfctrl_override_nphy_rev7(phy_info_t *pi, u16 field, u16 value,
u8 core_mask, u8 off, u8 override_id)
static void
wlc_phy_rfctrl_override_nphy(phy_info_t *pi, u16 field, u16 value,
u8 core_mask, u8 off)
static void
wlc_phy_rfctrl_override_1tomany_nphy(phy_info_t *pi, u16 cmd, u16 value,
u8 core_mask, u8 off)
static void
wlc_phy_scale_offset_rssi_nphy(phy_info_t *pi, u16 scale, s8 offset,
u8 coresel, u8 rail, u8 rssi_type)
void wlc_phy_rssisel_nphy(phy_info_t *pi, u8 core_code, u8 rssi_type)
int
wlc_phy_poll_rssi_nphy(phy_info_t *pi, u8 rssi_type, s32 *rssi_buf,
u8 nsamps)
s16 wlc_phy_tempsense_nphy(phy_info_t *pi)
static void
wlc_phy_set_rssi_2055_vcm(phy_info_t *pi, u8 rssi_type, u8 *vcm_buf)
void wlc_phy_rssi_cal_nphy(phy_info_t *pi)
static void wlc_phy_rssi_cal_nphy_rev2(phy_info_t *pi, u8 rssi_type)
int
wlc_phy_rssi_compute_nphy(phy_info_t *pi, wlc_d11rxhdr_t *wlc_rxh)
static void
wlc_phy_rfctrlintc_override_nphy(phy_info_t *pi, u8 field, u16 value,
u8 core_code)
static void wlc_phy_rssi_cal_nphy_rev3(phy_info_t *pi)
static void wlc_phy_restore_rssical_nphy(phy_info_t *pi)
static u16
wlc_phy_gen_load_samples_nphy(phy_info_t *pi, u32 f_kHz, u16 max_val,
u8 dac_test_mode)
int
wlc_phy_tx_tone_nphy(phy_info_t *pi, u32 f_kHz, u16 max_val,
u8 iqmode, u8 dac_test_mode, bool modify_bbmult)
static void
wlc_phy_loadsampletable_nphy(phy_info_t *pi, cs32 *tone_buf,
u16 num_samps)
static void
wlc_phy_runsamples_nphy(phy_info_t *pi, u16 num_samps, u16 loops,
u16 wait, u8 iqmode, u8 dac_test_mode,
bool modify_bbmult)
void wlc_phy_stopplayback_nphy(phy_info_t *pi)
nphy_txgains_t wlc_phy_get_tx_gain_nphy(phy_info_t *pi)
static void
wlc_phy_iqcal_gainparams_nphy(phy_info_t *pi, u16 core_no,
nphy_txgains_t target_gain,
nphy_iqcal_params_t *params)
static void wlc_phy_txcal_radio_setup_nphy(phy_info_t *pi)
static void wlc_phy_txcal_radio_cleanup_nphy(phy_info_t *pi)
static void wlc_phy_txcal_physetup_nphy(phy_info_t *pi)
static void wlc_phy_txcal_phycleanup_nphy(phy_info_t *pi)
#define NPHY_CAL_TSSISAMPS	64
#define NPHY_TEST_TONE_FREQ_40MHz 4000
#define NPHY_TEST_TONE_FREQ_20MHz 2500
void
wlc_phy_est_tonepwr_nphy(phy_info_t *pi, s32 *qdBm_pwrbuf, u8 num_samps)
static void wlc_phy_internal_cal_txgain_nphy(phy_info_t *pi)
static void wlc_phy_precal_txgain_nphy(phy_info_t *pi)
void
wlc_phy_cal_txgainctrl_nphy(phy_info_t *pi, s32 dBm_targetpower, bool debug)
static void wlc_phy_update_txcal_ladder_nphy(phy_info_t *pi, u16 core)
void wlc_phy_cal_perical_nphy_run(phy_info_t *pi, u8 caltype)
int
wlc_phy_cal_txiqlo_nphy(phy_info_t *pi, nphy_txgains_t target_gain,
bool fullcal, bool mphase)
static void wlc_phy_reapply_txcal_coeffs_nphy(phy_info_t *pi)
static void wlc_phy_tx_iq_war_nphy(phy_info_t *pi)
void
wlc_phy_rx_iq_coeffs_nphy(phy_info_t *pi, u8 write, nphy_iq_comp_t *pcomp)
void
wlc_phy_rx_iq_est_nphy(phy_info_t *pi, phy_iq_est_t *est, u16 num_samps,
u8 wait_time, u8 wait_for_crs)
#define CAL_RETRY_CNT 2
static void wlc_phy_calc_rx_iq_comp_nphy(phy_info_t *pi, u8 core_mask)
static void wlc_phy_rxcal_radio_setup_nphy(phy_info_t *pi, u8 rx_core)
static void wlc_phy_rxcal_radio_cleanup_nphy(phy_info_t *pi, u8 rx_core)
static void wlc_phy_rxcal_physetup_nphy(phy_info_t *pi, u8 rx_core)
static void wlc_phy_rxcal_phycleanup_nphy(phy_info_t *pi, u8 rx_core)
static void
wlc_phy_rxcal_gainctrl_nphy_rev5(phy_info_t *pi, u8 rx_core,
u16 *rxgain, u8 cal_type)
static void
wlc_phy_rxcal_gainctrl_nphy(phy_info_t *pi, u8 rx_core, u16 *rxgain,
u8 cal_type)
static u8
wlc_phy_rc_sweep_nphy(phy_info_t *pi, u8 core_idx, u8 loopback_type)
#define WAIT_FOR_SCOPE	4000
static int
wlc_phy_cal_rxiq_nphy_rev3(phy_info_t *pi, nphy_txgains_t target_gain,
u8 cal_type, bool debug)
static int
wlc_phy_cal_rxiq_nphy_rev2(phy_info_t *pi, nphy_txgains_t target_gain,
bool debug)
int
wlc_phy_cal_rxiq_nphy(phy_info_t *pi, nphy_txgains_t target_gain,
u8 cal_type, bool debug)
static void wlc_phy_extpa_set_tx_digi_filts_nphy(phy_info_t *pi)
static void wlc_phy_ipa_set_tx_digi_filts_nphy(phy_info_t *pi)
static void wlc_phy_ipa_restore_tx_digi_filts_nphy(phy_info_t *pi)
static u16 wlc_phy_ipa_get_bbmult_nphy(phy_info_t *pi)
static void wlc_phy_ipa_set_bbmult_nphy(phy_info_t *pi, u8 m0, u8 m1)
static u32 *wlc_phy_get_ipa_gaintbl_nphy(phy_info_t *pi)
static void
wlc_phy_papd_cal_setup_nphy(phy_info_t *pi, nphy_papd_restore_state *state,
u8 core)
static void
wlc_phy_papd_cal_cleanup_nphy(phy_info_t *pi, nphy_papd_restore_state *state)
static void
wlc_phy_a1_nphy(phy_info_t *pi, u8 core, u32 winsz, u32 start,
u32 end)
static void
wlc_phy_a2_nphy(phy_info_t *pi, nphy_ipa_txcalgains_t *txgains,
phy_cal_mode_t cal_mode, u8 core)
static u8 wlc_phy_a3_nphy(phy_info_t *pi, u8 start_gain, u8 core)
static void wlc_phy_a4(phy_info_t *pi, bool full_cal)
void wlc_phy_txpwr_fixpower_nphy(phy_info_t *pi)
static void
wlc_phy_txpwr_nphy_srom_convert(u8 *srom_max, u16 *pwr_offset,
u8 tmp_max_pwr, u8 rate_start,
u8 rate_end)
static void
wlc_phy_txpwr_nphy_po_apply(u8 *srom_max, u8 pwr_offset,
u8 rate_start, u8 rate_end)
void
wlc_phy_ofdm_to_mcs_powers_nphy(u8 *power, u8 rate_mcs_start,
u8 rate_mcs_end, u8 rate_ofdm_start)
void
wlc_phy_mcs_to_ofdm_powers_nphy(u8 *power, u8 rate_ofdm_start,
u8 rate_ofdm_end, u8 rate_mcs_start)
void wlc_phy_txpwr_apply_nphy(phy_info_t *pi)
static void wlc_phy_txpwr_srom_read_ppr_nphy(phy_info_t *pi)
static bool wlc_phy_txpwr_srom_read_nphy(phy_info_t *pi)
void wlc_phy_txpower_recalc_target_nphy(phy_info_t *pi)
static void wlc_phy_txpwrctrl_coeff_setup_nphy(phy_info_t *pi)
static void wlc_phy_ipa_internal_tssi_setup_nphy(phy_info_t *pi)
static void wlc_phy_txpwrctrl_idle_tssi_nphy(phy_info_t *pi)
static void wlc_phy_txpwrctrl_pwr_setup_nphy(phy_info_t *pi)
static bool wlc_phy_txpwr_ison_nphy(phy_info_t *pi)
static u8 wlc_phy_txpwr_idx_cur_get_nphy(phy_info_t *pi, u8 core)
static void
wlc_phy_txpwr_idx_cur_set_nphy(phy_info_t *pi, u8 idx0, u8 idx1)
u16 wlc_phy_txpwr_idx_get_nphy(phy_info_t *pi)
void wlc_phy_txpwr_papd_cal_nphy(phy_info_t *pi)
void wlc_phy_txpwrctrl_enable_nphy(phy_info_t *pi, u8 ctrl_type)
void
wlc_phy_txpwr_index_nphy(phy_info_t *pi, u8 core_mask, s8 txpwrindex,
bool restore_cals)
void
wlc_phy_txpower_sromlimit_get_nphy(phy_info_t *pi, uint chan, u8 *max_pwr,
u8 txp_rate_idx)
void wlc_phy_stay_in_carriersearch_nphy(phy_info_t *pi, bool enable)
void wlc_nphy_deaf_mode(phy_info_t *pi, bool mode)
