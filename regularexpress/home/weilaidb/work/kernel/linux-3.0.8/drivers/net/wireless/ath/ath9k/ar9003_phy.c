static const int firstep_table[] =
;
static const int cycpwrThr1_table[] =
;
static const int m1ThreshLow_off = 127;
static const int m2ThreshLow_off = 127;
static const int m1Thresh_off = 127;
static const int m2Thresh_off = 127;
static const int m2CountThr_off =  31;
static const int m2CountThrLow_off =  63;
static const int m1ThreshLowExt_off = 127;
static const int m2ThreshLowExt_off = 127;
static const int m1ThreshExt_off = 127;
static const int m2ThreshExt_off = 127;
static int ar9003_hw_set_channel(struct ath_hw *ah, struct ath9k_channel *chan)
static void ar9003_hw_spur_mitigate_mrc_cck(struct ath_hw *ah,
struct ath9k_channel *chan)
static void ar9003_hw_spur_ofdm_clear(struct ath_hw *ah)
static void ar9003_hw_spur_ofdm(struct ath_hw *ah,
int freq_offset,
int spur_freq_sd,
int spur_delta_phase,
int spur_subchannel_sd)
static void ar9003_hw_spur_ofdm_work(struct ath_hw *ah,
struct ath9k_channel *chan,
int freq_offset)
static void ar9003_hw_spur_mitigate_ofdm(struct ath_hw *ah,
struct ath9k_channel *chan)
static void ar9003_hw_spur_mitigate(struct ath_hw *ah,
struct ath9k_channel *chan)
static u32 ar9003_hw_compute_pll_control(struct ath_hw *ah,
struct ath9k_channel *chan)
static void ar9003_hw_set_channel_regs(struct ath_hw *ah,
struct ath9k_channel *chan)
static void ar9003_hw_init_bb(struct ath_hw *ah,
struct ath9k_channel *chan)
void ar9003_hw_set_chain_masks(struct ath_hw *ah, u8 rx, u8 tx)
static void ar9003_hw_override_ini(struct ath_hw *ah)
static void ar9003_hw_prog_ini(struct ath_hw *ah,
struct ar5416IniArray *iniArr,
int column)
static int ar9003_hw_process_ini(struct ath_hw *ah,
struct ath9k_channel *chan)
static void ar9003_hw_set_rfmode(struct ath_hw *ah,
struct ath9k_channel *chan)
static void ar9003_hw_mark_phy_inactive(struct ath_hw *ah)
static void ar9003_hw_set_delta_slope(struct ath_hw *ah,
struct ath9k_channel *chan)
static bool ar9003_hw_rfbus_req(struct ath_hw *ah)
static void ar9003_hw_rfbus_done(struct ath_hw *ah)
static void ar9003_hw_set_diversity(struct ath_hw *ah, bool value)
static bool ar9003_hw_ani_control(struct ath_hw *ah,
enum ath9k_ani_cmd cmd, int param)
static void ar9003_hw_do_getnf(struct ath_hw *ah,
int16_t nfarray[NUM_NF_READINGS])
static void ar9003_hw_set_nf_limits(struct ath_hw *ah)
static void ar9003_hw_ani_cache_ini_regs(struct ath_hw *ah)
static void ar9003_hw_set_radar_params(struct ath_hw *ah,
struct ath_hw_radar_conf *conf)
static void ar9003_hw_set_radar_conf(struct ath_hw *ah)
static void ar9003_hw_antdiv_comb_conf_get(struct ath_hw *ah,
struct ath_hw_antcomb_conf *antconf)
static void ar9003_hw_antdiv_comb_conf_set(struct ath_hw *ah,
struct ath_hw_antcomb_conf *antconf)
void ar9003_hw_attach_phy_ops(struct ath_hw *ah)
void ar9003_hw_bb_watchdog_config(struct ath_hw *ah)
void ar9003_hw_bb_watchdog_read(struct ath_hw *ah)
void ar9003_hw_bb_watchdog_dbg_info(struct ath_hw *ah)
EXPORT_SYMBOL(ar9003_hw_bb_watchdog_dbg_info);
void ar9003_hw_disable_phy_restart(struct ath_hw *ah)
EXPORT_SYMBOL(ar9003_hw_disable_phy_restart);
