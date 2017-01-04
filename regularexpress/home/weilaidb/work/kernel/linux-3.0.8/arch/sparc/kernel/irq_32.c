#define SMP_NOP2 "nop; nop;\n\t"
#define SMP_NOP3 "nop; nop; nop;\n\t"
#define SMP_NOP2
#define SMP_NOP3
struct sparc_irq_config sparc_irq_config;
unsigned long arch_local_irq_save(void)
EXPORT_SYMBOL(arch_local_irq_save);
void arch_local_irq_enable(void)
EXPORT_SYMBOL(arch_local_irq_enable);
void arch_local_irq_restore(unsigned long old_psr)
EXPORT_SYMBOL(arch_local_irq_restore);
static struct irq_bucket irq_table[NR_IRQS];
static DEFINE_SPINLOCK(irq_table_lock);
struct irq_bucket *irq_map[SUN4D_MAX_IRQ];
static DEFINE_SPINLOCK(irq_map_lock);
unsigned int irq_alloc(unsigned int real_irq, unsigned int pil)
void irq_link(unsigned int irq)
void irq_unlink(unsigned int irq)
int arch_show_interrupts(struct seq_file *p, int prec)
void handler_irq(unsigned int pil, struct pt_regs *regs)
#if defined(CONFIG_BLK_DEV_FD) || defined(CONFIG_BLK_DEV_FD_MODULE)
static unsigned int floppy_irq;
int sparc_floppy_request_irq(unsigned int irq, irq_handler_t irq_handler)
EXPORT_SYMBOL(sparc_floppy_request_irq);
volatile unsigned char *fdc_status;
EXPORT_SYMBOL(fdc_status);
char *pdma_vaddr;
EXPORT_SYMBOL(pdma_vaddr);
unsigned long pdma_size;
EXPORT_SYMBOL(pdma_size);
volatile int doing_pdma;
EXPORT_SYMBOL(doing_pdma);
char *pdma_base;
EXPORT_SYMBOL(pdma_base);
unsigned long pdma_areasize;
EXPORT_SYMBOL(pdma_areasize);
void sparc_floppy_irq(int irq, void *dev_id, struct pt_regs *regs)
void __init init_IRQ(void)
