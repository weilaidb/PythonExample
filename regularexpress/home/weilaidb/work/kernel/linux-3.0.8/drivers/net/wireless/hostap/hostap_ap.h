#define HOSTAP_AP_H
#define STA_MAX_TX_BUFFER 32
#define WLAN_STA_AUTH BIT(0)
#define WLAN_STA_ASSOC BIT(1)
#define WLAN_STA_PS BIT(2)
#define WLAN_STA_TIM BIT(3)
#define WLAN_STA_PERM BIT(4)
#define WLAN_STA_AUTHORIZED BIT(5)
#define WLAN_STA_PENDING_POLL BIT(6)
#define WLAN_RATE_1M BIT(0)
#define WLAN_RATE_2M BIT(1)
#define WLAN_RATE_5M5 BIT(2)
#define WLAN_RATE_11M BIT(3)
#define WLAN_RATE_COUNT 4
#define WLAN_SUPP_RATES_MAX 32
#define WLAN_RATE_UPDATE_COUNT 50
#define WLAN_RATE_DECREASE_THRESHOLD 2
struct sta_info ;
#define MAX_STA_COUNT 1024
#define MAX_AID_TABLE_SIZE 128
#define STA_HASH_SIZE 256
#define STA_HASH(sta) (sta[5])
#define AP_MAX_INACTIVITY_SEC (5 * 60)
#define AP_DISASSOC_DELAY (HZ)
#define AP_DEAUTH_DELAY (HZ)
typedef enum  ap_policy_enum;
#define PRISM2_AUTH_OPEN BIT(0)
#define PRISM2_AUTH_SHARED_KEY BIT(1)
struct mac_entry ;
struct mac_restrictions ;
struct add_sta_proc_data ;
typedef enum  wds_oper_type;
struct wds_oper_data ;
struct ap_data ;
void hostap_rx(struct net_device *dev, struct sk_buff *skb,
struct hostap_80211_rx_status *rx_stats);
void hostap_init_data(local_info_t *local);
void hostap_init_ap_proc(local_info_t *local);
void hostap_free_data(struct ap_data *ap);
void hostap_check_sta_fw_version(struct ap_data *ap, int sta_fw_ver);
typedef enum  ap_tx_ret;
struct hostap_tx_data ;
ap_tx_ret hostap_handle_sta_tx(local_info_t *local, struct hostap_tx_data *tx);
void hostap_handle_sta_release(void *ptr);
void hostap_handle_sta_tx_exc(local_info_t *local, struct sk_buff *skb);
int hostap_update_sta_ps(local_info_t *local, struct ieee80211_hdr *hdr);
typedef enum  ap_rx_ret;
ap_rx_ret hostap_handle_sta_rx(local_info_t *local, struct net_device *dev,
struct sk_buff *skb,
struct hostap_80211_rx_status *rx_stats,
int wds);
int hostap_handle_sta_crypto(local_info_t *local, struct ieee80211_hdr *hdr,
struct lib80211_crypt_data **crypt,
void **sta_ptr);
int hostap_is_sta_assoc(struct ap_data *ap, u8 *sta_addr);
int hostap_is_sta_authorized(struct ap_data *ap, u8 *sta_addr);
int hostap_add_sta(struct ap_data *ap, u8 *sta_addr);
int hostap_update_rx_stats(struct ap_data *ap, struct ieee80211_hdr *hdr,
struct hostap_80211_rx_status *rx_stats);
void hostap_update_rates(local_info_t *local);
void hostap_add_wds_links(local_info_t *local);
void hostap_wds_link_oper(local_info_t *local, u8 *addr, wds_oper_type type);
void hostap_deauth_all_stas(struct net_device *dev, struct ap_data *ap,
int resend);
