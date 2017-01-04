MODULE_FIRMWARE("3826.arm");
MODULE_ALIAS("stlc45xx");
static int p54spi_gpio_power = 97;
module_param(p54spi_gpio_power, int, 0444);
MODULE_PARM_DESC(p54spi_gpio_power, "gpio number for power line");
static int p54spi_gpio_irq = 87;
module_param(p54spi_gpio_irq, int, 0444);
MODULE_PARM_DESC(p54spi_gpio_irq, "gpio number for irq line");
static void p54spi_spi_read(struct p54s_priv *priv, u8 address,
void *buf, size_t len)
static void p54spi_spi_write(struct p54s_priv *priv, u8 address,
const void *buf, size_t len)
static u32 p54spi_read32(struct p54s_priv *priv, u8 addr)
static inline void p54spi_write16(struct p54s_priv *priv, u8 addr, __le16 val)
static inline void p54spi_write32(struct p54s_priv *priv, u8 addr, __le32 val)
static int p54spi_wait_bit(struct p54s_priv *priv, u16 reg, u32 bits)
static int p54spi_spi_write_dma(struct p54s_priv *priv, __le32 base,
const void *buf, size_t len)
static int p54spi_request_firmware(struct ieee80211_hw *dev)
static int p54spi_request_eeprom(struct ieee80211_hw *dev)
static int p54spi_upload_firmware(struct ieee80211_hw *dev)
static void p54spi_power_off(struct p54s_priv *priv)
static void p54spi_power_on(struct p54s_priv *priv)
static inline void p54spi_int_ack(struct p54s_priv *priv, u32 val)
static int p54spi_wakeup(struct p54s_priv *priv)
static inline void p54spi_sleep(struct p54s_priv *priv)
static void p54spi_int_ready(struct p54s_priv *priv)
static int p54spi_rx(struct p54s_priv *priv)
static irqreturn_t p54spi_interrupt(int irq, void *config)
static int p54spi_tx_frame(struct p54s_priv *priv, struct sk_buff *skb)
static int p54spi_wq_tx(struct p54s_priv *priv)
static void p54spi_op_tx(struct ieee80211_hw *dev, struct sk_buff *skb)
static void p54spi_work(struct work_struct *work)
static int p54spi_op_start(struct ieee80211_hw *dev)
static void p54spi_op_stop(struct ieee80211_hw *dev)
static int __devinit p54spi_probe(struct spi_device *spi)
static int __devexit p54spi_remove(struct spi_device *spi)
static struct spi_driver p54spi_driver = ;
static int __init p54spi_init(void)
static void __exit p54spi_exit(void)
module_init(p54spi_init);
module_exit(p54spi_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Christian Lamparter <chunkeey@web.de>");
MODULE_ALIAS("spi:cx3110x");
MODULE_ALIAS("spi:p54spi");
