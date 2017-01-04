#define _P80211HDR_H
#define WLAN_CRC_LEN			4
#define WLAN_BSSID_LEN			6
#define WLAN_HDR_A3_LEN			24
#define WLAN_HDR_A4_LEN			30
#define WLAN_SSID_MAXLEN		32
#define WLAN_DATA_MAXLEN		2312
#define WLAN_WEP_IV_LEN			4
#define WLAN_WEP_ICV_LEN		4
#define WLAN_FTYPE_MGMT			0x00
#define WLAN_FTYPE_CTL			0x01
#define WLAN_FTYPE_DATA			0x02
#define WLAN_FSTYPE_ASSOCREQ		0x00
#define WLAN_FSTYPE_ASSOCRESP		0x01
#define WLAN_FSTYPE_REASSOCREQ		0x02
#define WLAN_FSTYPE_REASSOCRESP		0x03
#define WLAN_FSTYPE_PROBEREQ		0x04
#define WLAN_FSTYPE_PROBERESP		0x05
#define WLAN_FSTYPE_BEACON		0x08
#define WLAN_FSTYPE_ATIM		0x09
#define WLAN_FSTYPE_DISASSOC		0x0a
#define WLAN_FSTYPE_AUTHEN		0x0b
#define WLAN_FSTYPE_DEAUTHEN		0x0c
#define WLAN_FSTYPE_BLOCKACKREQ		0x8
#define WLAN_FSTYPE_BLOCKACK		0x9
#define WLAN_FSTYPE_PSPOLL		0x0a
#define WLAN_FSTYPE_RTS			0x0b
#define WLAN_FSTYPE_CTS			0x0c
#define WLAN_FSTYPE_ACK			0x0d
#define WLAN_FSTYPE_CFEND		0x0e
#define WLAN_FSTYPE_CFENDCFACK		0x0f
#define WLAN_FSTYPE_DATAONLY		0x00
#define WLAN_FSTYPE_DATA_CFACK		0x01
#define WLAN_FSTYPE_DATA_CFPOLL		0x02
#define WLAN_FSTYPE_DATA_CFACK_CFPOLL	0x03
#define WLAN_FSTYPE_NULL		0x04
#define WLAN_FSTYPE_CFACK		0x05
#define WLAN_FSTYPE_CFPOLL		0x06
#define WLAN_FSTYPE_CFACK_CFPOLL	0x07
#define WLAN_GET_FC_FTYPE(n)	((((u16)(n)) & (BIT(2) | BIT(3))) >> 2)
#define WLAN_GET_FC_FSTYPE(n)	((((u16)(n)) & (BIT(4)|BIT(5)|BIT(6)|BIT(7))) >> 4)
#define WLAN_GET_FC_TODS(n)	((((u16)(n)) & (BIT(8))) >> 8)
#define WLAN_GET_FC_FROMDS(n)	((((u16)(n)) & (BIT(9))) >> 9)
#define WLAN_GET_FC_ISWEP(n)	((((u16)(n)) & (BIT(14))) >> 14)
#define WLAN_SET_FC_FTYPE(n)	(((u16)(n)) << 2)
#define WLAN_SET_FC_FSTYPE(n)	(((u16)(n)) << 4)
#define WLAN_SET_FC_TODS(n)	(((u16)(n)) << 8)
#define WLAN_SET_FC_FROMDS(n)	(((u16)(n)) << 9)
#define WLAN_SET_FC_ISWEP(n)	(((u16)(n)) << 14)
#define DOT11_RATE5_ISBASIC_GET(r)     (((u8)(r)) & BIT(7))
struct p80211_hdr_a3  __packed;
struct p80211_hdr_a4  __packed;
union p80211_hdr  __packed;
#define WLAN_CTL_FRAMELEN(fstype) (\
(fstype) == WLAN_FSTYPE_BLOCKACKREQ	? 24 : \
(fstype) == WLAN_FSTYPE_BLOCKACK	? 152 : \
(fstype) == WLAN_FSTYPE_PSPOLL		? 20 : \
(fstype) == WLAN_FSTYPE_RTS		? 20 : \
(fstype) == WLAN_FSTYPE_CTS		? 14 : \
(fstype) == WLAN_FSTYPE_ACK		? 14 : \
(fstype) == WLAN_FSTYPE_CFEND		? 20 : \
(fstype) == WLAN_FSTYPE_CFENDCFACK	? 20 : 4)
#define WLAN_FCS_LEN			4
static inline u16 p80211_headerlen(u16 fctl)
