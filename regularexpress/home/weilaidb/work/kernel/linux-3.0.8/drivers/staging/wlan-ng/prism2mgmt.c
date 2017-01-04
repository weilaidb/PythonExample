#define p80211rate_to_p2bit(n)	((((n)&~BIT(7)) == 2) ? BIT(0) :  \
(((n)&~BIT(7)) == 4) ? BIT(1) : \
(((n)&~BIT(7)) == 11) ? BIT(2) : \
(((n)&~BIT(7)) == 22) ? BIT(3) : 0)
int prism2mgmt_scan(wlandevice_t *wlandev, void *msgp)
int prism2mgmt_scan_results(wlandevice_t *wlandev, void *msgp)
int prism2mgmt_start(wlandevice_t *wlandev, void *msgp)
int prism2mgmt_readpda(wlandevice_t *wlandev, void *msgp)
int prism2mgmt_ramdl_state(wlandevice_t *wlandev, void *msgp)
int prism2mgmt_ramdl_write(wlandevice_t *wlandev, void *msgp)
int prism2mgmt_flashdl_state(wlandevice_t *wlandev, void *msgp)
int prism2mgmt_flashdl_write(wlandevice_t *wlandev, void *msgp)
int prism2mgmt_autojoin(wlandevice_t *wlandev, void *msgp)
int prism2mgmt_wlansniff(wlandevice_t *wlandev, void *msgp)
