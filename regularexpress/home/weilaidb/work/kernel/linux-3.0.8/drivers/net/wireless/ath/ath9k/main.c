static u8 parse_mpdudensity(u8 mpdudensity)
static bool ath9k_has_pending_frames(struct ath_softc *sc, struct ath_txq *txq)
bool ath9k_setpower(struct ath_softc *sc, enum ath9k_power_mode mode)
void ath9k_ps_wakeup(struct ath_softc *sc)
void ath9k_ps_restore(struct ath_softc *sc)
static void ath_start_ani(struct ath_common *common)
static void ath_update_survey_nf(struct ath_softc *sc, int channel)
static int ath_update_survey_stats(struct ath_softc *sc)
int ath_set_channel(struct ath_softc *sc, struct ieee80211_hw *hw,
struct ath9k_channel *hchan)
static void ath_paprd_activate(struct ath_softc *sc)
static bool ath_paprd_send_frame(struct ath_softc *sc, struct sk_buff *skb, int chain)
void ath_paprd_calibrate(struct work_struct *work)
void ath_ani_calibrate(unsigned long data)
static void ath_node_attach(struct ath_softc *sc, struct ieee80211_sta *sta)
static void ath_node_detach(struct ath_softc *sc, struct ieee80211_sta *sta)
void ath_hw_check(struct work_struct *work)
static void ath_hw_pll_rx_hang_check(struct ath_softc *sc, u32 pll_sqsum)
void ath_hw_pll_work(struct work_struct *work)
void ath9k_tasklet(unsigned long data)
irqreturn_t ath_isr(int irq, void *dev)
void ath_radio_enable(struct ath_softc *sc, struct ieee80211_hw *hw)
void ath_radio_disable(struct ath_softc *sc, struct ieee80211_hw *hw)
int ath_reset(struct ath_softc *sc, bool retry_tx)
static int ath9k_start(struct ieee80211_hw *hw)
static void ath9k_tx(struct ieee80211_hw *hw, struct sk_buff *skb)
static void ath9k_stop(struct ieee80211_hw *hw)
bool ath9k_uses_beacons(int type)
static void ath9k_reclaim_beacon(struct ath_softc *sc,
struct ieee80211_vif *vif)
static void ath9k_vif_iter(void *data, u8 *mac, struct ieee80211_vif *vif)
void ath9k_calculate_iter_data(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ath9k_vif_iter_data *iter_data)
static void ath9k_calculate_summary_state(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static void ath9k_do_vif_add_setup(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static int ath9k_add_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static int ath9k_change_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
enum nl80211_iftype new_type,
bool p2p)
static void ath9k_remove_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static void ath9k_enable_ps(struct ath_softc *sc)
static void ath9k_disable_ps(struct ath_softc *sc)
static int ath9k_config(struct ieee80211_hw *hw, u32 changed)
#define SUPPORTED_FILTERS			\
(FIF_PROMISC_IN_BSS |			\
FIF_ALLMULTI |				\
FIF_CONTROL |				\
FIF_PSPOLL |				\
FIF_OTHER_BSS |				\
FIF_BCN_PRBRESP_PROMISC |		\
FIF_PROBE_REQ |				\
FIF_FCSFAIL)
static void ath9k_configure_filter(struct ieee80211_hw *hw,
unsigned int changed_flags,
unsigned int *total_flags,
u64 multicast)
static int ath9k_sta_add(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
static void ath9k_del_ps_key(struct ath_softc *sc,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
static int ath9k_sta_remove(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
static void ath9k_sta_notify(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
enum sta_notify_cmd cmd,
struct ieee80211_sta *sta)
static int ath9k_conf_tx(struct ieee80211_hw *hw, u16 queue,
const struct ieee80211_tx_queue_params *params)
static int ath9k_set_key(struct ieee80211_hw *hw,
enum set_key_cmd cmd,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta,
struct ieee80211_key_conf *key)
static void ath9k_bss_iter(void *data, u8 *mac, struct ieee80211_vif *vif)
static void ath9k_config_bss(struct ath_softc *sc, struct ieee80211_vif *vif)
static void ath9k_bss_info_changed(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *bss_conf,
u32 changed)
static u64 ath9k_get_tsf(struct ieee80211_hw *hw)
static void ath9k_set_tsf(struct ieee80211_hw *hw, u64 tsf)
static void ath9k_reset_tsf(struct ieee80211_hw *hw)
static int ath9k_ampdu_action(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
enum ieee80211_ampdu_mlme_action action,
struct ieee80211_sta *sta,
u16 tid, u16 *ssn, u8 buf_size)
static int ath9k_get_survey(struct ieee80211_hw *hw, int idx,
struct survey_info *survey)
static void ath9k_set_coverage_class(struct ieee80211_hw *hw, u8 coverage_class)
static void ath9k_flush(struct ieee80211_hw *hw, bool drop)
static bool ath9k_tx_frames_pending(struct ieee80211_hw *hw)
int ath9k_tx_last_beacon(struct ieee80211_hw *hw)
struct ieee80211_ops ath9k_ops = ;
