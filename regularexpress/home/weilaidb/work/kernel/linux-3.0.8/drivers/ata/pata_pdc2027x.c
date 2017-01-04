#define DRV_NAME	"pata_pdc2027x"
#define DRV_VERSION	"1.0"
#undef PDC_DEBUG
#define PDPRINTK(fmt, args...) printk(KERN_ERR "%s: " fmt, __func__, ## args)
#define PDPRINTK(fmt, args...)
enum ;
static int pdc2027x_init_one(struct pci_dev *pdev, const struct pci_device_id *ent);
static int pdc2027x_prereset(struct ata_link *link, unsigned long deadline);
static void pdc2027x_set_piomode(struct ata_port *ap, struct ata_device *adev);
static void pdc2027x_set_dmamode(struct ata_port *ap, struct ata_device *adev);
static int pdc2027x_check_atapi_dma(struct ata_queued_cmd *qc);
static unsigned long pdc2027x_mode_filter(struct ata_device *adev, unsigned long mask);
static int pdc2027x_cable_detect(struct ata_port *ap);
static int pdc2027x_set_mode(struct ata_link *link, struct ata_device **r_failed);
static struct pdc2027x_pio_timing  pdc2027x_pio_timing_tbl [] = ;
static struct pdc2027x_mdma_timing  pdc2027x_mdma_timing_tbl [] = ;
static struct pdc2027x_udma_timing  pdc2027x_udma_timing_tbl [] = ;
static const struct pci_device_id pdc2027x_pci_tbl[] = ;
static struct pci_driver pdc2027x_pci_driver = ;
static struct scsi_host_template pdc2027x_sht = ;
static struct ata_port_operations pdc2027x_pata100_ops = ;
static struct ata_port_operations pdc2027x_pata133_ops = ;
static struct ata_port_info pdc2027x_port_info[] = ;
MODULE_AUTHOR("Andre Hedrick, Frank Tiernan, Albert Lee");
MODULE_DESCRIPTION("libata driver module for Promise PDC20268 to PDC20277");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
MODULE_DEVICE_TABLE(pci, pdc2027x_pci_tbl);
static inline void __iomem *port_mmio(struct ata_port *ap, unsigned int offset)
static inline void __iomem *dev_mmio(struct ata_port *ap, struct ata_device *adev, unsigned int offset)
static int pdc2027x_cable_detect(struct ata_port *ap)
static inline int pdc2027x_port_enabled(struct ata_port *ap)
static int pdc2027x_prereset(struct ata_link *link, unsigned long deadline)
static unsigned long pdc2027x_mode_filter(struct ata_device *adev, unsigned long mask)
static void pdc2027x_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void pdc2027x_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static int pdc2027x_set_mode(struct ata_link *link, struct ata_device **r_failed)
static int pdc2027x_check_atapi_dma(struct ata_queued_cmd *qc)
static long pdc_read_counter(struct ata_host *host)
static void pdc_adjust_pll(struct ata_host *host, long pll_clock, unsigned int board_idx)
static long pdc_detect_pll_input_clock(struct ata_host *host)
static int pdc_hardware_init(struct ata_host *host, unsigned int board_idx)
static void pdc_ata_setup_port(struct ata_ioports *port, void __iomem *base)
static int __devinit pdc2027x_init_one(struct pci_dev *pdev, const struct pci_device_id *ent)
static int __init pdc2027x_init(void)
static void __exit pdc2027x_exit(void)
module_init(pdc2027x_init);
module_exit(pdc2027x_exit);
