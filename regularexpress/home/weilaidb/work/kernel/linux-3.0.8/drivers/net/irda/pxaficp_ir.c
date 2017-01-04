#define FICP		__REG(0x40800000)
#define ICCR0		__REG(0x40800000)
#define ICCR1		__REG(0x40800004)
#define ICCR2		__REG(0x40800008)
#define ICDR		__REG(0x4080000c)
#define ICSR0		__REG(0x40800014)
#define ICSR1		__REG(0x40800018)
#define ICCR0_AME	(1 << 7)
#define ICCR0_TIE	(1 << 6)
#define ICCR0_RIE	(1 << 5)
#define ICCR0_RXE	(1 << 4)
#define ICCR0_TXE	(1 << 3)
#define ICCR0_TUS	(1 << 2)
#define ICCR0_LBM	(1 << 1)
#define ICCR0_ITR	(1 << 0)
#define ICCR2_RXP       (1 << 3)
#define ICCR2_TXP       (1 << 2)
#define ICCR2_TRIG	(3 << 0)
#define ICCR2_TRIG_8    (0 << 0)
#define ICCR2_TRIG_16   (1 << 0)
#define ICCR2_TRIG_32   (2 << 0)
#define ICSR0_EOC	(1 << 6)
#define ICSR0_FRE	(1 << 5)
#define ICSR0_RFS	(1 << 4)
#define ICSR0_TFS	(1 << 3)
#define ICSR0_RAB	(1 << 2)
#define ICSR0_TUR	(1 << 1)
#define ICSR0_EIF	(1 << 0)
#define ICSR1_ROR	(1 << 6)
#define ICSR1_CRE	(1 << 5)
#define ICSR1_EOF	(1 << 4)
#define ICSR1_TNF	(1 << 3)
#define ICSR1_RNE	(1 << 2)
#define ICSR1_TBY	(1 << 1)
#define ICSR1_RSY	(1 << 0)
#define IrSR_RXPL_NEG_IS_ZERO (1<<4)
#define IrSR_RXPL_POS_IS_ZERO 0x0
#define IrSR_TXPL_NEG_IS_ZERO (1<<3)
#define IrSR_TXPL_POS_IS_ZERO 0x0
#define IrSR_XMODE_PULSE_1_6  (1<<2)
#define IrSR_XMODE_PULSE_3_16 0x0
#define IrSR_RCVEIR_IR_MODE   (1<<1)
#define IrSR_RCVEIR_UART_MODE 0x0
#define IrSR_XMITIR_IR_MODE   (1<<0)
#define IrSR_XMITIR_UART_MODE 0x0
#define IrSR_IR_RECEIVE_ON (\
IrSR_RXPL_NEG_IS_ZERO | \
IrSR_TXPL_POS_IS_ZERO | \
IrSR_XMODE_PULSE_3_16 | \
IrSR_RCVEIR_IR_MODE   | \
IrSR_XMITIR_UART_MODE)
#define IrSR_IR_TRANSMIT_ON (\
IrSR_RXPL_NEG_IS_ZERO | \
IrSR_TXPL_POS_IS_ZERO | \
IrSR_XMODE_PULSE_3_16 | \
IrSR_RCVEIR_UART_MODE | \
IrSR_XMITIR_IR_MODE)
struct pxa_irda ;
static inline void pxa_irda_disable_clk(struct pxa_irda *si)
static inline void pxa_irda_enable_firclk(struct pxa_irda *si)
static inline void pxa_irda_enable_sirclk(struct pxa_irda *si)
#define IS_FIR(si)		((si)->speed >= 4000000)
#define IRDA_FRAME_SIZE_LIMIT	2047
inline static void pxa_irda_fir_dma_rx_start(struct pxa_irda *si)
inline static void pxa_irda_fir_dma_tx_start(struct pxa_irda *si)
static void pxa_irda_set_mode(struct pxa_irda *si, int mode)
static int pxa_irda_set_speed(struct pxa_irda *si, int speed)
static irqreturn_t pxa_irda_sir_irq(int irq, void *dev_id)
static void pxa_irda_fir_dma_rx_irq(int channel, void *data)
static void pxa_irda_fir_dma_tx_irq(int channel, void *data)
static void pxa_irda_fir_irq_eif(struct pxa_irda *si, struct net_device *dev, int icsr0)
static irqreturn_t pxa_irda_fir_irq(int irq, void *dev_id)
static int pxa_irda_hard_xmit(struct sk_buff *skb, struct net_device *dev)
static int pxa_irda_ioctl(struct net_device *dev, struct ifreq *ifreq, int cmd)
static void pxa_irda_startup(struct pxa_irda *si)
static void pxa_irda_shutdown(struct pxa_irda *si)
static int pxa_irda_start(struct net_device *dev)
static int pxa_irda_stop(struct net_device *dev)
static int pxa_irda_suspend(struct platform_device *_dev, pm_message_t state)
static int pxa_irda_resume(struct platform_device *_dev)
static int pxa_irda_init_iobuf(iobuff_t *io, int size)
static const struct net_device_ops pxa_irda_netdev_ops = ;
static int pxa_irda_probe(struct platform_device *pdev)
static int pxa_irda_remove(struct platform_device *_dev)
static struct platform_driver pxa_ir_driver = ;
static int __init pxa_irda_init(void)
static void __exit pxa_irda_exit(void)
module_init(pxa_irda_init);
module_exit(pxa_irda_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pxa2xx-ir");
