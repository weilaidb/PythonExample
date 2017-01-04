#define ATH9K_HW_OPS_H
static inline void ath9k_hw_configpcipowersave(struct ath_hw *ah,
int restore,
int power_off)
static inline void ath9k_hw_rxena(struct ath_hw *ah)
static inline void ath9k_hw_set_desc_link(struct ath_hw *ah, void *ds,
u32 link)
static inline void ath9k_hw_get_desc_link(struct ath_hw *ah, void *ds,
u32 **link)
static inline bool ath9k_hw_calibrate(struct ath_hw *ah,
struct ath9k_channel *chan,
u8 rxchainmask,
bool longcal)
static inline bool ath9k_hw_getisr(struct ath_hw *ah, enum ath9k_int *masked)
static inline void ath9k_hw_filltxdesc(struct ath_hw *ah, void *ds, u32 seglen,
bool is_firstseg, bool is_lastseg,
const void *ds0, dma_addr_t buf_addr,
unsigned int qcu)
static inline int ath9k_hw_txprocdesc(struct ath_hw *ah, void *ds,
struct ath_tx_status *ts)
static inline void ath9k_hw_set11n_txdesc(struct ath_hw *ah, void *ds,
u32 pktLen, enum ath9k_pkt_type type,
u32 txPower, u32 keyIx,
enum ath9k_key_type keyType,
u32 flags)
static inline void ath9k_hw_set11n_ratescenario(struct ath_hw *ah, void *ds,
void *lastds,
u32 durUpdateEn, u32 rtsctsRate,
u32 rtsctsDuration,
struct ath9k_11n_rate_series series[],
u32 nseries, u32 flags)
static inline void ath9k_hw_set11n_aggr_first(struct ath_hw *ah, void *ds,
u32 aggrLen)
static inline void ath9k_hw_set11n_aggr_middle(struct ath_hw *ah, void *ds,
u32 numDelims)
static inline void ath9k_hw_set11n_aggr_last(struct ath_hw *ah, void *ds)
static inline void ath9k_hw_clr11n_aggr(struct ath_hw *ah, void *ds)
static inline void ath9k_hw_set_clrdmask(struct ath_hw *ah, void *ds, bool val)
static inline void ath9k_hw_antdiv_comb_conf_get(struct ath_hw *ah,
struct ath_hw_antcomb_conf *antconf)
static inline void ath9k_hw_antdiv_comb_conf_set(struct ath_hw *ah,
struct ath_hw_antcomb_conf *antconf)
static inline int ath9k_hw_rf_set_freq(struct ath_hw *ah,
struct ath9k_channel *chan)
static inline void ath9k_hw_spur_mitigate_freq(struct ath_hw *ah,
struct ath9k_channel *chan)
static inline int ath9k_hw_rf_alloc_ext_banks(struct ath_hw *ah)
static inline void ath9k_hw_rf_free_ext_banks(struct ath_hw *ah)
static inline bool ath9k_hw_set_rf_regs(struct ath_hw *ah,
struct ath9k_channel *chan,
u16 modesIndex)
static inline void ath9k_hw_init_bb(struct ath_hw *ah,
struct ath9k_channel *chan)
static inline void ath9k_hw_set_channel_regs(struct ath_hw *ah,
struct ath9k_channel *chan)
static inline int ath9k_hw_process_ini(struct ath_hw *ah,
struct ath9k_channel *chan)
static inline void ath9k_olc_init(struct ath_hw *ah)
static inline void ath9k_hw_set_rfmode(struct ath_hw *ah,
struct ath9k_channel *chan)
static inline void ath9k_hw_mark_phy_inactive(struct ath_hw *ah)
static inline void ath9k_hw_set_delta_slope(struct ath_hw *ah,
struct ath9k_channel *chan)
static inline bool ath9k_hw_rfbus_req(struct ath_hw *ah)
static inline void ath9k_hw_rfbus_done(struct ath_hw *ah)
static inline void ath9k_hw_restore_chainmask(struct ath_hw *ah)
static inline void ath9k_hw_set_diversity(struct ath_hw *ah, bool value)
static inline bool ath9k_hw_ani_control(struct ath_hw *ah,
enum ath9k_ani_cmd cmd, int param)
static inline void ath9k_hw_do_getnf(struct ath_hw *ah,
int16_t nfarray[NUM_NF_READINGS])
static inline bool ath9k_hw_init_cal(struct ath_hw *ah,
struct ath9k_channel *chan)
static inline void ath9k_hw_setup_calibration(struct ath_hw *ah,
struct ath9k_cal_list *currCal)
