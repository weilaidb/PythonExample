#define IRQ_ROUTE_ONE(X) (X##_ROUTE << (X - IRQ_BASE_MB93493))
#define IRQ_ROUTING					\
(IRQ_ROUTE_ONE(IRQ_MB93493_VDC)		|	\
IRQ_ROUTE_ONE(IRQ_MB93493_VCC)		|	\
IRQ_ROUTE_ONE(IRQ_MB93493_AUDIO_OUT)	|	\
IRQ_ROUTE_ONE(IRQ_MB93493_I2C_0)	|	\
IRQ_ROUTE_ONE(IRQ_MB93493_I2C_1)	|	\
IRQ_ROUTE_ONE(IRQ_MB93493_USB)		|	\
IRQ_ROUTE_ONE(IRQ_MB93493_LOCAL_BUS)	|	\
IRQ_ROUTE_ONE(IRQ_MB93493_PCMCIA)	|	\
IRQ_ROUTE_ONE(IRQ_MB93493_GPIO)	|	\
IRQ_ROUTE_ONE(IRQ_MB93493_AUDIO_IN))
static void frv_mb93493_mask(struct irq_data *d)
static void frv_mb93493_ack(struct irq_data *d)
static void frv_mb93493_unmask(struct irq_data *d)
static struct irq_chip frv_mb93493_pic = ;
static irqreturn_t mb93493_interrupt(int irq, void *_piqsr)
static struct irqaction mb93493_irq[2]  = ;
void __init mb93493_init(void)
