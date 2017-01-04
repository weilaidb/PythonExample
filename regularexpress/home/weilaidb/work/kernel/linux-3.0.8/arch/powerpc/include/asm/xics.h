#define _XICS_H
#define XICS_IPI		2
#define XICS_IRQ_SPURIOUS	0
#define	DEFAULT_PRIORITY	5
#define IPI_PRIORITY		4
#define LOWEST_PRIORITY		0xFF
#define MAX_NUM_PRIORITIES	3
extern int icp_native_init(void);
extern int icp_hv_init(void);
struct icp_ops ;
extern const struct icp_ops *icp_ops;
extern int ics_native_init(void);
extern int ics_rtas_init(void);
struct ics ;
extern unsigned int xics_default_server;
extern unsigned int xics_default_distrib_server;
extern unsigned int xics_interrupt_server_size;
extern struct irq_host *xics_host;
struct xics_cppr ;
DECLARE_PER_CPU(struct xics_cppr, xics_cppr);
static inline void xics_push_cppr(unsigned int vec)
static inline unsigned char xics_pop_cppr(void)
static inline void xics_set_base_cppr(unsigned char cppr)
static inline unsigned char xics_cppr_top(void)
DECLARE_PER_CPU_SHARED_ALIGNED(unsigned long, xics_ipi_message);
extern void xics_init(void);
extern void xics_setup_cpu(void);
extern void xics_update_irq_servers(void);
extern void xics_set_cpu_giq(unsigned int gserver, unsigned int join);
extern void xics_mask_unknown_vec(unsigned int vec);
extern irqreturn_t xics_ipi_dispatch(int cpu);
extern int xics_smp_probe(void);
extern void xics_register_ics(struct ics *ics);
extern void xics_teardown_cpu(void);
extern void xics_kexec_teardown_cpu(int secondary);
extern void xics_migrate_irqs_away(void);
extern int xics_get_irq_server(unsigned int virq, const struct cpumask *cpumask,
unsigned int strict_check);
#define xics_get_irq_server(virq, cpumask, strict_check) (xics_default_server)
