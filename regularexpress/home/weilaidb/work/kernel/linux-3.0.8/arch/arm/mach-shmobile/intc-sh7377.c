enum ;
static struct intc_vect intca_vectors[] __initdata = ;
static struct intc_group intca_groups[] __initdata = ;
static struct intc_mask_reg intca_mask_registers[] __initdata = ;
static struct intc_prio_reg intca_prio_registers[] __initdata = ;
static struct intc_sense_reg intca_sense_registers[] __initdata = ;
static struct intc_mask_reg intca_ack_registers[] __initdata = ;
static struct intc_desc intca_desc __initdata = ;
#define __IGNORE(a...)
#define __IGNORE0(a...) 0
enum ;
#define INTCS_INTVECT 0x0F80
static struct intc_vect intcs_vectors[] __initdata = ;
static struct intc_group intcs_groups[] __initdata = ;
static struct intc_mask_reg intcs_mask_registers[] __initdata = ;
static struct intc_prio_reg intcs_prio_registers[] __initdata = ;
static struct resource intcs_resources[] __initdata = ;
static struct intc_desc intcs_desc __initdata = ;
static void intcs_demux(unsigned int irq, struct irq_desc *desc)
#define INTEVTSA 0xFFD20100
void __init sh7377_init_irq(void)