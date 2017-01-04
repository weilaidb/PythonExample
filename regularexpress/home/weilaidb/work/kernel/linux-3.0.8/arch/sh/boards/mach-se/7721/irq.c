enum ;
static struct intc_vect vectors[] __initdata = ;
static struct intc_prio_reg prio_registers[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc, "SE7721", vectors,
NULL, NULL, prio_registers, NULL);
void __init init_se7721_IRQ(void)
