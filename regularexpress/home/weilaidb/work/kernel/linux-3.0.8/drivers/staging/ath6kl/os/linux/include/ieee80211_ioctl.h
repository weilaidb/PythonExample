#define _IEEE80211_IOCTL_H_
struct ieee80211req_key ;
struct ieee80211req_del_key ;
struct ieee80211req_mlme ;
struct ieee80211req_addpmkid ;
#define AUTH_ALG_OPEN_SYSTEM    0x01
#define AUTH_ALG_SHARED_KEY 0x02
#define AUTH_ALG_LEAP       0x04
struct ieee80211req_authalg ;
enum;
#define IEEE80211_APPIE_FRAME_MAX_LEN  200
struct ieee80211req_getset_appiebuf ;
enum ;
struct ieee80211req_set_filter ;
enum ;
#define WPA_MODE_WPA1   1
#define WPA_MODE_WPA2   2
#define WPA_MODE_AUTO   3
#define WPA_MODE_NONE   4
struct ieee80211req_wpaie ;
#define IW_ENCODE_ALG_PMK       4
