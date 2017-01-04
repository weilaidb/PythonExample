#define SCORE_PIC		((u32 __iomem __force *)0x95F50000)
#define INT_PNDL		0
#define INT_PNDH		1
#define INT_PRIORITY_M		2
#define INT_PRIORITY_SG0	4
#define INT_PRIORITY_SG1	5
#define INT_PRIORITY_SG2	6
#define INT_PRIORITY_SG3	7
#define INT_MASKL		8
#define INT_MASKH		9
asmlinkage void do_IRQ(int irq)
static void score_mask(struct irq_data *d)
static void score_unmask(struct irq_data *d)
struct irq_chip score_irq_chip = ;
void __init init_IRQ(void)
