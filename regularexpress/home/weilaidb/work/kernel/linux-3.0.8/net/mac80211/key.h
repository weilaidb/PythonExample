#define IEEE80211_KEY_H
#define NUM_DEFAULT_KEYS 4
#define NUM_DEFAULT_MGMT_KEYS 2
#define WEP_IV_LEN		4
#define WEP_ICV_LEN		4
#define ALG_CCMP_KEY_LEN	16
#define CCMP_HDR_LEN		8
#define CCMP_MIC_LEN		8
#define CCMP_TK_LEN		16
#define CCMP_PN_LEN		6
#define TKIP_IV_LEN		8
#define TKIP_ICV_LEN		4
#define NUM_RX_DATA_QUEUES	17
struct ieee80211_local;
struct ieee80211_sub_if_data;
struct sta_info;
enum ieee80211_internal_key_flags ;
enum ieee80211_internal_tkip_state ;
struct tkip_ctx ;
struct ieee80211_key ;
struct ieee80211_key *ieee80211_key_alloc(u32 cipher, int idx, size_t key_len,
const u8 *key_data,
size_t seq_len, const u8 *seq);
int __must_check ieee80211_key_link(struct ieee80211_key *key,
struct ieee80211_sub_if_data *sdata,
struct sta_info *sta);
void __ieee80211_key_free(struct ieee80211_key *key);
void ieee80211_key_free(struct ieee80211_local *local,
struct ieee80211_key *key);
void ieee80211_set_default_key(struct ieee80211_sub_if_data *sdata, int idx,
bool uni, bool multi);
void ieee80211_set_default_mgmt_key(struct ieee80211_sub_if_data *sdata,
int idx);
void ieee80211_free_keys(struct ieee80211_sub_if_data *sdata);
void ieee80211_enable_keys(struct ieee80211_sub_if_data *sdata);
void ieee80211_disable_keys(struct ieee80211_sub_if_data *sdata);
#define key_mtx_dereference(local, ref) \
rcu_dereference_protected(ref, lockdep_is_held(&((local)->key_mtx)))
