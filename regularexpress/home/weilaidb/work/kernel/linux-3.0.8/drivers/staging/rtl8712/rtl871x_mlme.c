#define _RTL871X_MLME_C_
static void update_ht_cap(struct _adapter *padapter, u8 *pie, uint ie_len);
static sint _init_mlme_priv(struct _adapter *padapter)
struct wlan_network *_r8712_alloc_network(struct mlme_priv *pmlmepriv)
static void _free_network(struct mlme_priv *pmlmepriv,
struct wlan_network *pnetwork)
static void _free_network_nolock(struct mlme_priv *pmlmepriv,
struct wlan_network *pnetwork)
static struct wlan_network *_r8712_find_network(struct  __queue *scanned_queue,
u8 *addr)
static void _free_network_queue(struct _adapter *padapter)
sint r8712_if_up(struct _adapter *padapter)
void r8712_generate_random_ibss(u8 *pibss)
uint r8712_get_ndis_wlan_bssid_ex_sz(struct ndis_wlan_bssid_ex *bss)
u8 *r8712_get_capability_from_ie(u8 *ie)
int r8712_init_mlme_priv(struct _adapter *padapter)
void r8712_free_mlme_priv(struct mlme_priv *pmlmepriv)
static struct	wlan_network *alloc_network(struct mlme_priv *pmlmepriv)
static void free_network_nolock(struct mlme_priv *pmlmepriv,
struct wlan_network *pnetwork)
void r8712_free_network_queue(struct _adapter *dev)
static struct wlan_network *r8712_find_network(struct  __queue *scanned_queue,
u8 *addr)
int r8712_is_same_ibss(struct _adapter *adapter, struct wlan_network *pnetwork)
static int is_same_network(struct ndis_wlan_bssid_ex *src,
struct ndis_wlan_bssid_ex *dst)
struct	wlan_network *r8712_get_oldest_wlan_network(
struct  __queue *scanned_queue)
static void update_network(struct ndis_wlan_bssid_ex *dst,
struct ndis_wlan_bssid_ex *src,
struct _adapter *padapter)
static void update_current_network(struct _adapter *adapter,
struct ndis_wlan_bssid_ex *pnetwork)
static void update_scanned_network(struct _adapter *adapter,
struct ndis_wlan_bssid_ex *target)
static void rtl8711_add_network(struct _adapter *adapter,
struct ndis_wlan_bssid_ex *pnetwork)
static int is_desired_network(struct _adapter *adapter,
struct wlan_network *pnetwork)
void r8712_atimdone_event_callback(struct _adapter *adapter , u8 *pbuf)
void r8712_survey_event_callback(struct _adapter *adapter, u8 *pbuf)
void r8712_surveydone_event_callback(struct _adapter *adapter, u8 *pbuf)
void r8712_free_assoc_resources(struct _adapter *adapter)
void r8712_indicate_connect(struct _adapter *padapter)
void r8712_ind_disconnect(struct _adapter *padapter)
void r8712_joinbss_event_callback(struct _adapter *adapter, u8 *pbuf)
void r8712_stassoc_event_callback(struct _adapter *adapter, u8 *pbuf)
void r8712_stadel_event_callback(struct _adapter *adapter, u8 *pbuf)
void r8712_cpwm_event_callback(struct _adapter *adapter, u8 *pbuf)
void r8712_got_addbareq_event_callback(struct _adapter *adapter, u8 *pbuf)
void r8712_wpspbc_event_callback(struct _adapter *adapter, u8 *pbuf)
void _r8712_sitesurvey_ctrl_handler(struct _adapter *adapter)
void _r8712_join_timeout_handler(struct _adapter *adapter)
void r8712_scan_timeout_handler (struct _adapter *adapter)
void _r8712_dhcp_timeout_handler (struct _adapter *adapter)
void _r8712_wdg_timeout_handler(struct _adapter *adapter)
int r8712_select_and_join_from_scan(struct mlme_priv *pmlmepriv)
sint r8712_set_auth(struct _adapter *adapter,
struct security_priv *psecuritypriv)
sint r8712_set_key(struct _adapter *adapter,
struct security_priv *psecuritypriv,
sint keyid)
int r8712_restruct_wmm_ie(struct _adapter *adapter, u8 *in_ie, u8 *out_ie,
uint in_len, uint initial_out_len)
static int SecIsInPMKIDList(struct _adapter *Adapter, u8 *bssid)
sint r8712_restruct_sec_ie(struct _adapter *adapter, u8 *in_ie,
u8 *out_ie, uint in_len)
void r8712_init_registrypriv_dev_network(struct _adapter *adapter)
void r8712_update_registrypriv_dev_network(struct _adapter *adapter)
void r8712_joinbss_reset(struct _adapter *padapter)
unsigned int r8712_restructure_ht_ie(struct _adapter *padapter, u8 *in_ie,
u8 *out_ie, uint in_len, uint *pout_len)
static void update_ht_cap(struct _adapter *padapter, u8 *pie, uint ie_len)
void r8712_issue_addbareq_cmd(struct _adapter *padapter, int priority)
unsigned int r8712_add_ht_addt_info(struct _adapter *padapter,
u8 *in_ie, u8 *out_ie,
uint in_len, uint *pout_len)
