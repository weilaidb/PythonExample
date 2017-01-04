static int __init
early_read_config_word(struct pci_controller *hose,
int top_bus, int bus, int devfn, int offset, u16 *value)
int __init txx9_pci66_check(struct pci_controller *hose, int top_bus,
int current_bus)
static struct resource primary_pci_mem_res[2] = ;
static struct resource primary_pci_io_res = ;
struct pci_controller txx9_primary_pcic = ;
int txx9_pci_mem_high __initdata = 1;
int txx9_pci_mem_high __initdata;
struct pci_controller *__init
txx9_alloc_pci_controller(struct pci_controller *pcic,
unsigned long mem_base, unsigned long mem_size,
unsigned long io_base, unsigned long io_size)
static int __init
txx9_arch_pci_init(void)
arch_initcall(txx9_arch_pci_init);
int txx9_pci_option =
TXX9_PCI_OPT_PICMG |
TXX9_PCI_OPT_CLK_AUTO;
enum txx9_pci_err_action txx9_pci_err_action = TXX9_PCI_ERR_REPORT;
static irqreturn_t i8259_interrupt(int irq, void *dev_id)
static int __init
txx9_i8259_irq_setup(int irq)
static void __init quirk_slc90e66_bridge(struct pci_dev *dev)
static void quirk_slc90e66_ide(struct pci_dev *dev)
static void tc35815_fixup(struct pci_dev *dev)
static void final_fixup(struct pci_dev *dev)
#define PCI_DEVICE_ID_EFAR_SLC90E66_0 0x9460
DECLARE_PCI_FIXUP_FINAL(PCI_VENDOR_ID_EFAR, PCI_DEVICE_ID_EFAR_SLC90E66_0,
quirk_slc90e66_bridge);
DECLARE_PCI_FIXUP_FINAL(PCI_VENDOR_ID_EFAR, PCI_DEVICE_ID_EFAR_SLC90E66_1,
quirk_slc90e66_ide);
DECLARE_PCI_FIXUP_RESUME(PCI_VENDOR_ID_EFAR, PCI_DEVICE_ID_EFAR_SLC90E66_1,
quirk_slc90e66_ide);
DECLARE_PCI_FIXUP_FINAL(PCI_VENDOR_ID_TOSHIBA_2,
PCI_DEVICE_ID_TOSHIBA_TC35815_NWU, tc35815_fixup);
DECLARE_PCI_FIXUP_FINAL(PCI_VENDOR_ID_TOSHIBA_2,
PCI_DEVICE_ID_TOSHIBA_TC35815_TX4939, tc35815_fixup);
DECLARE_PCI_FIXUP_FINAL(PCI_ANY_ID, PCI_ANY_ID, final_fixup);
DECLARE_PCI_FIXUP_RESUME(PCI_ANY_ID, PCI_ANY_ID, final_fixup);
int pcibios_plat_dev_init(struct pci_dev *dev)
int __init pcibios_map_irq(const struct pci_dev *dev, u8 slot, u8 pin)
char * (*txx9_board_pcibios_setup)(char *str) __devinitdata;
char *__devinit txx9_pcibios_setup(char *str)
