static void p80211req_handlemsg(wlandevice_t *wlandev, struct p80211msg *msg);
static int p80211req_mibset_mibget(wlandevice_t *wlandev,
struct p80211msg_dot11req_mibget *mib_msg,
int isget);
int p80211req_dorequest(wlandevice_t *wlandev, u8 *msgbuf)
static void p80211req_handlemsg(wlandevice_t *wlandev, struct p80211msg *msg)
static int p80211req_mibset_mibget(wlandevice_t *wlandev,
struct p80211msg_dot11req_mibget *mib_msg,
int isget)
