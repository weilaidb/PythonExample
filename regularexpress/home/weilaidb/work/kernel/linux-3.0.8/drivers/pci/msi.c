static int pci_msi_enable = 1;
int arch_msi_check_device(struct pci_dev *dev, int nvec, int type)
# define arch_setup_msi_irqs default_setup_msi_irqs
# define HAVE_DEFAULT_MSI_SETUP_IRQS
int default_setup_msi_irqs(struct pci_dev *dev, int nvec, int type)
# define arch_teardown_msi_irqs default_teardown_msi_irqs
# define HAVE_DEFAULT_MSI_TEARDOWN_IRQS
void default_teardown_msi_irqs(struct pci_dev *dev)
static void msi_set_enable(struct pci_dev *dev, int pos, int enable)
static void msix_set_enable(struct pci_dev *dev, int enable)
static inline __attribute_const__ u32 msi_mask(unsigned x)
static inline __attribute_const__ u32 msi_capable_mask(u16 control)
static inline __attribute_const__ u32 msi_enabled_mask(u16 control)
static u32 __msi_mask_irq(struct msi_desc *desc, u32 mask, u32 flag)
static void msi_mask_irq(struct msi_desc *desc, u32 mask, u32 flag)
static u32 __msix_mask_irq(struct msi_desc *desc, u32 flag)
static void msix_mask_irq(struct msi_desc *desc, u32 flag)
static void msi_set_mask_bit(struct irq_data *data, u32 flag)
void mask_msi_irq(struct irq_data *data)
void unmask_msi_irq(struct irq_data *data)
void __read_msi_msg(struct msi_desc *entry, struct msi_msg *msg)
void read_msi_msg(unsigned int irq, struct msi_msg *msg)
void __get_cached_msi_msg(struct msi_desc *entry, struct msi_msg *msg)
void get_cached_msi_msg(unsigned int irq, struct msi_msg *msg)
void __write_msi_msg(struct msi_desc *entry, struct msi_msg *msg)
void write_msi_msg(unsigned int irq, struct msi_msg *msg)
static void free_msi_irqs(struct pci_dev *dev)
static struct msi_desc *alloc_msi_entry(struct pci_dev *dev)
static void pci_intx_for_msi(struct pci_dev *dev, int enable)
static void __pci_restore_msi_state(struct pci_dev *dev)
static void __pci_restore_msix_state(struct pci_dev *dev)
void pci_restore_msi_state(struct pci_dev *dev)
EXPORT_SYMBOL_GPL(pci_restore_msi_state);
static int msi_capability_init(struct pci_dev *dev, int nvec)
static void __iomem *msix_map_region(struct pci_dev *dev, unsigned pos,
unsigned nr_entries)
static int msix_setup_entries(struct pci_dev *dev, unsigned pos,
void __iomem *base, struct msix_entry *entries,
int nvec)
static void msix_program_entries(struct pci_dev *dev,
struct msix_entry *entries)
static int msix_capability_init(struct pci_dev *dev,
struct msix_entry *entries, int nvec)
static int pci_msi_check_device(struct pci_dev *dev, int nvec, int type)
int pci_enable_msi_block(struct pci_dev *dev, unsigned int nvec)
EXPORT_SYMBOL(pci_enable_msi_block);
void pci_msi_shutdown(struct pci_dev *dev)
void pci_disable_msi(struct pci_dev *dev)
EXPORT_SYMBOL(pci_disable_msi);
int pci_msix_table_size(struct pci_dev *dev)
int pci_enable_msix(struct pci_dev *dev, struct msix_entry *entries, int nvec)
EXPORT_SYMBOL(pci_enable_msix);
void pci_msix_shutdown(struct pci_dev *dev)
void pci_disable_msix(struct pci_dev *dev)
EXPORT_SYMBOL(pci_disable_msix);
void msi_remove_pci_irq_vectors(struct pci_dev *dev)
void pci_no_msi(void)
int pci_msi_enabled(void)
EXPORT_SYMBOL(pci_msi_enabled);
void pci_msi_init_pci_dev(struct pci_dev *dev)
