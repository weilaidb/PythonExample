enum ;
static struct intc_vect intcs_vectors[] = ;
static struct intc_group intcs_groups[] __initdata = ;
static struct intc_mask_reg intcs_mask_registers[] = ;
static struct intc_prio_reg intcs_prio_registers[] = ;
static struct resource intcs_resources[] __initdata = ;
static struct intc_desc intcs_desc __initdata = ;
static struct irqaction sh73a0_intcs_cascade;
static irqreturn_t sh73a0_intcs_demux(int irq, void *dev_id)
static int sh73a0_set_wake(struct irq_data *data, unsigned int on)
void __init sh73a0_init_irq(void)
