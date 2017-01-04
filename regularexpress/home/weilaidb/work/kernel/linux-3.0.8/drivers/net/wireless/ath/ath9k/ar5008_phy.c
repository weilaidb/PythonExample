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
static void ar5008_rf_bank_setup(u32 *bank, struct ar5416IniArray *array,
int col)
#define REG_WRITE_RF_ARRAY(iniarray, regData, regWr) \
ar5008_write_rf_array(ah, iniarray, regData, &(regWr))
static void ar5008_write_rf_array(struct ath_hw *ah, struct ar5416IniArray *array,
u32 *data, unsigned int *writecnt)
static void ar5008_hw_phy_modify_rx_buffer(u32 *rfBuf, u32 reg32,
u32 numBits, u32 firstBit,
u32 column)
static void ar5008_hw_force_bias(struct ath_hw *ah, u16 synth_freq)
static int ar5008_hw_set_channel(struct ath_hw *ah, struct ath9k_channel *chan)
static void ar5008_hw_spur_mitigate(struct ath_hw *ah,
struct ath9k_channel *chan)
static int ar5008_hw_rf_alloc_ext_banks(struct ath_hw *ah)
static void ar5008_hw_rf_free_ext_banks(struct ath_hw *ah)
static bool ar5008_hw_set_rf_regs(struct ath_hw *ah,
struct ath9k_channel *chan,
u16 modesIndex)
static void ar5008_hw_init_bb(struct ath_hw *ah,
struct ath9k_channel *chan)
static void ar5008_hw_init_chain_masks(struct ath_hw *ah)
static void ar5008_hw_override_ini(struct ath_hw *ah,
struct ath9k_channel *chan)
static void ar5008_hw_set_channel_regs(struct ath_hw *ah,
struct ath9k_channel *chan)
static int ar5008_hw_process_ini(struct ath_hw *ah,
struct ath9k_channel *chan)
static void ar5008_hw_set_rfmode(struct ath_hw *ah, struct ath9k_channel *chan)
static void ar5008_hw_mark_phy_inactive(struct ath_hw *ah)
static void ar5008_hw_set_delta_slope(struct ath_hw *ah,
struct ath9k_channel *chan)
static bool ar5008_hw_rfbus_req(struct ath_hw *ah)
static void ar5008_hw_rfbus_done(struct ath_hw *ah)
static void ar5008_restore_chainmask(struct ath_hw *ah)
static void ar5008_set_diversity(struct ath_hw *ah, bool value)
static u32 ar9100_hw_compute_pll_control(struct ath_hw *ah,
struct ath9k_channel *chan)
static u32 ar9160_hw_compute_pll_control(struct ath_hw *ah,
struct ath9k_channel *chan)
static u32 ar5008_hw_compute_pll_control(struct ath_hw *ah,
struct ath9k_channel *chan)
static bool ar5008_hw_ani_control_old(struct ath_hw *ah,
enum ath9k_ani_cmd cmd,
int param)
static bool ar5008_hw_ani_control_new(struct ath_hw *ah,
enum ath9k_ani_cmd cmd,
int param)
static void ar5008_hw_do_getnf(struct ath_hw *ah,
int16_t nfarray[NUM_NF_READINGS])
static void ar5008_hw_ani_cache_ini_regs(struct ath_hw *ah)
static void ar5008_hw_set_nf_limits(struct ath_hw *ah)
static void ar5008_hw_set_radar_params(struct ath_hw *ah,
struct ath_hw_radar_conf *conf)
static void ar5008_hw_set_radar_conf(struct ath_hw *ah)
void ar5008_hw_attach_phy_ops(struct ath_hw *ah)
