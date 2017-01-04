#define _RTL871X_IOCTL_SET_C_
#define IS_MAC_ADDRESS_BROADCAST(addr) \
( \
((addr[0] == 0xff) && (addr[1] == 0xff) && \
(addr[2] == 0xff) && (addr[3] == 0xff) && \
(addr[4] == 0xff) && (addr[5] == 0xff)) ? true : false \
)
static u8 validate_ssid(struct ndis_802_11_ssid *ssid)
static u8 do_join(struct _adapter *padapter)
u8 r8712_set_802_11_bssid(struct _adapter *padapter, u8 *bssid)
void r8712_set_802_11_ssid(struct _adapter *padapter,
struct ndis_802_11_ssid *ssid)
u8 r8712_set_802_11_infrastructure_mode(struct _adapter *padapter,
enum NDIS_802_11_NETWORK_INFRASTRUCTURE networktype)
u8 r8712_set_802_11_disassociate(struct _adapter *padapter)
u8 r8712_set_802_11_bssid_list_scan(struct _adapter *padapter)
u8 r8712_set_802_11_authentication_mode(struct _adapter *padapter,
enum NDIS_802_11_AUTHENTICATION_MODE authmode)
u8 r8712_set_802_11_add_wep(struct _adapter *padapter,
struct NDIS_802_11_WEP *wep)
