#define R2D_NR_IRL 13
enum ;
static struct intc_vect vectors_r2d_1[] __initdata = ;
static struct intc_mask_reg mask_registers_r2d_1[] __initdata = ;
static unsigned char irl2irq_r2d_1[R2D_NR_IRL] __initdata = ;
static DECLARE_INTC_DESC(intc_desc_r2d_1, "r2d-1", vectors_r2d_1,
NULL, mask_registers_r2d_1, NULL, NULL);
static struct intc_vect vectors_r2d_plus[] __initdata = ;
static struct intc_mask_reg mask_registers_r2d_plus[] __initdata = ;
static unsigned char irl2irq_r2d_plus[R2D_NR_IRL] __initdata = ;
static DECLARE_INTC_DESC(intc_desc_r2d_plus, "r2d-plus", vectors_r2d_plus,
NULL, mask_registers_r2d_plus, NULL, NULL);
static unsigned char irl2irq[R2D_NR_IRL];
int rts7751r2d_irq_demux(int irq)
void __init init_rts7751r2d_IRQ(void)
