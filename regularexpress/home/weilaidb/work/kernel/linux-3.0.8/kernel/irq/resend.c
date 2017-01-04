static DECLARE_BITMAP(irqs_resend, IRQ_BITMAP_BITS);
static void resend_irqs(unsigned long arg)
static DECLARE_TASKLET(resend_tasklet, resend_irqs, 0);
void check_irq_resend(struct irq_desc *desc, unsigned int irq)
