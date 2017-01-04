enum ;
static struct intc_vect fpga_vectors[] __initdata = ;
static struct intc_mask_reg fpga_mask_registers[] __initdata = ;
static DECLARE_INTC_DESC(fpga_intc_desc, "sdk7780-irq", fpga_vectors,
NULL, fpga_mask_registers, NULL, NULL);
void __init init_sdk7780_IRQ(void)
