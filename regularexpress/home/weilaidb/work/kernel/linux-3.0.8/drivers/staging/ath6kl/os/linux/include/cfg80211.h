#define _AR6K_CFG80211_H_
struct wireless_dev *ar6k_cfg80211_init(struct device *dev);
void ar6k_cfg80211_deinit(struct ar6_softc *ar);
void ar6k_cfg80211_scanComplete_event(struct ar6_softc *ar, int status);
void ar6k_cfg80211_connect_event(struct ar6_softc *ar, u16 channel,
u8 *bssid, u16 listenInterval,
u16 beaconInterval,NETWORK_TYPE networkType,
u8 beaconIeLen, u8 assocReqLen,
u8 assocRespLen, u8 *assocInfo);
void ar6k_cfg80211_disconnect_event(struct ar6_softc *ar, u8 reason,
u8 *bssid, u8 assocRespLen,
u8 *assocInfo, u16 protocolReasonStatus);
void ar6k_cfg80211_tkip_micerr_event(struct ar6_softc *ar, u8 keyid, bool ismcast);
