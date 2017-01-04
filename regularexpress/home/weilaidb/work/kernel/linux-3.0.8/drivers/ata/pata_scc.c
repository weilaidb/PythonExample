#define DRV_NAME		"pata_scc"
#define DRV_VERSION		"0.3"
#define PCI_DEVICE_ID_TOSHIBA_SCC_ATA		0x01b4
#define SCC_CTRL_BAR		0
#define SCC_BMID_BAR		1
#define SCC_CTL_PIOSHT		0x000
#define SCC_CTL_PIOCT		0x004
#define SCC_CTL_MDMACT		0x008
#define SCC_CTL_MCRCST		0x00C
#define SCC_CTL_SDMACT		0x010
#define SCC_CTL_SCRCST		0x014
#define SCC_CTL_UDENVT		0x018
#define SCC_CTL_TDVHSEL 	0x020
#define SCC_CTL_MODEREG 	0x024
#define SCC_CTL_ECMODE		0xF00
#define SCC_CTL_MAEA0		0xF50
#define SCC_CTL_MAEC0		0xF54
#define SCC_CTL_CCKCTRL 	0xFF0
#define SCC_DMA_CMD		0x000
#define SCC_DMA_STATUS		0x004
#define SCC_DMA_TABLE_OFS	0x008
#define SCC_DMA_INTMASK 	0x010
#define SCC_DMA_INTST		0x014
#define SCC_DMA_PTERADD 	0x018
#define SCC_REG_CMD_ADDR	0x020
#define SCC_REG_DATA		0x000
#define SCC_REG_ERR		0x004
#define SCC_REG_FEATURE 	0x004
#define SCC_REG_NSECT		0x008
#define SCC_REG_LBAL		0x00C
#define SCC_REG_LBAM		0x010
#define SCC_REG_LBAH		0x014
#define SCC_REG_DEVICE		0x018
#define SCC_REG_STATUS		0x01C
#define SCC_REG_CMD		0x01C
#define SCC_REG_ALTSTATUS	0x020
#define TDVHSEL_MASTER		0x00000001
#define TDVHSEL_SLAVE		0x00000004
#define MODE_JCUSFEN		0x00000080
#define ECMODE_VALUE		0x01
#define CCKCTRL_ATARESET	0x00040000
#define CCKCTRL_BUFCNT		0x00020000
#define CCKCTRL_CRST		0x00010000
#define CCKCTRL_OCLKEN		0x00000100
#define CCKCTRL_ATACLKOEN	0x00000002
#define CCKCTRL_LCLKEN		0x00000001
#define QCHCD_IOS_SS		0x00000001
#define QCHSD_STPDIAG		0x00020000
#define INTMASK_MSK		0xD1000012
#define INTSTS_SERROR		0x80000000
#define INTSTS_PRERR		0x40000000
#define INTSTS_RERR		0x10000000
#define INTSTS_ICERR		0x01000000
#define INTSTS_BMSINT		0x00000010
#define INTSTS_BMHE		0x00000008
#define INTSTS_IOIRQS		0x00000004
#define INTSTS_INTRQ		0x00000002
#define INTSTS_ACTEINT		0x00000001
static const unsigned long JCHSTtbl[2][7] = ;
static const unsigned long JCHHTtbl[2][7] = ;
static const unsigned long JCHCTtbl[2][7] = ;
static const unsigned long JCHDCTxtbl[2][7] = ;
static const unsigned long JCSTWTxtbl[2][7] = ;
static const unsigned long JCTSStbl[2][7] = ;
static const unsigned long JCENVTtbl[2][7] = ;
static const unsigned long JCACTSELtbl[2][7] = ;
static const struct pci_device_id scc_pci_tbl[] = ;
static void scc_set_piomode (struct ata_port *ap, struct ata_device *adev)
static void scc_set_dmamode (struct ata_port *ap, struct ata_device *adev)
unsigned long scc_mode_filter(struct ata_device *adev, unsigned long mask)
static void scc_tf_load (struct ata_port *ap, const struct ata_taskfile *tf)
static u8 scc_check_status (struct ata_port *ap)
static void scc_tf_read (struct ata_port *ap, struct ata_taskfile *tf)
static void scc_exec_command (struct ata_port *ap,
const struct ata_taskfile *tf)
static u8 scc_check_altstatus (struct ata_port *ap)
static void scc_dev_select (struct ata_port *ap, unsigned int device)
static void scc_set_devctl(struct ata_port *ap, u8 ctl)
static void scc_bmdma_setup (struct ata_queued_cmd *qc)
static void scc_bmdma_start (struct ata_queued_cmd *qc)
static unsigned int scc_devchk (struct ata_port *ap,
unsigned int device)
static int scc_wait_after_reset(struct ata_link *link, unsigned int devmask,
unsigned long deadline)
static unsigned int scc_bus_softreset(struct ata_port *ap, unsigned int devmask,
unsigned long deadline)
static int scc_softreset(struct ata_link *link, unsigned int *classes,
unsigned long deadline)
static void scc_bmdma_stop (struct ata_queued_cmd *qc)
static u8 scc_bmdma_status (struct ata_port *ap)
static unsigned int scc_data_xfer (struct ata_device *dev, unsigned char *buf,
unsigned int buflen, int rw)
static int scc_pata_prereset(struct ata_link *link, unsigned long deadline)
static void scc_postreset(struct ata_link *link, unsigned int *classes)
static void scc_irq_clear (struct ata_port *ap)
static int scc_port_start (struct ata_port *ap)
static void scc_port_stop (struct ata_port *ap)
static struct scsi_host_template scc_sht = ;
static struct ata_port_operations scc_pata_ops = ;
static struct ata_port_info scc_port_info[] = ;
static int scc_reset_controller(struct ata_host *host)
static void scc_setup_ports (struct ata_ioports *ioaddr, void __iomem *base)
static int scc_host_init(struct ata_host *host)
static int scc_init_one (struct pci_dev *pdev, const struct pci_device_id *ent)
static struct pci_driver scc_pci_driver = ;
static int __init scc_init (void)
static void __exit scc_exit (void)
module_init(scc_init);
module_exit(scc_exit);
MODULE_AUTHOR("Toshiba corp");
MODULE_DESCRIPTION("SCSI low-level driver for Toshiba SCC PATA controller");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, scc_pci_tbl);
MODULE_VERSION(DRV_VERSION);
