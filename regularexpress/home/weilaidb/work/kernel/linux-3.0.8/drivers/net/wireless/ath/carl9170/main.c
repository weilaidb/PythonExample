static int modparam_nohwcrypt;
module_param_named(nohwcrypt, modparam_nohwcrypt, bool, S_IRUGO);
MODULE_PARM_DESC(nohwcrypt, "Disable hardware crypto offload.");
int modparam_noht;
module_param_named(noht, modparam_noht, int, S_IRUGO);
MODULE_PARM_DESC(noht, "Disable MPDU aggregation.");
#define RATE(_bitrate, _hw_rate, _txpidx, _flags)
struct ieee80211_rate __carl9170_ratetable[] = ;
#undef RATE
#define carl9170_g_ratetable	(__carl9170_ratetable + 0)
#define carl9170_g_ratetable_size	12
#define carl9170_a_ratetable	(__carl9170_ratetable + 4)
#define carl9170_a_ratetable_size	8
#define CHAN(_freq, _idx)
static struct ieee80211_channel carl9170_2ghz_chantable[] = ;
static struct ieee80211_channel carl9170_5ghz_chantable[] = ;
#undef CHAN
#define CARL9170_HT_CAP							\
static struct ieee80211_supported_band carl9170_band_2GHz = ;
static struct ieee80211_supported_band carl9170_band_5GHz = ;
static void carl9170_ampdu_gc(struct ar9170 *ar)
static void carl9170_flush(struct ar9170 *ar, bool drop_queued)
static void carl9170_flush_ba(struct ar9170 *ar)
static void carl9170_zap_queues(struct ar9170 *ar)
#define CARL9170_FILL_QUEUE(queue, ai_fs, cwmin, cwmax, _txop)		\
do  while (0)
static int carl9170_op_start(struct ieee80211_hw *hw)
static void carl9170_cancel_worker(struct ar9170 *ar)
static void carl9170_op_stop(struct ieee80211_hw *hw)
static void carl9170_restart_work(struct work_struct *work)
void carl9170_restart(struct ar9170 *ar, const enum carl9170_restart_reasons r)
static void carl9170_ping_work(struct work_struct *work)
static int carl9170_init_interface(struct ar9170 *ar,
struct ieee80211_vif *vif)
static int carl9170_op_add_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static void carl9170_op_remove_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
void carl9170_ps_check(struct ar9170 *ar)
static int carl9170_ps_update(struct ar9170 *ar)
static void carl9170_ps_work(struct work_struct *work)
static int carl9170_op_config(struct ieee80211_hw *hw, u32 changed)
static u64 carl9170_op_prepare_multicast(struct ieee80211_hw *hw,
struct netdev_hw_addr_list *mc_list)
static void carl9170_op_configure_filter(struct ieee80211_hw *hw,
unsigned int changed_flags,
unsigned int *new_flags,
u64 multicast)
static void carl9170_op_bss_info_changed(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *bss_conf,
u32 changed)
static u64 carl9170_op_get_tsf(struct ieee80211_hw *hw)
static int carl9170_op_set_key(struct ieee80211_hw *hw, enum set_key_cmd cmd,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta,
struct ieee80211_key_conf *key)
static int carl9170_op_sta_add(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
static int carl9170_op_sta_remove(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
static int carl9170_op_conf_tx(struct ieee80211_hw *hw, u16 queue,
const struct ieee80211_tx_queue_params *param)
static void carl9170_ampdu_work(struct work_struct *work)
static int carl9170_op_ampdu_action(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
enum ieee80211_ampdu_mlme_action action,
struct ieee80211_sta *sta,
u16 tid, u16 *ssn, u8 buf_size)
static int carl9170_register_wps_button(struct ar9170 *ar)
static int carl9170_op_get_survey(struct ieee80211_hw *hw, int idx,
struct survey_info *survey)
static void carl9170_op_flush(struct ieee80211_hw *hw, bool drop)
static int carl9170_op_get_stats(struct ieee80211_hw *hw,
struct ieee80211_low_level_stats *stats)
static void carl9170_op_sta_notify(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
enum sta_notify_cmd cmd,
struct ieee80211_sta *sta)
static const struct ieee80211_ops carl9170_ops = ;
void *carl9170_alloc(size_t priv_size)
static int carl9170_read_eeprom(struct ar9170 *ar)
static int carl9170_parse_eeprom(struct ar9170 *ar)
static int carl9170_reg_notifier(struct wiphy *wiphy,
struct regulatory_request *request)
int carl9170_register(struct ar9170 *ar)
void carl9170_unregister(struct ar9170 *ar)
void carl9170_free(struct ar9170 *ar)
