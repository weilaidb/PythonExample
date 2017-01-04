#define MAX_SLOTS		21
#define PCICMD_ABORT		((PCI_STATUS_REC_MASTER_ABORT| \
PCI_STATUS_REC_TARGET_ABORT)<<16)
#define PCICMD_ERROR_BITS	((PCI_STATUS_DETECTED_PARITY | \
PCI_STATUS_REC_MASTER_ABORT | \
PCI_STATUS_REC_TARGET_ABORT | \
PCI_STATUS_PARITY) << 16)
extern int setup_arm_irq(int, struct irqaction *);
extern void pcibios_report_status(u_int status_mask, int warn);
static unsigned long
dc21285_base_address(struct pci_bus *bus, unsigned int devfn)
static int
dc21285_read_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *value)
static int
dc21285_write_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 value)
static struct pci_ops dc21285_ops = ;
static struct timer_list serr_timer;
static struct timer_list perr_timer;
static void dc21285_enable_error(unsigned long __data)
static irqreturn_t dc21285_abort_irq(int irq, void *dev_id)
static irqreturn_t dc21285_serr_irq(int irq, void *dev_id)
static irqreturn_t dc21285_discard_irq(int irq, void *dev_id)
static irqreturn_t dc21285_dparity_irq(int irq, void *dev_id)
static irqreturn_t dc21285_parity_irq(int irq, void *dev_id)
int __init dc21285_setup(int nr, struct pci_sys_data *sys)
struct pci_bus * __init dc21285_scan_bus(int nr, struct pci_sys_data *sys)
#define dc21285_request_irq(_a, _b, _c, _d, _e) \
WARN_ON(request_irq(_a, _b, _c, _d, _e) < 0)
void __init dc21285_preinit(void)
void __init dc21285_postinit(void)
