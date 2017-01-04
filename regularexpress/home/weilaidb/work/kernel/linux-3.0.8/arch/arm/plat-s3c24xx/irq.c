static void
s3c_irq_mask(struct irq_data *data)
static inline void
s3c_irq_ack(struct irq_data *data)
static inline void
s3c_irq_maskack(struct irq_data *data)
static void
s3c_irq_unmask(struct irq_data *data)
struct irq_chip s3c_irq_level_chip = ;
struct irq_chip s3c_irq_chip = ;
static void
s3c_irqext_mask(struct irq_data *data)
static void
s3c_irqext_ack(struct irq_data *data)
static void
s3c_irqext_unmask(struct irq_data *data)
int
s3c_irqext_type(struct irq_data *data, unsigned int type)
static struct irq_chip s3c_irqext_chip = ;
static struct irq_chip s3c_irq_eint0t4 = ;
#define INTMSK_UART0	 (1UL << (IRQ_UART0 - IRQ_EINT0))
#define INTMSK_UART1	 (1UL << (IRQ_UART1 - IRQ_EINT0))
#define INTMSK_UART2	 (1UL << (IRQ_UART2 - IRQ_EINT0))
#define INTMSK_ADCPARENT (1UL << (IRQ_ADCPARENT - IRQ_EINT0))
static void
s3c_irq_uart0_mask(struct irq_data *data)
static void
s3c_irq_uart0_unmask(struct irq_data *data)
static void
s3c_irq_uart0_ack(struct irq_data *data)
static struct irq_chip s3c_irq_uart0 = ;
static void
s3c_irq_uart1_mask(struct irq_data *data)
static void
s3c_irq_uart1_unmask(struct irq_data *data)
static void
s3c_irq_uart1_ack(struct irq_data *data)
static struct irq_chip s3c_irq_uart1 = ;
static void
s3c_irq_uart2_mask(struct irq_data *data)
static void
s3c_irq_uart2_unmask(struct irq_data *data)
static void
s3c_irq_uart2_ack(struct irq_data *data)
static struct irq_chip s3c_irq_uart2 = ;
static void
s3c_irq_adc_mask(struct irq_data *d)
static void
s3c_irq_adc_unmask(struct irq_data *d)
static void
s3c_irq_adc_ack(struct irq_data *d)
static struct irq_chip s3c_irq_adc = ;
static void s3c_irq_demux_adc(unsigned int irq,
struct irq_desc *desc)
static void s3c_irq_demux_uart(unsigned int start)
static void
s3c_irq_demux_uart0(unsigned int irq,
struct irq_desc *desc)
static void
s3c_irq_demux_uart1(unsigned int irq,
struct irq_desc *desc)
static void
s3c_irq_demux_uart2(unsigned int irq,
struct irq_desc *desc)
static void
s3c_irq_demux_extint8(unsigned int irq,
struct irq_desc *desc)
static void
s3c_irq_demux_extint4t7(unsigned int irq,
struct irq_desc *desc)
int s3c24xx_set_fiq(unsigned int irq, bool on)
EXPORT_SYMBOL_GPL(s3c24xx_set_fiq);
void __init s3c24xx_init_irq(void)
struct syscore_ops s3c24xx_irq_syscore_ops = ;
