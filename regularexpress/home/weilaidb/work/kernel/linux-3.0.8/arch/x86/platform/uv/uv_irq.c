struct uv_irq_2_mmr_pnode;
static spinlock_t		uv_irq_lock;
static struct rb_root		uv_irq_root;
static int uv_set_irq_affinity(struct irq_data *, const struct cpumask *, bool);
static void uv_noop(struct irq_data *data)
static void uv_ack_apic(struct irq_data *data)
static struct irq_chip uv_irq_chip = ;
static int uv_set_irq_2_mmr_info(int irq, unsigned long offset, unsigned blade)
int uv_irq_2_mmr_info(int irq, unsigned long *offset, int *pnode)
static int
arch_enable_uv_irq(char *irq_name, unsigned int irq, int cpu, int mmr_blade,
unsigned long mmr_offset, int limit)
static void arch_disable_uv_irq(int mmr_pnode, unsigned long mmr_offset)
static int
uv_set_irq_affinity(struct irq_data *data, const struct cpumask *mask,
bool force)
int uv_setup_irq(char *irq_name, int cpu, int mmr_blade,
unsigned long mmr_offset, int limit)
EXPORT_SYMBOL_GPL(uv_setup_irq);
void uv_teardown_irq(unsigned int irq)
EXPORT_SYMBOL_GPL(uv_teardown_irq);
