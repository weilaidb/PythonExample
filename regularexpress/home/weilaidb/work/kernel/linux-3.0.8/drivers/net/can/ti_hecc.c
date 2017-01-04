#define DRV_NAME "ti_hecc"
#define HECC_MODULE_VERSION     "0.7"
MODULE_VERSION(HECC_MODULE_VERSION);
#define DRV_DESC "TI High End CAN Controller Driver " HECC_MODULE_VERSION
#define HECC_MAX_MAILBOXES	32
#define MAX_TX_PRIO		0x3F
#define HECC_MB_TX_SHIFT	2
#define HECC_MAX_TX_MBOX	BIT(HECC_MB_TX_SHIFT)
#define HECC_TX_PRIO_SHIFT	(HECC_MB_TX_SHIFT)
#define HECC_TX_PRIO_MASK	(MAX_TX_PRIO << HECC_MB_TX_SHIFT)
#define HECC_TX_MB_MASK		(HECC_MAX_TX_MBOX - 1)
#define HECC_TX_MASK		((HECC_MAX_TX_MBOX - 1) | HECC_TX_PRIO_MASK)
#define HECC_TX_MBOX_MASK	(~(BIT(HECC_MAX_TX_MBOX) - 1))
#define HECC_DEF_NAPI_WEIGHT	HECC_MAX_RX_MBOX
#define HECC_MAX_RX_MBOX	(HECC_MAX_MAILBOXES - HECC_MAX_TX_MBOX)
#define HECC_RX_BUFFER_MBOX	12
#define HECC_RX_FIRST_MBOX	(HECC_MAX_MAILBOXES - 1)
#define HECC_RX_HIGH_MBOX_MASK	(~(BIT(HECC_RX_BUFFER_MBOX) - 1))
#define HECC_CANME		0x0
#define HECC_CANMD		0x4
#define HECC_CANTRS		0x8
#define HECC_CANTRR		0xC
#define HECC_CANTA		0x10
#define HECC_CANAA		0x14
#define HECC_CANRMP		0x18
#define HECC_CANRML		0x1C
#define HECC_CANRFP		0x20
#define HECC_CANGAM		0x24
#define HECC_CANMC		0x28
#define HECC_CANBTC		0x2C
#define HECC_CANES		0x30
#define HECC_CANTEC		0x34
#define HECC_CANREC		0x38
#define HECC_CANGIF0		0x3C
#define HECC_CANGIM		0x40
#define HECC_CANGIF1		0x44
#define HECC_CANMIM		0x48
#define HECC_CANMIL		0x4C
#define HECC_CANOPC		0x50
#define HECC_CANTIOC		0x54
#define HECC_CANRIOC		0x58
#define HECC_CANLNT		0x5C
#define HECC_CANTOC		0x60
#define HECC_CANTOS		0x64
#define HECC_CANTIOCE		0x68
#define HECC_CANRIOCE		0x6C
#define HECC_CANMID		0x0
#define HECC_CANMCF		0x4
#define HECC_CANMDL		0x8
#define HECC_CANMDH		0xC
#define HECC_SET_REG		0xFFFFFFFF
#define HECC_CANID_MASK		0x3FF
#define HECC_CCE_WAIT_COUNT     100
#define HECC_CANMC_SCM		BIT(13)
#define HECC_CANMC_CCR		BIT(12)
#define HECC_CANMC_PDR		BIT(11)
#define HECC_CANMC_ABO		BIT(7)
#define HECC_CANMC_STM		BIT(6)
#define HECC_CANMC_SRES		BIT(5)
#define HECC_CANTIOC_EN		BIT(3)
#define HECC_CANRIOC_EN		BIT(3)
#define HECC_CANMID_IDE		BIT(31)
#define HECC_CANMID_AME		BIT(30)
#define HECC_CANMID_AAM		BIT(29)
#define HECC_CANES_FE		BIT(24)
#define HECC_CANES_BE		BIT(23)
#define HECC_CANES_SA1		BIT(22)
#define HECC_CANES_CRCE		BIT(21)
#define HECC_CANES_SE		BIT(20)
#define HECC_CANES_ACKE		BIT(19)
#define HECC_CANES_BO		BIT(18)
#define HECC_CANES_EP		BIT(17)
#define HECC_CANES_EW		BIT(16)
#define HECC_CANES_SMA		BIT(5)
#define HECC_CANES_CCE		BIT(4)
#define HECC_CANES_PDA		BIT(3)
#define HECC_CANBTC_SAM		BIT(7)
#define HECC_BUS_ERROR		(HECC_CANES_FE | HECC_CANES_BE |\
HECC_CANES_CRCE | HECC_CANES_SE |\
HECC_CANES_ACKE)
#define HECC_CANMCF_RTR		BIT(4)
#define HECC_CANGIF_MAIF	BIT(17)
#define HECC_CANGIF_TCOIF	BIT(16)
#define HECC_CANGIF_GMIF	BIT(15)
#define HECC_CANGIF_AAIF	BIT(14)
#define HECC_CANGIF_WDIF	BIT(13)
#define HECC_CANGIF_WUIF	BIT(12)
#define HECC_CANGIF_RMLIF	BIT(11)
#define HECC_CANGIF_BOIF	BIT(10)
#define HECC_CANGIF_EPIF	BIT(9)
#define HECC_CANGIF_WLIF	BIT(8)
#define HECC_CANGIF_MBOX_MASK	0x1F
#define HECC_CANGIM_I1EN	BIT(1)
#define HECC_CANGIM_I0EN	BIT(0)
#define HECC_CANGIM_DEF_MASK	0x700
#define HECC_CANGIM_SIL		BIT(2)
static struct can_bittiming_const ti_hecc_bittiming_const = ;
struct ti_hecc_priv ;
static inline int get_tx_head_mb(struct ti_hecc_priv *priv)
static inline int get_tx_tail_mb(struct ti_hecc_priv *priv)
static inline int get_tx_head_prio(struct ti_hecc_priv *priv)
static inline void hecc_write_lam(struct ti_hecc_priv *priv, u32 mbxno, u32 val)
static inline void hecc_write_mbx(struct ti_hecc_priv *priv, u32 mbxno,
u32 reg, u32 val)
static inline u32 hecc_read_mbx(struct ti_hecc_priv *priv, u32 mbxno, u32 reg)
static inline void hecc_write(struct ti_hecc_priv *priv, u32 reg, u32 val)
static inline u32 hecc_read(struct ti_hecc_priv *priv, int reg)
static inline void hecc_set_bit(struct ti_hecc_priv *priv, int reg,
u32 bit_mask)
static inline void hecc_clear_bit(struct ti_hecc_priv *priv, int reg,
u32 bit_mask)
static inline u32 hecc_get_bit(struct ti_hecc_priv *priv, int reg, u32 bit_mask)
static int ti_hecc_get_state(const struct net_device *ndev,
enum can_state *state)
static int ti_hecc_set_btc(struct ti_hecc_priv *priv)
static void ti_hecc_transceiver_switch(const struct ti_hecc_priv *priv,
int on)
static void ti_hecc_reset(struct net_device *ndev)
static void ti_hecc_start(struct net_device *ndev)
static void ti_hecc_stop(struct net_device *ndev)
static int ti_hecc_do_set_mode(struct net_device *ndev, enum can_mode mode)
static netdev_tx_t ti_hecc_xmit(struct sk_buff *skb, struct net_device *ndev)
static int ti_hecc_rx_pkt(struct ti_hecc_priv *priv, int mbxno)
static int ti_hecc_rx_poll(struct napi_struct *napi, int quota)
static int ti_hecc_error(struct net_device *ndev, int int_status,
int err_status)
static irqreturn_t ti_hecc_interrupt(int irq, void *dev_id)
static int ti_hecc_open(struct net_device *ndev)
static int ti_hecc_close(struct net_device *ndev)
static const struct net_device_ops ti_hecc_netdev_ops = ;
static int ti_hecc_probe(struct platform_device *pdev)
static int __devexit ti_hecc_remove(struct platform_device *pdev)
static int ti_hecc_suspend(struct platform_device *pdev, pm_message_t state)
static int ti_hecc_resume(struct platform_device *pdev)
#define ti_hecc_suspend NULL
#define ti_hecc_resume NULL
static struct platform_driver ti_hecc_driver = ;
static int __init ti_hecc_init_driver(void)
static void __exit ti_hecc_exit_driver(void)
module_exit(ti_hecc_exit_driver);
module_init(ti_hecc_init_driver);
MODULE_AUTHOR("Anant Gole <anantgole@ti.com>");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION(DRV_DESC);
