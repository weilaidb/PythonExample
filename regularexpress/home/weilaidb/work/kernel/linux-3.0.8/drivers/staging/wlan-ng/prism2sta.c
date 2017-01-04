#define wlan_mkprintstr(buf, buflen, str, strlen) \
static char *dev_info = "prism2_usb";
static wlandevice_t *create_wlan(void);
int prism2_reset_holdtime = 30;
int prism2_reset_settletime = 100;
static int prism2_doreset;
module_param(prism2_doreset, int, 0644);
MODULE_PARM_DESC(prism2_doreset, "Issue a reset on initialization");
module_param(prism2_reset_holdtime, int, 0644);
MODULE_PARM_DESC(prism2_reset_holdtime, "reset hold time in ms");
module_param(prism2_reset_settletime, int, 0644);
MODULE_PARM_DESC(prism2_reset_settletime, "reset settle time in ms");
MODULE_LICENSE("Dual MPL/GPL");
void prism2_connect_result(wlandevice_t *wlandev, u8 failed);
void prism2_disconnected(wlandevice_t *wlandev);
void prism2_roamed(wlandevice_t *wlandev);
static int prism2sta_open(wlandevice_t *wlandev);
static int prism2sta_close(wlandevice_t *wlandev);
static void prism2sta_reset(wlandevice_t *wlandev);
static int prism2sta_txframe(wlandevice_t *wlandev, struct sk_buff *skb,
union p80211_hdr *p80211_hdr,
struct p80211_metawep *p80211_wep);
static int prism2sta_mlmerequest(wlandevice_t *wlandev, struct p80211msg *msg);
static int prism2sta_getcardinfo(wlandevice_t *wlandev);
static int prism2sta_globalsetup(wlandevice_t *wlandev);
static int prism2sta_setmulticast(wlandevice_t *wlandev, netdevice_t *dev);
static void prism2sta_inf_handover(wlandevice_t *wlandev,
hfa384x_InfFrame_t *inf);
static void prism2sta_inf_tallies(wlandevice_t *wlandev,
hfa384x_InfFrame_t *inf);
static void prism2sta_inf_hostscanresults(wlandevice_t *wlandev,
hfa384x_InfFrame_t *inf);
static void prism2sta_inf_scanresults(wlandevice_t *wlandev,
hfa384x_InfFrame_t *inf);
static void prism2sta_inf_chinforesults(wlandevice_t *wlandev,
hfa384x_InfFrame_t *inf);
static void prism2sta_inf_linkstatus(wlandevice_t *wlandev,
hfa384x_InfFrame_t *inf);
static void prism2sta_inf_assocstatus(wlandevice_t *wlandev,
hfa384x_InfFrame_t *inf);
static void prism2sta_inf_authreq(wlandevice_t *wlandev,
hfa384x_InfFrame_t *inf);
static void prism2sta_inf_authreq_defer(wlandevice_t *wlandev,
hfa384x_InfFrame_t *inf);
static void prism2sta_inf_psusercnt(wlandevice_t *wlandev,
hfa384x_InfFrame_t *inf);
static int prism2sta_open(wlandevice_t *wlandev)
static int prism2sta_close(wlandevice_t *wlandev)
static void prism2sta_reset(wlandevice_t *wlandev)
static int prism2sta_txframe(wlandevice_t *wlandev, struct sk_buff *skb,
union p80211_hdr *p80211_hdr,
struct p80211_metawep *p80211_wep)
static int prism2sta_mlmerequest(wlandevice_t *wlandev, struct p80211msg *msg)
u32 prism2sta_ifstate(wlandevice_t *wlandev, u32 ifstate)
static int prism2sta_getcardinfo(wlandevice_t *wlandev)
static int prism2sta_globalsetup(wlandevice_t *wlandev)
static int prism2sta_setmulticast(wlandevice_t *wlandev, netdevice_t *dev)
static void prism2sta_inf_handover(wlandevice_t *wlandev,
hfa384x_InfFrame_t *inf)
static void prism2sta_inf_tallies(wlandevice_t *wlandev,
hfa384x_InfFrame_t *inf)
static void prism2sta_inf_scanresults(wlandevice_t *wlandev,
hfa384x_InfFrame_t *inf)
static void prism2sta_inf_hostscanresults(wlandevice_t *wlandev,
hfa384x_InfFrame_t *inf)
;
static void prism2sta_inf_chinforesults(wlandevice_t *wlandev,
hfa384x_InfFrame_t *inf)
void prism2sta_processing_defer(struct work_struct *data)
static void prism2sta_inf_linkstatus(wlandevice_t *wlandev,
hfa384x_InfFrame_t *inf)
static void prism2sta_inf_assocstatus(wlandevice_t *wlandev,
hfa384x_InfFrame_t *inf)
static void prism2sta_inf_authreq(wlandevice_t *wlandev,
hfa384x_InfFrame_t *inf)
static void prism2sta_inf_authreq_defer(wlandevice_t *wlandev,
hfa384x_InfFrame_t *inf)
static void prism2sta_inf_psusercnt(wlandevice_t *wlandev,
hfa384x_InfFrame_t *inf)
void prism2sta_ev_info(wlandevice_t *wlandev, hfa384x_InfFrame_t *inf)
void prism2sta_ev_txexc(wlandevice_t *wlandev, u16 status)
void prism2sta_ev_tx(wlandevice_t *wlandev, u16 status)
void prism2sta_ev_rx(wlandevice_t *wlandev, struct sk_buff *skb)
void prism2sta_ev_alloc(wlandevice_t *wlandev)
static wlandevice_t *create_wlan(void)
void prism2sta_commsqual_defer(struct work_struct *data)
void prism2sta_commsqual_timer(unsigned long data)
