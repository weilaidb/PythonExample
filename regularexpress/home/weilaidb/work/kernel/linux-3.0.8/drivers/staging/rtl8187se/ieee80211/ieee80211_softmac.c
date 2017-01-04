u8 rsn_authen_cipher_suite[16][4] = ;
short ieee80211_is_54g(struct ieee80211_network net)
short ieee80211_is_shortslot(struct ieee80211_network net)
unsigned int ieee80211_MFIE_rate_len(struct ieee80211_device *ieee)
void ieee80211_MFIE_Brate(struct ieee80211_device *ieee, u8 **tag_p)
void ieee80211_MFIE_Grate(struct ieee80211_device *ieee, u8 **tag_p)
void ieee80211_WMM_Info(struct ieee80211_device *ieee, u8 **tag_p)
void ieee80211_TURBO_Info(struct ieee80211_device *ieee, u8 **tag_p)
void enqueue_mgmt(struct ieee80211_device *ieee, struct sk_buff *skb)
struct sk_buff *dequeue_mgmt(struct ieee80211_device *ieee)
void init_mgmt_queue(struct ieee80211_device *ieee)
void ieee80211_sta_wakeup(struct ieee80211_device *ieee, short nl);
inline void softmac_mgmt_xmit(struct sk_buff *skb, struct ieee80211_device *ieee)
inline void softmac_ps_mgmt_xmit(struct sk_buff *skb, struct ieee80211_device *ieee)
inline struct sk_buff *ieee80211_disassociate_skb(
struct ieee80211_network *beacon,
struct ieee80211_device *ieee,
u8	asRsn)
void
SendDisassociation(
struct ieee80211_device *ieee,
u8*                     asSta,
u8                      asRsn
)
inline struct sk_buff *ieee80211_probe_req(struct ieee80211_device *ieee)
struct sk_buff *ieee80211_get_beacon_(struct ieee80211_device *ieee);
void ext_ieee80211_send_beacon_wq(struct ieee80211_device *ieee)
void ieee80211_send_beacon(struct ieee80211_device *ieee)
void ieee80211_send_beacon_cb(unsigned long _ieee)
void ieee80211_send_probe(struct ieee80211_device *ieee)
void ieee80211_send_probe_requests(struct ieee80211_device *ieee)
void ieee80211_softmac_scan_syncro(struct ieee80211_device *ieee)
void ieee80211_softmac_ips_scan_syncro(struct ieee80211_device *ieee)
void ieee80211_softmac_scan_wq(struct work_struct *work)
void ieee80211_beacons_start(struct ieee80211_device *ieee)
void ieee80211_beacons_stop(struct ieee80211_device *ieee)
void ieee80211_stop_send_beacons(struct ieee80211_device *ieee)
void ieee80211_start_send_beacons(struct ieee80211_device *ieee)
void ieee80211_softmac_stop_scan(struct ieee80211_device *ieee)
void ieee80211_stop_scan(struct ieee80211_device *ieee)
void ieee80211_rtl_start_scan(struct ieee80211_device *ieee)
void ieee80211_start_scan_syncro(struct ieee80211_device *ieee)
inline struct sk_buff *ieee80211_authentication_req(struct ieee80211_network *beacon,
struct ieee80211_device *ieee, int challengelen)
static struct sk_buff* ieee80211_probe_resp(struct ieee80211_device *ieee, u8 *dest)
struct sk_buff* ieee80211_assoc_resp(struct ieee80211_device *ieee, u8 *dest)
struct sk_buff* ieee80211_auth_resp(struct ieee80211_device *ieee,int status, u8 *dest)
struct sk_buff* ieee80211_null_func(struct ieee80211_device *ieee,short pwr)
void ieee80211_resp_to_assoc_rq(struct ieee80211_device *ieee, u8* dest)
void ieee80211_resp_to_auth(struct ieee80211_device *ieee, int s, u8* dest)
void ieee80211_resp_to_probe(struct ieee80211_device *ieee, u8 *dest)
inline struct sk_buff *ieee80211_association_req(struct ieee80211_network *beacon,struct ieee80211_device *ieee)
void ieee80211_associate_abort(struct ieee80211_device *ieee)
void ieee80211_associate_abort_cb(unsigned long dev)
void ieee80211_associate_step1(struct ieee80211_device *ieee)
void ieee80211_rtl_auth_challenge(struct ieee80211_device *ieee, u8 *challenge, int chlen)
void ieee80211_associate_step2(struct ieee80211_device *ieee)
void ieee80211_associate_complete_wq(struct work_struct *work)
void ieee80211_associate_complete(struct ieee80211_device *ieee)
void ieee80211_associate_procedure_wq(struct work_struct *work)
inline void ieee80211_softmac_new_net(struct ieee80211_device *ieee, struct ieee80211_network *net)
void ieee80211_softmac_check_all_nets(struct ieee80211_device *ieee)
static inline u16 auth_parse(struct sk_buff *skb, u8** challenge, int *chlen)
int auth_rq_parse(struct sk_buff *skb,u8* dest)
static short probe_rq_parse(struct ieee80211_device *ieee, struct sk_buff *skb, u8 *src)
int assoc_rq_parse(struct sk_buff *skb,u8* dest)
static inline u16 assoc_parse(struct sk_buff *skb, int *aid)
static inline void
ieee80211_rx_probe_rq(struct ieee80211_device *ieee, struct sk_buff *skb)
inline void
ieee80211_rx_auth_rq(struct ieee80211_device *ieee, struct sk_buff *skb)
inline void
ieee80211_rx_assoc_rq(struct ieee80211_device *ieee, struct sk_buff *skb)
void ieee80211_sta_ps_send_null_frame(struct ieee80211_device *ieee, short pwr)
short ieee80211_sta_ps_sleep(struct ieee80211_device *ieee, u32 *time_h, u32 *time_l)
inline void ieee80211_sta_ps(struct ieee80211_device *ieee)
void ieee80211_sta_wakeup(struct ieee80211_device *ieee, short nl)
void ieee80211_ps_tx_ack(struct ieee80211_device *ieee, short success)
inline int
ieee80211_rx_frame_softmac(struct ieee80211_device *ieee, struct sk_buff *skb,
struct ieee80211_rx_stats *rx_stats, u16 type,
u16 stype)
void ieee80211_softmac_xmit(struct ieee80211_txb *txb, struct ieee80211_device *ieee)
void ieee80211_resume_tx(struct ieee80211_device *ieee)
void ieee80211_reset_queue(struct ieee80211_device *ieee)
void ieee80211_rtl_wake_queue(struct ieee80211_device *ieee)
void ieee80211_rtl_stop_queue(struct ieee80211_device *ieee)
inline void ieee80211_randomize_cell(struct ieee80211_device *ieee)
void ieee80211_start_master_bss(struct ieee80211_device *ieee)
void ieee80211_start_monitor_mode(struct ieee80211_device *ieee)
void ieee80211_start_ibss_wq(struct work_struct *work)
inline void ieee80211_start_ibss(struct ieee80211_device *ieee)
void ieee80211_start_bss(struct ieee80211_device *ieee)
void ieee80211_disassociate(struct ieee80211_device *ieee)
void ieee80211_associate_retry_wq(struct work_struct *work)
struct sk_buff *ieee80211_get_beacon_(struct ieee80211_device *ieee)
struct sk_buff *ieee80211_get_beacon(struct ieee80211_device *ieee)
void ieee80211_softmac_stop_protocol(struct ieee80211_device *ieee)
void ieee80211_stop_protocol(struct ieee80211_device *ieee)
void ieee80211_softmac_start_protocol(struct ieee80211_device *ieee)
void ieee80211_start_protocol(struct ieee80211_device *ieee)
#define DRV_NAME  "Ieee80211"
void ieee80211_softmac_init(struct ieee80211_device *ieee)
void ieee80211_softmac_free(struct ieee80211_device *ieee)
static int ieee80211_wpa_enable(struct ieee80211_device *ieee, int value)
void ieee80211_wpa_assoc_frame(struct ieee80211_device *ieee, char *wpa_ie, int wpa_ie_len)
static int ieee80211_wpa_mlme(struct ieee80211_device *ieee, int command, int reason)
static int ieee80211_wpa_set_wpa_ie(struct ieee80211_device *ieee,
struct ieee_param *param, int plen)
#define AUTH_ALG_OPEN_SYSTEM			0x1
#define AUTH_ALG_SHARED_KEY			0x2
static int ieee80211_wpa_set_auth_algs(struct ieee80211_device *ieee, int value)
static int ieee80211_wpa_set_param(struct ieee80211_device *ieee, u8 name, u32 value)
static int ieee80211_wpa_set_encryption(struct ieee80211_device *ieee,
struct ieee_param *param, int param_len)
int ieee80211_wpa_supplicant_ioctl(struct ieee80211_device *ieee, struct iw_point *p)
void notify_wx_assoc_event(struct ieee80211_device *ieee)
