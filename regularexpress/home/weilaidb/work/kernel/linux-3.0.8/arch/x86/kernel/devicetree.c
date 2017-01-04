__initdata u64 initial_dtb;
char __initdata cmd_line[COMMAND_LINE_SIZE];
static LIST_HEAD(irq_domains);
static DEFINE_RAW_SPINLOCK(big_irq_lock);
int __initdata of_ioapic;
static void add_interrupt_host(struct irq_domain *ih)
static struct irq_domain *get_ih_from_node(struct device_node *controller)
unsigned int irq_create_of_mapping(struct device_node *controller,
const u32 *intspec, unsigned int intsize)
EXPORT_SYMBOL_GPL(irq_create_of_mapping);
unsigned long pci_address_to_pio(phys_addr_t address)
EXPORT_SYMBOL_GPL(pci_address_to_pio);
void __init early_init_dt_scan_chosen_arch(unsigned long node)
void __init early_init_dt_add_memory_arch(u64 base, u64 size)
void * __init early_init_dt_alloc_memory_arch(u64 size, u64 align)
void __init early_init_dt_setup_initrd_arch(unsigned long start,
unsigned long end)
void __init add_dtb(u64 data)
static struct of_device_id __initdata ce4100_ids[] = ;
static int __init add_bus_probe(void)
module_init(add_bus_probe);
static int x86_of_pci_irq_enable(struct pci_dev *dev)
static void x86_of_pci_irq_disable(struct pci_dev *dev)
void __cpuinit x86_of_pci_init(void)
static void __init dtb_setup_hpet(void)
static void __init dtb_lapic_setup(void)
static unsigned int ioapic_id;
static void __init dtb_add_ioapic(struct device_node *dn)
static void __init dtb_ioapic_setup(void)
static void __init dtb_ioapic_setup(void)
static void __init dtb_apic_setup(void)
static void __init x86_flattree_get_config(void)
static inline void x86_flattree_get_config(void)
void __init x86_dtb_init(void)
struct of_ioapic_type ;
static struct of_ioapic_type of_ioapic_type[] =
;
static int ioapic_xlate(struct irq_domain *id, const u32 *intspec, u32 intsize,
u32 *out_hwirq, u32 *out_type)
static void __init ioapic_add_ofnode(struct device_node *np)
void __init x86_add_irq_domains(void)
void __init x86_add_irq_domains(void)
