static const u8 bcast_addr[ETH_ALEN] = ;
static void assert_key_lock(struct ieee80211_local *local)
static struct ieee80211_sta *get_sta_for_key(struct ieee80211_key *key)
static int ieee80211_key_enable_hw_accel(struct ieee80211_key *key)
static void ieee80211_key_disable_hw_accel(struct ieee80211_key *key)
void ieee80211_key_removed(struct ieee80211_key_conf *key_conf)
EXPORT_SYMBOL_GPL(ieee80211_key_removed);
static void __ieee80211_set_default_key(struct ieee80211_sub_if_data *sdata,
int idx, bool uni, bool multi)
void ieee80211_set_default_key(struct ieee80211_sub_if_data *sdata, int idx,
bool uni, bool multi)
static void
__ieee80211_set_default_mgmt_key(struct ieee80211_sub_if_data *sdata, int idx)
void ieee80211_set_default_mgmt_key(struct ieee80211_sub_if_data *sdata,
int idx)
static void __ieee80211_key_replace(struct ieee80211_sub_if_data *sdata,
struct sta_info *sta,
bool pairwise,
struct ieee80211_key *old,
struct ieee80211_key *new)
struct ieee80211_key *ieee80211_key_alloc(u32 cipher, int idx, size_t key_len,
const u8 *key_data,
size_t seq_len, const u8 *seq)
static void __ieee80211_key_destroy(struct ieee80211_key *key)
int ieee80211_key_link(struct ieee80211_key *key,
struct ieee80211_sub_if_data *sdata,
struct sta_info *sta)
void __ieee80211_key_free(struct ieee80211_key *key)
void ieee80211_key_free(struct ieee80211_local *local,
struct ieee80211_key *key)
void ieee80211_enable_keys(struct ieee80211_sub_if_data *sdata)
void ieee80211_disable_keys(struct ieee80211_sub_if_data *sdata)
void ieee80211_free_keys(struct ieee80211_sub_if_data *sdata)
