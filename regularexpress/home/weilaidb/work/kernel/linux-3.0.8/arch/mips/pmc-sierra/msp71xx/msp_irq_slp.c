static inline void unmask_msp_slp_irq(struct irq_data *d)
static inline void mask_msp_slp_irq(struct irq_data *d)
static inline void ack_msp_slp_irq(struct irq_data *d)
static struct irq_chip msp_slp_irq_controller = ;
void __init msp_slp_irq_init(void)
void msp_slp_irq_dispatch(void)
