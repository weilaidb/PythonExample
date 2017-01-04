const struct icp_ops	*icp_ops;
unsigned int xics_default_server		= 0xff;
unsigned int xics_default_distrib_server	= 0;
unsigned int xics_interrupt_server_size		= 8;
DEFINE_PER_CPU(struct xics_cppr, xics_cppr);
struct irq_host *xics_host;
static LIST_HEAD(ics_list);
void xics_update_irq_servers(void)
void xics_set_cpu_giq(unsigned int gserver, unsigned int join)
void xics_setup_cpu(void)
void xics_mask_unknown_vec(unsigned int vec)
static void xics_request_ipi(void)
int __init xics_smp_probe(void)
void xics_teardown_cpu(void)
void xics_kexec_teardown_cpu(int secondary)
void xics_migrate_irqs_away(void)
int xics_get_irq_server(unsigned int virq, const struct cpumask *cpumask,
unsigned int strict_check)
static int xics_host_match(struct irq_host *h, struct device_node *node)
static void xics_ipi_unmask(struct irq_data *d)
static void xics_ipi_mask(struct irq_data *d)
static struct irq_chip xics_ipi_chip = ;
static int xics_host_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hw)
static int xics_host_xlate(struct irq_host *h, struct device_node *ct,
const u32 *intspec, unsigned int intsize,
irq_hw_number_t *out_hwirq, unsigned int *out_flags)
static struct irq_host_ops xics_host_ops = ;
static void __init xics_init_host(void)
void __init xics_register_ics(struct ics *ics)
static void __init xics_get_server_size(void)
void __init xics_init(void)
