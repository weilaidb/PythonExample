static inline void s5p_irq_eint_mask(struct irq_data *data)
static void s5p_irq_eint_unmask(struct irq_data *data)
static inline void s5p_irq_eint_ack(struct irq_data *data)
static void s5p_irq_eint_maskack(struct irq_data *data)
static int s5p_irq_eint_set_type(struct irq_data *data, unsigned int type)
static struct irq_chip s5p_irq_eint = ;
static inline void s5p_irq_demux_eint(unsigned int start)
static void s5p_irq_demux_eint16_31(unsigned int irq, struct irq_desc *desc)
static inline void s5p_irq_vic_eint_mask(struct irq_data *data)
static void s5p_irq_vic_eint_unmask(struct irq_data *data)
static inline void s5p_irq_vic_eint_ack(struct irq_data *data)
static void s5p_irq_vic_eint_maskack(struct irq_data *data)
static struct irq_chip s5p_irq_vic_eint = ;
int __init s5p_init_irq_eint(void)
arch_initcall(s5p_init_irq_eint);
