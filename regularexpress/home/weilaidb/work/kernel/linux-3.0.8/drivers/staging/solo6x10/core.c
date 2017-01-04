MODULE_DESCRIPTION("Softlogic 6x10 MP4/H.264 Encoder/Decoder V4L2/ALSA Driver");
MODULE_AUTHOR("Ben Collins <bcollins@bluecherry.net>");
MODULE_VERSION(SOLO6X10_VERSION);
MODULE_LICENSE("GPL");
void solo_irq_on(struct solo_dev *solo_dev, u32 mask)
void solo_irq_off(struct solo_dev *solo_dev, u32 mask)
static irqreturn_t solo_isr(int irq, void *data)
static void free_solo_dev(struct solo_dev *solo_dev)
static int __devinit solo_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit solo_pci_remove(struct pci_dev *pdev)
static struct pci_device_id solo_id_table[] = ;
MODULE_DEVICE_TABLE(pci, solo_id_table);
static struct pci_driver solo_pci_driver = ;
static int __init solo_module_init(void)
static void __exit solo_module_exit(void)
module_init(solo_module_init);
module_exit(solo_module_exit);
