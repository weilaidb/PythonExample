#define _IEEE80211_C
static const u8 WPA_OUI_TYPE[] = ;
static const u8 WPA_CIPHER_SUITE_NONE[] = ;
static const u8 WPA_CIPHER_SUITE_WEP40[] = ;
static const u8 WPA_CIPHER_SUITE_TKIP[] = ;
static const u8 WPA_CIPHER_SUITE_CCMP[] = ;
static const u8 WPA_CIPHER_SUITE_WEP104[] = ;
static const u8 RSN_CIPHER_SUITE_NONE[] = ;
static const u8 RSN_CIPHER_SUITE_WEP40[] = ;
static const u8 RSN_CIPHER_SUITE_TKIP[] = ;
static const u8 RSN_CIPHER_SUITE_CCMP[] = ;
static const u8 RSN_CIPHER_SUITE_WEP104[] = ;
static u8 WIFI_CCKRATES[] =  ;
static u8 WIFI_OFDMRATES[] = ;
uint r8712_is_cckrates_included(u8 *rate)
uint r8712_is_cckratesonly_included(u8 *rate)
u8 *r8712_set_ie(u8 *pbuf, sint index, uint len, u8 *source, uint *frlen)
u8 *r8712_get_ie(u8 *pbuf, sint index, sint *len, sint limit)
static void set_supported_rate(u8 *SupportedRates, uint mode)
static uint r8712_get_rateset_len(u8 *rateset)
int r8712_generate_ie(struct registry_priv *pregistrypriv,
struct _adapter *padapter)
unsigned char *r8712_get_wpa_ie(unsigned char *pie, int *wpa_ie_len, int limit)
unsigned char *r8712_get_wpa2_ie(unsigned char *pie, int *rsn_ie_len, int limit)
static int r8712_get_wpa_cipher_suite(u8 *s)
static int r8712_get_wpa2_cipher_suite(u8 *s)
int r8712_parse_wpa_ie(u8 *wpa_ie, int wpa_ie_len, int *group_cipher,
int *pairwise_cipher)
int r8712_parse_wpa2_ie(u8 *rsn_ie, int rsn_ie_len, int *group_cipher,
int *pairwise_cipher)
int r8712_get_sec_ie(u8 *in_ie, uint in_len, u8 *rsn_ie, u16 *rsn_len,
u8 *wpa_ie, u16 *wpa_len)
int r8712_get_wps_ie(u8 *in_ie, uint in_len, u8 *wps_ie, uint *wps_ielen)
