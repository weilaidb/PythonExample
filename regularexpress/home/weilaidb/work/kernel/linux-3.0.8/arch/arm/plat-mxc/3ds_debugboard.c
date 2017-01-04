#define LAN9217_BASE_ADDR(n)	(n + 0x0)
#define UARTA_BASE_ADDR(n)	(n + 0x8000)
#define UARTB_BASE_ADDR(n)	(n + 0x10000)
#define BOARD_IO_ADDR(n)	(n + 0x20000)
#define LED_SWITCH_REG		0x00
#define SWITCH_BUTTONS_REG	0x08
#define INTR_STATUS_REG	0x10
#define INTR_MASK_REG		0x38
#define INTR_RESET_REG		0x20
#define MAGIC_NUMBER1_REG	0x40
#define MAGIC_NUMBER2_REG	0x48
#define CPLD_CODE_VER_REG	0x50
#define MAGIC_NUMBER3_REG	0x58
#define MODULE_RESET_REG	0x60
#define MCU_BOARD_ID_REG	0x68
#define MXC_IRQ_TO_EXPIO(irq)   ((irq) - MXC_BOARD_IRQ_START)
#define MXC_IRQ_TO_GPIO(irq)	((irq) - MXC_INTERNAL_IRQS)
#define MXC_EXP_IO_BASE		(MXC_BOARD_IRQ_START)
#define MXC_MAX_EXP_IO_LINES	16
#define EXPIO_INT_ENET		(MXC_BOARD_IRQ_START + 0)
#define EXPIO_INT_XUART_A	(MXC_BOARD_IRQ_START + 1)
#define EXPIO_INT_XUART_B	(MXC_BOARD_IRQ_START + 2)
#define EXPIO_INT_BUTTON_A	(MXC_BOARD_IRQ_START + 3)
#define EXPIO_INT_BUTTON_B	(MXC_BOARD_IRQ_START + 4)
static void __iomem *brd_io;
static struct resource smsc911x_resources[] = ;
static struct smsc911x_platform_config smsc911x_config = ;
static struct platform_device smsc_lan9217_device = ;
static void mxc_expio_irq_handler(u32 irq, struct irq_desc *desc)
static void expio_mask_irq(struct irq_data *d)
static void expio_ack_irq(struct irq_data *d)
static void expio_unmask_irq(struct irq_data *d)
static struct irq_chip expio_irq_chip = ;
int __init mxc_expio_init(u32 base, u32 p_irq)
