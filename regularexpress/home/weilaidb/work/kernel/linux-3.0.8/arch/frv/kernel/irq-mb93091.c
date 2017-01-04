#define __reg16(ADDR) (*(volatile unsigned short *)(ADDR))
#define __get_IMR()	()
#define __set_IMR(M)	do  while(0)
#define __get_IFR()	()
#define __clr_IFR(M)	do  while(0)
static void frv_fpga_mask(struct irq_data *d)
static void frv_fpga_ack(struct irq_data *d)
static void frv_fpga_mask_ack(struct irq_data *d)
static void frv_fpga_unmask(struct irq_data *d)
static struct irq_chip frv_fpga_pic = ;
static irqreturn_t fpga_interrupt(int irq, void *_mask)
static struct irqaction fpga_irq[4]  = ;
void __init fpga_init(void)
