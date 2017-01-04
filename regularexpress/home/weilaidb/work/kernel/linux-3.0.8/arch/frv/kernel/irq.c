#define set_IRR(N,A,B,C,D) __set_IRR(N, (A << 28) | (B << 24) | (C << 20) | (D << 16))
extern void __init fpga_init(void);
extern void __init mb93493_init(void);
#define __reg16(ADDR) (*(volatile unsigned short *)(ADDR))
atomic_t irq_err_count;
int arch_show_interrupts(struct seq_file *p, int prec)
static void frv_cpupic_ack(struct irq_data *d)
static void frv_cpupic_mask(struct irq_data *d)
static void frv_cpupic_mask_ack(struct irq_data *d)
static void frv_cpupic_unmask(struct irq_data *d)
static struct irq_chip frv_cpu_pic = ;
asmlinkage void do_IRQ(void)
asmlinkage void do_NMI(void)
void __init init_IRQ(void)
