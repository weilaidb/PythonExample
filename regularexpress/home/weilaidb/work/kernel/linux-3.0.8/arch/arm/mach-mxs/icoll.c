#define HW_ICOLL_VECTOR				0x0000
#define HW_ICOLL_LEVELACK			0x0010
#define HW_ICOLL_CTRL				0x0020
#define HW_ICOLL_INTERRUPTn_SET(n)		(0x0124 + (n) * 0x10)
#define HW_ICOLL_INTERRUPTn_CLR(n)		(0x0128 + (n) * 0x10)
#define BM_ICOLL_INTERRUPTn_ENABLE		0x00000004
#define BV_ICOLL_LEVELACK_IRQLEVELACK__LEVEL0	0x1
static void __iomem *icoll_base = MXS_IO_ADDRESS(MXS_ICOLL_BASE_ADDR);
static void icoll_ack_irq(struct irq_data *d)
static void icoll_mask_irq(struct irq_data *d)
static void icoll_unmask_irq(struct irq_data *d)
static struct irq_chip mxs_icoll_chip = ;
void __init icoll_init_irq(void)
