#define DRV_NAME	"pata_icside"
#define ICS_IDENT_OFFSET		0x2280
#define ICS_ARCIN_V5_INTRSTAT		0x0000
#define ICS_ARCIN_V5_INTROFFSET		0x0004
#define ICS_ARCIN_V6_INTROFFSET_1	0x2200
#define ICS_ARCIN_V6_INTRSTAT_1		0x2290
#define ICS_ARCIN_V6_INTROFFSET_2	0x3200
#define ICS_ARCIN_V6_INTRSTAT_2		0x3290
struct portinfo ;
static const struct portinfo pata_icside_portinfo_v5 = ;
static const struct portinfo pata_icside_portinfo_v6_1 = ;
static const struct portinfo pata_icside_portinfo_v6_2 = ;
struct pata_icside_state ;
struct pata_icside_info ;
#define ICS_TYPE_A3IN	0
#define ICS_TYPE_A3USER	1
#define ICS_TYPE_V6	3
#define ICS_TYPE_V5	15
#define ICS_TYPE_NOTYPE	((unsigned int)-1)
static void pata_icside_irqenable_arcin_v5 (struct expansion_card *ec, int irqnr)
static void pata_icside_irqdisable_arcin_v5 (struct expansion_card *ec, int irqnr)
static const expansioncard_ops_t pata_icside_ops_arcin_v5 = ;
static void pata_icside_irqenable_arcin_v6 (struct expansion_card *ec, int irqnr)
static void pata_icside_irqdisable_arcin_v6 (struct expansion_card *ec, int irqnr)
static int pata_icside_irqpending_arcin_v6(struct expansion_card *ec)
static const expansioncard_ops_t pata_icside_ops_arcin_v6 = ;
static void pata_icside_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static void pata_icside_bmdma_setup(struct ata_queued_cmd *qc)
static void pata_icside_bmdma_start(struct ata_queued_cmd *qc)
static void pata_icside_bmdma_stop(struct ata_queued_cmd *qc)
static u8 pata_icside_bmdma_status(struct ata_port *ap)
static int icside_dma_init(struct pata_icside_info *info)
static struct scsi_host_template pata_icside_sht = ;
static void pata_icside_postreset(struct ata_link *link, unsigned int *classes)
static struct ata_port_operations pata_icside_port_ops = ;
static void __devinit
pata_icside_setup_ioaddr(struct ata_port *ap, void __iomem *base,
struct pata_icside_info *info,
const struct portinfo *port)
static int __devinit pata_icside_register_v5(struct pata_icside_info *info)
static int __devinit pata_icside_register_v6(struct pata_icside_info *info)
static int __devinit pata_icside_add_ports(struct pata_icside_info *info)
static int __devinit
pata_icside_probe(struct expansion_card *ec, const struct ecard_id *id)
static void pata_icside_shutdown(struct expansion_card *ec)
static void __devexit pata_icside_remove(struct expansion_card *ec)
static const struct ecard_id pata_icside_ids[] = ;
static struct ecard_driver pata_icside_driver = ;
static int __init pata_icside_init(void)
static void __exit pata_icside_exit(void)
MODULE_AUTHOR("Russell King <rmk@arm.linux.org.uk>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("ICS PATA driver");
module_init(pata_icside_init);
module_exit(pata_icside_exit);
