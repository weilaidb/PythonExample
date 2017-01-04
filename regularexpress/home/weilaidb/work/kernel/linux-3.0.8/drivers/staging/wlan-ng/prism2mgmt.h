#define _PRISM2MGMT_H
extern int prism2_reset_holdtime;
extern int prism2_reset_settletime;
u32 prism2sta_ifstate(wlandevice_t *wlandev, u32 ifstate);
void prism2sta_ev_info(wlandevice_t *wlandev, hfa384x_InfFrame_t *inf);
void prism2sta_ev_txexc(wlandevice_t *wlandev, u16 status);
void prism2sta_ev_tx(wlandevice_t *wlandev, u16 status);
void prism2sta_ev_rx(wlandevice_t *wlandev, struct sk_buff *skb);
void prism2sta_ev_alloc(wlandevice_t *wlandev);
int prism2mgmt_mibset_mibget(wlandevice_t *wlandev, void *msgp);
int prism2mgmt_scan(wlandevice_t *wlandev, void *msgp);
int prism2mgmt_scan_results(wlandevice_t *wlandev, void *msgp);
int prism2mgmt_start(wlandevice_t *wlandev, void *msgp);
int prism2mgmt_wlansniff(wlandevice_t *wlandev, void *msgp);
int prism2mgmt_readpda(wlandevice_t *wlandev, void *msgp);
int prism2mgmt_ramdl_state(wlandevice_t *wlandev, void *msgp);
int prism2mgmt_ramdl_write(wlandevice_t *wlandev, void *msgp);
int prism2mgmt_flashdl_state(wlandevice_t *wlandev, void *msgp);
int prism2mgmt_flashdl_write(wlandevice_t *wlandev, void *msgp);
int prism2mgmt_autojoin(wlandevice_t *wlandev, void *msgp);
void prism2mgmt_pstr2bytearea(u8 *bytearea, p80211pstrd_t *pstr);
void prism2mgmt_bytearea2pstr(u8 *bytearea, p80211pstrd_t *pstr, int len);
void prism2mgmt_pstr2bytestr(hfa384x_bytestr_t *bytestr, p80211pstrd_t *pstr);
void prism2mgmt_bytestr2pstr(hfa384x_bytestr_t *bytestr, p80211pstrd_t *pstr);
void prism2mgmt_get_grpaddr(u32 did, p80211pstrd_t *pstr, hfa384x_t *priv);
int prism2mgmt_set_grpaddr(u32 did,
u8 *prism2buf, p80211pstrd_t *pstr,
hfa384x_t *priv);
int prism2mgmt_get_grpaddr_index(u32 did);
void prism2sta_processing_defer(struct work_struct *data);
void prism2sta_commsqual_defer(struct work_struct *data);
void prism2sta_commsqual_timer(unsigned long data);
