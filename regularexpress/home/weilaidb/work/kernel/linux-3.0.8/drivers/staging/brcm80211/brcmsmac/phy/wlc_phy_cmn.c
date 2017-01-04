u32 phyhal_msg_level = PHYHAL_ERROR;
typedef struct _chan_info_basic  chan_info_basic_t;
static chan_info_basic_t chan_info_all[] = ;
u16 ltrn_list[PHY_LTRN_LIST_LEN] = ;
const u8 ofdm_rate_lookup[] = ;
#define PHY_WREG_LIMIT	24
static void wlc_set_phy_uninitted(phy_info_t *pi);
static u32 wlc_phy_get_radio_ver(phy_info_t *pi);
static void wlc_phy_timercb_phycal(void *arg);
static bool wlc_phy_noise_calc_phy(phy_info_t *pi, u32 *cmplx_pwr,
s8 *pwr_ant);
static void wlc_phy_cal_perical_mphase_schedule(phy_info_t *pi, uint delay);
static void wlc_phy_noise_cb(phy_info_t *pi, u8 channel, s8 noise_dbm);
static void wlc_phy_noise_sample_request(wlc_phy_t *pih, u8 reason,
u8 ch);
static void wlc_phy_txpower_reg_limit_calc(phy_info_t *pi,
struct txpwr_limits *tp, chanspec_t);
static bool wlc_phy_cal_txpower_recalc_sw(phy_info_t *pi);
static s8 wlc_user_txpwr_antport_to_rfport(phy_info_t *pi, uint chan,
u32 band, u8 rate);
static void wlc_phy_upd_env_txpwr_rate_limits(phy_info_t *pi, u32 band);
static s8 wlc_phy_env_measure_vbat(phy_info_t *pi);
static s8 wlc_phy_env_measure_temperature(phy_info_t *pi);
char *phy_getvar(phy_info_t *pi, const char *name)
int phy_getintvar(phy_info_t *pi, const char *name)
void wlc_phyreg_enter(wlc_phy_t *pih)
void wlc_phyreg_exit(wlc_phy_t *pih)
void wlc_radioreg_enter(wlc_phy_t *pih)
void wlc_radioreg_exit(wlc_phy_t *pih)
u16 read_radio_reg(phy_info_t *pi, u16 addr)
void write_radio_reg(phy_info_t *pi, u16 addr, u16 val)
static u32 read_radio_id(phy_info_t *pi)
void and_radio_reg(phy_info_t *pi, u16 addr, u16 val)
void or_radio_reg(phy_info_t *pi, u16 addr, u16 val)
void xor_radio_reg(phy_info_t *pi, u16 addr, u16 mask)
void mod_radio_reg(phy_info_t *pi, u16 addr, u16 mask, u16 val)
void write_phy_channel_reg(phy_info_t *pi, uint val)
u16 read_phy_reg(phy_info_t *pi, u16 addr)
void write_phy_reg(phy_info_t *pi, u16 addr, u16 val)
void and_phy_reg(phy_info_t *pi, u16 addr, u16 val)
void or_phy_reg(phy_info_t *pi, u16 addr, u16 val)
void mod_phy_reg(phy_info_t *pi, u16 addr, u16 mask, u16 val)
static void WLBANDINITFN(wlc_set_phy_uninitted) (phy_info_t *pi)
shared_phy_t *wlc_phy_shared_attach(shared_phy_params_t *shp)
void wlc_phy_shared_detach(shared_phy_t *phy_sh)
wlc_phy_t *wlc_phy_attach(shared_phy_t *sh, void *regs, int bandtype,
char *vars, struct wiphy *wiphy)
void wlc_phy_detach(wlc_phy_t *pih)
bool
wlc_phy_get_phyversion(wlc_phy_t *pih, u16 *phytype, u16 *phyrev,
u16 *radioid, u16 *radiover)
bool wlc_phy_get_encore(wlc_phy_t *pih)
u32 wlc_phy_get_coreflags(wlc_phy_t *pih)
static void wlc_phy_timercb_phycal(void *arg)
void wlc_phy_anacore(wlc_phy_t *pih, bool on)
u32 wlc_phy_clk_bwbits(wlc_phy_t *pih)
void WLBANDINITFN(wlc_phy_por_inform) (wlc_phy_t *ppi)
void wlc_phy_edcrs_lock(wlc_phy_t *pih, bool lock)
void wlc_phy_initcal_enable(wlc_phy_t *pih, bool initcal)
void wlc_phy_hw_clk_state_upd(wlc_phy_t *pih, bool newstate)
void wlc_phy_hw_state_upd(wlc_phy_t *pih, bool newstate)
void WLBANDINITFN(wlc_phy_init) (wlc_phy_t *pih, chanspec_t chanspec)
void wlc_phy_cal_init(wlc_phy_t *pih)
int wlc_phy_down(wlc_phy_t *pih)
static u32 wlc_phy_get_radio_ver(phy_info_t *pi)
void
wlc_phy_table_addr(phy_info_t *pi, uint tbl_id, uint tbl_offset,
u16 tblAddr, u16 tblDataHi, u16 tblDataLo)
void wlc_phy_table_data_write(phy_info_t *pi, uint width, u32 val)
void
wlc_phy_write_table(phy_info_t *pi, const phytbl_info_t *ptbl_info,
u16 tblAddr, u16 tblDataHi, u16 tblDataLo)
void
wlc_phy_read_table(phy_info_t *pi, const phytbl_info_t *ptbl_info,
u16 tblAddr, u16 tblDataHi, u16 tblDataLo)
uint
wlc_phy_init_radio_regs_allbands(phy_info_t *pi, radio_20xx_regs_t *radioregs)
uint
wlc_phy_init_radio_regs(phy_info_t *pi, radio_regs_t *radioregs,
u16 core_offset)
void wlc_phy_do_dummy_tx(phy_info_t *pi, bool ofdm, bool pa_on)
void wlc_phy_hold_upd(wlc_phy_t *pih, mbool id, bool set)
void wlc_phy_mute_upd(wlc_phy_t *pih, bool mute, mbool flags)
void wlc_phy_clear_tssi(wlc_phy_t *pih)
static bool wlc_phy_cal_txpower_recalc_sw(phy_info_t *pi)
void wlc_phy_switch_radio(wlc_phy_t *pih, bool on)
u16 wlc_phy_bw_state_get(wlc_phy_t *ppi)
void wlc_phy_bw_state_set(wlc_phy_t *ppi, u16 bw)
void wlc_phy_chanspec_radio_set(wlc_phy_t *ppi, chanspec_t newch)
chanspec_t wlc_phy_chanspec_get(wlc_phy_t *ppi)
void wlc_phy_chanspec_set(wlc_phy_t *ppi, chanspec_t chanspec)
int wlc_phy_chanspec_freq2bandrange_lpssn(uint freq)
int wlc_phy_chanspec_bandrange_get(phy_info_t *pi, chanspec_t chanspec)
void wlc_phy_chanspec_ch14_widefilter_set(wlc_phy_t *ppi, bool wide_filter)
int wlc_phy_channel2freq(uint channel)
void
wlc_phy_chanspec_band_validch(wlc_phy_t *ppi, uint band, chanvec_t *channels)
chanspec_t wlc_phy_chanspec_band_firstch(wlc_phy_t *ppi, uint band)
int wlc_phy_txpower_get(wlc_phy_t *ppi, uint *qdbm, bool *override)
void wlc_phy_txpower_target_set(wlc_phy_t *ppi, struct txpwr_limits *txpwr)
int wlc_phy_txpower_set(wlc_phy_t *ppi, uint qdbm, bool override)
void
wlc_phy_txpower_sromlimit(wlc_phy_t *ppi, uint channel, u8 *min_pwr,
u8 *max_pwr, int txp_rate_idx)
void
wlc_phy_txpower_sromlimit_max_get(wlc_phy_t *ppi, uint chan, u8 *max_txpwr,
u8 *min_txpwr)
void
wlc_phy_txpower_boardlimit_band(wlc_phy_t *ppi, uint bandunit, s32 *max_pwr,
s32 *min_pwr, u32 *step_pwr)
u8 wlc_phy_txpower_get_target_min(wlc_phy_t *ppi)
u8 wlc_phy_txpower_get_target_max(wlc_phy_t *ppi)
void wlc_phy_txpower_recalc_target(phy_info_t *pi)
void
wlc_phy_txpower_reg_limit_calc(phy_info_t *pi, struct txpwr_limits *txpwr,
chanspec_t chanspec)
void wlc_phy_txpwr_percent_set(wlc_phy_t *ppi, u8 txpwr_percent)
void wlc_phy_machwcap_set(wlc_phy_t *ppi, u32 machwcap)
void wlc_phy_runbist_config(wlc_phy_t *ppi, bool start_end)
void
wlc_phy_txpower_limit_set(wlc_phy_t *ppi, struct txpwr_limits *txpwr,
chanspec_t chanspec)
void wlc_phy_ofdm_rateset_war(wlc_phy_t *pih, bool war)
void wlc_phy_bf_preempt_enable(wlc_phy_t *pih, bool bf_preempt)
void wlc_phy_txpower_update_shm(phy_info_t *pi)
bool wlc_phy_txpower_hw_ctrl_get(wlc_phy_t *ppi)
void wlc_phy_txpower_hw_ctrl_set(wlc_phy_t *ppi, bool hwpwrctrl)
void wlc_phy_txpower_ipa_upd(phy_info_t *pi)
static u32 wlc_phy_txpower_est_power_nphy(phy_info_t *pi);
static u32 wlc_phy_txpower_est_power_nphy(phy_info_t *pi)
void
wlc_phy_txpower_get_current(wlc_phy_t *ppi, tx_power_t *power, uint channel)
void wlc_phy_antsel_type_set(wlc_phy_t *ppi, u8 antsel_type)
bool wlc_phy_test_ison(wlc_phy_t *ppi)
bool wlc_phy_ant_rxdiv_get(wlc_phy_t *ppi, u8 *pval)
void wlc_phy_ant_rxdiv_set(wlc_phy_t *ppi, u8 val)
static bool
wlc_phy_noise_calc_phy(phy_info_t *pi, u32 *cmplx_pwr, s8 *pwr_ant)
static void
wlc_phy_noise_sample_request(wlc_phy_t *pih, u8 reason, u8 ch)
void wlc_phy_noise_sample_request_external(wlc_phy_t *pih)
static void wlc_phy_noise_cb(phy_info_t *pi, u8 channel, s8 noise_dbm)
static s8 wlc_phy_noise_read_shmem(phy_info_t *pi)
void wlc_phy_noise_sample_intr(wlc_phy_t *pih)
s8 lcnphy_gain_index_offset_for_pkt_rssi[] = ;
void wlc_phy_compute_dB(u32 *cmplx_pwr, s8 *p_cmplx_pwr_dB, u8 core)
void wlc_phy_rssi_compute(wlc_phy_t *pih, void *ctx)
void wlc_phy_freqtrack_start(wlc_phy_t *pih)
void wlc_phy_freqtrack_end(wlc_phy_t *pih)
void wlc_phy_set_deaf(wlc_phy_t *ppi, bool user_flag)
void wlc_phy_watchdog(wlc_phy_t *pih)
void wlc_phy_BSSinit(wlc_phy_t *pih, bool bonlyap, int rssi)
void
wlc_phy_papd_decode_epsilon(u32 epsilon, s32 *eps_real, s32 *eps_imag)
static const fixed AtanTbl[] = ;
void wlc_phy_cordic(fixed theta, cs32 *val)
void wlc_phy_cal_perical_mphase_reset(phy_info_t *pi)
static void wlc_phy_cal_perical_mphase_schedule(phy_info_t *pi, uint delay)
void wlc_phy_cal_perical(wlc_phy_t *pih, u8 reason)
void wlc_phy_cal_perical_mphase_restart(phy_info_t *pi)
u8 wlc_phy_nbits(s32 value)
void wlc_phy_stf_chain_init(wlc_phy_t *pih, u8 txchain, u8 rxchain)
void wlc_phy_stf_chain_set(wlc_phy_t *pih, u8 txchain, u8 rxchain)
void wlc_phy_stf_chain_get(wlc_phy_t *pih, u8 *txchain, u8 *rxchain)
u8 wlc_phy_stf_chain_active_get(wlc_phy_t *pih)
s8 wlc_phy_stf_ssmode_get(wlc_phy_t *pih, chanspec_t chanspec)
const u8 *wlc_phy_get_ofdm_rate_lookup(void)
void wlc_lcnphy_epa_switch(phy_info_t *pi, bool mode)
static s8
wlc_user_txpwr_antport_to_rfport(phy_info_t *pi, uint chan, u32 band,
u8 rate)
static s8 wlc_phy_env_measure_vbat(phy_info_t *pi)
static s8 wlc_phy_env_measure_temperature(phy_info_t *pi)
static void wlc_phy_upd_env_txpwr_rate_limits(phy_info_t *pi, u32 band)
void wlc_phy_ldpc_override_set(wlc_phy_t *ppi, bool ldpc)
void
wlc_phy_get_pwrdet_offsets(phy_info_t *pi, s8 *cckoffset, s8 *ofdmoffset)
s8 wlc_phy_upd_rssi_offset(phy_info_t *pi, s8 rssi, chanspec_t chanspec)
bool wlc_phy_txpower_ipa_ison(wlc_phy_t *ppi)
