#define IRQ_XEN_H
extern void (*late_time_init)(void);
extern char xen_event_callback;
void __init xen_init_IRQ(void);
extern const struct pv_irq_ops xen_irq_ops __initdata;
extern void xen_smp_intr_init(void);
extern void xen_send_ipi(int cpu, int vec);
