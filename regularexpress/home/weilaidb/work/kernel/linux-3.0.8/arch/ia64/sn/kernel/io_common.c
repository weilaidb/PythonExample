extern void sn_init_cpei_timer(void);
extern void register_sn_procfs(void);
extern void sn_io_acpi_init(void);
extern void sn_io_init(void);
static struct list_head sn_sysdata_list;
struct sysdata_el ;
int sn_ioif_inited;
int sn_acpi_rev;
EXPORT_SYMBOL_GPL(sn_acpi_rev);
struct sn_pcibus_provider *sn_pci_provider[PCIIO_ASIC_MAX_TYPES];
static dma_addr_t
sn_default_pci_map(struct pci_dev *pdev, unsigned long paddr, size_t size, int type)
static void
sn_default_pci_unmap(struct pci_dev *pdev, dma_addr_t addr, int direction)
static void *
sn_default_pci_bus_fixup(struct pcibus_bussoft *soft, struct pci_controller *controller)
static struct sn_pcibus_provider sn_pci_default_provider = ;
static inline u64
sal_get_device_dmaflush_list(u64 nasid, u64 widget_num, u64 device_num,
u64 address)
inline struct pcidev_info *
sn_pcidev_info_get(struct pci_dev *dev)
static s64 sn_device_fixup_war(u64 nasid, u64 widget, int device,
struct sn_flush_device_common *common)
void __init
sn_common_hubdev_init(struct hubdev_info *hubdev)
void sn_pci_unfixup_slot(struct pci_dev *dev)
void sn_pci_fixup_slot(struct pci_dev *dev, struct pcidev_info *pcidev_info,
struct sn_irq_info *sn_irq_info)
void
sn_common_bus_fixup(struct pci_bus *bus,
struct pcibus_bussoft *prom_bussoft_ptr)
void sn_bus_store_sysdata(struct pci_dev *dev)
void sn_bus_free_sysdata(void)
void __init hubdev_init_node(nodepda_t * npda, cnodeid_t node)
geoid_t
cnodeid_get_geoid(cnodeid_t cnode)
void sn_generate_path(struct pci_bus *pci_bus, char *address)
void __devinit
sn_pci_fixup_bus(struct pci_bus *bus)
static int __init
sn_io_early_init(void)
arch_initcall(sn_io_early_init);
int __init
sn_io_late_init(void)
fs_initcall(sn_io_late_init);
EXPORT_SYMBOL(sn_pci_unfixup_slot);
EXPORT_SYMBOL(sn_bus_store_sysdata);
EXPORT_SYMBOL(sn_bus_free_sysdata);
EXPORT_SYMBOL(sn_generate_path);
