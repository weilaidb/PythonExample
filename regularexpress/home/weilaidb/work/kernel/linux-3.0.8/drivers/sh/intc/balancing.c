static unsigned long dist_handle[NR_IRQS];
void intc_balancing_enable(unsigned int irq)
void intc_balancing_disable(unsigned int irq)
static unsigned int intc_dist_data(struct intc_desc *desc,
struct intc_desc_int *d,
intc_enum enum_id)
void intc_set_dist_handle(unsigned int irq, struct intc_desc *desc,
struct intc_desc_int *d, intc_enum id)
