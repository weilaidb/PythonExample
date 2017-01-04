#define RTL8180_H
#define MAX_RX_SIZE IEEE80211_MAX_RTS_THRESHOLD
#define RF_PARAM_ANALOGPHY	(1 << 0)
#define RF_PARAM_ANTBDEFAULT	(1 << 1)
#define RF_PARAM_CARRIERSENSE1	(1 << 2)
#define RF_PARAM_CARRIERSENSE2	(1 << 3)
#define BB_ANTATTEN_CHAN14	0x0C
#define BB_ANTENNA_B 		0x40
#define BB_HOST_BANG 		(1 << 30)
#define BB_HOST_BANG_EN 	(1 << 2)
#define BB_HOST_BANG_CLK 	(1 << 1)
#define BB_HOST_BANG_DATA	1
#define ANAPARAM_TXDACOFF_SHIFT	27
#define ANAPARAM_PWR0_SHIFT	28
#define ANAPARAM_PWR0_MASK 	(0x07 << ANAPARAM_PWR0_SHIFT)
#define ANAPARAM_PWR1_SHIFT	20
#define ANAPARAM_PWR1_MASK	(0x7F << ANAPARAM_PWR1_SHIFT)
struct rtl8180_tx_desc  __packed;
struct rtl8180_rx_desc  __packed;
struct rtl8180_tx_ring ;
struct rtl8180_vif ;
struct rtl8180_priv ;
void rtl8180_write_phy(struct ieee80211_hw *dev, u8 addr, u32 data);
void rtl8180_set_anaparam(struct rtl8180_priv *priv, u32 anaparam);
static inline u8 rtl818x_ioread8(struct rtl8180_priv *priv, u8 __iomem *addr)
static inline u16 rtl818x_ioread16(struct rtl8180_priv *priv, __le16 __iomem *addr)
static inline u32 rtl818x_ioread32(struct rtl8180_priv *priv, __le32 __iomem *addr)
static inline void rtl818x_iowrite8(struct rtl8180_priv *priv,
u8 __iomem *addr, u8 val)
static inline void rtl818x_iowrite16(struct rtl8180_priv *priv,
__le16 __iomem *addr, u16 val)
static inline void rtl818x_iowrite32(struct rtl8180_priv *priv,
__le32 __iomem *addr, u32 val)
