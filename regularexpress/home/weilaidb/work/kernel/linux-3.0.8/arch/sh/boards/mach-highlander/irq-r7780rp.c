enum ;
static struct intc_vect vectors[] __initdata = ;
static struct intc_mask_reg mask_registers[] __initdata = ;
static unsigned char irl2irq[HL_NR_IRL] __initdata = ;
static DECLARE_INTC_DESC(intc_desc, "r7780rp", vectors,
NULL, mask_registers, NULL, NULL);
unsigned char * __init highlander_plat_irq_setup(void)
