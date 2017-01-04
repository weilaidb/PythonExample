#define	DRV_NAME	"pata_atp867x"
#define	DRV_VERSION	"0.7.5"
enum ;
#define ATP867X_IOBASE(ap)		((ap)->host->iomap[0])
#define ATP867X_SYS_INFO(ap)		(0x3F + ATP867X_IOBASE(ap))
#define ATP867X_IO_PORTBASE(ap, port)	(0x00 + ATP867X_IOBASE(ap) + \
(port) * ATP867X_IO_CHANNEL_OFFSET)
#define ATP867X_IO_DMABASE(ap, port)	(0x40 + \
ATP867X_IO_PORTBASE((ap), (port)))
#define ATP867X_IO_STATUS(ap, port)	(0x07 + \
ATP867X_IO_PORTBASE((ap), (port)))
#define ATP867X_IO_ALTSTATUS(ap, port)	(0x0E + \
ATP867X_IO_PORTBASE((ap), (port)))
#define ATP867X_IO_MSTRPIOSPD(ap, port)	(0x08 + \
ATP867X_IO_DMABASE((ap), (port)))
#define ATP867X_IO_SLAVPIOSPD(ap, port)	(0x09 + \
ATP867X_IO_DMABASE((ap), (port)))
#define ATP867X_IO_8BPIOSPD(ap, port)	(0x0A + \
ATP867X_IO_DMABASE((ap), (port)))
#define ATP867X_IO_DMAMODE(ap, port)	(0x0B + \
ATP867X_IO_DMABASE((ap), (port)))
#define ATP867X_IO_PORTSPD(ap, port)	(0x4A + \
ATP867X_IO_PORTBASE((ap), (port)))
#define ATP867X_IO_PREREAD(ap, port)	(0x4C + \
ATP867X_IO_PORTBASE((ap), (port)))
struct atp867x_priv ;
static void atp867x_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static int atp867x_get_active_clocks_shifted(struct ata_port *ap,
unsigned int clk)
static int atp867x_get_recover_clocks_shifted(unsigned int clk)
static void atp867x_set_piomode(struct ata_port *ap, struct ata_device *adev)
static int atp867x_cable_override(struct pci_dev *pdev)
static int atp867x_cable_detect(struct ata_port *ap)
static struct scsi_host_template atp867x_sht = ;
static struct ata_port_operations atp867x_ops = ;
static void atp867x_check_res(struct pci_dev *pdev)
static void atp867x_check_ports(struct ata_port *ap, int port)
static int atp867x_set_priv(struct ata_port *ap)
static void atp867x_fixup(struct ata_host *host)
static int atp867x_ata_pci_sff_init_host(struct ata_host *host)
static int atp867x_init_one(struct pci_dev *pdev,
const struct pci_device_id *id)
static int atp867x_reinit_one(struct pci_dev *pdev)
static struct pci_device_id atp867x_pci_tbl[] = ;
static struct pci_driver atp867x_driver = ;
static int __init atp867x_init(void)
static void __exit atp867x_exit(void)
MODULE_AUTHOR("John(Jung-Ik) Lee, Google Inc.");
MODULE_DESCRIPTION("low level driver for Artop/Acard 867x ATA controller");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, atp867x_pci_tbl);
MODULE_VERSION(DRV_VERSION);
module_init(atp867x_init);
module_exit(atp867x_exit);
