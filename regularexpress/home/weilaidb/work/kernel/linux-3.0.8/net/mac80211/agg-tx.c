static void ieee80211_send_addba_request(struct ieee80211_sub_if_data *sdata,
const u8 *da, u16 tid,
u8 dialog_token, u16 start_seq_num,
u16 agg_size, u16 timeout)
void ieee80211_send_bar(struct ieee80211_sub_if_data *sdata, u8 *ra, u16 tid, u16 ssn)
void ieee80211_assign_tid_tx(struct sta_info *sta, int tid,
struct tid_ampdu_tx *tid_tx)
int ___ieee80211_stop_tx_ba_session(struct sta_info *sta, u16 tid,
enum ieee80211_back_parties initiator,
bool tx)
static void sta_addba_resp_timer_expired(unsigned long data)
static inline int ieee80211_ac_from_tid(int tid)
static void __acquires(agg_queue)
ieee80211_stop_queue_agg(struct ieee80211_local *local, int tid)
static void __releases(agg_queue)
ieee80211_wake_queue_agg(struct ieee80211_local *local, int tid)
void ieee80211_tx_ba_session_handle_start(struct sta_info *sta, int tid)
int ieee80211_start_tx_ba_session(struct ieee80211_sta *pubsta, u16 tid,
u16 timeout)
EXPORT_SYMBOL(ieee80211_start_tx_ba_session);
static void __acquires(agg_queue)
ieee80211_agg_splice_packets(struct ieee80211_local *local,
struct tid_ampdu_tx *tid_tx, u16 tid)
static void __releases(agg_queue)
ieee80211_agg_splice_finish(struct ieee80211_local *local, u16 tid)
static void ieee80211_agg_tx_operational(struct ieee80211_local *local,
struct sta_info *sta, u16 tid)
void ieee80211_start_tx_ba_cb(struct ieee80211_vif *vif, u8 *ra, u16 tid)
void ieee80211_start_tx_ba_cb_irqsafe(struct ieee80211_vif *vif,
const u8 *ra, u16 tid)
EXPORT_SYMBOL(ieee80211_start_tx_ba_cb_irqsafe);
int __ieee80211_stop_tx_ba_session(struct sta_info *sta, u16 tid,
enum ieee80211_back_parties initiator,
bool tx)
int ieee80211_stop_tx_ba_session(struct ieee80211_sta *pubsta, u16 tid)
EXPORT_SYMBOL(ieee80211_stop_tx_ba_session);
void ieee80211_stop_tx_ba_cb(struct ieee80211_vif *vif, u8 *ra, u8 tid)
void ieee80211_stop_tx_ba_cb_irqsafe(struct ieee80211_vif *vif,
const u8 *ra, u16 tid)
EXPORT_SYMBOL(ieee80211_stop_tx_ba_cb_irqsafe);
void ieee80211_process_addba_resp(struct ieee80211_local *local,
struct sta_info *sta,
struct ieee80211_mgmt *mgmt,
size_t len)
