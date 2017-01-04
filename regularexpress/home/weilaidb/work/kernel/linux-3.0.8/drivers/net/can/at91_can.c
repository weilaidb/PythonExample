#define AT91_NAPI_WEIGHT	11
#define AT91_MB_RX_NUM		11
#define AT91_MB_TX_SHIFT	2
#define AT91_MB_RX_FIRST	1
#define AT91_MB_RX_LAST		(AT91_MB_RX_FIRST + AT91_MB_RX_NUM - 1)
#define AT91_MB_RX_MASK(i)	((1 << (i)) - 1)
#define AT91_MB_RX_SPLIT	8
#define AT91_MB_RX_LOW_LAST	(AT91_MB_RX_SPLIT - 1)
#define AT91_MB_RX_LOW_MASK	(AT91_MB_RX_MASK(AT91_MB_RX_SPLIT) & \
~AT91_MB_RX_MASK(AT91_MB_RX_FIRST))
#define AT91_MB_TX_NUM		(1 << AT91_MB_TX_SHIFT)
#define AT91_MB_TX_FIRST	(AT91_MB_RX_LAST + 1)
#define AT91_MB_TX_LAST		(AT91_MB_TX_FIRST + AT91_MB_TX_NUM - 1)
#define AT91_NEXT_PRIO_SHIFT	(AT91_MB_TX_SHIFT)
#define AT91_NEXT_PRIO_MASK	(0xf << AT91_MB_TX_SHIFT)
#define AT91_NEXT_MB_MASK	(AT91_MB_TX_NUM - 1)
#define AT91_NEXT_MASK		((AT91_MB_TX_NUM - 1) | AT91_NEXT_PRIO_MASK)
enum at91_reg ;
#define AT91_MMR(i)		(enum at91_reg)(0x200 + ((i) * 0x20))
#define AT91_MAM(i)		(enum at91_reg)(0x204 + ((i) * 0x20))
#define AT91_MID(i)		(enum at91_reg)(0x208 + ((i) * 0x20))
#define AT91_MFID(i)		(enum at91_reg)(0x20C + ((i) * 0x20))
#define AT91_MSR(i)		(enum at91_reg)(0x210 + ((i) * 0x20))
#define AT91_MDL(i)		(enum at91_reg)(0x214 + ((i) * 0x20))
#define AT91_MDH(i)		(enum at91_reg)(0x218 + ((i) * 0x20))
#define AT91_MCR(i)		(enum at91_reg)(0x21C + ((i) * 0x20))
#define AT91_MR_CANEN		BIT(0)
#define AT91_MR_LPM		BIT(1)
#define AT91_MR_ABM		BIT(2)
#define AT91_MR_OVL		BIT(3)
#define AT91_MR_TEOF		BIT(4)
#define AT91_MR_TTM		BIT(5)
#define AT91_MR_TIMFRZ		BIT(6)
#define AT91_MR_DRPT		BIT(7)
#define AT91_SR_RBSY		BIT(29)
#define AT91_MMR_PRIO_SHIFT	(16)
#define AT91_MID_MIDE		BIT(29)
#define AT91_MSR_MRTR		BIT(20)
#define AT91_MSR_MABT		BIT(22)
#define AT91_MSR_MRDY		BIT(23)
#define AT91_MSR_MMI		BIT(24)
#define AT91_MCR_MRTR		BIT(20)
#define AT91_MCR_MTCR		BIT(23)
enum at91_mb_mode ;
#define AT91_IRQ_MB_RX		((1 << (AT91_MB_RX_LAST + 1)) \
- (1 << AT91_MB_RX_FIRST))
#define AT91_IRQ_MB_TX		((1 << (AT91_MB_TX_LAST + 1)) \
- (1 << AT91_MB_TX_FIRST))
#define AT91_IRQ_MB_ALL		(AT91_IRQ_MB_RX | AT91_IRQ_MB_TX)
#define AT91_IRQ_ERRA		(1 << 16)
#define AT91_IRQ_WARN		(1 << 17)
#define AT91_IRQ_ERRP		(1 << 18)
#define AT91_IRQ_BOFF		(1 << 19)
#define AT91_IRQ_SLEEP		(1 << 20)
#define AT91_IRQ_WAKEUP		(1 << 21)
#define AT91_IRQ_TOVF		(1 << 22)
#define AT91_IRQ_TSTP		(1 << 23)
#define AT91_IRQ_CERR		(1 << 24)
#define AT91_IRQ_SERR		(1 << 25)
#define AT91_IRQ_AERR		(1 << 26)
#define AT91_IRQ_FERR		(1 << 27)
#define AT91_IRQ_BERR		(1 << 28)
#define AT91_IRQ_ERR_ALL	(0x1fff0000)
#define AT91_IRQ_ERR_FRAME	(AT91_IRQ_CERR | AT91_IRQ_SERR | \
AT91_IRQ_AERR | AT91_IRQ_FERR | AT91_IRQ_BERR)
#define AT91_IRQ_ERR_LINE	(AT91_IRQ_ERRA | AT91_IRQ_WARN | \
AT91_IRQ_ERRP | AT91_IRQ_BOFF)
#define AT91_IRQ_ALL		(0x1fffffff)
struct at91_priv ;
static struct can_bittiming_const at91_bittiming_const = ;
static inline int get_tx_next_mb(const struct at91_priv *priv)
static inline int get_tx_next_prio(const struct at91_priv *priv)
static inline int get_tx_echo_mb(const struct at91_priv *priv)
static inline u32 at91_read(const struct at91_priv *priv, enum at91_reg reg)
static inline void at91_write(const struct at91_priv *priv, enum at91_reg reg,
u32 value)
static inline void set_mb_mode_prio(const struct at91_priv *priv,
unsigned int mb, enum at91_mb_mode mode, int prio)
static inline void set_mb_mode(const struct at91_priv *priv, unsigned int mb,
enum at91_mb_mode mode)
static inline u32 at91_can_id_to_reg_mid(canid_t can_id)
static void at91_transceiver_switch(const struct at91_priv *priv, int on)
static void at91_setup_mailboxes(struct net_device *dev)
static int at91_set_bittiming(struct net_device *dev)
static int at91_get_berr_counter(const struct net_device *dev,
struct can_berr_counter *bec)
static void at91_chip_start(struct net_device *dev)
static void at91_chip_stop(struct net_device *dev, enum can_state state)
static netdev_tx_t at91_start_xmit(struct sk_buff *skb, struct net_device *dev)
static inline void at91_activate_rx_low(const struct at91_priv *priv)
static inline void at91_activate_rx_mb(const struct at91_priv *priv,
unsigned int mb)
static void at91_rx_overflow_err(struct net_device *dev)
static void at91_read_mb(struct net_device *dev, unsigned int mb,
struct can_frame *cf)
static void at91_read_msg(struct net_device *dev, unsigned int mb)
static int at91_poll_rx(struct net_device *dev, int quota)
static void at91_poll_err_frame(struct net_device *dev,
struct can_frame *cf, u32 reg_sr)
static int at91_poll_err(struct net_device *dev, int quota, u32 reg_sr)
static int at91_poll(struct napi_struct *napi, int quota)
static void at91_irq_tx(struct net_device *dev, u32 reg_sr)
static void at91_irq_err_state(struct net_device *dev,
struct can_frame *cf, enum can_state new_state)
static void at91_irq_err(struct net_device *dev)
static irqreturn_t at91_irq(int irq, void *dev_id)
static int at91_open(struct net_device *dev)
static int at91_close(struct net_device *dev)
static int at91_set_mode(struct net_device *dev, enum can_mode mode)
static const struct net_device_ops at91_netdev_ops = ;
static ssize_t at91_sysfs_show_mb0_id(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t at91_sysfs_set_mb0_id(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(mb0_id, S_IWUSR | S_IRUGO,
at91_sysfs_show_mb0_id, at91_sysfs_set_mb0_id);
static struct attribute *at91_sysfs_attrs[] = ;
static struct attribute_group at91_sysfs_attr_group = ;
static int __devinit at91_can_probe(struct platform_device *pdev)
static int __devexit at91_can_remove(struct platform_device *pdev)
static struct platform_driver at91_can_driver = ;
static int __init at91_can_module_init(void)
static void __exit at91_can_module_exit(void)
module_init(at91_can_module_init);
module_exit(at91_can_module_exit);
MODULE_AUTHOR("Marc Kleine-Budde <mkl@pengutronix.de>");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION(KBUILD_MODNAME " CAN netdevice driver");
