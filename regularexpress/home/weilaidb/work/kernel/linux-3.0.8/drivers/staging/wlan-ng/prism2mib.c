#define MIB_TMP_MAXLEN    200
#define  F_STA        0x1
#define  F_READ       0x2
#define  F_WRITE      0x4
struct mibrec ;
static int prism2mib_bytearea2pstr(struct mibrec *mib,
int isget,
wlandevice_t *wlandev,
hfa384x_t *hw,
struct p80211msg_dot11req_mibset *msg,
void *data);
static int prism2mib_uint32(struct mibrec *mib,
int isget,
wlandevice_t *wlandev,
hfa384x_t *hw,
struct p80211msg_dot11req_mibset *msg, void *data);
static int prism2mib_flag(struct mibrec *mib,
int isget,
wlandevice_t *wlandev,
hfa384x_t *hw,
struct p80211msg_dot11req_mibset *msg, void *data);
static int prism2mib_wepdefaultkey(struct mibrec *mib,
int isget,
wlandevice_t *wlandev,
hfa384x_t *hw,
struct p80211msg_dot11req_mibset *msg,
void *data);
static int prism2mib_privacyinvoked(struct mibrec *mib,
int isget,
wlandevice_t *wlandev,
hfa384x_t *hw,
struct p80211msg_dot11req_mibset *msg,
void *data);
static int prism2mib_excludeunencrypted(struct mibrec *mib,
int isget,
wlandevice_t *wlandev,
hfa384x_t *hw,
struct p80211msg_dot11req_mibset *msg,
void *data);
static int prism2mib_fragmentationthreshold(struct mibrec *mib,
int isget,
wlandevice_t *wlandev,
hfa384x_t *hw,
struct p80211msg_dot11req_mibset *msg,
void *data);
static int prism2mib_priv(struct mibrec *mib,
int isget,
wlandevice_t *wlandev,
hfa384x_t *hw,
struct p80211msg_dot11req_mibset *msg, void *data);
static struct mibrec mibtab[] = ;
int prism2mgmt_mibset_mibget(wlandevice_t *wlandev, void *msgp)
static int prism2mib_bytearea2pstr(struct mibrec *mib,
int isget,
wlandevice_t *wlandev,
hfa384x_t *hw,
struct p80211msg_dot11req_mibset *msg,
void *data)
static int prism2mib_uint32(struct mibrec *mib,
int isget,
wlandevice_t *wlandev,
hfa384x_t *hw,
struct p80211msg_dot11req_mibset *msg, void *data)
static int prism2mib_flag(struct mibrec *mib,
int isget,
wlandevice_t *wlandev,
hfa384x_t *hw,
struct p80211msg_dot11req_mibset *msg, void *data)
static int prism2mib_wepdefaultkey(struct mibrec *mib,
int isget,
wlandevice_t *wlandev,
hfa384x_t *hw,
struct p80211msg_dot11req_mibset *msg,
void *data)
static int prism2mib_privacyinvoked(struct mibrec *mib,
int isget,
wlandevice_t *wlandev,
hfa384x_t *hw,
struct p80211msg_dot11req_mibset *msg,
void *data)
static int prism2mib_excludeunencrypted(struct mibrec *mib,
int isget,
wlandevice_t *wlandev,
hfa384x_t *hw,
struct p80211msg_dot11req_mibset *msg,
void *data)
static int prism2mib_fragmentationthreshold(struct mibrec *mib,
int isget,
wlandevice_t *wlandev,
hfa384x_t *hw,
struct p80211msg_dot11req_mibset *msg,
void *data)
static int prism2mib_priv(struct mibrec *mib,
int isget,
wlandevice_t *wlandev,
hfa384x_t *hw,
struct p80211msg_dot11req_mibset *msg, void *data)
void prism2mgmt_pstr2bytestr(hfa384x_bytestr_t *bytestr, p80211pstrd_t *pstr)
void prism2mgmt_pstr2bytearea(u8 *bytearea, p80211pstrd_t *pstr)
void prism2mgmt_bytestr2pstr(hfa384x_bytestr_t *bytestr, p80211pstrd_t *pstr)
void prism2mgmt_bytearea2pstr(u8 *bytearea, p80211pstrd_t *pstr, int len)
