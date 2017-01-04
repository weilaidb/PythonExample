#define _P80211MGMT_H
#define WLAN_EID_SSID		0
#define WLAN_EID_SUPP_RATES	1
#define WLAN_EID_FH_PARMS	2
#define WLAN_EID_DS_PARMS	3
#define WLAN_EID_CF_PARMS	4
#define WLAN_EID_TIM		5
#define WLAN_EID_IBSS_PARMS	6
#define WLAN_EID_CHALLENGE	16
#define WLAN_MGMT_REASON_RSVD			0
#define WLAN_MGMT_REASON_UNSPEC			1
#define WLAN_MGMT_REASON_PRIOR_AUTH_INVALID	2
#define WLAN_MGMT_REASON_DEAUTH_LEAVING		3
#define WLAN_MGMT_REASON_DISASSOC_INACTIVE	4
#define WLAN_MGMT_REASON_DISASSOC_AP_BUSY	5
#define WLAN_MGMT_REASON_CLASS2_NONAUTH		6
#define WLAN_MGMT_REASON_CLASS3_NONASSOC	7
#define WLAN_MGMT_REASON_DISASSOC_STA_HASLEFT	8
#define WLAN_MGMT_REASON_CANT_ASSOC_NONAUTH	9
#define WLAN_MGMT_STATUS_SUCCESS		0
#define WLAN_MGMT_STATUS_UNSPEC_FAILURE		1
#define WLAN_MGMT_STATUS_CAPS_UNSUPPORTED	10
#define WLAN_MGMT_STATUS_REASSOC_NO_ASSOC	11
#define WLAN_MGMT_STATUS_ASSOC_DENIED_UNSPEC	12
#define WLAN_MGMT_STATUS_UNSUPPORTED_AUTHALG	13
#define WLAN_MGMT_STATUS_RX_AUTH_NOSEQ		14
#define WLAN_MGMT_STATUS_CHALLENGE_FAIL		15
#define WLAN_MGMT_STATUS_AUTH_TIMEOUT		16
#define WLAN_MGMT_STATUS_ASSOC_DENIED_BUSY	17
#define WLAN_MGMT_STATUS_ASSOC_DENIED_RATES	18
#define WLAN_MGMT_STATUS_ASSOC_DENIED_NOSHORT	19
#define WLAN_MGMT_STATUS_ASSOC_DENIED_NOPBCC	20
#define WLAN_MGMT_STATUS_ASSOC_DENIED_NOAGILITY	21
#define WLAN_AUTH_ALG_OPENSYSTEM		0
#define WLAN_AUTH_ALG_SHAREDKEY			1
#define WLAN_BEACON_OFF_TS			0
#define WLAN_BEACON_OFF_BCN_int			8
#define WLAN_BEACON_OFF_CAPINFO			10
#define WLAN_BEACON_OFF_SSID			12
#define WLAN_DISASSOC_OFF_REASON		0
#define WLAN_ASSOCREQ_OFF_CAP_INFO		0
#define WLAN_ASSOCREQ_OFF_LISTEN_int		2
#define WLAN_ASSOCREQ_OFF_SSID			4
#define WLAN_ASSOCRESP_OFF_CAP_INFO		0
#define WLAN_ASSOCRESP_OFF_STATUS		2
#define WLAN_ASSOCRESP_OFF_AID			4
#define WLAN_ASSOCRESP_OFF_SUPP_RATES		6
#define WLAN_REASSOCREQ_OFF_CAP_INFO		0
#define WLAN_REASSOCREQ_OFF_LISTEN_int		2
#define WLAN_REASSOCREQ_OFF_CURR_AP		4
#define WLAN_REASSOCREQ_OFF_SSID		10
#define WLAN_REASSOCRESP_OFF_CAP_INFO		0
#define WLAN_REASSOCRESP_OFF_STATUS		2
#define WLAN_REASSOCRESP_OFF_AID		4
#define WLAN_REASSOCRESP_OFF_SUPP_RATES		6
#define WLAN_PROBEREQ_OFF_SSID			0
#define WLAN_PROBERESP_OFF_TS			0
#define WLAN_PROBERESP_OFF_BCN_int		8
#define WLAN_PROBERESP_OFF_CAP_INFO		10
#define WLAN_PROBERESP_OFF_SSID			12
#define WLAN_AUTHEN_OFF_AUTH_ALG		0
#define WLAN_AUTHEN_OFF_AUTH_SEQ		2
#define WLAN_AUTHEN_OFF_STATUS			4
#define WLAN_AUTHEN_OFF_CHALLENGE		6
#define WLAN_DEAUTHEN_OFF_REASON		0
#define WLAN_GET_MGMT_CAP_INFO_ESS(n)		((n) & BIT(0))
#define WLAN_GET_MGMT_CAP_INFO_IBSS(n)		(((n) & BIT(1)) >> 1)
#define WLAN_GET_MGMT_CAP_INFO_CFPOLLABLE(n)	(((n) & BIT(2)) >> 2)
#define WLAN_GET_MGMT_CAP_INFO_CFPOLLREQ(n)	(((n) & BIT(3)) >> 3)
#define WLAN_GET_MGMT_CAP_INFO_PRIVACY(n)	(((n) & BIT(4)) >> 4)
#define WLAN_GET_MGMT_CAP_INFO_SHORT(n)		(((n) & BIT(5)) >> 5)
#define WLAN_GET_MGMT_CAP_INFO_PBCC(n)		(((n) & BIT(6)) >> 6)
#define WLAN_GET_MGMT_CAP_INFO_AGILITY(n)	(((n) & BIT(7)) >> 7)
#define WLAN_SET_MGMT_CAP_INFO_ESS(n)		(n)
#define WLAN_SET_MGMT_CAP_INFO_IBSS(n)		((n) << 1)
#define WLAN_SET_MGMT_CAP_INFO_CFPOLLABLE(n)	((n) << 2)
#define WLAN_SET_MGMT_CAP_INFO_CFPOLLREQ(n)	((n) << 3)
#define WLAN_SET_MGMT_CAP_INFO_PRIVACY(n)	((n) << 4)
#define WLAN_SET_MGMT_CAP_INFO_SHORT(n)		((n) << 5)
#define WLAN_SET_MGMT_CAP_INFO_PBCC(n)		((n) << 6)
#define WLAN_SET_MGMT_CAP_INFO_AGILITY(n)	((n) << 7)
typedef struct wlan_ie  __packed wlan_ie_t;
typedef struct wlan_ie_ssid  __packed wlan_ie_ssid_t;
typedef struct wlan_ie_supp_rates  __packed wlan_ie_supp_rates_t;
typedef struct wlan_ie_fh_parms  __packed wlan_ie_fh_parms_t;
typedef struct wlan_ie_ds_parms  __packed wlan_ie_ds_parms_t;
typedef struct wlan_ie_cf_parms  __packed wlan_ie_cf_parms_t;
typedef struct wlan_ie_tim  __packed wlan_ie_tim_t;
typedef struct wlan_ie_ibss_parms  __packed wlan_ie_ibss_parms_t;
typedef struct wlan_ie_challenge  __packed wlan_ie_challenge_t;
typedef struct wlan_fr_mgmt  wlan_fr_mgmt_t;
typedef struct wlan_fr_beacon  wlan_fr_beacon_t;
typedef struct wlan_fr_ibssatim  wlan_fr_ibssatim_t;
typedef struct wlan_fr_disassoc  wlan_fr_disassoc_t;
typedef struct wlan_fr_assocreq  wlan_fr_assocreq_t;
typedef struct wlan_fr_assocresp  wlan_fr_assocresp_t;
typedef struct wlan_fr_reassocreq  wlan_fr_reassocreq_t;
typedef struct wlan_fr_reassocresp  wlan_fr_reassocresp_t;
typedef struct wlan_fr_probereq  wlan_fr_probereq_t;
typedef struct wlan_fr_proberesp  wlan_fr_proberesp_t;
typedef struct wlan_fr_authen  wlan_fr_authen_t;
typedef struct wlan_fr_deauthen  wlan_fr_deauthen_t;
void wlan_mgmt_encode_beacon(wlan_fr_beacon_t *f);
void wlan_mgmt_decode_beacon(wlan_fr_beacon_t *f);
void wlan_mgmt_encode_disassoc(wlan_fr_disassoc_t *f);
void wlan_mgmt_decode_disassoc(wlan_fr_disassoc_t *f);
void wlan_mgmt_encode_assocreq(wlan_fr_assocreq_t *f);
void wlan_mgmt_decode_assocreq(wlan_fr_assocreq_t *f);
void wlan_mgmt_encode_assocresp(wlan_fr_assocresp_t *f);
void wlan_mgmt_decode_assocresp(wlan_fr_assocresp_t *f);
void wlan_mgmt_encode_reassocreq(wlan_fr_reassocreq_t *f);
void wlan_mgmt_decode_reassocreq(wlan_fr_reassocreq_t *f);
void wlan_mgmt_encode_reassocresp(wlan_fr_reassocresp_t *f);
void wlan_mgmt_decode_reassocresp(wlan_fr_reassocresp_t *f);
void wlan_mgmt_encode_probereq(wlan_fr_probereq_t *f);
void wlan_mgmt_decode_probereq(wlan_fr_probereq_t *f);
void wlan_mgmt_encode_proberesp(wlan_fr_proberesp_t *f);
void wlan_mgmt_decode_proberesp(wlan_fr_proberesp_t *f);
void wlan_mgmt_encode_authen(wlan_fr_authen_t *f);
void wlan_mgmt_decode_authen(wlan_fr_authen_t *f);
void wlan_mgmt_encode_deauthen(wlan_fr_deauthen_t *f);
void wlan_mgmt_decode_deauthen(wlan_fr_deauthen_t *f);
