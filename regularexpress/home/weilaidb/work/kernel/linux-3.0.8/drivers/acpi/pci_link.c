#define PREFIX "ACPI: "
#define _COMPONENT			ACPI_PCI_COMPONENT
ACPI_MODULE_NAME("pci_link");
#define ACPI_PCI_LINK_CLASS		"pci_irq_routing"
#define ACPI_PCI_LINK_DEVICE_NAME	"PCI Interrupt Link"
#define ACPI_PCI_LINK_FILE_INFO		"info"
#define ACPI_PCI_LINK_FILE_STATUS	"state"
#define ACPI_PCI_LINK_MAX_POSSIBLE	16
static int acpi_pci_link_add(struct acpi_device *device);
static int acpi_pci_link_remove(struct acpi_device *device, int type);
static const struct acpi_device_id link_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, link_device_ids);
static struct acpi_driver acpi_pci_link_driver = ;
struct acpi_pci_link_irq ;
struct acpi_pci_link ;
static LIST_HEAD(acpi_link_list);
static DEFINE_MUTEX(acpi_link_lock);
static acpi_status acpi_pci_link_check_possible(struct acpi_resource *resource,
void *context)
static int acpi_pci_link_get_possible(struct acpi_pci_link *link)
static acpi_status acpi_pci_link_check_current(struct acpi_resource *resource,
void *context)
static int acpi_pci_link_get_current(struct acpi_pci_link *link)
static int acpi_pci_link_set(struct acpi_pci_link *link, int irq)
#define ACPI_MAX_IRQS		256
#define ACPI_MAX_ISA_IRQ	16
#define PIRQ_PENALTY_PCI_AVAILABLE	(0)
#define PIRQ_PENALTY_PCI_POSSIBLE	(16*16)
#define PIRQ_PENALTY_PCI_USING		(16*16*16)
#define PIRQ_PENALTY_ISA_TYPICAL	(16*16*16*16)
#define PIRQ_PENALTY_ISA_USED		(16*16*16*16*16)
#define PIRQ_PENALTY_ISA_ALWAYS		(16*16*16*16*16*16)
static int acpi_irq_penalty[ACPI_MAX_IRQS] = ;
int __init acpi_irq_penalty_init(void)
static int acpi_irq_balance = -1;
static int acpi_pci_link_allocate(struct acpi_pci_link *link)
int acpi_pci_link_allocate_irq(acpi_handle handle, int index, int *triggering,
int *polarity, char **name)
int acpi_pci_link_free_irq(acpi_handle handle)
static int acpi_pci_link_add(struct acpi_device *device)
static int acpi_pci_link_resume(struct acpi_pci_link *link)
static void irqrouter_resume(void)
static int acpi_pci_link_remove(struct acpi_device *device, int type)
static int __init acpi_irq_penalty_update(char *str, int used)
void acpi_penalize_isa_irq(int irq, int active)
static int __init acpi_irq_isa(char *str)
__setup("acpi_irq_isa=", acpi_irq_isa);
static int __init acpi_irq_pci(char *str)
__setup("acpi_irq_pci=", acpi_irq_pci);
static int __init acpi_irq_nobalance_set(char *str)
__setup("acpi_irq_nobalance", acpi_irq_nobalance_set);
static int __init acpi_irq_balance_set(char *str)
__setup("acpi_irq_balance", acpi_irq_balance_set);
static struct syscore_ops irqrouter_syscore_ops = ;
static int __init irqrouter_init_ops(void)
device_initcall(irqrouter_init_ops);
static int __init acpi_pci_link_init(void)
subsys_initcall(acpi_pci_link_init);
