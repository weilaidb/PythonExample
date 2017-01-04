#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME "ks8842"
#define REG_TIMB_RST		0x1c
#define REG_TIMB_FIFO		0x20
#define REG_TIMB_ISR		0x24
#define REG_TIMB_IER		0x28
#define REG_TIMB_IAR		0x2C
#define REQ_TIMB_DMA_RESUME	0x30
#define REG_SELECT_BANK 0x0e
#define REG_QRFCR	0x04
#define REG_MARL	0x00
#define REG_MARM	0x02
#define REG_MARH	0x04
#define REG_GRR		0x06
#define REG_TXCR	0x00
#define REG_TXSR	0x02
#define REG_RXCR	0x04
#define REG_TXMIR	0x08
#define REG_RXMIR	0x0A
#define REG_TXQCR	0x00
#define REG_RXQCR	0x02
#define REG_TXFDPR	0x04
#define REG_RXFDPR	0x06
#define REG_QMU_DATA_LO 0x08
#define REG_QMU_DATA_HI 0x0A
#define REG_IER		0x00
#define IRQ_LINK_CHANGE	0x8000
#define IRQ_TX		0x4000
#define IRQ_RX		0x2000
#define IRQ_RX_OVERRUN	0x0800
#define IRQ_TX_STOPPED	0x0200
#define IRQ_RX_STOPPED	0x0100
#define IRQ_RX_ERROR	0x0080
#define ENABLED_IRQS	(IRQ_LINK_CHANGE | IRQ_TX | IRQ_RX | IRQ_RX_STOPPED | \
IRQ_TX_STOPPED | IRQ_RX_OVERRUN | IRQ_RX_ERROR)
#define ENABLED_IRQS_DMA_IP	(IRQ_LINK_CHANGE | IRQ_RX_STOPPED | \
IRQ_TX_STOPPED | IRQ_RX_OVERRUN | IRQ_RX_ERROR)
#define ENABLED_IRQS_DMA	(ENABLED_IRQS_DMA_IP | IRQ_RX)
#define REG_ISR		0x02
#define REG_RXSR	0x04
#define RXSR_VALID	0x8000
#define RXSR_BROADCAST	0x80
#define RXSR_MULTICAST	0x40
#define RXSR_UNICAST	0x20
#define RXSR_FRAMETYPE	0x08
#define RXSR_TOO_LONG	0x04
#define RXSR_RUNT	0x02
#define RXSR_CRC_ERROR	0x01
#define RXSR_ERROR	(RXSR_TOO_LONG | RXSR_RUNT | RXSR_CRC_ERROR)
#define REG_SW_ID_AND_ENABLE	0x00
#define REG_SGCR1		0x02
#define REG_SGCR2		0x04
#define REG_SGCR3		0x06
#define REG_MACAR1		0x00
#define REG_MACAR2		0x02
#define REG_MACAR3		0x04
#define REG_P1MBCR		0x00
#define REG_P1MBSR		0x02
#define REG_P2MBCR		0x00
#define REG_P2MBSR		0x02
#define REG_P1CR2		0x02
#define REG_P1CR4		0x02
#define REG_P1SR		0x04
#define	MICREL_KS884X		0x01
#define	KS884X_16BIT		0x02
#define DMA_BUFFER_SIZE		2048
struct ks8842_tx_dma_ctl ;
struct ks8842_rx_dma_ctl ;
#define KS8842_USE_DMA(adapter) (((adapter)->dma_tx.channel != -1) && \
((adapter)->dma_rx.channel != -1))
struct ks8842_adapter ;
static void ks8842_dma_rx_cb(void *data);
static void ks8842_dma_tx_cb(void *data);
static inline void ks8842_resume_dma(struct ks8842_adapter *adapter)
static inline void ks8842_select_bank(struct ks8842_adapter *adapter, u16 bank)
static inline void ks8842_write8(struct ks8842_adapter *adapter, u16 bank,
u8 value, int offset)
static inline void ks8842_write16(struct ks8842_adapter *adapter, u16 bank,
u16 value, int offset)
static inline void ks8842_enable_bits(struct ks8842_adapter *adapter, u16 bank,
u16 bits, int offset)
static inline void ks8842_clear_bits(struct ks8842_adapter *adapter, u16 bank,
u16 bits, int offset)
static inline void ks8842_write32(struct ks8842_adapter *adapter, u16 bank,
u32 value, int offset)
static inline u8 ks8842_read8(struct ks8842_adapter *adapter, u16 bank,
int offset)
static inline u16 ks8842_read16(struct ks8842_adapter *adapter, u16 bank,
int offset)
static inline u32 ks8842_read32(struct ks8842_adapter *adapter, u16 bank,
int offset)
static void ks8842_reset(struct ks8842_adapter *adapter)
static void ks8842_update_link_status(struct net_device *netdev,
struct ks8842_adapter *adapter)
static void ks8842_enable_tx(struct ks8842_adapter *adapter)
static void ks8842_disable_tx(struct ks8842_adapter *adapter)
static void ks8842_enable_rx(struct ks8842_adapter *adapter)
static void ks8842_disable_rx(struct ks8842_adapter *adapter)
static void ks8842_reset_hw(struct ks8842_adapter *adapter)
static void ks8842_read_mac_addr(struct ks8842_adapter *adapter, u8 *dest)
static void ks8842_write_mac_addr(struct ks8842_adapter *adapter, u8 *mac)
static inline u16 ks8842_tx_fifo_space(struct ks8842_adapter *adapter)
static int ks8842_tx_frame_dma(struct sk_buff *skb, struct net_device *netdev)
static int ks8842_tx_frame(struct sk_buff *skb, struct net_device *netdev)
static void ks8842_update_rx_err_counters(struct net_device *netdev, u32 status)
static void ks8842_update_rx_counters(struct net_device *netdev, u32 status,
int len)
static int __ks8842_start_new_rx_dma(struct net_device *netdev)
static void ks8842_rx_frame_dma_tasklet(unsigned long arg)
static void ks8842_rx_frame(struct net_device *netdev,
struct ks8842_adapter *adapter)
void ks8842_handle_rx(struct net_device *netdev, struct ks8842_adapter *adapter)
void ks8842_handle_tx(struct net_device *netdev, struct ks8842_adapter *adapter)
void ks8842_handle_rx_overrun(struct net_device *netdev,
struct ks8842_adapter *adapter)
void ks8842_tasklet(unsigned long arg)
static irqreturn_t ks8842_irq(int irq, void *devid)
static void ks8842_dma_rx_cb(void *data)
static void ks8842_dma_tx_cb(void *data)
static void ks8842_stop_dma(struct ks8842_adapter *adapter)
static void ks8842_dealloc_dma_bufs(struct ks8842_adapter *adapter)
static bool ks8842_dma_filter_fn(struct dma_chan *chan, void *filter_param)
static int ks8842_alloc_dma_bufs(struct net_device *netdev)
static int ks8842_open(struct net_device *netdev)
static int ks8842_close(struct net_device *netdev)
static netdev_tx_t ks8842_xmit_frame(struct sk_buff *skb,
struct net_device *netdev)
static int ks8842_set_mac(struct net_device *netdev, void *p)
static void ks8842_tx_timeout_work(struct work_struct *work)
static void ks8842_tx_timeout(struct net_device *netdev)
static const struct net_device_ops ks8842_netdev_ops = ;
static const struct ethtool_ops ks8842_ethtool_ops = ;
static int __devinit ks8842_probe(struct platform_device *pdev)
static int __devexit ks8842_remove(struct platform_device *pdev)
static struct platform_driver ks8842_platform_driver = ;
static int __init ks8842_init(void)
static void __exit ks8842_exit(void)
module_init(ks8842_init);
module_exit(ks8842_exit);
MODULE_DESCRIPTION("Timberdale KS8842 ethernet driver");
MODULE_AUTHOR("Mocean Laboratories <info@mocean-labs.com>");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:ks8842");
