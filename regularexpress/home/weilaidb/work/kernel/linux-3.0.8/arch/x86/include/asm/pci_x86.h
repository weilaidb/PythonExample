#undef DEBUG
#define DBG(x...) printk(x)
#define DBG(x...)
#define PCI_PROBE_BIOS		0x0001
#define PCI_PROBE_CONF1		0x0002
#define PCI_PROBE_CONF2		0x0004
#define PCI_PROBE_MMCONF	0x0008
#define PCI_PROBE_MASK		0x000f
#define PCI_PROBE_NOEARLY	0x0010
#define PCI_NO_CHECKS		0x0400
#define PCI_USE_PIRQ_MASK	0x0800
#define PCI_ASSIGN_ROMS		0x1000
#define PCI_BIOS_IRQ_SCAN	0x2000
#define PCI_ASSIGN_ALL_BUSSES	0x4000
#define PCI_CAN_SKIP_ISA_ALIGN	0x8000
#define PCI_USE__CRS		0x10000
#define PCI_CHECK_ENABLE_AMD_MMCONF	0x20000
#define PCI_HAS_IO_ECS		0x40000
#define PCI_NOASSIGN_ROMS	0x80000
#define PCI_ROOT_NO_CRS		0x100000
#define PCI_NOASSIGN_BARS	0x200000
extern unsigned int pci_probe;
extern unsigned long pirq_table_addr;
enum pci_bf_sort_state ;
extern unsigned int pcibios_max_latency;
void pcibios_resource_survey(void);
void pcibios_set_cache_line_size(void);
extern int pcibios_last_bus;
extern struct pci_bus *pci_root_bus;
extern struct pci_ops pci_root_ops;
void pcibios_scan_specific_bus(int busn);
struct irq_info  __attribute__((packed));
struct irq_routing_table  __attribute__((packed));
extern unsigned int pcibios_irq_mask;
extern raw_spinlock_t pci_config_lock;
extern int (*pcibios_enable_irq)(struct pci_dev *dev);
extern void (*pcibios_disable_irq)(struct pci_dev *dev);
struct pci_raw_ops ;
extern struct pci_raw_ops *raw_pci_ops;
extern struct pci_raw_ops *raw_pci_ext_ops;
extern struct pci_raw_ops pci_direct_conf1;
extern bool port_cf9_safe;
extern int pci_direct_probe(void);
extern void pci_direct_init(int type);
extern void pci_pcbios_init(void);
extern void __init dmi_check_pciprobe(void);
extern void __init dmi_check_skip_isa_align(void);
extern int __init pci_acpi_init(void);
extern void __init pcibios_irq_init(void);
extern int __init pcibios_init(void);
extern int pci_legacy_init(void);
extern void pcibios_fixup_irqs(void);
#define PCI_MMCFG_RESOURCE_NAME_LEN (22 + 4 + 2 + 2)
struct pci_mmcfg_region ;
extern int __init pci_mmcfg_arch_init(void);
extern void __init pci_mmcfg_arch_free(void);
extern struct pci_mmcfg_region *pci_mmconfig_lookup(int segment, int bus);
extern struct list_head pci_mmcfg_list;
#define PCI_MMCFG_BUS_OFFSET(bus)      ((bus) << 20)
static inline unsigned char mmio_config_readb(void __iomem *pos)
static inline unsigned short mmio_config_readw(void __iomem *pos)
static inline unsigned int mmio_config_readl(void __iomem *pos)
static inline void mmio_config_writeb(void __iomem *pos, u8 val)
static inline void mmio_config_writew(void __iomem *pos, u16 val)
static inline void mmio_config_writel(void __iomem *pos, u32 val)
# ifdef CONFIG_ACPI
#  define x86_default_pci_init		pci_acpi_init
# else
#  define x86_default_pci_init		pci_legacy_init
# endif
# define x86_default_pci_init_irq	pcibios_irq_init
# define x86_default_pci_fixup_irqs	pcibios_fixup_irqs
# define x86_default_pci_init		NULL
# define x86_default_pci_init_irq	NULL
# define x86_default_pci_fixup_irqs	NULL
