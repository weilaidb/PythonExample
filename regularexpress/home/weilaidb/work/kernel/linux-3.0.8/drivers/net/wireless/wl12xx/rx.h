#define __RX_H__
#define WL1271_RX_MAX_RSSI -30
#define WL1271_RX_MIN_RSSI -95
#define SHORT_PREAMBLE_BIT   BIT(0)
#define OFDM_RATE_BIT        BIT(6)
#define PBCC_RATE_BIT        BIT(7)
#define PLCP_HEADER_LENGTH 8
#define RX_DESC_PACKETID_SHIFT 11
#define RX_MAX_PACKET_ID 3
#define NUM_RX_PKT_DESC_MOD_MASK   7
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
#define WL1271_RX_DESC_BAND_MASK    0x03
#define WL1271_RX_DESC_ENCRYPT_MASK 0xE0
#define WL1271_RX_DESC_BAND_BG      0x00
#define WL1271_RX_DESC_BAND_J       0x01
#define WL1271_RX_DESC_BAND_A       0x02
#define WL1271_RX_DESC_STBC         BIT(2)
#define WL1271_RX_DESC_A_MPDU       BIT(3)
#define WL1271_RX_DESC_HT           BIT(4)
#define WL1271_RX_DESC_ENCRYPT_WEP  0x20
#define WL1271_RX_DESC_ENCRYPT_TKIP 0x40
#define WL1271_RX_DESC_ENCRYPT_AES  0x60
#define WL1271_RX_DESC_ENCRYPT_GEM  0x80
#define WL1271_RX_DESC_STATUS_MASK      0x07
#define WL1271_RX_DESC_SUCCESS          0x00
#define WL1271_RX_DESC_DECRYPT_FAIL     0x01
#define WL1271_RX_DESC_MIC_FAIL         0x02
#define WL1271_RX_DESC_DRIVER_RX_Q_FAIL 0x03
#define RX_MEM_BLOCK_MASK     0xFF
#define RX_BUF_SIZE_MASK      0xFFF00
#define RX_BUF_SIZE_SHIFT_DIV 6
struct wl1271_rx_descriptor  __packed;
void wl1271_rx(struct wl1271 *wl, struct wl1271_fw_common_status *status);
u8 wl1271_rate_to_idx(int rate, enum ieee80211_band band);
void wl1271_set_default_filters(struct wl1271 *wl);
