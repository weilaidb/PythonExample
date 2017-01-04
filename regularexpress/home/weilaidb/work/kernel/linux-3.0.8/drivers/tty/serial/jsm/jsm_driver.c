MODULE_AUTHOR("Digi International, http:
MODULE_DESCRIPTION("Driver for the Digi International "
"Neo PCI based product line");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("jsm");
#define JSM_DRIVER_NAME "jsm"
#define NR_PORTS	32
#define JSM_MINOR_START	0
struct uart_driver jsm_uart_driver = ;
static pci_ers_result_t jsm_io_error_detected(struct pci_dev *pdev,
pci_channel_state_t state);
static pci_ers_result_t jsm_io_slot_reset(struct pci_dev *pdev);
static void jsm_io_resume(struct pci_dev *pdev);
static struct pci_error_handlers jsm_err_handler = ;
int jsm_debug;
module_param(jsm_debug, int, 0);
MODULE_PARM_DESC(jsm_debug, "Driver debugging level");
static int __devinit jsm_probe_one(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit jsm_remove_one(struct pci_dev *pdev)
static struct pci_device_id jsm_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, jsm_pci_tbl);
static struct pci_driver jsm_driver = ;
static pci_ers_result_t jsm_io_error_detected(struct pci_dev *pdev,
pci_channel_state_t state)
static pci_ers_result_t jsm_io_slot_reset(struct pci_dev *pdev)
static void jsm_io_resume(struct pci_dev *pdev)
static int __init jsm_init_module(void)
static void __exit jsm_exit_module(void)
module_init(jsm_init_module);
module_exit(jsm_exit_module);
