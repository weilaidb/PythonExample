#define OSM_DESCRIPTION	"I2O-subsystem"
static struct pci_device_id __devinitdata i2o_pci_ids[] = ;
static void i2o_pci_free(struct i2o_controller *c)
static int __devinit i2o_pci_alloc(struct i2o_controller *c)
static irqreturn_t i2o_pci_interrupt(int irq, void *dev_id)
static int i2o_pci_irq_enable(struct i2o_controller *c)
static void i2o_pci_irq_disable(struct i2o_controller *c)
static int __devinit i2o_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit i2o_pci_remove(struct pci_dev *pdev)
;
static struct pci_driver i2o_pci_driver = ;
int __init i2o_pci_init(void)
;
void __exit i2o_pci_exit(void)
;
MODULE_DEVICE_TABLE(pci, i2o_pci_ids);
