#define PIRQ_SIGNATURE	(('$' << 0) + ('P' << 8) + ('I' << 16) + ('R' << 24))
#define PIRQ_VERSION 0x0100
static int broken_hp_bios_irq9;
static int acer_tm360_irqrouting;
static struct irq_routing_table *pirq_table;
static int pirq_enable_irq(struct pci_dev *dev);
unsigned int pcibios_irq_mask = 0xfff8;
static int pirq_penalty[16] = ;
struct irq_router ;
struct irq_router_handler ;
int (*pcibios_enable_irq)(struct pci_dev *dev) = pirq_enable_irq;
void (*pcibios_disable_irq)(struct pci_dev *dev) = NULL;
static inline struct irq_routing_table *pirq_check_routing_table(u8 *addr)
static struct irq_routing_table * __init pirq_find_routing_table(void)
static void __init pirq_peer_trick(void)
void eisa_set_level_irq(unsigned int irq)
static unsigned int read_config_nybble(struct pci_dev *router, unsigned offset, unsigned nr)
static void write_config_nybble(struct pci_dev *router, unsigned offset,
unsigned nr, unsigned int val)
static int pirq_ali_get(struct pci_dev *router, struct pci_dev *dev, int pirq)
static int pirq_ali_set(struct pci_dev *router, struct pci_dev *dev, int pirq, int irq)
static int pirq_piix_get(struct pci_dev *router, struct pci_dev *dev, int pirq)
static int pirq_piix_set(struct pci_dev *router, struct pci_dev *dev, int pirq, int irq)
static int pirq_via_get(struct pci_dev *router, struct pci_dev *dev, int pirq)
static int pirq_via_set(struct pci_dev *router, struct pci_dev *dev, int pirq, int irq)
static int pirq_via586_get(struct pci_dev *router, struct pci_dev *dev, int pirq)
static int pirq_via586_set(struct pci_dev *router, struct pci_dev *dev, int pirq, int irq)
static int pirq_ite_get(struct pci_dev *router, struct pci_dev *dev, int pirq)
static int pirq_ite_set(struct pci_dev *router, struct pci_dev *dev, int pirq, int irq)
static int pirq_opti_get(struct pci_dev *router, struct pci_dev *dev, int pirq)
static int pirq_opti_set(struct pci_dev *router, struct pci_dev *dev, int pirq, int irq)
static int pirq_cyrix_get(struct pci_dev *router, struct pci_dev *dev, int pirq)
static int pirq_cyrix_set(struct pci_dev *router, struct pci_dev *dev, int pirq, int irq)
#define PIRQ_SIS_IRQ_MASK	0x0f
#define PIRQ_SIS_IRQ_DISABLE	0x80
#define PIRQ_SIS_USB_ENABLE	0x40
static int pirq_sis_get(struct pci_dev *router, struct pci_dev *dev, int pirq)
static int pirq_sis_set(struct pci_dev *router, struct pci_dev *dev, int pirq, int irq)
static int pirq_vlsi_get(struct pci_dev *router, struct pci_dev *dev, int pirq)
static int pirq_vlsi_set(struct pci_dev *router, struct pci_dev *dev, int pirq, int irq)
static int pirq_serverworks_get(struct pci_dev *router, struct pci_dev *dev, int pirq)
static int pirq_serverworks_set(struct pci_dev *router, struct pci_dev *dev,
int pirq, int irq)
static int pirq_amd756_get(struct pci_dev *router, struct pci_dev *dev, int pirq)
static int pirq_amd756_set(struct pci_dev *router, struct pci_dev *dev, int pirq, int irq)
static int pirq_pico_get(struct pci_dev *router, struct pci_dev *dev, int pirq)
static int pirq_pico_set(struct pci_dev *router, struct pci_dev *dev, int pirq,
int irq)
static int pirq_bios_set(struct pci_dev *router, struct pci_dev *dev, int pirq, int irq)
static __init int intel_router_probe(struct irq_router *r, struct pci_dev *router, u16 device)
static __init int via_router_probe(struct irq_router *r,
struct pci_dev *router, u16 device)
static __init int vlsi_router_probe(struct irq_router *r, struct pci_dev *router, u16 device)
static __init int serverworks_router_probe(struct irq_router *r,
struct pci_dev *router, u16 device)
static __init int sis_router_probe(struct irq_router *r, struct pci_dev *router, u16 device)
static __init int cyrix_router_probe(struct irq_router *r, struct pci_dev *router, u16 device)
static __init int opti_router_probe(struct irq_router *r, struct pci_dev *router, u16 device)
static __init int ite_router_probe(struct irq_router *r, struct pci_dev *router, u16 device)
static __init int ali_router_probe(struct irq_router *r, struct pci_dev *router, u16 device)
static __init int amd_router_probe(struct irq_router *r, struct pci_dev *router, u16 device)
static __init int pico_router_probe(struct irq_router *r, struct pci_dev *router, u16 device)
static __initdata struct irq_router_handler pirq_routers[] = ;
static struct irq_router pirq_router;
static struct pci_dev *pirq_router_dev;
static void __init pirq_find_router(struct irq_router *r)
static struct irq_info *pirq_get_info(struct pci_dev *dev)
static int pcibios_lookup_irq(struct pci_dev *dev, int assign)
void __init pcibios_fixup_irqs(void)
static int __init fix_broken_hp_bios_irq9(const struct dmi_system_id *d)
static int __init fix_acer_tm360_irqrouting(const struct dmi_system_id *d)
static struct dmi_system_id __initdata pciirq_dmi_table[] = ;
void __init pcibios_irq_init(void)
static void pirq_penalize_isa_irq(int irq, int active)
void pcibios_penalize_isa_irq(int irq, int active)
static int pirq_enable_irq(struct pci_dev *dev)
