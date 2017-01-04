#define __WL1251_RX_H__
#define WL1251_RX_MAX_RSSI -30
#define WL1251_RX_MIN_RSSI -95
#define WL1251_RX_ALIGN_TO 4
#define WL1251_RX_ALIGN(len) (((len) + WL1251_RX_ALIGN_TO - 1) & \
~(WL1251_RX_ALIGN_TO - 1))
#define SHORT_PREAMBLE_BIT   BIT(0)
#define OFDM_RATE_BIT        BIT(6)
#define PBCC_RATE_BIT        BIT(7)
#define PLCP_HEADER_LENGTH 8
#define RX_DESC_PACKETID_SHIFT 11
#define RX_MAX_PACKET_ID 3
#define RX_DESC_VALID_FCS         0x0001
#define RX_DESC_MATCH_RXADDR1     0x0002
#define RX_DESC_MCAST             0x0004
#define RX_DESC_STAINTIM          0x0008
#define RX_DESC_VIRTUAL_BM        0x0010
#define RX_DESC_BCAST             0x0020
#define RX_DESC_MATCH_SSID        0x0040
#define RX_DESC_MATCH_BSSID       0x0080
#define RX_DESC_ENCRYPTION_MASK   0x0300
#define RX_DESC_MEASURMENT        0x0400
#define RX_DESC_SEQNUM_MASK       0x1800
#define	RX_DESC_MIC_FAIL	  0x2000
#define	RX_DESC_DECRYPT_FAIL	  0x4000
struct wl1251_rx_descriptor  __packed;
void wl1251_rx(struct wl1251 *wl);
