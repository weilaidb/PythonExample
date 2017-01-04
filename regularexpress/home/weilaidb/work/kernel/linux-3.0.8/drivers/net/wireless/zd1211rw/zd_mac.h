#define _ZD_MAC_H
struct zd_ctrlset  __packed;
#define ZD_CS_RESERVED_SIZE	25
#define ZD_PURE_RATE_MASK       0x0f
#define ZD_MODULATION_TYPE_MASK 0x10
#define ZD_RATE_MASK            (ZD_PURE_RATE_MASK|ZD_MODULATION_TYPE_MASK)
#define ZD_PURE_RATE(modulation) ((modulation) & ZD_PURE_RATE_MASK)
#define ZD_MODULATION_TYPE(modulation) ((modulation) & ZD_MODULATION_TYPE_MASK)
#define ZD_RATE(modulation) ((modulation) & ZD_RATE_MASK)
#define ZD_CCK                  0x00
#define ZD_OFDM                 0x10
#define ZD_CCK_RATE_1M          (ZD_CCK|0x00)
#define ZD_CCK_RATE_2M          (ZD_CCK|0x01)
#define ZD_CCK_RATE_5_5M        (ZD_CCK|0x02)
#define ZD_CCK_RATE_11M         (ZD_CCK|0x03)
#define ZD_OFDM_RATE_6M         (ZD_OFDM|ZD_OFDM_PLCP_RATE_6M)
#define ZD_OFDM_RATE_9M         (ZD_OFDM|ZD_OFDM_PLCP_RATE_9M)
#define ZD_OFDM_RATE_12M        (ZD_OFDM|ZD_OFDM_PLCP_RATE_12M)
#define ZD_OFDM_RATE_18M        (ZD_OFDM|ZD_OFDM_PLCP_RATE_18M)
#define ZD_OFDM_RATE_24M        (ZD_OFDM|ZD_OFDM_PLCP_RATE_24M)
#define ZD_OFDM_RATE_36M        (ZD_OFDM|ZD_OFDM_PLCP_RATE_36M)
#define ZD_OFDM_RATE_48M        (ZD_OFDM|ZD_OFDM_PLCP_RATE_48M)
#define ZD_OFDM_RATE_54M        (ZD_OFDM|ZD_OFDM_PLCP_RATE_54M)
#define ZD_CCK_PREA_LONG        0x00
#define ZD_CCK_PREA_SHORT       0x20
#define ZD_OFDM_MODE_11G        0x00
#define ZD_OFDM_MODE_11A        0x20
#define ZD_CS_NEED_RANDOM_BACKOFF	0x01
#define ZD_CS_NO_ACK			0x02
#define ZD_CS_FRAME_TYPE_MASK		0x0c
#define ZD_CS_DATA_FRAME		0x00
#define ZD_CS_PS_POLL_FRAME		0x04
#define ZD_CS_MANAGEMENT_FRAME		0x08
#define ZD_CS_NO_SEQUENCE_CTL_FRAME	0x0c
#define ZD_CS_WAKE_DESTINATION		0x10
#define ZD_CS_RTS			0x20
#define ZD_CS_ENCRYPT			0x40
#define ZD_CS_SELF_CTS			0x80
#define ZD_PLCP_HEADER_SIZE		5
struct rx_length_info  __packed;
#define RX_LENGTH_INFO_TAG		0x697e
struct rx_status  __packed;
#define ZD_RX_NO_WEP	0
#define ZD_RX_WEP64	1
#define ZD_RX_TKIP	2
#define ZD_RX_AES	4
#define ZD_RX_WEP128	5
#define ZD_RX_WEP256	6
#define ZD_RX_FRAME_MODULATION_MASK	0x01
#define ZD_RX_CCK			0x00
#define ZD_RX_OFDM			0x01
#define ZD_RX_TIMEOUT_ERROR		0x02
#define ZD_RX_FIFO_OVERRUN_ERROR	0x04
#define ZD_RX_DECRYPTION_ERROR		0x08
#define ZD_RX_CRC32_ERROR		0x10
#define ZD_RX_NO_ADDR1_MATCH_ERROR	0x20
#define ZD_RX_CRC16_ERROR		0x40
#define ZD_RX_ERROR			0x80
struct tx_retry_rate ;
struct tx_status  __packed;
enum mac_flags ;
struct housekeeping ;
struct beacon ;
enum zd_device_flags ;
#define ZD_MAC_STATS_BUFFER_SIZE 16
#define ZD_MAC_MAX_ACK_WAITERS 50
struct zd_mac ;
#define ZD_REGDOMAIN_FCC	0x10
#define ZD_REGDOMAIN_IC		0x20
#define ZD_REGDOMAIN_ETSI	0x30
#define ZD_REGDOMAIN_SPAIN	0x31
#define ZD_REGDOMAIN_FRANCE	0x32
#define ZD_REGDOMAIN_JAPAN_2	0x40
#define ZD_REGDOMAIN_JAPAN	0x41
#define ZD_REGDOMAIN_JAPAN_3	0x49
enum ;
#define ZD_PLCP_SERVICE_LENGTH_EXTENSION 0x80
struct ofdm_plcp_header  __packed;
static inline u8 zd_ofdm_plcp_header_rate(const struct ofdm_plcp_header *header)
#define ZD_OFDM_PLCP_RATE_6M	0xb
#define ZD_OFDM_PLCP_RATE_9M	0xf
#define ZD_OFDM_PLCP_RATE_12M	0xa
#define ZD_OFDM_PLCP_RATE_18M	0xe
#define ZD_OFDM_PLCP_RATE_24M	0x9
#define ZD_OFDM_PLCP_RATE_36M	0xd
#define ZD_OFDM_PLCP_RATE_48M	0x8
#define ZD_OFDM_PLCP_RATE_54M	0xc
struct cck_plcp_header  __packed;
static inline u8 zd_cck_plcp_header_signal(const struct cck_plcp_header *header)
#define ZD_CCK_PLCP_SIGNAL_1M	0x0a
#define ZD_CCK_PLCP_SIGNAL_2M	0x14
#define ZD_CCK_PLCP_SIGNAL_5M5	0x37
#define ZD_CCK_PLCP_SIGNAL_11M	0x6e
static inline struct zd_mac *zd_hw_mac(struct ieee80211_hw *hw)
static inline struct zd_mac *zd_chip_to_mac(struct zd_chip *chip)
static inline struct zd_mac *zd_usb_to_mac(struct zd_usb *usb)
static inline u8 *zd_mac_get_perm_addr(struct zd_mac *mac)
#define zd_mac_dev(mac) (zd_chip_dev(&(mac)->chip))
struct ieee80211_hw *zd_mac_alloc_hw(struct usb_interface *intf);
void zd_mac_clear(struct zd_mac *mac);
int zd_mac_preinit_hw(struct ieee80211_hw *hw);
int zd_mac_init_hw(struct ieee80211_hw *hw);
int zd_mac_rx(struct ieee80211_hw *hw, const u8 *buffer, unsigned int length);
void zd_mac_tx_failed(struct urb *urb);
void zd_mac_tx_to_dev(struct sk_buff *skb, int error);
int zd_op_start(struct ieee80211_hw *hw);
void zd_op_stop(struct ieee80211_hw *hw);
int zd_restore_settings(struct zd_mac *mac);
void zd_dump_rx_status(const struct rx_status *status);
#define zd_dump_rx_status(status)
