#define PSIF_CR				0x00
#define PSIF_RHR			0x04
#define PSIF_THR			0x08
#define PSIF_SR				0x10
#define PSIF_IER			0x14
#define PSIF_IDR			0x18
#define PSIF_IMR			0x1c
#define PSIF_PSR			0x24
#define PSIF_CR_RXDIS_OFFSET		1
#define PSIF_CR_RXDIS_SIZE		1
#define PSIF_CR_RXEN_OFFSET		0
#define PSIF_CR_RXEN_SIZE		1
#define PSIF_CR_SWRST_OFFSET		15
#define PSIF_CR_SWRST_SIZE		1
#define PSIF_CR_TXDIS_OFFSET		9
#define PSIF_CR_TXDIS_SIZE		1
#define PSIF_CR_TXEN_OFFSET		8
#define PSIF_CR_TXEN_SIZE		1
#define PSIF_NACK_OFFSET		8
#define PSIF_NACK_SIZE			1
#define PSIF_OVRUN_OFFSET		5
#define PSIF_OVRUN_SIZE			1
#define PSIF_PARITY_OFFSET		9
#define PSIF_PARITY_SIZE		1
#define PSIF_RXRDY_OFFSET		4
#define PSIF_RXRDY_SIZE			1
#define PSIF_TXEMPTY_OFFSET		1
#define PSIF_TXEMPTY_SIZE		1
#define PSIF_TXRDY_OFFSET		0
#define PSIF_TXRDY_SIZE			1
#define PSIF_PSR_PRSCV_OFFSET		0
#define PSIF_PSR_PRSCV_SIZE		12
#define PSIF_RHR_RXDATA_OFFSET		0
#define PSIF_RHR_RXDATA_SIZE		8
#define PSIF_THR_TXDATA_OFFSET		0
#define PSIF_THR_TXDATA_SIZE		8
#define PSIF_BIT(name)					\
(1 << PSIF_##name##_OFFSET)
#define PSIF_BF(name, value)				\
(((value) & ((1 << PSIF_##name##_SIZE) - 1))	\
<< PSIF_##name##_OFFSET)
#define PSIF_BFEXT(name, value)				\
(((value) >> PSIF_##name##_OFFSET)		\
& ((1 << PSIF_##name##_SIZE) - 1))
#define PSIF_BFINS(name, value, old)			\
(((old) & ~(((1 << PSIF_##name##_SIZE) - 1)	\
<< PSIF_##name##_OFFSET))		\
| PSIF_BF(name, value))
#define psif_readl(port, reg)				\
__raw_readl((port)->regs + PSIF_##reg)
#define psif_writel(port, reg, value)			\
__raw_writel((value), (port)->regs + PSIF_##reg)
struct psif ;
static irqreturn_t psif_interrupt(int irq, void *_ptr)
static int psif_write(struct serio *io, unsigned char val)
static int psif_open(struct serio *io)
static void psif_close(struct serio *io)
static void psif_set_prescaler(struct psif *psif)
static int __init psif_probe(struct platform_device *pdev)
static int __exit psif_remove(struct platform_device *pdev)
static int psif_suspend(struct platform_device *pdev, pm_message_t state)
static int psif_resume(struct platform_device *pdev)
#define psif_suspend	NULL
#define psif_resume	NULL
static struct platform_driver psif_driver = ;
static int __init psif_init(void)
static void __exit psif_exit(void)
module_init(psif_init);
module_exit(psif_exit);
MODULE_AUTHOR("Hans-Christian Egtvedt <hans-christian.egtvedt@atmel.com>");
MODULE_DESCRIPTION("Atmel AVR32 PSIF PS/2 driver");
MODULE_LICENSE("GPL");
