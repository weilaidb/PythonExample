#define _ASM_NLM_XLR_H
struct uart_port;
unsigned int nlm_xlr_uart_in(struct uart_port *, int);
void nlm_xlr_uart_out(struct uart_port *, int, int);
struct irq_desc;
void nlm_smp_function_ipi_handler(unsigned int irq, struct irq_desc *desc);
void nlm_smp_resched_ipi_handler(unsigned int irq, struct irq_desc *desc);
int nlm_wakeup_secondary_cpus(u32 wakeup_mask);
void nlm_smp_irq_init(void);
void nlm_boot_smp_nmi(void);
void prom_pre_boot_secondary_cpus(void);
extern struct plat_smp_ops nlm_smp_ops;
extern unsigned long nlm_common_ebase;
static inline unsigned int nlm_chip_is_xls_b(void)
static inline unsigned int nlm_chip_is_xls(void)
