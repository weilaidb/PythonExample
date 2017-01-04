#define __RTL871X_MLME_H_
#define	MAX_BSS_CNT	64
#define   MAX_JOIN_TIMEOUT	6000
#define		SCANNING_TIMEOUT	4500
#define	SCANQUEUE_LIFETIME 20
#define		WIFI_NULL_STATE	0x00000000
#define	WIFI_ASOC_STATE		0x00000001
#define		WIFI_REASOC_STATE 0x00000002
#define	WIFI_SLEEP_STATE	0x00000004
#define	WIFI_STATION_STATE	0x00000008
#define	WIFI_AP_STATE		0x00000010
#define	WIFI_ADHOC_STATE	0x00000020
#define   WIFI_ADHOC_MASTER_STATE 0x00000040
#define   WIFI_UNDER_LINKING	0x00000080
#define WIFI_SITE_MONITOR	0x00000800
#define	WIFI_MP_STATE		0x00010000
#define	WIFI_MP_CTX_BACKGROUND	0x00020000
#define	WIFI_MP_CTX_ST		0x00040000
#define	WIFI_MP_CTX_BACKGROUND_PENDING	0x00080000
#define	WIFI_MP_CTX_CCK_HW	0x00100000
#define	WIFI_MP_CTX_CCK_CS	0x00200000
#define   WIFI_MP_LPBK_STATE	0x00400000
#define _FW_UNDER_LINKING	WIFI_UNDER_LINKING
#define _FW_LINKED		WIFI_ASOC_STATE
#define _FW_UNDER_SURVEY	WIFI_SITE_MONITOR
#define traffic_threshold	10
#define	traffic_scan_period	500
struct sitesurvey_ctrl ;
struct mlme_priv ;
static inline u8 *get_bssid(struct mlme_priv *pmlmepriv)
static inline u8 check_fwstate(struct mlme_priv *pmlmepriv, sint state)
static inline sint get_fwstate(struct mlme_priv *pmlmepriv)
static inline void set_fwstate(struct mlme_priv *pmlmepriv, sint state)
static inline void _clr_fwstate_(struct mlme_priv *pmlmepriv, sint state)
static inline void clr_fwstate(struct mlme_priv *pmlmepriv, sint state)
static inline void up_scanned_network(struct mlme_priv *pmlmepriv)
static inline void down_scanned_network(struct mlme_priv *pmlmepriv)
static inline void set_scanned_network_val(struct mlme_priv *pmlmepriv,
sint val)
void r8712_survey_event_callback(struct _adapter *adapter, u8 *pbuf);
void r8712_surveydone_event_callback(struct _adapter *adapter, u8 *pbuf);
void r8712_joinbss_event_callback(struct _adapter *adapter, u8 *pbuf);
void r8712_stassoc_event_callback(struct _adapter *adapter, u8 *pbuf);
void r8712_stadel_event_callback(struct _adapter *adapter, u8 *pbuf);
void r8712_atimdone_event_callback(struct _adapter *adapter, u8 *pbuf);
void r8712_cpwm_event_callback(struct _adapter *adapter, u8 *pbuf);
void r8712_wpspbc_event_callback(struct _adapter *adapter, u8 *pbuf);
void r8712_free_network_queue(struct _adapter *adapter);
int r8712_init_mlme_priv(struct _adapter *adapter);
void r8712_free_mlme_priv(struct mlme_priv *pmlmepriv);
sint r8712_select_and_join_from_scan(struct mlme_priv *pmlmepriv);
sint r8712_set_key(struct _adapter *adapter,
struct security_priv *psecuritypriv, sint keyid);
sint r8712_set_auth(struct _adapter *adapter,
struct security_priv *psecuritypriv);
uint r8712_get_ndis_wlan_bssid_ex_sz(struct ndis_wlan_bssid_ex *bss);
void r8712_generate_random_ibss(u8 *pibss);
u8 *r8712_get_capability_from_ie(u8 *ie);
struct wlan_network *r8712_get_oldest_wlan_network(
struct  __queue *scanned_queue);
void r8712_free_assoc_resources(struct _adapter *adapter);
void r8712_ind_disconnect(struct _adapter *adapter);
void r8712_indicate_connect(struct _adapter *adapter);
int r8712_restruct_sec_ie(struct _adapter *adapter, u8 *in_ie,
u8 *out_ie, uint in_len);
int r8712_restruct_wmm_ie(struct _adapter *adapter, u8 *in_ie,
u8 *out_ie, uint in_len, uint initial_out_len);
void r8712_init_registrypriv_dev_network(struct _adapter *adapter);
void r8712_update_registrypriv_dev_network(struct _adapter *adapter);
void _r8712_sitesurvey_ctrl_handler(struct _adapter *adapter);
void _r8712_join_timeout_handler(struct _adapter *adapter);
void r8712_scan_timeout_handler(struct _adapter *adapter);
void _r8712_dhcp_timeout_handler(struct _adapter *adapter);
void _r8712_wdg_timeout_handler(struct _adapter *adapter);
struct wlan_network *_r8712_alloc_network(struct mlme_priv *pmlmepriv);
sint r8712_if_up(struct _adapter *padapter);
void r8712_joinbss_reset(struct _adapter *padapter);
unsigned int r8712_restructure_ht_ie(struct _adapter *padapter, u8 *in_ie,
u8 *out_ie, uint in_len, uint *pout_len);
void r8712_issue_addbareq_cmd(struct _adapter *padapter, int priority);
unsigned int r8712_add_ht_addt_info(struct _adapter *padapter, u8 *in_ie,
u8 *out_ie, uint in_len, uint *pout_len);
int r8712_is_same_ibss(struct _adapter *adapter, struct wlan_network *pnetwork);
