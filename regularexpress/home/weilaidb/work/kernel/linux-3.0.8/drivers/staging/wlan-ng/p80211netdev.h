#define _LINUX_P80211NETDEV_H
#undef netdevice_t
typedef struct net_device netdevice_t;
#define WLAN_RELEASE	"0.3.0-staging"
#define WLAN_DEVICE_CLOSED	0
#define WLAN_DEVICE_OPEN	1
#define WLAN_MACMODE_NONE	0
#define WLAN_MACMODE_IBSS_STA	1
#define WLAN_MACMODE_ESS_STA	2
#define WLAN_MACMODE_ESS_AP	3
#define WLAN_MSD_HWPRESENT_PENDING	1
#define WLAN_MSD_HWFAIL			2
#define WLAN_MSD_HWPRESENT		3
#define WLAN_MSD_FWLOAD_PENDING		4
#define WLAN_MSD_FWLOAD			5
#define WLAN_MSD_RUNNING_PENDING	6
#define WLAN_MSD_RUNNING		7
#define ETH_P_ECONET   0x0018
#define ETH_P_80211_RAW        (ETH_P_ECONET + 1)
#define ARPHRD_IEEE80211 801
#define ARPHRD_IEEE80211_PRISM 802
#define P80211_NSDCAP_HARDWAREWEP           0x01
#define P80211_NSDCAP_SHORT_PREAMBLE        0x10
#define P80211_NSDCAP_HWFRAGMENT            0x80
#define P80211_NSDCAP_AUTOJOIN              0x100
#define P80211_NSDCAP_NOSCAN                0x200
typedef struct p80211_frmrx_t  p80211_frmrx_t;
struct iw_statistics *p80211wext_get_wireless_stats(netdevice_t * dev);
extern struct iw_handler_def p80211wext_handler_def;
int p80211wext_event_associated(struct wlandevice *wlandev, int assoc);
#define NUM_WEPKEYS 4
#define MAX_KEYLEN 32
#define HOSTWEP_DEFAULTKEY_MASK (BIT(1)|BIT(0))
#define HOSTWEP_SHAREDKEY BIT(3)
#define HOSTWEP_DECRYPT  BIT(4)
#define HOSTWEP_ENCRYPT  BIT(5)
#define HOSTWEP_PRIVACYINVOKED BIT(6)
#define HOSTWEP_EXCLUDEUNENCRYPTED BIT(7)
extern int wlan_watchdog;
extern int wlan_wext_write;
typedef struct wlandevice  wlandevice_t;
int wep_change_key(wlandevice_t *wlandev, int keynum, u8 *key, int keylen);
int wep_decrypt(wlandevice_t *wlandev, u8 *buf, u32 len, int key_override,
u8 *iv, u8 *icv);
int wep_encrypt(wlandevice_t *wlandev, u8 *buf, u8 *dst, u32 len, int keynum,
u8 *iv, u8 *icv);
int wlan_setup(wlandevice_t *wlandev, struct device *physdev);
int wlan_unsetup(wlandevice_t *wlandev);
int register_wlandev(wlandevice_t *wlandev);
int unregister_wlandev(wlandevice_t *wlandev);
void p80211netdev_rx(wlandevice_t *wlandev, struct sk_buff *skb);
void p80211netdev_hwremoved(wlandevice_t *wlandev);
