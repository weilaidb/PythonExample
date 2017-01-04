static void s3c_irq_demux_uart(unsigned int irq, struct irq_desc *desc)
static void __init s3c_init_uart_irq(struct s3c_uart_irq *uirq)
void __init s3c_init_uart_irqs(struct s3c_uart_irq *irq, unsigned int nr_irqs)
