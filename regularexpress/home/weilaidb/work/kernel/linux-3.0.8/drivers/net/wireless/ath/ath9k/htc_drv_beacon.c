#define FUDGE 2
void ath9k_htc_beaconq_config(struct ath9k_htc_priv *priv)
static void ath9k_htc_beacon_config_sta(struct ath9k_htc_priv *priv,
struct htc_beacon_config *bss_conf)
static void ath9k_htc_beacon_config_ap(struct ath9k_htc_priv *priv,
struct htc_beacon_config *bss_conf)
static void ath9k_htc_beacon_config_adhoc(struct ath9k_htc_priv *priv,
struct htc_beacon_config *bss_conf)
void ath9k_htc_beaconep(void *drv_priv, struct sk_buff *skb,
enum htc_endpoint_id ep_id, bool txok)
static void ath9k_htc_send_buffered(struct ath9k_htc_priv *priv,
int slot)
static void ath9k_htc_send_beacon(struct ath9k_htc_priv *priv,
int slot)
static int ath9k_htc_choose_bslot(struct ath9k_htc_priv *priv,
struct wmi_event_swba *swba)
void ath9k_htc_swba(struct ath9k_htc_priv *priv,
struct wmi_event_swba *swba)
void ath9k_htc_assign_bslot(struct ath9k_htc_priv *priv,
struct ieee80211_vif *vif)
void ath9k_htc_remove_bslot(struct ath9k_htc_priv *priv,
struct ieee80211_vif *vif)
void ath9k_htc_set_tsfadjust(struct ath9k_htc_priv *priv,
struct ieee80211_vif *vif)
static void ath9k_htc_beacon_iter(void *data, u8 *mac, struct ieee80211_vif *vif)
static bool ath9k_htc_check_beacon_config(struct ath9k_htc_priv *priv,
struct ieee80211_vif *vif)
void ath9k_htc_beacon_config(struct ath9k_htc_priv *priv,
struct ieee80211_vif *vif)
void ath9k_htc_beacon_reconfig(struct ath9k_htc_priv *priv)
