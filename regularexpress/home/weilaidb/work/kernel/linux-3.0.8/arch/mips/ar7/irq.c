#define EXCEPT_OFFSET	0x80
#define PACE_OFFSET	0xA0
#define CHNLS_OFFSET	0x200
#define REG_OFFSET(irq, reg)	((irq) / 32 * 0x4 + reg * 0x10)
#define SEC_REG_OFFSET(reg)	(EXCEPT_OFFSET + reg * 0x8)
#define SEC_SR_OFFSET		(SEC_REG_OFFSET(0))
#define CR_OFFSET(irq)		(REG_OFFSET(irq, 1))
#define SEC_CR_OFFSET		(SEC_REG_OFFSET(1))
#define ESR_OFFSET(irq)		(REG_OFFSET(irq, 2))
#define SEC_ESR_OFFSET		(SEC_REG_OFFSET(2))
#define ECR_OFFSET(irq)		(REG_OFFSET(irq, 3))
#define SEC_ECR_OFFSET		(SEC_REG_OFFSET(3))
#define PIR_OFFSET		(0x40)
#define MSR_OFFSET		(0x44)
#define PM_OFFSET(irq)		(REG_OFFSET(irq, 5))
#define TM_OFFSET(irq)		(REG_OFFSET(irq, 6))
#define REG(addr) ((u32 *)(KSEG1ADDR(AR7_REGS_IRQ) + addr))
#define CHNL_OFFSET(chnl) (CHNLS_OFFSET + (chnl * 4))
static int ar7_irq_base;
static void ar7_unmask_irq(struct irq_data *d)
static void ar7_mask_irq(struct irq_data *d)
static void ar7_ack_irq(struct irq_data *d)
static void ar7_unmask_sec_irq(struct irq_data *d)
static void ar7_mask_sec_irq(struct irq_data *d)
static void ar7_ack_sec_irq(struct irq_data *d)
static struct irq_chip ar7_irq_type = ;
static struct irq_chip ar7_sec_irq_type = ;
static struct irqaction ar7_cascade_action = ;
static void __init ar7_irq_init(int base)
void __init arch_init_irq(void)
static void ar7_cascade(void)
asmlinkage void plat_irq_dispatch(void)
