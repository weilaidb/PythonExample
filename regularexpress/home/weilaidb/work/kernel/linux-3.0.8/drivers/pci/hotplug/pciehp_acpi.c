#define PCIEHP_DETECT_PCIE	(0)
#define PCIEHP_DETECT_ACPI	(1)
#define PCIEHP_DETECT_AUTO	(2)
#define PCIEHP_DETECT_DEFAULT	PCIEHP_DETECT_AUTO
struct dummy_slot ;
static int slot_detection_mode;
static char *pciehp_detect_mode;
module_param(pciehp_detect_mode, charp, 0444);
MODULE_PARM_DESC(pciehp_detect_mode,
"Slot detection mode: pcie, acpi, auto\n"
"  pcie          - Use PCIe based slot detection\n"
"  acpi          - Use ACPI for slot detection\n"
"  auto(default) - Auto select mode. Use acpi option if duplicate\n"
"                  slot ids are found. Otherwise, use pcie option\n");
int pciehp_acpi_slot_detection_check(struct pci_dev *dev)
static int __init parse_detect_mode(void)
static int __initdata dup_slot_id;
static int __initdata acpi_slot_detected;
static struct list_head __initdata dummy_slots = LIST_HEAD_INIT(dummy_slots);
static int __init dummy_probe(struct pcie_device *dev)
static struct pcie_port_service_driver __initdata dummy_driver = ;
static int __init select_detection_mode(void)
void __init pciehp_acpi_slot_detection_init(void)
