static int ibm_get_xive;
static int ibm_set_xive;
static int ibm_int_on;
static int ibm_int_off;
static int ics_rtas_map(struct ics *ics, unsigned int virq);
static void ics_rtas_mask_unknown(struct ics *ics, unsigned long vec);
static long ics_rtas_get_server(struct ics *ics, unsigned long vec);
static int ics_rtas_host_match(struct ics *ics, struct device_node *node);
static struct ics ics_rtas = ;
static void ics_rtas_unmask_irq(struct irq_data *d)
static unsigned int ics_rtas_startup(struct irq_data *d)
static void ics_rtas_mask_real_irq(unsigned int hw_irq)
static void ics_rtas_mask_irq(struct irq_data *d)
static int ics_rtas_set_affinity(struct irq_data *d,
const struct cpumask *cpumask,
bool force)
static struct irq_chip ics_rtas_irq_chip = ;
static int ics_rtas_map(struct ics *ics, unsigned int virq)
static void ics_rtas_mask_unknown(struct ics *ics, unsigned long vec)
static long ics_rtas_get_server(struct ics *ics, unsigned long vec)
static int ics_rtas_host_match(struct ics *ics, struct device_node *node)
int ics_rtas_init(void)
