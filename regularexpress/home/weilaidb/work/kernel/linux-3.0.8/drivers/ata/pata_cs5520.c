#define DRV_NAME	"pata_cs5520"
#define DRV_VERSION	"0.6.6"
struct pio_clocks
;
static const struct pio_clocks cs5520_pio_clocks[]=;
static void cs5520_set_timings(struct ata_port *ap, struct ata_device *adev, int pio)
static void cs5520_set_piomode(struct ata_port *ap, struct ata_device *adev)
static struct scsi_host_template cs5520_sht = ;
static struct ata_port_operations cs5520_port_ops = ;
static int __devinit cs5520_init_one(struct pci_dev *pdev, const struct pci_device_id *id)
static int cs5520_reinit_one(struct pci_dev *pdev)
static int cs5520_pci_device_suspend(struct pci_dev *pdev, pm_message_t mesg)
static const struct pci_device_id pata_cs5520[] = ;
static struct pci_driver cs5520_pci_driver = ;
static int __init cs5520_init(void)
static void __exit cs5520_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for Cyrix CS5510/5520");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, pata_cs5520);
MODULE_VERSION(DRV_VERSION);
module_init(cs5520_init);
module_exit(cs5520_exit);
