#define MODEM_INTCON_BASE_ADDR 0xBFFD3000
#define MODEM_INTCON_SIZE 0xFFF
#define DEST_IRQ41_OFFSET 0x2A4
#define DEST_IRQ43_OFFSET 0x2AC
#define DEST_IRQ45_OFFSET 0x2B4
#define PRIO_IRQ41_OFFSET 0x6A4
#define PRIO_IRQ43_OFFSET 0x6AC
#define PRIO_IRQ45_OFFSET 0x6B4
#define ALLOW_IRQ_OFFSET 0x104
#define MODEM_INTCON_CPU_NBR 0x1
#define MODEM_INTCON_PRIO_HIGH 0x0
#define MODEM_INTCON_ALLOW_IRQ41 0x0200
#define MODEM_INTCON_ALLOW_IRQ43 0x0800
#define MODEM_INTCON_ALLOW_IRQ45 0x2000
#define MODEM_IRQ_REG_OFFSET 0x4
struct modem_irq ;
static void setup_modem_intcon(void __iomem *modem_intcon_base)
static irqreturn_t modem_cpu_irq_handler(int irq, void *data)
static void create_virtual_irq(int irq, struct irq_chip *modem_irq_chip)
static int modem_irq_init(void)
arch_initcall(modem_irq_init);
