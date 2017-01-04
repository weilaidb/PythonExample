#define RTL8187_H
#define RTL8187_EEPROM_TXPWR_BASE	0x05
#define RTL8187_EEPROM_MAC_ADDR		0x07
#define RTL8187_EEPROM_TXPWR_CHAN_1	0x16
#define RTL8187_EEPROM_TXPWR_CHAN_6	0x1B
#define RTL8187_EEPROM_TXPWR_CHAN_4	0x3D
#define RTL8187_EEPROM_SELECT_GPIO	0x3B
#define RTL8187_REQT_READ	0xC0
#define RTL8187_REQT_WRITE	0x40
#define RTL8187_REQ_GET_REG	0x05
#define RTL8187_REQ_SET_REG	0x05
#define RTL8187_MAX_RX		0x9C4
#define RFKILL_MASK_8187_89_97	0x2
#define RFKILL_MASK_8198	0x4
#define RETRY_COUNT		7
struct rtl8187_rx_info ;
struct rtl8187_rx_hdr  __packed;
struct rtl8187b_rx_hdr  __packed;
struct rtl8187_tx_hdr  __packed;
struct rtl8187b_tx_hdr  __packed;
enum ;
struct rtl8187_priv ;
void rtl8187_write_phy(struct ieee80211_hw *dev, u8 addr, u32 data);
static inline u8 rtl818x_ioread8_idx(struct rtl8187_priv *priv,
u8 *addr, u8 idx)
static inline u8 rtl818x_ioread8(struct rtl8187_priv *priv, u8 *addr)
static inline u16 rtl818x_ioread16_idx(struct rtl8187_priv *priv,
__le16 *addr, u8 idx)
static inline u16 rtl818x_ioread16(struct rtl8187_priv *priv, __le16 *addr)
static inline u32 rtl818x_ioread32_idx(struct rtl8187_priv *priv,
__le32 *addr, u8 idx)
static inline u32 rtl818x_ioread32(struct rtl8187_priv *priv, __le32 *addr)
static inline void rtl818x_iowrite8_idx(struct rtl8187_priv *priv,
u8 *addr, u8 val, u8 idx)
static inline void rtl818x_iowrite8(struct rtl8187_priv *priv, u8 *addr, u8 val)
static inline void rtl818x_iowrite16_idx(struct rtl8187_priv *priv,
__le16 *addr, u16 val, u8 idx)
static inline void rtl818x_iowrite16(struct rtl8187_priv *priv, __le16 *addr,
u16 val)
static inline void rtl818x_iowrite32_idx(struct rtl8187_priv *priv,
__le32 *addr, u32 val, u8 idx)
static inline void rtl818x_iowrite32(struct rtl8187_priv *priv, __le32 *addr,
u32 val)
