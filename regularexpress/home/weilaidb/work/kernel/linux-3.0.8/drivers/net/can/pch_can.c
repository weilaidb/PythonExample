#define PCH_CTRL_INIT		BIT(0)
#define PCH_CTRL_IE		BIT(1)
#define PCH_CTRL_IE_SIE_EIE	(BIT(3) | BIT(2) | BIT(1))
#define PCH_CTRL_CCE		BIT(6)
#define PCH_CTRL_OPT		BIT(7)
#define PCH_OPT_SILENT		BIT(3)
#define PCH_OPT_LBACK		BIT(4)
#define PCH_CMASK_RX_TX_SET	0x00f3
#define PCH_CMASK_RX_TX_GET	0x0073
#define PCH_CMASK_ALL		0xff
#define PCH_CMASK_NEWDAT	BIT(2)
#define PCH_CMASK_CLRINTPND	BIT(3)
#define PCH_CMASK_CTRL		BIT(4)
#define PCH_CMASK_ARB		BIT(5)
#define PCH_CMASK_MASK		BIT(6)
#define PCH_CMASK_RDWR		BIT(7)
#define PCH_IF_MCONT_NEWDAT	BIT(15)
#define PCH_IF_MCONT_MSGLOST	BIT(14)
#define PCH_IF_MCONT_INTPND	BIT(13)
#define PCH_IF_MCONT_UMASK	BIT(12)
#define PCH_IF_MCONT_TXIE	BIT(11)
#define PCH_IF_MCONT_RXIE	BIT(10)
#define PCH_IF_MCONT_RMTEN	BIT(9)
#define PCH_IF_MCONT_TXRQXT	BIT(8)
#define PCH_IF_MCONT_EOB	BIT(7)
#define PCH_IF_MCONT_DLC	(BIT(0) | BIT(1) | BIT(2) | BIT(3))
#define PCH_MASK2_MDIR_MXTD	(BIT(14) | BIT(15))
#define PCH_ID2_DIR		BIT(13)
#define PCH_ID2_XTD		BIT(14)
#define PCH_ID_MSGVAL		BIT(15)
#define PCH_IF_CREQ_BUSY	BIT(15)
#define PCH_STATUS_INT		0x8000
#define PCH_REC			0x00007f00
#define PCH_TEC			0x000000ff
#define PCH_TX_OK		BIT(3)
#define PCH_RX_OK		BIT(4)
#define PCH_EPASSIV		BIT(5)
#define PCH_EWARN		BIT(6)
#define PCH_BUS_OFF		BIT(7)
#define PCH_BIT_BRP_SHIFT	0
#define PCH_BIT_SJW_SHIFT	6
#define PCH_BIT_TSEG1_SHIFT	8
#define PCH_BIT_TSEG2_SHIFT	12
#define PCH_BIT_BRPE_BRPE_SHIFT	6
#define PCH_MSK_BITT_BRP	0x3f
#define PCH_MSK_BRPE_BRPE	0x3c0
#define PCH_MSK_CTRL_IE_SIE_EIE	0x07
#define PCH_COUNTER_LIMIT	10
#define PCH_CAN_CLK		50000000
#define PCH_RX_OBJ_NUM		26
#define PCH_TX_OBJ_NUM		6
#define PCH_RX_OBJ_START	1
#define PCH_RX_OBJ_END		PCH_RX_OBJ_NUM
#define PCH_TX_OBJ_START	(PCH_RX_OBJ_END + 1)
#define PCH_TX_OBJ_END		(PCH_RX_OBJ_NUM + PCH_TX_OBJ_NUM)
#define PCH_FIFO_THRESH		16
#define PCH_TREQ2_TX_MASK	(((1 << PCH_TX_OBJ_NUM) - 1) <<\
(PCH_RX_OBJ_END - 16))
enum pch_ifreg ;
enum pch_can_err ;
enum pch_can_mode ;
struct pch_can_if_regs ;
struct pch_can_regs ;
struct pch_can_priv ;
static struct can_bittiming_const pch_can_bittiming_const = ;
static DEFINE_PCI_DEVICE_TABLE(pch_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, pch_pci_tbl);
static inline void pch_can_bit_set(void __iomem *addr, u32 mask)
static inline void pch_can_bit_clear(void __iomem *addr, u32 mask)
static void pch_can_set_run_mode(struct pch_can_priv *priv,
enum pch_can_mode mode)
static void pch_can_set_optmode(struct pch_can_priv *priv)
static void pch_can_rw_msg_obj(void __iomem *creq_addr, u32 num)
static void pch_can_set_int_enables(struct pch_can_priv *priv,
enum pch_can_mode interrupt_no)
static void pch_can_set_rxtx(struct pch_can_priv *priv, u32 buff_num,
int set, enum pch_ifreg dir)
static void pch_can_set_rx_all(struct pch_can_priv *priv, int set)
static void pch_can_set_tx_all(struct pch_can_priv *priv, int set)
static u32 pch_can_int_pending(struct pch_can_priv *priv)
static void pch_can_clear_if_buffers(struct pch_can_priv *priv)
static void pch_can_config_rx_tx_buffers(struct pch_can_priv *priv)
static void pch_can_init(struct pch_can_priv *priv)
static void pch_can_release(struct pch_can_priv *priv)
static void pch_can_int_clr(struct pch_can_priv *priv, u32 mask)
static void pch_can_reset(struct pch_can_priv *priv)
static void pch_can_error(struct net_device *ndev, u32 status)
static irqreturn_t pch_can_interrupt(int irq, void *dev_id)
static void pch_fifo_thresh(struct pch_can_priv *priv, int obj_id)
static void pch_can_rx_msg_lost(struct net_device *ndev, int obj_id)
static int pch_can_rx_normal(struct net_device *ndev, u32 obj_num, int quota)
static void pch_can_tx_complete(struct net_device *ndev, u32 int_stat)
static int pch_can_poll(struct napi_struct *napi, int quota)
static int pch_set_bittiming(struct net_device *ndev)
static void pch_can_start(struct net_device *ndev)
static int pch_can_do_set_mode(struct net_device *ndev, enum can_mode mode)
static int pch_can_open(struct net_device *ndev)
static int pch_close(struct net_device *ndev)
static netdev_tx_t pch_xmit(struct sk_buff *skb, struct net_device *ndev)
static const struct net_device_ops pch_can_netdev_ops = ;
static void __devexit pch_can_remove(struct pci_dev *pdev)
static void pch_can_set_int_custom(struct pch_can_priv *priv)
static u32 pch_can_get_int_enables(struct pch_can_priv *priv)
static u32 pch_can_get_rxtx_ir(struct pch_can_priv *priv, u32 buff_num,
enum pch_ifreg dir)
static void pch_can_set_rx_buffer_link(struct pch_can_priv *priv,
u32 buffer_num, int set)
static u32 pch_can_get_rx_buffer_link(struct pch_can_priv *priv, u32 buffer_num)
static int pch_can_get_buffer_status(struct pch_can_priv *priv)
static int pch_can_suspend(struct pci_dev *pdev, pm_message_t state)
static int pch_can_resume(struct pci_dev *pdev)
#define pch_can_suspend NULL
#define pch_can_resume NULL
static int pch_can_get_berr_counter(const struct net_device *dev,
struct can_berr_counter *bec)
static int __devinit pch_can_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static struct pci_driver pch_can_pci_driver = ;
static int __init pch_can_pci_init(void)
module_init(pch_can_pci_init);
static void __exit pch_can_pci_exit(void)
module_exit(pch_can_pci_exit);
MODULE_DESCRIPTION("Intel EG20T PCH CAN(Controller Area Network) Driver");
MODULE_LICENSE("GPL v2");
MODULE_VERSION("0.94");
