enum ;
static struct intc_vect vectors_landisk[] __initdata = ;
static struct intc_mask_reg mask_registers_landisk[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc_landisk, "landisk", vectors_landisk, NULL,
mask_registers_landisk, NULL, NULL);
void __init init_landisk_IRQ(void)
