#define __ASM_TXX9IRQ_H
#define TXX9_IRQ_BASE	(MIPS_CPU_IRQ_BASE + 8)
#define TXX9_IRQ_BASE	(I8259A_IRQ_BASE + 16)
#define TXX9_IRQ_BASE	0
#define TXx9_MAX_IR 16
#define TXx9_MAX_IR 32
void txx9_irq_init(unsigned long baseaddr);
int txx9_irq(void);
int txx9_irq_set_pri(int irc_irq, int new_pri);
