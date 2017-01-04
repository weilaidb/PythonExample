enum ;
static struct intc_vect vectors_irq0123[] __initdata = ;
static struct intc_vect vectors_irq45[] __initdata = ;
static struct intc_prio_reg prio_registers[] __initdata = ;
static struct intc_mask_reg ack_registers[] __initdata = ;
static struct intc_sense_reg sense_registers[] __initdata = ;
static DECLARE_INTC_DESC_ACK(intc_desc_irq0123, "sh3-irq0123",
vectors_irq0123, NULL, NULL,
prio_registers, sense_registers, ack_registers);
static DECLARE_INTC_DESC_ACK(intc_desc_irq45, "sh3-irq45",
vectors_irq45, NULL, NULL,
prio_registers, sense_registers, ack_registers);
#define INTC_ICR1		0xa4000010UL
#define INTC_ICR1_IRQLVL	(1<<14)
void __init plat_irq_setup_pins(int mode)
void __init plat_irq_setup_sh3(void)
