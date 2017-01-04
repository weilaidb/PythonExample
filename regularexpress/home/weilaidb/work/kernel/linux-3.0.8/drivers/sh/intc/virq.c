#define pr_fmt(fmt) "intc: " fmt
static struct intc_map_entry intc_irq_xlate[NR_IRQS];
struct intc_virq_list ;
#define for_each_virq(entry, head) \
for (entry = head; entry; entry = entry->next)
#define INTC_TAG_VIRQ_NEEDS_ALLOC	0
void intc_irq_xlate_set(unsigned int irq, intc_enum id, struct intc_desc_int *d)
struct intc_map_entry *intc_irq_xlate_get(unsigned int irq)
int intc_irq_lookup(const char *chipname, intc_enum enum_id)
EXPORT_SYMBOL_GPL(intc_irq_lookup);
static int add_virq_to_pirq(unsigned int irq, unsigned int virq)
static void intc_virq_handler(unsigned int irq, struct irq_desc *desc)
static unsigned long __init intc_subgroup_data(struct intc_subgroup *subgroup,
struct intc_desc_int *d,
unsigned int index)
static void __init intc_subgroup_init_one(struct intc_desc *desc,
struct intc_desc_int *d,
struct intc_subgroup *subgroup)
void __init intc_subgroup_init(struct intc_desc *desc, struct intc_desc_int *d)
static void __init intc_subgroup_map(struct intc_desc_int *d)
void __init intc_finalize(void)
